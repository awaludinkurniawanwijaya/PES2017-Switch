#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83036DD0"))) PPC_WEAK_FUNC(sub_83036DD0);
PPC_FUNC_IMPL(__imp__sub_83036DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83036de0
	if (cr6.lt) goto loc_83036DE0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83036DE0:
	// b 0x83036d48
	sub_83036D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83036DE4"))) PPC_WEAK_FUNC(sub_83036DE4);
PPC_FUNC_IMPL(__imp__sub_83036DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83036DE8"))) PPC_WEAK_FUNC(sub_83036DE8);
PPC_FUNC_IMPL(__imp__sub_83036DE8) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83036E08;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83036e58
	if (!cr6.eq) goto loc_83036E58;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-16872
	ctx.r11.s64 = ctx.r11.s64 + -16872;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x837b0c10
	ctx.lr = 0x83036E24;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036E30;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83036e50
	if (cr6.lt) goto loc_83036E50;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83036E50;
	sub_825952B8(ctx, base);
loc_83036E50:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83036ea8
	goto loc_83036EA8;
loc_83036E58:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x83036ea4
	if (cr6.gt) goto loc_83036EA4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83036e8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83036E8C;
	// bdzf 4*cr6+eq,0x83036ef8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83036EF8;
	// bdzf 4*cr6+eq,0x83036f30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83036F30;
	// bdzf 4*cr6+eq,0x83036f68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83036F68;
	// bdzf 4*cr6+eq,0x83036fa0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83036FA0;
	// bne cr6,0x83036fd8
	if (!cr6.eq) goto loc_83036FD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83036E8C:
	// bl 0x82d8a820
	ctx.lr = 0x83036E90;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83036ec0
	if (cr6.eq) goto loc_83036EC0;
	// li r11,3
	ctx.r11.s64 = 3;
loc_83036EA0:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83036EA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83036EA8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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
loc_83036EC0:
	// bl 0x82d8a900
	ctx.lr = 0x83036EC4;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83036ed8
	if (cr6.eq) goto loc_83036ED8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83036ea0
	goto loc_83036EA0;
loc_83036ED8:
	// bl 0x82d8a7c8
	ctx.lr = 0x83036EDC;
	sub_82D8A7C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83036ea4
	goto loc_83036EA4;
loc_83036EF8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-16872
	ctx.r11.s64 = ctx.r11.s64 + -16872;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x83036F0C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036F18;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83036F20;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83036ea8
	goto loc_83036EA8;
loc_83036F30:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-16872
	ctx.r11.s64 = ctx.r11.s64 + -16872;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x837b0c10
	ctx.lr = 0x83036F44;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036F50;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83036F58;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83036ea8
	goto loc_83036EA8;
loc_83036F68:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-16872
	ctx.r11.s64 = ctx.r11.s64 + -16872;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83036F7C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036F88;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83036F90;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83036ea8
	goto loc_83036EA8;
loc_83036FA0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-16872
	ctx.r11.s64 = ctx.r11.s64 + -16872;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83036FB4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036FC0;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83036FC8;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83036ea8
	goto loc_83036EA8;
loc_83036FD8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-16872
	ctx.r4.s64 = ctx.r11.s64 + -16872;
	// bl 0x837b0c10
	ctx.lr = 0x83036FE8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83036FF4;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x83036FFC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83036ea8
	goto loc_83036EA8;
}

__attribute__((alias("__imp__sub_8303700C"))) PPC_WEAK_FUNC(sub_8303700C);
PPC_FUNC_IMPL(__imp__sub_8303700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83037010"))) PPC_WEAK_FUNC(sub_83037010);
PPC_FUNC_IMPL(__imp__sub_83037010) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83037040;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303707c
	if (cr6.eq) goto loc_8303707C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83037054;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16304
	ctx.r9.s64 = ctx.r11.s64 + -16304;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r7.u8);
	// b 0x83037080
	goto loc_83037080;
loc_8303707C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83037080:
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

__attribute__((alias("__imp__sub_83037098"))) PPC_WEAK_FUNC(sub_83037098);
PPC_FUNC_IMPL(__imp__sub_83037098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830370a8
	if (cr6.lt) goto loc_830370A8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830370A8:
	// b 0x83037010
	sub_83037010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830370AC"))) PPC_WEAK_FUNC(sub_830370AC);
PPC_FUNC_IMPL(__imp__sub_830370AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830370B0"))) PPC_WEAK_FUNC(sub_830370B0);
PPC_FUNC_IMPL(__imp__sub_830370B0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d8ad38
	ctx.lr = 0x830370D0;
	sub_82D8AD38(ctx, base);
	// bl 0x82f00728
	ctx.lr = 0x830370D4;
	sub_82F00728(ctx, base);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// ld r11,-22068(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -22068);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r7,-16396
	ctx.r4.s64 = ctx.r7.s64 + -16396;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,92(r9)
	PPC_STORE_U64(ctx.r9.u32 + 92, ctx.r11.u64);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8303710C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83037118;
	sub_82E88020(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x83037138
	if (cr6.lt) goto loc_83037138;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83037138;
	sub_825952B8(ctx, base);
loc_83037138:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8303715C"))) PPC_WEAK_FUNC(sub_8303715C);
PPC_FUNC_IMPL(__imp__sub_8303715C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83037160"))) PPC_WEAK_FUNC(sub_83037160);
PPC_FUNC_IMPL(__imp__sub_83037160) {
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
	// bl 0x82e6f960
	ctx.lr = 0x83037170;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83037188
	if (!cr6.eq) goto loc_83037188;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83037188:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x83037190;
	sub_82E6FA08(ctx, base);
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

__attribute__((alias("__imp__sub_830371AC"))) PPC_WEAK_FUNC(sub_830371AC);
PPC_FUNC_IMPL(__imp__sub_830371AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830371B0"))) PPC_WEAK_FUNC(sub_830371B0);
PPC_FUNC_IMPL(__imp__sub_830371B0) {
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
	// bl 0x83061e98
	ctx.lr = 0x830371CC;
	sub_83061E98(ctx, base);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83062130
	ctx.lr = 0x830371D8;
	sub_83062130(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// addi r7,r10,-15544
	ctx.r7.s64 = ctx.r10.s64 + -15544;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,-15548
	ctx.r6.s64 = ctx.r9.s64 + -15548;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r5,r8,-15552
	ctx.r5.s64 = ctx.r8.s64 + -15552;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82da4040
	ctx.lr = 0x83037234;
	sub_82DA4040(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r3.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8303724c
	if (!cr6.eq) goto loc_8303724C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83062230
	ctx.lr = 0x8303724C;
	sub_83062230(ctx, base);
loc_8303724C:
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

__attribute__((alias("__imp__sub_83037268"))) PPC_WEAK_FUNC(sub_83037268);
PPC_FUNC_IMPL(__imp__sub_83037268) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r8,r11,-15544
	ctx.r8.s64 = ctx.r11.s64 + -15544;
	// addi r7,r10,-15548
	ctx.r7.s64 = ctx.r10.s64 + -15548;
	// addi r6,r9,-15552
	ctx.r6.s64 = ctx.r9.s64 + -15552;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// bl 0x83062070
	ctx.lr = 0x830372A8;
	sub_83062070(ctx, base);
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// addi r3,r5,-19088
	ctx.r3.s64 = ctx.r5.s64 + -19088;
	// addi r11,r4,-17088
	ctx.r11.s64 = ctx.r4.s64 + -17088;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82f42278
	ctx.lr = 0x830372C8;
	sub_82F42278(ctx, base);
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

__attribute__((alias("__imp__sub_830372DC"))) PPC_WEAK_FUNC(sub_830372DC);
PPC_FUNC_IMPL(__imp__sub_830372DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830372E0"))) PPC_WEAK_FUNC(sub_830372E0);
PPC_FUNC_IMPL(__imp__sub_830372E0) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x83037334
	if (!cr6.eq) goto loc_83037334;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83037334
	if (!cr6.eq) goto loc_83037334;
	// bl 0x82d17d90
	ctx.lr = 0x83037320;
	sub_82D17D90(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,17
	ctx.r9.s64 = ctx.r11.s64 + 17;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
loc_83037334:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x83037340;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_83037358"))) PPC_WEAK_FUNC(sub_83037358);
PPC_FUNC_IMPL(__imp__sub_83037358) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-96
	ctx.r3.s64 = ctx.r3.s64 + -96;
	// b 0x83037360
	sub_83037360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83037360"))) PPC_WEAK_FUNC(sub_83037360);
PPC_FUNC_IMPL(__imp__sub_83037360) {
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
	// bl 0x83037268
	ctx.lr = 0x83037380;
	sub_83037268(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83037398
	if (cr6.eq) goto loc_83037398;
	// bl 0x82416268
	ctx.lr = 0x83037394;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83037398:
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

__attribute__((alias("__imp__sub_830373B0"))) PPC_WEAK_FUNC(sub_830373B0);
PPC_FUNC_IMPL(__imp__sub_830373B0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830373d4
	if (cr6.lt) goto loc_830373D4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x830373d8
	goto loc_830373D8;
loc_830373D4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830373D8:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830373F0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037408
	if (cr6.eq) goto loc_83037408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830371b0
	ctx.lr = 0x83037400;
	sub_830371B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303740c
	if (!cr6.eq) goto loc_8303740C;
loc_83037408:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303740C:
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

__attribute__((alias("__imp__sub_83037420"))) PPC_WEAK_FUNC(sub_83037420);
PPC_FUNC_IMPL(__imp__sub_83037420) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8303744C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x83037488
	if (cr6.eq) goto loc_83037488;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r8,r9,-15436
	ctx.r8.s64 = ctx.r9.s64 + -15436;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r10,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r10.u8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x8303748c
	goto loc_8303748C;
loc_83037488:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8303748C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x830374A4;
	sub_83878E28(ctx, base);
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

__attribute__((alias("__imp__sub_830374BC"))) PPC_WEAK_FUNC(sub_830374BC);
PPC_FUNC_IMPL(__imp__sub_830374BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830374C0"))) PPC_WEAK_FUNC(sub_830374C0);
PPC_FUNC_IMPL(__imp__sub_830374C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830374C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x83037648
	if (cr6.gt) goto loc_83037648;
	// li r29,3
	ctx.r29.s64 = 3;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83037504
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83037504;
	// bdzf 4*cr6+eq,0x8303759c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303759C;
	// bdzf 4*cr6+eq,0x83037624
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83037624;
	// bne cr6,0x8303763c
	if (!cr6.eq) goto loc_8303763C;
	// bl 0x82d47978
	ctx.lr = 0x830374FC;
	sub_82D47978(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83037504:
	// bl 0x82d8bea0
	ctx.lr = 0x83037508;
	sub_82D8BEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8303751c
	if (!cr6.eq) goto loc_8303751C;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// b 0x83037594
	goto loc_83037594;
loc_8303751C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83037160
	ctx.lr = 0x83037524;
	sub_83037160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83037538
	if (!cr6.eq) goto loc_83037538;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// b 0x83037594
	goto loc_83037594;
loc_83037538:
	// bl 0x82dcea28
	ctx.lr = 0x8303753C;
	sub_82DCEA28(ctx, base);
	// bl 0x82daf868
	ctx.lr = 0x83037540;
	sub_82DAF868(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x83037544;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037554
	if (cr6.eq) goto loc_83037554;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82dfa580
	ctx.lr = 0x83037554;
	sub_82DFA580(ctx, base);
loc_83037554:
	// bl 0x831021a0
	ctx.lr = 0x83037558;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x83037560;
	sub_82DA45F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037594
	if (cr6.eq) goto loc_83037594;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15876
	ctx.r4.s64 = ctx.r11.s64 + -15876;
	// bl 0x837b0c10
	ctx.lr = 0x8303757C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83037588;
	sub_82D894E0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83037594;
	sub_8387E8E0(ctx, base);
loc_83037594:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8303759C:
	// bl 0x82e6f960
	ctx.lr = 0x830375A0;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830375b0
	if (!cr6.eq) goto loc_830375B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830375c4
	goto loc_830375C4;
loc_830375B0:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x830375B8;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_830375C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830375fc
	if (cr6.eq) goto loc_830375FC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830375fc
	if (cr6.eq) goto loc_830375FC;
	// bl 0x82daf8c0
	ctx.lr = 0x830375E0;
	sub_82DAF8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83037648
	if (cr6.eq) goto loc_83037648;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82ddcec8
	ctx.lr = 0x830375F4;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83037648
	if (cr6.eq) goto loc_83037648;
loc_830375FC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037620
	if (cr6.eq) goto loc_83037620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83037618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_83037620:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_83037624:
	// bl 0x82d8ad38
	ctx.lr = 0x83037628;
	sub_82D8AD38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83037648
	if (cr6.eq) goto loc_83037648;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8303763C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83037648:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83037654"))) PPC_WEAK_FUNC(sub_83037654);
PPC_FUNC_IMPL(__imp__sub_83037654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83037658"))) PPC_WEAK_FUNC(sub_83037658);
PPC_FUNC_IMPL(__imp__sub_83037658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83037660;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8303766C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303786c
	if (cr6.eq) goto loc_8303786C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x8303767C;
	sub_825832D8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r26,2188(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2188);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r4,r3,2192
	ctx.r4.s64 = ctx.r3.s64 + 2192;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x830376B0;
	sub_8259CB28(ctx, base);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,2220
	ctx.r4.s64 = ctx.r30.s64 + 2220;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x830376D0;
	sub_8259CB28(ctx, base);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r27,96
	ctx.r3.s64 = ctx.r27.s64 + 96;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x83062308
	ctx.lr = 0x830376FC;
	sub_83062308(ctx, base);
	// addi r4,r30,2252
	ctx.r4.s64 = ctx.r30.s64 + 2252;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82aa00e0
	ctx.lr = 0x83037708;
	sub_82AA00E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82c76bb0
	ctx.lr = 0x83037710;
	sub_82C76BB0(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r6,256(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83037724
	if (!cr6.lt) goto loc_83037724;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
loc_83037724:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,272(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r5,336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x827a8810
	ctx.lr = 0x83037738;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830377c4
	if (!cr6.eq) goto loc_830377C4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83037754
	if (!cr6.lt) goto loc_83037754;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_83037754:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x827a8810
	ctx.lr = 0x83037768;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830377c4
	if (!cr6.eq) goto loc_830377C4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82aa1508
	ctx.lr = 0x8303777C;
	sub_82AA1508(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830377c4
	if (cr6.eq) goto loc_830377C4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8378e240
	ctx.lr = 0x83037790;
	sub_8378E240(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8378e240
	ctx.lr = 0x83037798;
	sub_8378E240(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830377A0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830377A8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x830377B0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x830377B8;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830377C4:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8378e240
	ctx.lr = 0x830377CC;
	sub_8378E240(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8378e240
	ctx.lr = 0x830377D4;
	sub_8378E240(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830377f4
	if (cr6.lt) goto loc_830377F4;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x830377F4;
	sub_825952B8(ctx, base);
loc_830377F4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x8303781c
	if (cr6.lt) goto loc_8303781C;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x8303781C;
	sub_825952B8(ctx, base);
loc_8303781C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// blt cr6,0x83037844
	if (cr6.lt) goto loc_83037844;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x83037844;
	sub_825952B8(ctx, base);
loc_83037844:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x8303786c
	if (cr6.lt) goto loc_8303786C;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x8303786C;
	sub_825952B8(ctx, base);
loc_8303786C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83037878"))) PPC_WEAK_FUNC(sub_83037878);
PPC_FUNC_IMPL(__imp__sub_83037878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83037880;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8303788C;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037968
	if (cr6.eq) goto loc_83037968;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x830378A0;
	sub_825832D8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830378B0;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,2252
	ctx.r4.s64 = ctx.r31.s64 + 2252;
	// lwz r27,2188(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82aa00e0
	ctx.lr = 0x830378C4;
	sub_82AA00E0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x83062308
	ctx.lr = 0x830378F8;
	sub_83062308(ctx, base);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d97be0
	ctx.lr = 0x8303790C;
	sub_82D97BE0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303792c
	if (cr6.lt) goto loc_8303792C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8303792C;
	sub_825952B8(ctx, base);
loc_8303792C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x83037954
	if (cr6.lt) goto loc_83037954;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83037954;
	sub_825952B8(ctx, base);
loc_83037954:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x8378e240
	ctx.lr = 0x83037968;
	sub_8378E240(ctx, base);
loc_83037968:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83037970"))) PPC_WEAK_FUNC(sub_83037970);
PPC_FUNC_IMPL(__imp__sub_83037970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83037978;
	__savegprlr_28(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83037988;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830379e0
	if (!cr6.eq) goto loc_830379E0;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-15648
	ctx.r11.s64 = ctx.r11.s64 + -15648;
	// addi r4,r11,-208
	ctx.r4.s64 = ctx.r11.s64 + -208;
	// bl 0x837b0c10
	ctx.lr = 0x830379A8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830379B4;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830379d4
	if (cr6.lt) goto loc_830379D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830379D4;
	sub_825952B8(ctx, base);
loc_830379D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830379E0:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x83037a8c
	if (cr6.gt) goto loc_83037A8C;
	// lis r12,-31997
	ctx.r12.s64 = -2096955392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31236
	ctx.r12.s64 = ctx.r12.s64 + 31236;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83037A4C;
	case 1:
		goto loc_83037A54;
	case 2:
		goto loc_83037AB0;
	case 3:
		goto loc_83037B04;
	case 4:
		goto loc_83037B58;
	case 5:
		goto loc_83037BAC;
	case 6:
		goto loc_83037BF8;
	case 7:
		goto loc_83037C48;
	case 8:
		goto loc_83037C9C;
	case 9:
		goto loc_83037CF0;
	case 10:
		goto loc_83037D44;
	case 11:
		goto loc_83037D8C;
	case 12:
		goto loc_83037E78;
	case 13:
		goto loc_83037F08;
	case 14:
		goto loc_83037A8C;
	case 15:
		goto loc_8303800C;
	case 16:
		goto loc_83038024;
	case 17:
		goto loc_83038060;
	default:
		return;
	}
	// lwz r24,31308(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31308);
	// lwz r24,31316(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31316);
	// lwz r24,31408(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31408);
	// lwz r24,31492(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31492);
	// lwz r24,31576(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31576);
	// lwz r24,31660(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31660);
	// lwz r24,31736(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31736);
	// lwz r24,31816(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31816);
	// lwz r24,31900(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31900);
	// lwz r24,31984(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31984);
	// lwz r24,32068(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32068);
	// lwz r24,32140(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32140);
	// lwz r24,32376(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32376);
	// lwz r24,32520(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32520);
	// lwz r24,31372(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31372);
	// lwz r24,-32756(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32756);
	// lwz r24,-32732(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32732);
	// lwz r24,-32672(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32672);
loc_83037A4C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_83037A54:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82d9bda8
	ctx.lr = 0x83037A5C;
	sub_82D9BDA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8314d728
	ctx.lr = 0x83037A6C;
	sub_8314D728(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x83037A70;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x83037A78;
	sub_82DA45F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83037a98
	if (!cr6.eq) goto loc_83037A98;
loc_83037A84:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_83037A8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037A98:
	// bl 0x82e574e0
	ctx.lr = 0x83037A9C;
	sub_82E574E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x83037AA8;
	sub_83103100(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_83037AB0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-15648
	ctx.r11.s64 = ctx.r11.s64 + -15648;
	// addi r4,r11,-200
	ctx.r4.s64 = ctx.r11.s64 + -200;
	// bl 0x837b0c10
	ctx.lr = 0x83037AC4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83037AD0;
	sub_82D894E0(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x83037ADC;
	sub_8387E8E0(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037B04:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82ddcec8
	ctx.lr = 0x83037B0C;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83037a8c
	if (cr6.eq) goto loc_83037A8C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037b3c
	if (cr6.eq) goto loc_83037B3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83037B34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
loc_83037B3C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83037a84
	if (!cr6.eq) goto loc_83037A84;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037B58:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-15648
	ctx.r11.s64 = ctx.r11.s64 + -15648;
	// addi r4,r11,-176
	ctx.r4.s64 = ctx.r11.s64 + -176;
	// bl 0x837b0c10
	ctx.lr = 0x83037B6C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83037B78;
	sub_82D894E0(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83037B84;
	sub_8387E8E0(ctx, base);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037BAC:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82ddcec8
	ctx.lr = 0x83037BB4;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83037a8c
	if (cr6.eq) goto loc_83037A8C;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037be4
	if (cr6.eq) goto loc_83037BE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83037BDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
loc_83037BE4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// beq cr6,0x83037bf4
	if (cr6.eq) goto loc_83037BF4;
	// li r11,15
	ctx.r11.s64 = 15;
loc_83037BF4:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_83037BF8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-15648
	ctx.r11.s64 = ctx.r11.s64 + -15648;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// bl 0x837b0c10
	ctx.lr = 0x83037C0C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83037C18;
	sub_82D894E0(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x83037C24;
	sub_8387E8E0(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037C48:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82ddcec8
	ctx.lr = 0x83037C50;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83037a8c
	if (cr6.eq) goto loc_83037A8C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037c80
	if (cr6.eq) goto loc_83037C80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83037C78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
loc_83037C80:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83037a84
	if (!cr6.eq) goto loc_83037A84;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037C9C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-15648
	ctx.r11.s64 = ctx.r11.s64 + -15648;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// bl 0x837b0c10
	ctx.lr = 0x83037CB0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83037CBC;
	sub_82D894E0(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x83037CC8;
	sub_8387E8E0(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037CF0:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82ddcec8
	ctx.lr = 0x83037CF8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83037a8c
	if (cr6.eq) goto loc_83037A8C;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037d28
	if (cr6.eq) goto loc_83037D28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83037D20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
loc_83037D28:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83037a84
	if (!cr6.eq) goto loc_83037A84;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037D44:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83037D4C;
	sub_831F8200(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83037d78
	if (cr6.eq) goto loc_83037D78;
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83037d78
	if (cr6.eq) goto loc_83037D78;
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037D78:
	// li r11,13
	ctx.r11.s64 = 13;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037D8C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830620c8
	ctx.lr = 0x83037D94;
	sub_830620C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83037a8c
	if (cr6.eq) goto loc_83037A8C;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83037DA8;
	sub_831F8200(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83037dc8
	if (cr6.eq) goto loc_83037DC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83037658
	ctx.lr = 0x83037DBC;
	sub_83037658(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83037d78
	if (!cr6.eq) goto loc_83037D78;
loc_83037DC8:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x83037DD0;
	sub_825832D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83037DD8;
	sub_831156E8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,2188(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2188);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// clrlwi r4,r9,14
	ctx.r4.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x83037df4
	if (!cr6.gt) goto loc_83037DF4;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_83037DF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83037878
	ctx.lr = 0x83037DFC;
	sub_83037878(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r30,r11,-15648
	ctx.r30.s64 = ctx.r11.s64 + -15648;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// bl 0x837b0c10
	ctx.lr = 0x83037E10;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83037E1C;
	sub_82D894E0(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83037E28;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x83037E34;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83037E40;
	sub_82D894E0(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x83037E4C;
	sub_8387E8E0(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83037a84
	if (cr6.eq) goto loc_83037A84;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83037a84
	if (cr6.eq) goto loc_83037A84;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037E78:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82ddcec8
	ctx.lr = 0x83037E80;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82ddcec8
	ctx.lr = 0x83037E8C;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83037a8c
	if (cr6.eq) goto loc_83037A8C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83037a8c
	if (cr6.eq) goto loc_83037A8C;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83037eb0
	if (!cr6.eq) goto loc_83037EB0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r11,13
	ctx.r11.s64 = 13;
	// beq cr6,0x83037eb4
	if (cr6.eq) goto loc_83037EB4;
loc_83037EB0:
	// li r11,15
	ctx.r11.s64 = 15;
loc_83037EB4:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037edc
	if (cr6.eq) goto loc_83037EDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83037ED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_83037EDC:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037a8c
	if (cr6.eq) goto loc_83037A8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83037EF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037F08:
	// bl 0x82d897b0
	ctx.lr = 0x83037F0C;
	sub_82D897B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83037ff8
	if (cr6.eq) goto loc_83037FF8;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83037F20;
	sub_831F8200(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83037f40
	if (cr6.eq) goto loc_83037F40;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x83037F34;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83037ff8
	if (cr6.eq) goto loc_83037FF8;
loc_83037F40:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r30,r11,-15648
	ctx.r30.s64 = ctx.r11.s64 + -15648;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,-40
	ctx.r3.s64 = ctx.r30.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x83037F60;
	sub_82D2F6D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83037fd4
	if (cr6.eq) goto loc_83037FD4;
	// addi r4,r30,-493
	ctx.r4.s64 = ctx.r30.s64 + -493;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83037F78;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-462
	ctx.r4.s64 = ctx.r30.s64 + -462;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x83037F84;
	sub_837B0C10(ctx, base);
	// lis r4,511
	ctx.r4.s64 = 33488896;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,125
	ctx.r4.u64 = ctx.r4.u64 | 125;
	// bl 0x82d04220
	ctx.lr = 0x83037F94;
	sub_82D04220(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,426
	ctx.r4.u64 = ctx.r4.u64 | 426;
	// bl 0x82d04220
	ctx.lr = 0x83037FA4;
	sub_82D04220(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x83037FB8;
	sub_825A1DA8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83037FC4;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83037FCC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83037FD4;
	sub_8387E8E0(ctx, base);
loc_83037FD4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83037FE0;
	sub_83103100(ctx, base);
	// bl 0x82d89740
	ctx.lr = 0x83037FE4;
	sub_82D89740(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83037FF8:
	// li r11,17
	ctx.r11.s64 = 17;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8303800C:
	// bl 0x82d89740
	ctx.lr = 0x83038010;
	sub_82D89740(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83038024:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-15648
	ctx.r11.s64 = ctx.r11.s64 + -15648;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83038038;
	sub_837B0C10(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83038044;
	sub_82E88020(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x8303804C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83038060:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83038068;
	sub_831F8200(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830380cc
	if (!cr6.eq) goto loc_830380CC;
	// bl 0x82f00728
	ctx.lr = 0x8303807C;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038094
	if (cr6.eq) goto loc_83038094;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,21
	ctx.r10.s64 = 21;
	// ori r9,r11,19004
	ctx.r9.u64 = ctx.r11.u64 | 19004;
	// stwx r10,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u32);
loc_83038094:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-15648
	ctx.r11.s64 = ctx.r11.s64 + -15648;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830380A8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830380B4;
	sub_82E88020(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x830380BC;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r29,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r29.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830380CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x830380D4;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830380ec
	if (!cr6.eq) goto loc_830380EC;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x824ce1d8
	ctx.lr = 0x830380E8;
	sub_824CE1D8(ctx, base);
	// stb r29,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r29.u8);
loc_830380EC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,-15648
	ctx.r4.s64 = ctx.r11.s64 + -15648;
	// bl 0x837b0c10
	ctx.lr = 0x830380FC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83038108;
	sub_82E88020(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8387e8e0
	ctx.lr = 0x83038110;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r29,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r29.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83038120"))) PPC_WEAK_FUNC(sub_83038120);
PPC_FUNC_IMPL(__imp__sub_83038120) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83038150;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038198
	if (cr6.eq) goto loc_83038198;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83038164;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-14920
	ctx.r8.s64 = ctx.r10.s64 + -14920;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82d482c0
	ctx.lr = 0x83038190;
	sub_82D482C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8303819c
	goto loc_8303819C;
loc_83038198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303819C:
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

__attribute__((alias("__imp__sub_830381B4"))) PPC_WEAK_FUNC(sub_830381B4);
PPC_FUNC_IMPL(__imp__sub_830381B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830381B8"))) PPC_WEAK_FUNC(sub_830381B8);
PPC_FUNC_IMPL(__imp__sub_830381B8) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14920
	ctx.r9.s64 = ctx.r11.s64 + -14920;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d482c0
	ctx.lr = 0x830381F4;
	sub_82D482C0(ctx, base);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r7,-19088
	ctx.r5.s64 = ctx.r7.s64 + -19088;
	// addi r4,r6,-17088
	ctx.r4.s64 = ctx.r6.s64 + -17088;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// bl 0x82f42278
	ctx.lr = 0x83038214;
	sub_82F42278(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8303822c
	if (cr6.eq) goto loc_8303822C;
	// bl 0x82416268
	ctx.lr = 0x83038228;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303822C:
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

__attribute__((alias("__imp__sub_83038244"))) PPC_WEAK_FUNC(sub_83038244);
PPC_FUNC_IMPL(__imp__sub_83038244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83038248"))) PPC_WEAK_FUNC(sub_83038248);
PPC_FUNC_IMPL(__imp__sub_83038248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83038258
	if (cr6.lt) goto loc_83038258;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83038258:
	// b 0x83038120
	sub_83038120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303825C"))) PPC_WEAK_FUNC(sub_8303825C);
PPC_FUNC_IMPL(__imp__sub_8303825C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83038260"))) PPC_WEAK_FUNC(sub_83038260);
PPC_FUNC_IMPL(__imp__sub_83038260) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83038280;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830382d0
	if (!cr6.eq) goto loc_830382D0;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-15016
	ctx.r11.s64 = ctx.r11.s64 + -15016;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// bl 0x837b0c10
	ctx.lr = 0x8303829C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830382A8;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830382c8
	if (cr6.lt) goto loc_830382C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830382C8;
	sub_825952B8(ctx, base);
loc_830382C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83038300
	goto loc_83038300;
loc_830382D0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x830382fc
	if (cr6.gt) goto loc_830382FC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83038318
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83038318;
	// bdzf 4*cr6+eq,0x8303835c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303835C;
	// bdzf 4*cr6+eq,0x830383ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830383AC;
	// bne cr6,0x8303846c
	if (!cr6.eq) goto loc_8303846C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830382FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83038300:
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
loc_83038318:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-15016
	ctx.r11.s64 = ctx.r11.s64 + -15016;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// bl 0x837b0c10
	ctx.lr = 0x8303832C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83038338;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83038344;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x830382fc
	goto loc_830382FC;
loc_8303835C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83038364;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830382fc
	if (cr6.eq) goto loc_830382FC;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038394
	if (cr6.eq) goto loc_83038394;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303838C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83038394:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x830382fc
	goto loc_830382FC;
loc_830383AC:
	// bl 0x82d8a820
	ctx.lr = 0x830383B0;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830383f4
	if (cr6.eq) goto loc_830383F4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-15016
	ctx.r11.s64 = ctx.r11.s64 + -15016;
	// addi r4,r11,-104
	ctx.r4.s64 = ctx.r11.s64 + -104;
	// bl 0x837b0c10
	ctx.lr = 0x830383D0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830383DC;
	sub_82E88020(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x830383E4;
	sub_8387E8E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83038300
	goto loc_83038300;
loc_830383F4:
	// bl 0x82d8a900
	ctx.lr = 0x830383F8;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r11,r11,-15016
	ctx.r11.s64 = ctx.r11.s64 + -15016;
	// beq cr6,0x8303843c
	if (cr6.eq) goto loc_8303843C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x837b0c10
	ctx.lr = 0x83038418;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83038424;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8303842C;
	sub_8387E8E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83038300
	goto loc_83038300;
loc_8303843C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x83038448;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83038454;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8303845C;
	sub_8387E8E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83038300
	goto loc_83038300;
loc_8303846C:
	// bl 0x82d8a820
	ctx.lr = 0x83038470;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830384b4
	if (cr6.eq) goto loc_830384B4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-15016
	ctx.r11.s64 = ctx.r11.s64 + -15016;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x83038490;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303849C;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x830384A4;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83038300
	goto loc_83038300;
loc_830384B4:
	// bl 0x82d8a900
	ctx.lr = 0x830384B8;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// beq cr6,0x830384fc
	if (cr6.eq) goto loc_830384FC;
	// addi r11,r11,-15016
	ctx.r11.s64 = ctx.r11.s64 + -15016;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x837b0c10
	ctx.lr = 0x830384D8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830384E4;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x830384EC;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83038300
	goto loc_83038300;
loc_830384FC:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-15016
	ctx.r4.s64 = ctx.r11.s64 + -15016;
	// bl 0x837b0c10
	ctx.lr = 0x83038508;
	sub_837B0C10(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83038514;
	sub_82E88020(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x8303851C;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x83038300
	goto loc_83038300;
}

__attribute__((alias("__imp__sub_8303852C"))) PPC_WEAK_FUNC(sub_8303852C);
PPC_FUNC_IMPL(__imp__sub_8303852C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83038530"))) PPC_WEAK_FUNC(sub_83038530);
PPC_FUNC_IMPL(__imp__sub_83038530) {
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
	// bl 0x83061e98
	ctx.lr = 0x83038548;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-14160
	ctx.r8.s64 = ctx.r10.s64 + -14160;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82d482c0
	ctx.lr = 0x83038590;
	sub_82D482C0(ctx, base);
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

__attribute__((alias("__imp__sub_830385A8"))) PPC_WEAK_FUNC(sub_830385A8);
PPC_FUNC_IMPL(__imp__sub_830385A8) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14160
	ctx.r9.s64 = ctx.r11.s64 + -14160;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d482c0
	ctx.lr = 0x830385E4;
	sub_82D482C0(ctx, base);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r7,-19088
	ctx.r5.s64 = ctx.r7.s64 + -19088;
	// addi r4,r6,-17088
	ctx.r4.s64 = ctx.r6.s64 + -17088;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// bl 0x82f42278
	ctx.lr = 0x83038604;
	sub_82F42278(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8303861c
	if (cr6.eq) goto loc_8303861C;
	// bl 0x82416268
	ctx.lr = 0x83038618;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303861C:
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

__attribute__((alias("__imp__sub_83038634"))) PPC_WEAK_FUNC(sub_83038634);
PPC_FUNC_IMPL(__imp__sub_83038634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83038638"))) PPC_WEAK_FUNC(sub_83038638);
PPC_FUNC_IMPL(__imp__sub_83038638) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303865c
	if (cr6.lt) goto loc_8303865C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83038660
	goto loc_83038660;
loc_8303865C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83038660:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83038678;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038690
	if (cr6.eq) goto loc_83038690;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83038530
	ctx.lr = 0x83038688;
	sub_83038530(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83038694
	if (!cr6.eq) goto loc_83038694;
loc_83038690:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83038694:
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

__attribute__((alias("__imp__sub_830386A8"))) PPC_WEAK_FUNC(sub_830386A8);
PPC_FUNC_IMPL(__imp__sub_830386A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x830386e4
	if (!cr6.eq) goto loc_830386E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83038730
	goto loc_83038730;
loc_830386E4:
	// lis r11,455
	ctx.r11.s64 = 29818880;
	// ori r10,r11,7281
	ctx.r10.u64 = ctx.r11.u64 | 7281;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x83038700
	if (!cr6.gt) goto loc_83038700;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x83038700;
	sub_831CC150(ctx, base);
loc_83038700:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82d9a0f0
	ctx.lr = 0x8303870C;
	sub_82D9A0F0(ctx, base);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_83038730:
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

__attribute__((alias("__imp__sub_83038748"))) PPC_WEAK_FUNC(sub_83038748);
PPC_FUNC_IMPL(__imp__sub_83038748) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x83038784
	if (!cr6.eq) goto loc_83038784;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830387c4
	goto loc_830387C4;
loc_83038784:
	// lis r11,163
	ctx.r11.s64 = 10682368;
	// ori r10,r11,55050
	ctx.r10.u64 = ctx.r11.u64 | 55050;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x830387a0
	if (!cr6.gt) goto loc_830387A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x830387A0;
	sub_831CC150(ctx, base);
loc_830387A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82d9a160
	ctx.lr = 0x830387AC;
	sub_82D9A160(ctx, base);
	// mulli r11,r30,400
	ctx.r11.s64 = ctx.r30.s64 * 400;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_830387C4:
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

__attribute__((alias("__imp__sub_830387DC"))) PPC_WEAK_FUNC(sub_830387DC);
PPC_FUNC_IMPL(__imp__sub_830387DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830387E0"))) PPC_WEAK_FUNC(sub_830387E0);
PPC_FUNC_IMPL(__imp__sub_830387E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830387E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,144
	ctx.r10.s64 = 144;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x830386a8
	ctx.lr = 0x8303881C;
	sub_830386A8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83038864
	if (cr6.eq) goto loc_83038864;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x83038860
	if (cr6.eq) goto loc_83038860;
loc_8303883C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83038850
	if (cr6.eq) goto loc_83038850;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad4478
	ctx.lr = 0x83038850;
	sub_82AD4478(ctx, base);
loc_83038850:
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x8303883c
	if (!cr6.eq) goto loc_8303883C;
loc_83038860:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_83038864:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83038870"))) PPC_WEAK_FUNC(sub_83038870);
PPC_FUNC_IMPL(__imp__sub_83038870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83038878;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,400
	ctx.r10.s64 = 400;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x83038748
	ctx.lr = 0x830388AC;
	sub_83038748(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830388f4
	if (cr6.eq) goto loc_830388F4;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x830388f0
	if (cr6.eq) goto loc_830388F0;
loc_830388CC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830388e0
	if (cr6.eq) goto loc_830388E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b55d80
	ctx.lr = 0x830388E0;
	sub_82B55D80(ctx, base);
loc_830388E0:
	// addi r31,r31,400
	ctx.r31.s64 = ctx.r31.s64 + 400;
	// addi r30,r30,400
	ctx.r30.s64 = ctx.r30.s64 + 400;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x830388cc
	if (!cr6.eq) goto loc_830388CC;
loc_830388F0:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_830388F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83038900"))) PPC_WEAK_FUNC(sub_83038900);
PPC_FUNC_IMPL(__imp__sub_83038900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83038908;
	__savegprlr_22(ctx, base);
	// stwu r1,-2992(r1)
	ea = -2992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83038918;
	sub_82D86078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83038970
	if (!cr6.eq) goto loc_83038970;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r4,r11,-284
	ctx.r4.s64 = ctx.r11.s64 + -284;
	// bl 0x837b0c10
	ctx.lr = 0x83038938;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83038944;
	sub_82E88020(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83038964
	if (cr6.lt) goto loc_83038964;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83038964;
	sub_825952B8(ctx, base);
loc_83038964:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038970:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// bgt cr6,0x83038a44
	if (cr6.gt) goto loc_83038A44;
	// lis r12,-31996
	ctx.r12.s64 = -2096889856;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30316
	ctx.r12.s64 = ctx.r12.s64 + -30316;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83038A1C;
	case 1:
		goto loc_83038AA0;
	case 2:
		goto loc_83038B18;
	case 3:
		goto loc_83038B6C;
	case 4:
		goto loc_83038BC0;
	case 5:
		goto loc_83038C14;
	case 6:
		goto loc_83038C64;
	case 7:
		goto loc_83038CB8;
	case 8:
		goto loc_83038D0C;
	case 9:
		goto loc_83038D60;
	case 10:
		goto loc_83038DB4;
	case 11:
		goto loc_83038E80;
	case 12:
		goto loc_83038ED4;
	case 13:
		goto loc_83038F28;
	case 14:
		goto loc_83038FB0;
	case 15:
		goto loc_83038FF8;
	case 16:
		goto loc_830390B0;
	case 17:
		goto loc_830390F8;
	case 18:
		goto loc_83039148;
	case 19:
		goto loc_8303919C;
	case 20:
		goto loc_830391F0;
	case 21:
		goto loc_83039244;
	case 22:
		goto loc_830393B8;
	case 23:
		goto loc_83039400;
	case 24:
		goto loc_83039450;
	case 25:
		goto loc_830394A4;
	case 26:
		goto loc_830397C0;
	case 27:
		goto loc_830398F8;
	case 28:
		goto loc_83039948;
	case 29:
		goto loc_83039808;
	case 30:
		goto loc_830398B0;
	case 31:
		goto loc_8303999C;
	case 32:
		goto loc_830399B4;
	case 33:
		goto loc_830399F0;
	default:
		return;
	}
	// lwz r24,-30180(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30180);
	// lwz r24,-30048(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30048);
	// lwz r24,-29928(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29928);
	// lwz r24,-29844(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29844);
	// lwz r24,-29760(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29760);
	// lwz r24,-29676(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29676);
	// lwz r24,-29596(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29596);
	// lwz r24,-29512(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29512);
	// lwz r24,-29428(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29428);
	// lwz r24,-29344(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29344);
	// lwz r24,-29260(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29260);
	// lwz r24,-29056(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29056);
	// lwz r24,-28972(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28972);
	// lwz r24,-28888(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28888);
	// lwz r24,-28752(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28752);
	// lwz r24,-28680(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28680);
	// lwz r24,-28496(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28496);
	// lwz r24,-28424(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28424);
	// lwz r24,-28344(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28344);
	// lwz r24,-28260(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28260);
	// lwz r24,-28176(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28176);
	// lwz r24,-28092(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28092);
	// lwz r24,-27720(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27720);
	// lwz r24,-27648(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27648);
	// lwz r24,-27568(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27568);
	// lwz r24,-27484(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27484);
	// lwz r24,-26688(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26688);
	// lwz r24,-26376(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26376);
	// lwz r24,-26296(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26296);
	// lwz r24,-26616(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26616);
	// lwz r24,-26448(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26448);
	// lwz r24,-26212(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26212);
	// lwz r24,-26188(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26188);
	// lwz r24,-26128(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26128);
loc_83038A1C:
	// bl 0x82d8ac40
	ctx.lr = 0x83038A20;
	sub_82D8AC40(ctx, base);
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83038A28;
	sub_831F8200(ctx, base);
	// lbz r11,752(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 752);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83038a50
	if (cr6.eq) goto loc_83038A50;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,752(r3)
	PPC_STORE_U8(ctx.r3.u32 + 752, ctx.r11.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_83038A44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038A50:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d8bb28
	ctx.lr = 0x83038A60;
	sub_82D8BB28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83038a8c
	if (cr6.eq) goto loc_83038A8C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83038a8c
	if (!cr6.eq) goto loc_83038A8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038A8C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038AA0:
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83038AA8;
	sub_82DAB6D0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82d976b8
	ctx.lr = 0x83038AB8;
	sub_82D976B8(ctx, base);
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x824ce1d8
	ctx.lr = 0x83038AC0;
	sub_824CE1D8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stb r10,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r10.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r11,r9,-14256
	ctx.r11.s64 = ctx.r9.s64 + -14256;
	// addi r4,r11,-276
	ctx.r4.s64 = ctx.r11.s64 + -276;
	// bl 0x837b0c10
	ctx.lr = 0x83038ADC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83038AE8;
	sub_82D894E0(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8387e8e0
	ctx.lr = 0x83038AF4;
	sub_8387E8E0(ctx, base);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r6,0,30,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// addi r5,r11,31
	ctx.r5.s64 = ctx.r11.s64 + 31;
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038B18:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82ddcec8
	ctx.lr = 0x83038B20;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038b50
	if (cr6.eq) goto loc_83038B50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83038B48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
loc_83038B50:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x83038a8c
	if (cr6.eq) goto loc_83038A8C;
loc_83038B58:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038B6C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r4,r11,-248
	ctx.r4.s64 = ctx.r11.s64 + -248;
	// bl 0x837b0c10
	ctx.lr = 0x83038B80;
	sub_837B0C10(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83038B8C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8387e8e0
	ctx.lr = 0x83038B98;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,29,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038BC0:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83038BC8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038bf8
	if (cr6.eq) goto loc_83038BF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83038BF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83038BF8:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83038b58
	if (!cr6.eq) goto loc_83038B58;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038C14:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r4,r11,-224
	ctx.r4.s64 = ctx.r11.s64 + -224;
	// bl 0x837b0c10
	ctx.lr = 0x83038C28;
	sub_837B0C10(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83038C34;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x83038C40;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,29,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038C64:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83038C6C;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038c9c
	if (cr6.eq) goto loc_83038C9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83038C94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_83038C9C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83038b58
	if (!cr6.eq) goto loc_83038B58;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038CB8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r4,r11,-196
	ctx.r4.s64 = ctx.r11.s64 + -196;
	// bl 0x837b0c10
	ctx.lr = 0x83038CCC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83038CD8;
	sub_82D894E0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8387e8e0
	ctx.lr = 0x83038CE4;
	sub_8387E8E0(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038D0C:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82ddcec8
	ctx.lr = 0x83038D14;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038d44
	if (cr6.eq) goto loc_83038D44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83038D3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_83038D44:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83038b58
	if (!cr6.eq) goto loc_83038B58;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038D60:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r4,r11,-172
	ctx.r4.s64 = ctx.r11.s64 + -172;
	// bl 0x837b0c10
	ctx.lr = 0x83038D74;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83038D80;
	sub_82D894E0(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x83038D8C;
	sub_8387E8E0(ctx, base);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038DB4:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82ddcec8
	ctx.lr = 0x83038DBC;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038dec
	if (cr6.eq) goto loc_83038DEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83038DE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
loc_83038DEC:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83038b58
	if (!cr6.eq) goto loc_83038B58;
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x83038DFC;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83038E00;
	sub_82D99C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831f8200
	ctx.lr = 0x83038E08;
	sub_831F8200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038e6c
	if (cr6.eq) goto loc_83038E6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x83038E18;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83038e58
	if (cr6.eq) goto loc_83038E58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f0
	ctx.lr = 0x83038E2C;
	sub_825832F0(ctx, base);
	// bl 0x82d986b8
	ctx.lr = 0x83038E30;
	sub_82D986B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// addi r8,r11,25
	ctx.r8.s64 = ctx.r11.s64 + 25;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038E58:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038E6C:
	// li r11,21
	ctx.r11.s64 = 21;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038E80:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r4,r11,-148
	ctx.r4.s64 = ctx.r11.s64 + -148;
	// bl 0x837b0c10
	ctx.lr = 0x83038E94;
	sub_837B0C10(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83038EA0;
	sub_82D894E0(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8387e8e0
	ctx.lr = 0x83038EAC;
	sub_8387E8E0(ctx, base);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038ED4:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82ddcec8
	ctx.lr = 0x83038EDC;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038f0c
	if (cr6.eq) goto loc_83038F0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83038F04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
loc_83038F0C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83039490
	if (!cr6.eq) goto loc_83039490;
	// li r11,13
	ctx.r11.s64 = 13;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038F28:
	// lwz r30,116(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x83038F34;
	sub_825832E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x83038F40;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83038F44;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83038F48;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038b58
	if (cr6.eq) goto loc_83038B58;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82b54cc0
	ctx.lr = 0x83038F5C;
	sub_82B54CC0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r11.u32);
	// stw r27,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r27.u32);
	// bl 0x825832e0
	ctx.lr = 0x83038F78;
	sub_825832E0(ctx, base);
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d999a0
	ctx.lr = 0x83038F84;
	sub_82D999A0(ctx, base);
	// stw r3,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83038F90;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4370
	ctx.lr = 0x83038F9C;
	sub_82DA4370(ctx, base);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038FB0:
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x825832e8
	ctx.lr = 0x83038FB8;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83038FC0;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83038FD4;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83038FF8:
	// lwz r30,116(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x83039004;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x83039010;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d99c10
	ctx.lr = 0x83039018;
	sub_82D99C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99c10
	ctx.lr = 0x83039024;
	sub_82D99C10(ctx, base);
	// bl 0x8332f198
	ctx.lr = 0x83039028;
	sub_8332F198(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83039050
	if (!cr6.eq) goto loc_83039050;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99c10
	ctx.lr = 0x8303903C;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83039040;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038b58
	if (cr6.eq) goto loc_83038B58;
	// bl 0x825832e0
	ctx.lr = 0x8303904C;
	sub_825832E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83039050:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x8303905C;
	sub_82D9AA60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82b54cc0
	ctx.lr = 0x83039068;
	sub_82B54CC0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r30.u32);
	// stw r11,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r10.u32);
	// bl 0x82d999a0
	ctx.lr = 0x83039084;
	sub_82D999A0(ctx, base);
	// stw r3,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83039090;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4370
	ctx.lr = 0x8303909C;
	sub_82DA4370(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830390B0:
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x825832e8
	ctx.lr = 0x830390B8;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x830390C0;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x830390D4;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE;
	// addi r8,r11,17
	ctx.r8.s64 = ctx.r11.s64 + 17;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830390F8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// bl 0x837b0c10
	ctx.lr = 0x8303910C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83039118;
	sub_82D894E0(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8387e8e0
	ctx.lr = 0x83039124;
	sub_8387E8E0(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,30,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83039148:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82ddcec8
	ctx.lr = 0x83039150;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83039180
	if (cr6.eq) goto loc_83039180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83039178;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
loc_83039180:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83038b58
	if (!cr6.eq) goto loc_83038B58;
	// li r11,19
	ctx.r11.s64 = 19;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8303919C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// bl 0x837b0c10
	ctx.lr = 0x830391B0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830391BC;
	sub_82D894E0(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8387e8e0
	ctx.lr = 0x830391C8;
	sub_8387E8E0(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830391F0:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82ddcec8
	ctx.lr = 0x830391F8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83039228
	if (cr6.eq) goto loc_83039228;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83039220;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
loc_83039228:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83038b58
	if (!cr6.eq) goto loc_83038B58;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83039244:
	// lwz r29,116(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83039250;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e8
	ctx.lr = 0x8303925C;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832d8
	ctx.lr = 0x83039268;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x8303926C;
	sub_82D99C08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d99ff0
	ctx.lr = 0x83039274;
	sub_82D99FF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038b58
	if (cr6.eq) goto loc_83038B58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x83039284;
	sub_83102DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83038870
	ctx.lr = 0x83039290;
	sub_83038870(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d97540
	ctx.lr = 0x830392A0;
	sub_82D97540(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r10,-14256
	ctx.r29.s64 = ctx.r10.s64 + -14256;
	// addi r4,r29,-502
	ctx.r4.s64 = ctx.r29.s64 + -502;
	// bl 0x837b0c10
	ctx.lr = 0x830392B4;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x830392C0;
	sub_837B0C10(ctx, base);
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,125
	ctx.r4.u64 = ctx.r4.u64 | 125;
	// bl 0x82d04220
	ctx.lr = 0x830392D0;
	sub_82D04220(ctx, base);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x830392e4
	if (!cr6.lt) goto loc_830392E4;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_830392E4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82ab6970
	ctx.lr = 0x830392F0;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8292a3f8
	ctx.lr = 0x830392FC;
	sub_8292A3F8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97a10
	ctx.lr = 0x83039308;
	sub_82D97A10(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x83039310;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8387e8e0
	ctx.lr = 0x83039318;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82b54cc0
	ctx.lr = 0x83039320;
	sub_82B54CC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r5,70
	ctx.r5.s64 = 70;
	// stw r11,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r10.u32);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// bl 0x831cdcf0
	ctx.lr = 0x83039340;
	sub_831CDCF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97528
	ctx.lr = 0x83039348;
	sub_82D97528(ctx, base);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8303935c
	if (cr6.lt) goto loc_8303935C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83039360
	goto loc_83039360;
loc_8303935C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_83039360:
	// li r4,70
	ctx.r4.s64 = 70;
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// bl 0x831ce7d8
	ctx.lr = 0x8303936C;
	sub_831CE7D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df16a0
	ctx.lr = 0x83039374;
	sub_82DF16A0(ctx, base);
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83039380;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4370
	ctx.lr = 0x8303938C;
	sub_82DA4370(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8303939C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x830393A4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d9af88
	ctx.lr = 0x830393AC;
	sub_82D9AF88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830393B8:
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x825832e8
	ctx.lr = 0x830393C0;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x830393C8;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x830393DC;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// addi r8,r11,23
	ctx.r8.s64 = ctx.r11.s64 + 23;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83039400:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x837b0c10
	ctx.lr = 0x83039414;
	sub_837B0C10(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83039420;
	sub_82D894E0(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x8303942C;
	sub_8387E8E0(ctx, base);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83039450:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82ddcec8
	ctx.lr = 0x83039458;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83039488
	if (cr6.eq) goto loc_83039488;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83039480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
loc_83039488:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83038b58
	if (!cr6.eq) goto loc_83038B58;
loc_83039490:
	// li r11,25
	ctx.r11.s64 = 25;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830394A4:
	// lwz r30,116(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x830394B0;
	sub_825832E8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x830394BC;
	sub_825832D8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82d99c10
	ctx.lr = 0x830394C4;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830394C8;
	sub_825832F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038b58
	if (cr6.eq) goto loc_83038B58;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83102db0
	ctx.lr = 0x830394DC;
	sub_83102DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x830394E4;
	sub_82D99FA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038b58
	if (cr6.eq) goto loc_83038B58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x830394F4;
	sub_83102DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830387e0
	ctx.lr = 0x83039500;
	sub_830387E0(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82b54cc0
	ctx.lr = 0x83039508;
	sub_82B54CC0(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,836
	ctx.r11.s64 = ctx.r1.s64 + 836;
	// stw r27,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r27.u32);
	// stw r9,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83039524:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stbu r27,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r27.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83039524
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83039524;
	// stb r27,984(r1)
	PPC_STORE_U8(ctx.r1.u32 + 984, ctx.r27.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r27,988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 988, ctx.r27.u32);
	// bl 0x825832e0
	ctx.lr = 0x83039540;
	sub_825832E0(ctx, base);
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x8303954C;
	sub_82DAB6D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r28,250
	ctx.r28.s64 = 250;
	// bl 0x82d8bb28
	ctx.lr = 0x8303955C;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830395c8
	if (cr6.eq) goto loc_830395C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x83039574;
	sub_82D99FA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830395bc
	if (cr6.eq) goto loc_830395BC;
loc_8303957C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99fb8
	ctx.lr = 0x83039588;
	sub_82D99FB8(ctx, base);
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830395ac
	if (cr6.eq) goto loc_830395AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82d99fa0
	ctx.lr = 0x830395A0;
	sub_82D99FA0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x8303957c
	if (cr6.lt) goto loc_8303957C;
	// b 0x830395bc
	goto loc_830395BC;
loc_830395AC:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// blt cr6,0x830395bc
	if (cr6.lt) goto loc_830395BC;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_830395BC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d976d0
	ctx.lr = 0x830395C8;
	sub_82D976D0(ctx, base);
loc_830395C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d976d8
	ctx.lr = 0x830395D0;
	sub_82D976D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d99c10
	ctx.lr = 0x830395DC;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830395E0;
	sub_825832F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82d94360
	ctx.lr = 0x830395F0;
	sub_82D94360(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82d99e80
	ctx.lr = 0x830395F8;
	sub_82D99E80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x83039604;
	sub_82D99FA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83039660
	if (cr6.eq) goto loc_83039660;
loc_8303960C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99fb8
	ctx.lr = 0x83039618;
	sub_82D99FB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d98cb0
	ctx.lr = 0x83039628;
	sub_82D98CB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8303964c
	if (cr6.eq) goto loc_8303964C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82d99fa0
	ctx.lr = 0x83039640;
	sub_82D99FA0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x8303960c
	if (cr6.lt) goto loc_8303960C;
	// b 0x83039660
	goto loc_83039660;
loc_8303964C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d99fb8
	ctx.lr = 0x83039654;
	sub_82D99FB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82ca5018
	ctx.lr = 0x83039660;
	sub_82CA5018(ctx, base);
loc_83039660:
	// bl 0x831156e8
	ctx.lr = 0x83039664;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d987f8
	ctx.lr = 0x83039678;
	sub_82D987F8(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8303967C;
	sub_825832E0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,11
	ctx.r30.s64 = 11;
	// li r28,12
	ctx.r28.s64 = 12;
loc_83039688:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83039694;
	sub_82D987F8(ctx, base);
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// bl 0x825832e0
	ctx.lr = 0x8303969C;
	sub_825832E0(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8311bf98
	ctx.lr = 0x830396AC;
	sub_8311BF98(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x830396BC;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830396d8
	if (cr6.eq) goto loc_830396D8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x83039688
	if (cr6.lt) goto loc_83039688;
	// b 0x83039708
	goto loc_83039708;
loc_830396D8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d99c10
	ctx.lr = 0x830396E0;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830396E4;
	sub_825832F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d98ea8
	ctx.lr = 0x830396F0;
	sub_82D98EA8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d99c10
	ctx.lr = 0x830396F8;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830396FC;
	sub_825832F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// bl 0x82d996b0
	ctx.lr = 0x83039708;
	sub_82D996B0(ctx, base);
loc_83039708:
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83039710;
	sub_831F8200(ctx, base);
	// stw r26,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r26.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r1,844
	ctx.r30.s64 = ctx.r1.s64 + 844;
loc_8303971C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83039728;
	sub_82D987F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d983f8
	ctx.lr = 0x83039730;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303974c
	if (!cr6.eq) goto loc_8303974C;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r27,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r27.u32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83039760
	goto loc_83039760;
loc_8303974C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r11.u32);
	// bl 0x82a47dc0
	ctx.lr = 0x8303975C;
	sub_82A47DC0(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
loc_83039760:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r29,18
	cr6.compare<uint32_t>(ctx.r29.u32, 18, xer);
	// blt cr6,0x8303971c
	if (cr6.lt) goto loc_8303971C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d98c30
	ctx.lr = 0x83039778;
	sub_82D98C30(ctx, base);
	// stb r3,984(r1)
	PPC_STORE_U8(ctx.r1.u32 + 984, ctx.r3.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d999a0
	ctx.lr = 0x83039784;
	sub_82D999A0(ctx, base);
	// stw r3,988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 988, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83039790;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82da4370
	ctx.lr = 0x8303979C;
	sub_82DA4370(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r11,26
	ctx.r11.s64 = 26;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// bl 0x82416268
	ctx.lr = 0x830397B4;
	sub_82416268(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830397C0:
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x825832e8
	ctx.lr = 0x830397C8;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x830397D0;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x830397E4;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,29
	ctx.r8.s64 = ctx.r11.s64 + 29;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83039808:
	// lwz r30,116(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x83039814;
	sub_825832E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x83039820;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83039824;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83039828;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83038b58
	if (cr6.eq) goto loc_83038B58;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82b54cc0
	ctx.lr = 0x8303983C;
	sub_82B54CC0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r27,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r11.u32);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// stw r27,2888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2888, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83039860;
	sub_831CDCF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x83039868;
	sub_825832E0(ctx, base);
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98930
	ctx.lr = 0x83039874;
	sub_82D98930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// addi r6,r1,2888
	ctx.r6.s64 = ctx.r1.s64 + 2888;
	// bl 0x82d8d090
	ctx.lr = 0x83039888;
	sub_82D8D090(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da44b8
	ctx.lr = 0x83039890;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4370
	ctx.lr = 0x8303989C;
	sub_82DA4370(ctx, base);
	// li r10,30
	ctx.r10.s64 = 30;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830398B0:
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x825832e8
	ctx.lr = 0x830398B8;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x830398C0;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da43b8
	ctx.lr = 0x830398D4;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// addi r8,r11,27
	ctx.r8.s64 = ctx.r11.s64 + 27;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830398F8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x8303990C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83039918;
	sub_82D894E0(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x83039924;
	sub_8387E8E0(ctx, base);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83039948:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82ddcec8
	ctx.lr = 0x83039950;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83038a44
	if (cr6.eq) goto loc_83038A44;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83039980
	if (cr6.eq) goto loc_83039980;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83039978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
loc_83039980:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83038b58
	if (!cr6.eq) goto loc_83038B58;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8303999C:
	// bl 0x82d89740
	ctx.lr = 0x830399A0;
	sub_82D89740(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830399B4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830399C8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830399D4;
	sub_82E88020(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8387e8e0
	ctx.lr = 0x830399DC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830399F0:
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x830399F8;
	sub_831F8200(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83038b58
	if (cr6.eq) goto loc_83038B58;
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83039A0C;
	sub_831F8200(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// bne cr6,0x83039a54
	if (!cr6.eq) goto loc_83039A54;
	// addi r11,r11,-14256
	ctx.r11.s64 = ctx.r11.s64 + -14256;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83039A2C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83039A38;
	sub_82E88020(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8387e8e0
	ctx.lr = 0x83039A40;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83039A54:
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,-14256
	ctx.r4.s64 = ctx.r11.s64 + -14256;
	// bl 0x837b0c10
	ctx.lr = 0x83039A60;
	sub_837B0C10(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83039A6C;
	sub_82E88020(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8387e8e0
	ctx.lr = 0x83039A74;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83039A88"))) PPC_WEAK_FUNC(sub_83039A88);
PPC_FUNC_IMPL(__imp__sub_83039A88) {
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
	// bl 0x83061e98
	ctx.lr = 0x83039AA4;
	sub_83061E98(ctx, base);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83062130
	ctx.lr = 0x83039AB0;
	sub_83062130(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// addi r7,r10,-13584
	ctx.r7.s64 = ctx.r10.s64 + -13584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,-17088
	ctx.r6.s64 = ctx.r9.s64 + -17088;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r5,r8,-13588
	ctx.r5.s64 = ctx.r8.s64 + -13588;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82da4040
	ctx.lr = 0x83039AFC;
	sub_82DA4040(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r3.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83039b14
	if (!cr6.eq) goto loc_83039B14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83062230
	ctx.lr = 0x83039B14;
	sub_83062230(ctx, base);
loc_83039B14:
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

__attribute__((alias("__imp__sub_83039B30"))) PPC_WEAK_FUNC(sub_83039B30);
PPC_FUNC_IMPL(__imp__sub_83039B30) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r8,r11,-13584
	ctx.r8.s64 = ctx.r11.s64 + -13584;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-13588
	ctx.r6.s64 = ctx.r9.s64 + -13588;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// bl 0x83062070
	ctx.lr = 0x83039B70;
	sub_83062070(ctx, base);
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// addi r3,r5,-19088
	ctx.r3.s64 = ctx.r5.s64 + -19088;
	// addi r11,r4,-17088
	ctx.r11.s64 = ctx.r4.s64 + -17088;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82f42278
	ctx.lr = 0x83039B90;
	sub_82F42278(ctx, base);
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

__attribute__((alias("__imp__sub_83039BA4"))) PPC_WEAK_FUNC(sub_83039BA4);
PPC_FUNC_IMPL(__imp__sub_83039BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83039BA8"))) PPC_WEAK_FUNC(sub_83039BA8);
PPC_FUNC_IMPL(__imp__sub_83039BA8) {
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
	// bl 0x83039b30
	ctx.lr = 0x83039BC8;
	sub_83039B30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83039be0
	if (cr6.eq) goto loc_83039BE0;
	// bl 0x82416268
	ctx.lr = 0x83039BDC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83039BE0:
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

__attribute__((alias("__imp__sub_83039BF8"))) PPC_WEAK_FUNC(sub_83039BF8);
PPC_FUNC_IMPL(__imp__sub_83039BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83039c0c
	if (!cr6.eq) goto loc_83039C0C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
loc_83039C0C:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83039C10"))) PPC_WEAK_FUNC(sub_83039C10);
PPC_FUNC_IMPL(__imp__sub_83039C10) {
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
	// bl 0x831156e8
	ctx.lr = 0x83039C20;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,32692
	ctx.r9.s64 = ctx.r9.s64 + 32692;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// lwz r8,11296(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11296);
	// lwz r7,11392(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11392);
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r8,11908(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11908, ctx.r8.u32);
	// stw r7,11912(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11912, ctx.r7.u32);
	// stw r6,11916(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11916, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039C5C"))) PPC_WEAK_FUNC(sub_83039C5C);
PPC_FUNC_IMPL(__imp__sub_83039C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83039C60"))) PPC_WEAK_FUNC(sub_83039C60);
PPC_FUNC_IMPL(__imp__sub_83039C60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-96
	ctx.r3.s64 = ctx.r3.s64 + -96;
	// b 0x83039ba8
	sub_83039BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83039C68"))) PPC_WEAK_FUNC(sub_83039C68);
PPC_FUNC_IMPL(__imp__sub_83039C68) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83039c8c
	if (cr6.lt) goto loc_83039C8C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83039c90
	goto loc_83039C90;
loc_83039C8C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83039C90:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83039CA8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83039cc0
	if (cr6.eq) goto loc_83039CC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83039a88
	ctx.lr = 0x83039CB8;
	sub_83039A88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83039cc4
	if (!cr6.eq) goto loc_83039CC4;
loc_83039CC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83039CC4:
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

__attribute__((alias("__imp__sub_83039CD8"))) PPC_WEAK_FUNC(sub_83039CD8);
PPC_FUNC_IMPL(__imp__sub_83039CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83039CE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83039CF0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83039d44
	if (!cr6.eq) goto loc_83039D44;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-13680
	ctx.r11.s64 = ctx.r11.s64 + -13680;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// bl 0x837b0c10
	ctx.lr = 0x83039D0C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83039D18;
	sub_82E88020(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83039d38
	if (cr6.lt) goto loc_83039D38;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83039D38;
	sub_825952B8(ctx, base);
loc_83039D38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83039D44:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x83039e14
	if (cr6.gt) goto loc_83039E14;
	// lis r12,-31996
	ctx.r12.s64 = -2096889856;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-25240
	ctx.r12.s64 = ctx.r12.s64 + -25240;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83039D98;
	case 1:
		goto loc_83039DA0;
	case 2:
		goto loc_83039E14;
	case 3:
		goto loc_83039ED0;
	case 4:
		goto loc_83039F94;
	case 5:
		goto loc_83039FE4;
	case 6:
		goto loc_8303A088;
	case 7:
		goto loc_8303A0EC;
	case 8:
		goto loc_8303A154;
	case 9:
		goto loc_8303A168;
	case 10:
		goto loc_8303A1A4;
	case 11:
		goto loc_8303A1E0;
	default:
		return;
	}
	// lwz r24,-25192(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25192);
	// lwz r24,-25184(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25184);
	// lwz r24,-25068(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25068);
	// lwz r24,-24880(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24880);
	// lwz r24,-24684(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24684);
	// lwz r24,-24604(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24604);
	// lwz r24,-24440(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24440);
	// lwz r24,-24340(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24340);
	// lwz r24,-24236(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24236);
	// lwz r24,-24216(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24216);
	// lwz r24,-24156(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24156);
	// lwz r24,-24096(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24096);
loc_83039D98:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_83039DA0:
	// bl 0x82d86078
	ctx.lr = 0x83039DA4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83039dc8
	if (!cr6.eq) goto loc_83039DC8;
loc_83039DAC:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83039DC8:
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83039DD4;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8332f198
	ctx.lr = 0x83039DE0;
	sub_8332F198(ctx, base);
	// bl 0x82d9c120
	ctx.lr = 0x83039DE4;
	sub_82D9C120(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e0
	ctx.lr = 0x83039DF0;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9c458
	ctx.lr = 0x83039DFC;
	sub_82D9C458(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83039e20
	if (!cr6.eq) goto loc_83039E20;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_83039E14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83039E20:
	// bl 0x831156e8
	ctx.lr = 0x83039E24;
	sub_831156E8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r11,-13680
	ctx.r30.s64 = ctx.r11.s64 + -13680;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,-92
	ctx.r3.s64 = ctx.r30.s64 + -92;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82d2fa90
	ctx.lr = 0x83039E48;
	sub_82D2FA90(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// bl 0x825832e0
	ctx.lr = 0x83039E5C;
	sub_825832E0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bf98
	ctx.lr = 0x83039E6C;
	sub_8311BF98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-318
	ctx.r4.s64 = ctx.r30.s64 + -318;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x83039E7C;
	sub_837B0C10(ctx, base);
	// lwz r7,40(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// li r8,90
	ctx.r8.s64 = 90;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r29,56
	ctx.r5.s64 = ctx.r29.s64 + 56;
	// ori r4,r4,396
	ctx.r4.u64 = ctx.r4.u64 | 396;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// divwu r6,r7,r8
	ctx.r6.u32 = PPCDivide(ctx.r7.u32, ctx.r8.u32);
	// bl 0x82d042a8
	ctx.lr = 0x83039E9C;
	sub_82D042A8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82d2aab0
	ctx.lr = 0x83039EA8;
	sub_82D2AAB0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83039EB4;
	sub_83103100(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83039EC4;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83039ED0:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83039f80
	if (!cr6.eq) goto loc_83039F80;
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830620c8
	ctx.lr = 0x83039EE8;
	sub_830620C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83039e14
	if (cr6.eq) goto loc_83039E14;
	// bl 0x82d86078
	ctx.lr = 0x83039EF8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83039dac
	if (cr6.eq) goto loc_83039DAC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83039F08;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// bl 0x82aa00e0
	ctx.lr = 0x83039F18;
	sub_82AA00E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8307e040
	ctx.lr = 0x83039F20;
	sub_8307E040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x83062308
	ctx.lr = 0x83039F54;
	sub_83062308(ctx, base);
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97be0
	ctx.lr = 0x83039F68;
	sub_82D97BE0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83039F70;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83039F78;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8378e240
	ctx.lr = 0x83039F80;
	sub_8378E240(ctx, base);
loc_83039F80:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83039F94:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-13680
	ctx.r11.s64 = ctx.r11.s64 + -13680;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x837b0c10
	ctx.lr = 0x83039FA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83039FB4;
	sub_82D894E0(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x83039FC0;
	sub_8387E8E0(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83039FE4:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82ddcec8
	ctx.lr = 0x83039FEC;
	sub_82DDCEC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83039e14
	if (cr6.eq) goto loc_83039E14;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83574b00
	ctx.lr = 0x8303A000;
	sub_83574B00(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303a02c
	if (cr6.eq) goto loc_8303A02C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8303A024;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
loc_8303A02C:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x8303a048
	if (!cr6.eq) goto loc_8303A048;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303A048:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r7,10
	ctx.r7.s64 = 10;
	// addi r11,r11,-13680
	ctx.r11.s64 = ctx.r11.s64 + -13680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,-56
	ctx.r6.s64 = ctx.r11.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x8303A068;
	sub_827A8810(ctx, base);
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 10;
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303A088:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x8303A090;
	sub_82DAB6D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d976b8
	ctx.lr = 0x8303A0A0;
	sub_82D976B8(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r10,-13680
	ctx.r11.s64 = ctx.r10.s64 + -13680;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x8303A0B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303A0C0;
	sub_82D894E0(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x8303A0CC;
	sub_8387E8E0(ctx, base);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303A0EC:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82ddcec8
	ctx.lr = 0x8303A0F4;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83039e14
	if (cr6.eq) goto loc_83039E14;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303a124
	if (cr6.eq) goto loc_8303A124;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303A11C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
loc_8303A124:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8303a140
	if (!cr6.eq) goto loc_8303A140;
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303A140:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303A154:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303A168:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-13680
	ctx.r11.s64 = ctx.r11.s64 + -13680;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8303A17C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303A188;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8303A190;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303A1A4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-13680
	ctx.r11.s64 = ctx.r11.s64 + -13680;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303A1B8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303A1C4;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x8303A1CC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8303A1E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83039c10
	ctx.lr = 0x8303A1E8;
	sub_83039C10(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-13680
	ctx.r4.s64 = ctx.r11.s64 + -13680;
	// bl 0x837b0c10
	ctx.lr = 0x8303A1F8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303A204;
	sub_82E88020(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x8303A20C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303A220"))) PPC_WEAK_FUNC(sub_8303A220);
PPC_FUNC_IMPL(__imp__sub_8303A220) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303A250;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303a290
	if (cr6.eq) goto loc_8303A290;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303A264;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-13064
	ctx.r8.s64 = ctx.r10.s64 + -13064;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8303a294
	goto loc_8303A294;
loc_8303A290:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303A294:
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

__attribute__((alias("__imp__sub_8303A2AC"))) PPC_WEAK_FUNC(sub_8303A2AC);
PPC_FUNC_IMPL(__imp__sub_8303A2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303A2B0"))) PPC_WEAK_FUNC(sub_8303A2B0);
PPC_FUNC_IMPL(__imp__sub_8303A2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303a2c0
	if (cr6.lt) goto loc_8303A2C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303A2C0:
	// b 0x8303a220
	sub_8303A220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303A2C4"))) PPC_WEAK_FUNC(sub_8303A2C4);
PPC_FUNC_IMPL(__imp__sub_8303A2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303A2C8"))) PPC_WEAK_FUNC(sub_8303A2C8);
PPC_FUNC_IMPL(__imp__sub_8303A2C8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8303a3a0
	if (cr6.gt) goto loc_8303A3A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8303a314
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303A314;
	// bdzf 4*cr6+eq,0x8303a358
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303A358;
	// bdzf 4*cr6+eq,0x8303a3c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303A3C4;
	// bdzf 4*cr6+eq,0x8303a3cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303A3CC;
	// bne cr6,0x8303a404
	if (!cr6.eq) goto loc_8303A404;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303A314:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-13156
	ctx.r11.s64 = ctx.r11.s64 + -13156;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x8303A328;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303A334;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303A340;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303a3a0
	goto loc_8303A3A0;
loc_8303A358:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8303A360;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303a3a0
	if (cr6.eq) goto loc_8303A3A0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303a390
	if (cr6.eq) goto loc_8303A390;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303A388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8303A390:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8303a3bc
	if (!cr6.eq) goto loc_8303A3BC;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8303A39C:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303A3A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303A3A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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
loc_8303A3BC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8303a39c
	goto loc_8303A39C;
loc_8303A3C4:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8303a39c
	goto loc_8303A39C;
loc_8303A3CC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-13156
	ctx.r11.s64 = ctx.r11.s64 + -13156;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303A3E0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303A3EC;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8303A3F4;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303a3a4
	goto loc_8303A3A4;
loc_8303A404:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-13156
	ctx.r4.s64 = ctx.r11.s64 + -13156;
	// bl 0x837b0c10
	ctx.lr = 0x8303A414;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303A420;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8303A428;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303a3a4
	goto loc_8303A3A4;
}

__attribute__((alias("__imp__sub_8303A438"))) PPC_WEAK_FUNC(sub_8303A438);
PPC_FUNC_IMPL(__imp__sub_8303A438) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303A468;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303a4a8
	if (cr6.eq) goto loc_8303A4A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303A47C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-12592
	ctx.r8.s64 = ctx.r10.s64 + -12592;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8303a4ac
	goto loc_8303A4AC;
loc_8303A4A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303A4AC:
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

__attribute__((alias("__imp__sub_8303A4C4"))) PPC_WEAK_FUNC(sub_8303A4C4);
PPC_FUNC_IMPL(__imp__sub_8303A4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303A4C8"))) PPC_WEAK_FUNC(sub_8303A4C8);
PPC_FUNC_IMPL(__imp__sub_8303A4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303a4d8
	if (cr6.lt) goto loc_8303A4D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303A4D8:
	// b 0x8303a438
	sub_8303A438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303A4DC"))) PPC_WEAK_FUNC(sub_8303A4DC);
PPC_FUNC_IMPL(__imp__sub_8303A4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303A4E0"))) PPC_WEAK_FUNC(sub_8303A4E0);
PPC_FUNC_IMPL(__imp__sub_8303A4E0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8303a544
	if (cr6.eq) goto loc_8303A544;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8303a54c
	if (!cr6.eq) goto loc_8303A54C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-12684
	ctx.r4.s64 = ctx.r11.s64 + -12684;
	// bl 0x837b0c10
	ctx.lr = 0x8303A520;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303A52C;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303A534;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303a550
	goto loc_8303A550;
loc_8303A544:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303A54C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303A550:
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

__attribute__((alias("__imp__sub_8303A568"))) PPC_WEAK_FUNC(sub_8303A568);
PPC_FUNC_IMPL(__imp__sub_8303A568) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12328
	ctx.r9.s64 = ctx.r11.s64 + -12328;
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
	// bl 0x82f42278
	ctx.lr = 0x8303A5A0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8303a5b8
	if (cr6.eq) goto loc_8303A5B8;
	// bl 0x82416268
	ctx.lr = 0x8303A5B4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303A5B8:
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

__attribute__((alias("__imp__sub_8303A5D0"))) PPC_WEAK_FUNC(sub_8303A5D0);
PPC_FUNC_IMPL(__imp__sub_8303A5D0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303A600;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303a640
	if (cr6.eq) goto loc_8303A640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8303A614;
	sub_82F42220(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-12328
	ctx.r8.s64 = ctx.r10.s64 + -12328;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x8303a644
	goto loc_8303A644;
loc_8303A640:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303A644:
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

__attribute__((alias("__imp__sub_8303A65C"))) PPC_WEAK_FUNC(sub_8303A65C);
PPC_FUNC_IMPL(__imp__sub_8303A65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303A660"))) PPC_WEAK_FUNC(sub_8303A660);
PPC_FUNC_IMPL(__imp__sub_8303A660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303a670
	if (cr6.lt) goto loc_8303A670;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303A670:
	// b 0x8303a5d0
	sub_8303A5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303A674"))) PPC_WEAK_FUNC(sub_8303A674);
PPC_FUNC_IMPL(__imp__sub_8303A674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303A678"))) PPC_WEAK_FUNC(sub_8303A678);
PPC_FUNC_IMPL(__imp__sub_8303A678) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8303A694;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303a7a8
	if (cr6.eq) goto loc_8303A7A8;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r30,140(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8303a7a0
	if (cr6.gt) goto loc_8303A7A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8303a6dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303A6DC;
	// bdzf 4*cr6+eq,0x8303a6fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303A6FC;
	// bdzf 4*cr6+eq,0x8303a744
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303A744;
	// bne cr6,0x8303a770
	if (!cr6.eq) goto loc_8303A770;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dac960
	ctx.lr = 0x8303A6CC;
	sub_82DAC960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dac738
	ctx.lr = 0x8303A6D4;
	sub_82DAC738(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8303A6DC:
	// bl 0x82d860f0
	ctx.lr = 0x8303A6E0;
	sub_82D860F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82dcdde8
	ctx.lr = 0x8303A6F0;
	sub_82DCDDE8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8303A6FC:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8303a718
	if (!cr6.eq) goto loc_8303A718;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x8303a7ac
	goto loc_8303A7AC;
loc_8303A718:
	// lbz r10,90(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 90);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8303a73c
	if (cr6.eq) goto loc_8303A73C;
	// lbz r11,91(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 91);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_8303A73C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8303a7ac
	goto loc_8303A7AC;
loc_8303A744:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-12424
	ctx.r11.s64 = ctx.r11.s64 + -12424;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303A758;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303A764;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303A76C;
	sub_8387E8E0(ctx, base);
	// b 0x8303a7a8
	goto loc_8303A7A8;
loc_8303A770:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dacbd8
	ctx.lr = 0x8303A778;
	sub_82DACBD8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-12424
	ctx.r4.s64 = ctx.r11.s64 + -12424;
	// bl 0x837b0c10
	ctx.lr = 0x8303A788;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303A794;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8303A79C;
	sub_8387E8E0(ctx, base);
	// b 0x8303a7a8
	goto loc_8303A7A8;
loc_8303A7A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dacbd8
	ctx.lr = 0x8303A7A8;
	sub_82DACBD8(ctx, base);
loc_8303A7A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8303A7AC:
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

__attribute__((alias("__imp__sub_8303A7C4"))) PPC_WEAK_FUNC(sub_8303A7C4);
PPC_FUNC_IMPL(__imp__sub_8303A7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303A7C8"))) PPC_WEAK_FUNC(sub_8303A7C8);
PPC_FUNC_IMPL(__imp__sub_8303A7C8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303A7F8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303a82c
	if (cr6.eq) goto loc_8303A82C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303A80C;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11856
	ctx.r9.s64 = ctx.r11.s64 + -11856;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303a830
	goto loc_8303A830;
loc_8303A82C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303A830:
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

__attribute__((alias("__imp__sub_8303A848"))) PPC_WEAK_FUNC(sub_8303A848);
PPC_FUNC_IMPL(__imp__sub_8303A848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303a858
	if (cr6.lt) goto loc_8303A858;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303A858:
	// b 0x8303a7c8
	sub_8303A7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303A85C"))) PPC_WEAK_FUNC(sub_8303A85C);
PPC_FUNC_IMPL(__imp__sub_8303A85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303A860"))) PPC_WEAK_FUNC(sub_8303A860);
PPC_FUNC_IMPL(__imp__sub_8303A860) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8303A87C;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303a8c8
	if (!cr6.eq) goto loc_8303A8C8;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-11948
	ctx.r11.s64 = ctx.r11.s64 + -11948;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303A89C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303A8A8;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303a938
	if (cr6.lt) goto loc_8303A938;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8303a934
	goto loc_8303A934;
loc_8303A8C8:
	// bl 0x82e58e90
	ctx.lr = 0x8303A8CC;
	sub_82E58E90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303a8fc
	if (cr6.eq) goto loc_8303A8FC;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x83102db0
	ctx.lr = 0x8303A8E0;
	sub_83102DB0(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8303a8fc
	if (!cr6.eq) goto loc_8303A8FC;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x83102db0
	ctx.lr = 0x8303A8F4;
	sub_83102DB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
loc_8303A8FC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-11948
	ctx.r4.s64 = ctx.r11.s64 + -11948;
	// bl 0x837b0c10
	ctx.lr = 0x8303A90C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303A918;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303a938
	if (cr6.lt) goto loc_8303A938;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8303A934:
	// bl 0x825952b8
	ctx.lr = 0x8303A938;
	sub_825952B8(ctx, base);
loc_8303A938:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8303A954"))) PPC_WEAK_FUNC(sub_8303A954);
PPC_FUNC_IMPL(__imp__sub_8303A954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303A958"))) PPC_WEAK_FUNC(sub_8303A958);
PPC_FUNC_IMPL(__imp__sub_8303A958) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303A988;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303a9c8
	if (cr6.eq) goto loc_8303A9C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303A99C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-11352
	ctx.r8.s64 = ctx.r10.s64 + -11352;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8303a9cc
	goto loc_8303A9CC;
loc_8303A9C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303A9CC:
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

__attribute__((alias("__imp__sub_8303A9E4"))) PPC_WEAK_FUNC(sub_8303A9E4);
PPC_FUNC_IMPL(__imp__sub_8303A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303A9E8"))) PPC_WEAK_FUNC(sub_8303A9E8);
PPC_FUNC_IMPL(__imp__sub_8303A9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303a9f8
	if (cr6.lt) goto loc_8303A9F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303A9F8:
	// b 0x8303a958
	sub_8303A958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303A9FC"))) PPC_WEAK_FUNC(sub_8303A9FC);
PPC_FUNC_IMPL(__imp__sub_8303A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303AA00"))) PPC_WEAK_FUNC(sub_8303AA00);
PPC_FUNC_IMPL(__imp__sub_8303AA00) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8303aae8
	if (cr6.gt) goto loc_8303AAE8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8303aa4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303AA4C;
	// bdzf 4*cr6+eq,0x8303aa90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303AA90;
	// bdzf 4*cr6+eq,0x8303ab0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303AB0C;
	// bdzf 4*cr6+eq,0x8303ab14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303AB14;
	// bne cr6,0x8303ab4c
	if (!cr6.eq) goto loc_8303AB4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303AA4C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-11448
	ctx.r11.s64 = ctx.r11.s64 + -11448;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x8303AA60;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303AA6C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303AA78;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303aae8
	goto loc_8303AAE8;
loc_8303AA90:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8303AA98;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303aae8
	if (cr6.eq) goto loc_8303AAE8;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303aac8
	if (cr6.eq) goto loc_8303AAC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303AAC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8303AAC8:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8303ab04
	if (!cr6.eq) goto loc_8303AB04;
	// bl 0x830ff290
	ctx.lr = 0x8303AAD4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x8303ab04
	if (cr6.eq) goto loc_8303AB04;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8303AAE4:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303AAE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303AAEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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
loc_8303AB04:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8303aae4
	goto loc_8303AAE4;
loc_8303AB0C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8303aae4
	goto loc_8303AAE4;
loc_8303AB14:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-11448
	ctx.r11.s64 = ctx.r11.s64 + -11448;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303AB28;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303AB34;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8303AB3C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303aaec
	goto loc_8303AAEC;
loc_8303AB4C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-11448
	ctx.r4.s64 = ctx.r11.s64 + -11448;
	// bl 0x837b0c10
	ctx.lr = 0x8303AB5C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303AB68;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8303AB70;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303aaec
	goto loc_8303AAEC;
}

__attribute__((alias("__imp__sub_8303AB80"))) PPC_WEAK_FUNC(sub_8303AB80);
PPC_FUNC_IMPL(__imp__sub_8303AB80) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303ABB0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303abe4
	if (cr6.eq) goto loc_8303ABE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303ABC4;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-10856
	ctx.r9.s64 = ctx.r11.s64 + -10856;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303abe8
	goto loc_8303ABE8;
loc_8303ABE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303ABE8:
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

__attribute__((alias("__imp__sub_8303AC00"))) PPC_WEAK_FUNC(sub_8303AC00);
PPC_FUNC_IMPL(__imp__sub_8303AC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303ac10
	if (cr6.lt) goto loc_8303AC10;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303AC10:
	// b 0x8303ab80
	sub_8303AB80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303AC14"))) PPC_WEAK_FUNC(sub_8303AC14);
PPC_FUNC_IMPL(__imp__sub_8303AC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303AC18"))) PPC_WEAK_FUNC(sub_8303AC18);
PPC_FUNC_IMPL(__imp__sub_8303AC18) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8303AC34;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303ac84
	if (!cr6.eq) goto loc_8303AC84;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-10948
	ctx.r11.s64 = ctx.r11.s64 + -10948;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8303AC54;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303AC60;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303ace8
	if (cr6.lt) goto loc_8303ACE8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8303AC80;
	sub_825952B8(ctx, base);
	// b 0x8303ace8
	goto loc_8303ACE8;
loc_8303AC84:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8303accc
	if (cr6.eq) goto loc_8303ACCC;
	// addi r11,r11,-10948
	ctx.r11.s64 = ctx.r11.s64 + -10948;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8303ACA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303ACB4;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8303ACBC;
	sub_8387E8E0(ctx, base);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,128(r9)
	PPC_STORE_U8(ctx.r9.u32 + 128, ctx.r10.u8);
	// b 0x8303ace8
	goto loc_8303ACE8;
loc_8303ACCC:
	// addi r4,r11,-10948
	ctx.r4.s64 = ctx.r11.s64 + -10948;
	// bl 0x837b0c10
	ctx.lr = 0x8303ACD4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303ACE0;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8303ACE8;
	sub_8387E8E0(ctx, base);
loc_8303ACE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8303AD04"))) PPC_WEAK_FUNC(sub_8303AD04);
PPC_FUNC_IMPL(__imp__sub_8303AD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303AD08"))) PPC_WEAK_FUNC(sub_8303AD08);
PPC_FUNC_IMPL(__imp__sub_8303AD08) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303AD38;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303ad78
	if (cr6.eq) goto loc_8303AD78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303AD4C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-10352
	ctx.r8.s64 = ctx.r10.s64 + -10352;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8303ad7c
	goto loc_8303AD7C;
loc_8303AD78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303AD7C:
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

__attribute__((alias("__imp__sub_8303AD94"))) PPC_WEAK_FUNC(sub_8303AD94);
PPC_FUNC_IMPL(__imp__sub_8303AD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303AD98"))) PPC_WEAK_FUNC(sub_8303AD98);
PPC_FUNC_IMPL(__imp__sub_8303AD98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303ada8
	if (cr6.lt) goto loc_8303ADA8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303ADA8:
	// b 0x8303ad08
	sub_8303AD08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303ADAC"))) PPC_WEAK_FUNC(sub_8303ADAC);
PPC_FUNC_IMPL(__imp__sub_8303ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303ADB0"))) PPC_WEAK_FUNC(sub_8303ADB0);
PPC_FUNC_IMPL(__imp__sub_8303ADB0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8303ae88
	if (cr6.gt) goto loc_8303AE88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8303adfc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303ADFC;
	// bdzf 4*cr6+eq,0x8303ae40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303AE40;
	// bdzf 4*cr6+eq,0x8303aeac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303AEAC;
	// bdzf 4*cr6+eq,0x8303aeb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303AEB4;
	// bne cr6,0x8303aeec
	if (!cr6.eq) goto loc_8303AEEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303ADFC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-10444
	ctx.r11.s64 = ctx.r11.s64 + -10444;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x8303AE10;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303AE1C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303AE28;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303ae88
	goto loc_8303AE88;
loc_8303AE40:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8303AE48;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303ae88
	if (cr6.eq) goto loc_8303AE88;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303ae78
	if (cr6.eq) goto loc_8303AE78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303AE70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8303AE78:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8303aea4
	if (!cr6.eq) goto loc_8303AEA4;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8303AE84:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303AE88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303AE8C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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
loc_8303AEA4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8303ae84
	goto loc_8303AE84;
loc_8303AEAC:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8303ae84
	goto loc_8303AE84;
loc_8303AEB4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-10444
	ctx.r11.s64 = ctx.r11.s64 + -10444;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303AEC8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303AED4;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8303AEDC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303ae8c
	goto loc_8303AE8C;
loc_8303AEEC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-10444
	ctx.r4.s64 = ctx.r11.s64 + -10444;
	// bl 0x837b0c10
	ctx.lr = 0x8303AEFC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303AF08;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8303AF10;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303ae8c
	goto loc_8303AE8C;
}

__attribute__((alias("__imp__sub_8303AF20"))) PPC_WEAK_FUNC(sub_8303AF20);
PPC_FUNC_IMPL(__imp__sub_8303AF20) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303AF50;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303af94
	if (cr6.eq) goto loc_8303AF94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303AF64;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-9824
	ctx.r8.s64 = ctx.r10.s64 + -9824;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x8303af98
	goto loc_8303AF98;
loc_8303AF94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303AF98:
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

__attribute__((alias("__imp__sub_8303AFB0"))) PPC_WEAK_FUNC(sub_8303AFB0);
PPC_FUNC_IMPL(__imp__sub_8303AFB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303afc0
	if (cr6.lt) goto loc_8303AFC0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303AFC0:
	// b 0x8303af20
	sub_8303AF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303AFC4"))) PPC_WEAK_FUNC(sub_8303AFC4);
PPC_FUNC_IMPL(__imp__sub_8303AFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303AFC8"))) PPC_WEAK_FUNC(sub_8303AFC8);
PPC_FUNC_IMPL(__imp__sub_8303AFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8303AFD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8303b0c0
	if (cr6.gt) goto loc_8303B0C0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8303b014
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B014;
	// bdzf 4*cr6+eq,0x8303b078
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B078;
	// bdzf 4*cr6+eq,0x8303b0e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B0E0;
	// bdzf 4*cr6+eq,0x8303b12c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B12C;
	// bdzf 4*cr6+eq,0x8303b180
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B180;
	// bdzf 4*cr6+eq,0x8303b194
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B194;
	// bne cr6,0x8303b1d0
	if (!cr6.eq) goto loc_8303B1D0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_8303B014:
	// bl 0x82d86078
	ctx.lr = 0x8303B018;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b0cc
	if (cr6.eq) goto loc_8303B0CC;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r9,-9916
	ctx.r11.s64 = ctx.r9.s64 + -9916;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// stw r29,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r29.u32);
	// bl 0x837b0c10
	ctx.lr = 0x8303B03C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303B048;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B054;
	sub_8387E8E0(ctx, base);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r6,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8303B078:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8303B080;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303b0c0
	if (cr6.eq) goto loc_8303B0C0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b0b0
	if (cr6.eq) goto loc_8303B0B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303B0A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8303B0B0:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8303b0cc
	if (!cr6.eq) goto loc_8303B0CC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303B0C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8303B0CC:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8303B0E0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-9916
	ctx.r11.s64 = ctx.r11.s64 + -9916;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x8303B0F4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303B100;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B10C;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8303B12C:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x8303B134;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303b0c0
	if (cr6.eq) goto loc_8303B0C0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b164
	if (cr6.eq) goto loc_8303B164;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303B15C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_8303B164:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8303b0cc
	if (!cr6.eq) goto loc_8303B0CC;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8303B180:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8303B194:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-9916
	ctx.r11.s64 = ctx.r11.s64 + -9916;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303B1A8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303B1B4;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B1BC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8303B1D0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-9916
	ctx.r4.s64 = ctx.r11.s64 + -9916;
	// bl 0x837b0c10
	ctx.lr = 0x8303B1E0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303B1EC;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B1F4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303B208"))) PPC_WEAK_FUNC(sub_8303B208);
PPC_FUNC_IMPL(__imp__sub_8303B208) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303B238;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b278
	if (cr6.eq) goto loc_8303B278;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303B24C;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-9312
	ctx.r8.s64 = ctx.r10.s64 + -9312;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8303b27c
	goto loc_8303B27C;
loc_8303B278:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303B27C:
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

__attribute__((alias("__imp__sub_8303B294"))) PPC_WEAK_FUNC(sub_8303B294);
PPC_FUNC_IMPL(__imp__sub_8303B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303B298"))) PPC_WEAK_FUNC(sub_8303B298);
PPC_FUNC_IMPL(__imp__sub_8303B298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303b2a8
	if (cr6.lt) goto loc_8303B2A8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303B2A8:
	// b 0x8303b208
	sub_8303B208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303B2AC"))) PPC_WEAK_FUNC(sub_8303B2AC);
PPC_FUNC_IMPL(__imp__sub_8303B2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303B2B0"))) PPC_WEAK_FUNC(sub_8303B2B0);
PPC_FUNC_IMPL(__imp__sub_8303B2B0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8303b3a8
	if (cr6.gt) goto loc_8303B3A8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8303b2fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B2FC;
	// bdzf 4*cr6+eq,0x8303b360
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B360;
	// bdzf 4*cr6+eq,0x8303b3cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B3CC;
	// bdzf 4*cr6+eq,0x8303b3d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B3D4;
	// bne cr6,0x8303b40c
	if (!cr6.eq) goto loc_8303B40C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303B2FC:
	// bl 0x82d86078
	ctx.lr = 0x8303B300;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b3c4
	if (cr6.eq) goto loc_8303B3C4;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82d860f0
	ctx.lr = 0x8303B310;
	sub_82D860F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da6520
	ctx.lr = 0x8303B31C;
	sub_82DA6520(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-9408
	ctx.r11.s64 = ctx.r11.s64 + -9408;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x8303B330;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303B33C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B348;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303b3a8
	goto loc_8303B3A8;
loc_8303B360:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8303B368;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303b3a8
	if (cr6.eq) goto loc_8303B3A8;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b398
	if (cr6.eq) goto loc_8303B398;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303B390;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8303B398:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8303b3c4
	if (!cr6.eq) goto loc_8303B3C4;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8303B3A4:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303B3A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303B3AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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
loc_8303B3C4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8303b3a4
	goto loc_8303B3A4;
loc_8303B3CC:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8303b3a4
	goto loc_8303B3A4;
loc_8303B3D4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-9408
	ctx.r11.s64 = ctx.r11.s64 + -9408;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303B3E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303B3F4;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B3FC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303b3ac
	goto loc_8303B3AC;
loc_8303B40C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-9408
	ctx.r4.s64 = ctx.r11.s64 + -9408;
	// bl 0x837b0c10
	ctx.lr = 0x8303B41C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303B428;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B430;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303b3ac
	goto loc_8303B3AC;
}

__attribute__((alias("__imp__sub_8303B440"))) PPC_WEAK_FUNC(sub_8303B440);
PPC_FUNC_IMPL(__imp__sub_8303B440) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303B470;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b4b4
	if (cr6.eq) goto loc_8303B4B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303B484;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-8792
	ctx.r8.s64 = ctx.r10.s64 + -8792;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x8303b4b8
	goto loc_8303B4B8;
loc_8303B4B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303B4B8:
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

__attribute__((alias("__imp__sub_8303B4D0"))) PPC_WEAK_FUNC(sub_8303B4D0);
PPC_FUNC_IMPL(__imp__sub_8303B4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303b4e0
	if (cr6.lt) goto loc_8303B4E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303B4E0:
	// b 0x8303b440
	sub_8303B440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303B4E4"))) PPC_WEAK_FUNC(sub_8303B4E4);
PPC_FUNC_IMPL(__imp__sub_8303B4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303B4E8"))) PPC_WEAK_FUNC(sub_8303B4E8);
PPC_FUNC_IMPL(__imp__sub_8303B4E8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x8303b5d0
	if (cr6.gt) goto loc_8303B5D0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8303b540
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B540;
	// bdzf 4*cr6+eq,0x8303b588
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B588;
	// bdzf 4*cr6+eq,0x8303b5f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B5F4;
	// bdzf 4*cr6+eq,0x8303b63c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B63C;
	// bdzf 4*cr6+eq,0x8303b680
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B680;
	// bdzf 4*cr6+eq,0x8303b6c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B6C8;
	// bdzf 4*cr6+eq,0x8303b6d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B6D0;
	// bne cr6,0x8303b708
	if (!cr6.eq) goto loc_8303B708;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303B540:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-8888
	ctx.r11.s64 = ctx.r11.s64 + -8888;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x8303B554;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303B560;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B56C;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8303b5d0
	goto loc_8303B5D0;
loc_8303B588:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8303B590;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303b5d0
	if (cr6.eq) goto loc_8303B5D0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b5c0
	if (cr6.eq) goto loc_8303B5C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303B5B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8303B5C0:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8303b5ec
	if (!cr6.eq) goto loc_8303B5EC;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8303B5CC:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303B5D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303B5D4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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
loc_8303B5EC:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8303b5cc
	goto loc_8303B5CC;
loc_8303B5F4:
	// bl 0x82d86078
	ctx.lr = 0x8303B5F8;
	sub_82D86078(ctx, base);
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x83102db0
	ctx.lr = 0x8303B600;
	sub_83102DB0(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8303b61c
	if (!cr6.eq) goto loc_8303B61C;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8303b620
	if (!cr6.eq) goto loc_8303B620;
loc_8303B61C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8303B620:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303b5d0
	goto loc_8303B5D0;
loc_8303B63C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-8888
	ctx.r11.s64 = ctx.r11.s64 + -8888;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8303B650;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303B65C;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B668;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303b5d0
	goto loc_8303B5D0;
loc_8303B680:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x8303B688;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303b5d0
	if (cr6.eq) goto loc_8303B5D0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b6b8
	if (cr6.eq) goto loc_8303B6B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303B6B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_8303B6B8:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8303b5ec
	if (!cr6.eq) goto loc_8303B5EC;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8303b5cc
	goto loc_8303B5CC;
loc_8303B6C8:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8303b5cc
	goto loc_8303B5CC;
loc_8303B6D0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-8888
	ctx.r11.s64 = ctx.r11.s64 + -8888;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303B6E4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303B6F0;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B6F8;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303b5d4
	goto loc_8303B5D4;
loc_8303B708:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-8888
	ctx.r4.s64 = ctx.r11.s64 + -8888;
	// bl 0x837b0c10
	ctx.lr = 0x8303B718;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303B724;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B72C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303b5d4
	goto loc_8303B5D4;
}

__attribute__((alias("__imp__sub_8303B73C"))) PPC_WEAK_FUNC(sub_8303B73C);
PPC_FUNC_IMPL(__imp__sub_8303B73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303B740"))) PPC_WEAK_FUNC(sub_8303B740);
PPC_FUNC_IMPL(__imp__sub_8303B740) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303B770;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b7b0
	if (cr6.eq) goto loc_8303B7B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303B784;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-8280
	ctx.r8.s64 = ctx.r10.s64 + -8280;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8303b7b4
	goto loc_8303B7B4;
loc_8303B7B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303B7B4:
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

__attribute__((alias("__imp__sub_8303B7CC"))) PPC_WEAK_FUNC(sub_8303B7CC);
PPC_FUNC_IMPL(__imp__sub_8303B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303B7D0"))) PPC_WEAK_FUNC(sub_8303B7D0);
PPC_FUNC_IMPL(__imp__sub_8303B7D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303b7e0
	if (cr6.lt) goto loc_8303B7E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303B7E0:
	// b 0x8303b740
	sub_8303B740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303B7E4"))) PPC_WEAK_FUNC(sub_8303B7E4);
PPC_FUNC_IMPL(__imp__sub_8303B7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303B7E8"))) PPC_WEAK_FUNC(sub_8303B7E8);
PPC_FUNC_IMPL(__imp__sub_8303B7E8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8303b848
	if (cr6.gt) goto loc_8303B848;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8303b87c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B87C;
	// bdzf 4*cr6+eq,0x8303b8c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B8C4;
	// bdzf 4*cr6+eq,0x8303b918
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B918;
	// bdzf 4*cr6+eq,0x8303b974
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B974;
	// bdzf 4*cr6+eq,0x8303b97c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B97C;
	// bdzf 4*cr6+eq,0x8303b9b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303B9B4;
	// bne cr6,0x8303b9ec
	if (!cr6.eq) goto loc_8303B9EC;
	// bl 0x82d86078
	ctx.lr = 0x8303B838;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303b864
	if (!cr6.eq) goto loc_8303B864;
loc_8303B840:
	// li r11,4
	ctx.r11.s64 = 4;
loc_8303B844:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8303B848:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303B84C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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
loc_8303B864:
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x83102db0
	ctx.lr = 0x8303B86C;
	sub_83102DB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_8303B87C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-8372
	ctx.r11.s64 = ctx.r11.s64 + -8372;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x8303B890;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8303B89C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B8A8;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8303b848
	goto loc_8303B848;
loc_8303B8C4:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x8303B8CC;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8303b848
	if (cr6.eq) goto loc_8303B848;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b8fc
	if (cr6.eq) goto loc_8303B8FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303B8F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8303B8FC:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x8303b848
	goto loc_8303B848;
loc_8303B918:
	// bl 0x82d86078
	ctx.lr = 0x8303B91C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303b840
	if (cr6.eq) goto loc_8303B840;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x83102db0
	ctx.lr = 0x8303B92C;
	sub_83102DB0(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8303b948
	if (!cr6.eq) goto loc_8303B948;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8303b94c
	if (!cr6.eq) goto loc_8303B94C;
loc_8303B948:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8303B94C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303b96c
	if (cr6.eq) goto loc_8303B96C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// b 0x8303b848
	goto loc_8303B848;
loc_8303B96C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8303b844
	goto loc_8303B844;
loc_8303B974:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8303b844
	goto loc_8303B844;
loc_8303B97C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-8372
	ctx.r11.s64 = ctx.r11.s64 + -8372;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x837b0c10
	ctx.lr = 0x8303B990;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303B99C;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B9A4;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303b84c
	goto loc_8303B84C;
loc_8303B9B4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-8372
	ctx.r11.s64 = ctx.r11.s64 + -8372;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x837b0c10
	ctx.lr = 0x8303B9C8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303B9D4;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8303B9DC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303b84c
	goto loc_8303B84C;
loc_8303B9EC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-8372
	ctx.r4.s64 = ctx.r11.s64 + -8372;
	// bl 0x837b0c10
	ctx.lr = 0x8303B9FC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303BA08;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8303BA10;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8303b84c
	goto loc_8303B84C;
}

__attribute__((alias("__imp__sub_8303BA20"))) PPC_WEAK_FUNC(sub_8303BA20);
PPC_FUNC_IMPL(__imp__sub_8303BA20) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303BA50;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303ba84
	if (cr6.eq) goto loc_8303BA84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303BA64;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-7808
	ctx.r9.s64 = ctx.r11.s64 + -7808;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303ba88
	goto loc_8303BA88;
loc_8303BA84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303BA88:
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

__attribute__((alias("__imp__sub_8303BAA0"))) PPC_WEAK_FUNC(sub_8303BAA0);
PPC_FUNC_IMPL(__imp__sub_8303BAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303bab0
	if (cr6.lt) goto loc_8303BAB0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303BAB0:
	// b 0x8303ba20
	sub_8303BA20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303BAB4"))) PPC_WEAK_FUNC(sub_8303BAB4);
PPC_FUNC_IMPL(__imp__sub_8303BAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303BAB8"))) PPC_WEAK_FUNC(sub_8303BAB8);
PPC_FUNC_IMPL(__imp__sub_8303BAB8) {
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
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r9,-7900
	ctx.r4.s64 = ctx.r9.s64 + -7900;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8303BAF4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303BB00;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8303bb20
	if (cr6.lt) goto loc_8303BB20;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8303BB20;
	sub_825952B8(ctx, base);
loc_8303BB20:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8303BB38"))) PPC_WEAK_FUNC(sub_8303BB38);
PPC_FUNC_IMPL(__imp__sub_8303BB38) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303BB48;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303bb58
	if (cr6.eq) goto loc_8303BB58;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x82da7430
	ctx.lr = 0x8303BB58;
	sub_82DA7430(ctx, base);
loc_8303BB58:
	// bl 0x82d47978
	ctx.lr = 0x8303BB5C;
	sub_82D47978(ctx, base);
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

__attribute__((alias("__imp__sub_8303BB70"))) PPC_WEAK_FUNC(sub_8303BB70);
PPC_FUNC_IMPL(__imp__sub_8303BB70) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303BBA0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303bbd4
	if (cr6.eq) goto loc_8303BBD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303BBB4;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r11,-7320
	ctx.r9.s64 = ctx.r11.s64 + -7320;
	// addi r8,r10,-7328
	ctx.r8.s64 = ctx.r10.s64 + -7328;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303bbd8
	goto loc_8303BBD8;
loc_8303BBD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303BBD8:
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

__attribute__((alias("__imp__sub_8303BBF0"))) PPC_WEAK_FUNC(sub_8303BBF0);
PPC_FUNC_IMPL(__imp__sub_8303BBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303bc00
	if (cr6.lt) goto loc_8303BC00;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303BC00:
	// b 0x8303bb70
	sub_8303BB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303BC04"))) PPC_WEAK_FUNC(sub_8303BC04);
PPC_FUNC_IMPL(__imp__sub_8303BC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303BC08"))) PPC_WEAK_FUNC(sub_8303BC08);
PPC_FUNC_IMPL(__imp__sub_8303BC08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8303BC34;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8303bc68
	if (cr6.eq) goto loc_8303BC68;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r8,r9,-7212
	ctx.r8.s64 = ctx.r9.s64 + -7212;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r10,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r10.u8);
	// b 0x8303bc6c
	goto loc_8303BC6C;
loc_8303BC68:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8303BC6C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x8303BC84;
	sub_83878E28(ctx, base);
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

__attribute__((alias("__imp__sub_8303BC9C"))) PPC_WEAK_FUNC(sub_8303BC9C);
PPC_FUNC_IMPL(__imp__sub_8303BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303BCA0"))) PPC_WEAK_FUNC(sub_8303BCA0);
PPC_FUNC_IMPL(__imp__sub_8303BCA0) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303BCB8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303bd00
	if (!cr6.eq) goto loc_8303BD00;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-7420
	ctx.r11.s64 = ctx.r11.s64 + -7420;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303BCD4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303BCE0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303bd44
	if (cr6.lt) goto loc_8303BD44;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8303bd40
	goto loc_8303BD40;
loc_8303BD00:
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x82da7430
	ctx.lr = 0x8303BD08;
	sub_82DA7430(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-7420
	ctx.r4.s64 = ctx.r11.s64 + -7420;
	// bl 0x837b0c10
	ctx.lr = 0x8303BD18;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303BD24;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303bd44
	if (cr6.lt) goto loc_8303BD44;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8303BD40:
	// bl 0x825952b8
	ctx.lr = 0x8303BD44;
	sub_825952B8(ctx, base);
loc_8303BD44:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8303BD5C"))) PPC_WEAK_FUNC(sub_8303BD5C);
PPC_FUNC_IMPL(__imp__sub_8303BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303BD60"))) PPC_WEAK_FUNC(sub_8303BD60);
PPC_FUNC_IMPL(__imp__sub_8303BD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8303bd7c
	if (!cr6.eq) goto loc_8303BD7C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_8303BD7C:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303BD80"))) PPC_WEAK_FUNC(sub_8303BD80);
PPC_FUNC_IMPL(__imp__sub_8303BD80) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303BDB0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303bdec
	if (cr6.eq) goto loc_8303BDEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303BDC4;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6744
	ctx.r9.s64 = ctx.r11.s64 + -6744;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8303bdf0
	goto loc_8303BDF0;
loc_8303BDEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303BDF0:
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

__attribute__((alias("__imp__sub_8303BE08"))) PPC_WEAK_FUNC(sub_8303BE08);
PPC_FUNC_IMPL(__imp__sub_8303BE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303be18
	if (cr6.lt) goto loc_8303BE18;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303BE18:
	// b 0x8303bd80
	sub_8303BD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303BE1C"))) PPC_WEAK_FUNC(sub_8303BE1C);
PPC_FUNC_IMPL(__imp__sub_8303BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303BE20"))) PPC_WEAK_FUNC(sub_8303BE20);
PPC_FUNC_IMPL(__imp__sub_8303BE20) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8303c054
	if (cr6.gt) goto loc_8303C054;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8303bf7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303BF7C;
	// bdzf 4*cr6+eq,0x8303bfa4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303BFA4;
	// bdzf 4*cr6+eq,0x8303bfe4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303BFE4;
	// bdzf 4*cr6+eq,0x8303bfec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303BFEC;
	// bne cr6,0x8303c020
	if (!cr6.eq) goto loc_8303C020;
	// bl 0x82d86078
	ctx.lr = 0x8303BE68;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303be80
	if (!cr6.eq) goto loc_8303BE80;
loc_8303BE70:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// b 0x8303c09c
	goto loc_8303C09C;
loc_8303BE80:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8303bea0
	if (!cr6.eq) goto loc_8303BEA0;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// b 0x8303c09c
	goto loc_8303C09C;
loc_8303BEA0:
	// bl 0x82e6f960
	ctx.lr = 0x8303BEA4;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303be70
	if (cr6.eq) goto loc_8303BE70;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stb r31,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r31.u8);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stb r31,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r31.u8);
	// stb r31,226(r1)
	PPC_STORE_U8(ctx.r1.u32 + 226, ctx.r31.u8);
	// stb r31,227(r1)
	PPC_STORE_U8(ctx.r1.u32 + 227, ctx.r31.u8);
	// stb r31,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r31.u8);
	// stb r31,229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 229, ctx.r31.u8);
	// stb r31,230(r1)
	PPC_STORE_U8(ctx.r1.u32 + 230, ctx.r31.u8);
	// stb r31,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r31.u8);
	// bl 0x82e1d1d0
	ctx.lr = 0x8303BEF8;
	sub_82E1D1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303be70
	if (cr6.eq) goto loc_8303BE70;
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303bf18
	if (cr6.eq) goto loc_8303BF18;
	// lbz r10,225(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 225);
loc_8303BF18:
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8303bf40
	if (cr6.eq) goto loc_8303BF40;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// b 0x8303c09c
	goto loc_8303C09C;
loc_8303BF40:
	// lbz r11,226(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 226);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303bf50
	if (cr6.eq) goto loc_8303BF50;
	// lbz r31,227(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 227);
loc_8303BF50:
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 & ctx.r31.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r5,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// stw r4,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r4.u32);
	// b 0x8303c09c
	goto loc_8303C09C;
loc_8303BF7C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-6836
	ctx.r11.s64 = ctx.r11.s64 + -6836;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8303BF98;
	sub_82D2FA90(ctx, base);
	// lis r4,506
	ctx.r4.s64 = 33161216;
	// ori r4,r4,236
	ctx.r4.u64 = ctx.r4.u64 | 236;
	// b 0x8303bfc8
	goto loc_8303BFC8;
loc_8303BFA4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-6836
	ctx.r11.s64 = ctx.r11.s64 + -6836;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8303BFC0;
	sub_82D2FA90(ctx, base);
	// lis r4,506
	ctx.r4.s64 = 33161216;
	// ori r4,r4,237
	ctx.r4.u64 = ctx.r4.u64 | 237;
loc_8303BFC8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x8303BFD0;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x8303BFDC;
	sub_83103100(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
loc_8303BFE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8303c09c
	goto loc_8303C09C;
loc_8303BFEC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-6836
	ctx.r11.s64 = ctx.r11.s64 + -6836;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8303C000;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303C00C;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8303C014;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// b 0x8303c098
	goto loc_8303C098;
loc_8303C020:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-6836
	ctx.r11.s64 = ctx.r11.s64 + -6836;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303C034;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303C040;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8303C048;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// b 0x8303c098
	goto loc_8303C098;
loc_8303C054:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-6836
	ctx.r4.s64 = ctx.r11.s64 + -6836;
	// bl 0x837b0c10
	ctx.lr = 0x8303C064;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303C070;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303c090
	if (cr6.lt) goto loc_8303C090;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8303C090;
	sub_825952B8(ctx, base);
loc_8303C090:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_8303C098:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8303C09C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_8303C0B4"))) PPC_WEAK_FUNC(sub_8303C0B4);
PPC_FUNC_IMPL(__imp__sub_8303C0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303C0B8"))) PPC_WEAK_FUNC(sub_8303C0B8);
PPC_FUNC_IMPL(__imp__sub_8303C0B8) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6488
	ctx.r9.s64 = ctx.r11.s64 + -6488;
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
	// bl 0x82f42278
	ctx.lr = 0x8303C0F0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8303c108
	if (cr6.eq) goto loc_8303C108;
	// bl 0x82416268
	ctx.lr = 0x8303C104;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303C108:
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

__attribute__((alias("__imp__sub_8303C120"))) PPC_WEAK_FUNC(sub_8303C120);
PPC_FUNC_IMPL(__imp__sub_8303C120) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303C150;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303c184
	if (cr6.eq) goto loc_8303C184;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8303C164;
	sub_82F42220(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6488
	ctx.r9.s64 = ctx.r11.s64 + -6488;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303c188
	goto loc_8303C188;
loc_8303C184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303C188:
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

__attribute__((alias("__imp__sub_8303C1A0"))) PPC_WEAK_FUNC(sub_8303C1A0);
PPC_FUNC_IMPL(__imp__sub_8303C1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303c1b0
	if (cr6.lt) goto loc_8303C1B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303C1B0:
	// b 0x8303c120
	sub_8303C120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303C1B4"))) PPC_WEAK_FUNC(sub_8303C1B4);
PPC_FUNC_IMPL(__imp__sub_8303C1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303C1B8"))) PPC_WEAK_FUNC(sub_8303C1B8);
PPC_FUNC_IMPL(__imp__sub_8303C1B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8303C1D0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303c1e8
	if (cr6.eq) goto loc_8303C1E8;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x8303C1E0;
	sub_82DA2518(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82df16e8
	ctx.lr = 0x8303C1E8;
	sub_82DF16E8(ctx, base);
loc_8303C1E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,-6584
	ctx.r4.s64 = ctx.r9.s64 + -6584;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8303C210;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303C21C;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8303c23c
	if (cr6.lt) goto loc_8303C23C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8303C23C;
	sub_825952B8(ctx, base);
loc_8303C23C:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8303C254"))) PPC_WEAK_FUNC(sub_8303C254);
PPC_FUNC_IMPL(__imp__sub_8303C254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303C258"))) PPC_WEAK_FUNC(sub_8303C258);
PPC_FUNC_IMPL(__imp__sub_8303C258) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6240
	ctx.r9.s64 = ctx.r11.s64 + -6240;
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
	// bl 0x82f42278
	ctx.lr = 0x8303C290;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8303c2a8
	if (cr6.eq) goto loc_8303C2A8;
	// bl 0x82416268
	ctx.lr = 0x8303C2A4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303C2A8:
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

__attribute__((alias("__imp__sub_8303C2C0"))) PPC_WEAK_FUNC(sub_8303C2C0);
PPC_FUNC_IMPL(__imp__sub_8303C2C0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303C2F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303c324
	if (cr6.eq) goto loc_8303C324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8303C304;
	sub_82F42220(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6240
	ctx.r9.s64 = ctx.r11.s64 + -6240;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303c328
	goto loc_8303C328;
loc_8303C324:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303C328:
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

__attribute__((alias("__imp__sub_8303C340"))) PPC_WEAK_FUNC(sub_8303C340);
PPC_FUNC_IMPL(__imp__sub_8303C340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303c350
	if (cr6.lt) goto loc_8303C350;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303C350:
	// b 0x8303c2c0
	sub_8303C2C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303C354"))) PPC_WEAK_FUNC(sub_8303C354);
PPC_FUNC_IMPL(__imp__sub_8303C354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303C358"))) PPC_WEAK_FUNC(sub_8303C358);
PPC_FUNC_IMPL(__imp__sub_8303C358) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x8303C370;
	sub_830FF290(ctx, base);
	// bl 0x82df1558
	ctx.lr = 0x8303C374;
	sub_82DF1558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8303c398
	if (!cr6.eq) goto loc_8303C398;
loc_8303C380:
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
loc_8303C398:
	// bl 0x831156e8
	ctx.lr = 0x8303C39C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303c380
	if (cr6.eq) goto loc_8303C380;
	// bl 0x831156e8
	ctx.lr = 0x8303C3A8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303c3c8
	if (cr6.eq) goto loc_8303C3C8;
	// bl 0x83115808
	ctx.lr = 0x8303C3B8;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8303c3cc
	if (!cr6.eq) goto loc_8303C3CC;
loc_8303C3C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8303C3CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303c380
	if (cr6.eq) goto loc_8303C380;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6332
	ctx.r4.s64 = ctx.r11.s64 + -6332;
	// bl 0x837b0c10
	ctx.lr = 0x8303C3E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303C3F4;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8303C3FC;
	sub_8387E8E0(ctx, base);
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

__attribute__((alias("__imp__sub_8303C414"))) PPC_WEAK_FUNC(sub_8303C414);
PPC_FUNC_IMPL(__imp__sub_8303C414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303C418"))) PPC_WEAK_FUNC(sub_8303C418);
PPC_FUNC_IMPL(__imp__sub_8303C418) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303C448;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303c484
	if (cr6.eq) goto loc_8303C484;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303C45C;
	sub_83061E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5736
	ctx.r9.s64 = ctx.r11.s64 + -5736;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x8303c488
	goto loc_8303C488;
loc_8303C484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303C488:
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

__attribute__((alias("__imp__sub_8303C4A0"))) PPC_WEAK_FUNC(sub_8303C4A0);
PPC_FUNC_IMPL(__imp__sub_8303C4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303c4b0
	if (cr6.lt) goto loc_8303C4B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303C4B0:
	// b 0x8303c418
	sub_8303C418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303C4B4"))) PPC_WEAK_FUNC(sub_8303C4B4);
PPC_FUNC_IMPL(__imp__sub_8303C4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303C4B8"))) PPC_WEAK_FUNC(sub_8303C4B8);
PPC_FUNC_IMPL(__imp__sub_8303C4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8303C4C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-2992(r1)
	ea = -2992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8303C4D0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303c52c
	if (!cr6.eq) goto loc_8303C52C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-5828
	ctx.r11.s64 = ctx.r11.s64 + -5828;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x8303C4EC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303C4F8;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303c518
	if (cr6.lt) goto loc_8303C518;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8303C518;
	sub_825952B8(ctx, base);
loc_8303C518:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8303C52C:
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8303c8a4
	if (cr6.gt) goto loc_8303C8A4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8303c6b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303C6B8;
	// bdzf 4*cr6+eq,0x8303c700
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303C700;
	// bdzf 4*cr6+eq,0x8303c7fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303C7FC;
	// bdzf 4*cr6+eq,0x8303c840
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8303C840;
	// bne cr6,0x8303c87c
	if (!cr6.eq) goto loc_8303C87C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8303C560;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8303C56C;
	sub_825832E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8303C578;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x8303C57C;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x8303C580;
	sub_825832F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303c5c8
	if (!cr6.eq) goto loc_8303C5C8;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-5828
	ctx.r11.s64 = ctx.r11.s64 + -5828;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x8303C5A0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303C5AC;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x8303C5B4;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8303C5C8:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82b54cc0
	ctx.lr = 0x8303C5D0;
	sub_82B54CC0(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,340
	ctx.r11.s64 = ctx.r1.s64 + 340;
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8303C5EC:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stbu r31,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8303c5ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8303C5EC;
	// stb r31,488(r1)
	PPC_STORE_U8(ctx.r1.u32 + 488, ctx.r31.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r31.u32);
	// bl 0x825832e0
	ctx.lr = 0x8303C608;
	sub_825832E0(ctx, base);
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d976a0
	ctx.lr = 0x8303C614;
	sub_82D976A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,2400
	ctx.r3.s64 = ctx.r1.s64 + 2400;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x8303C624;
	sub_831CE980(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,2880
	ctx.r4.s64 = ctx.r1.s64 + 2880;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x8303C634;
	sub_831CE980(ctx, base);
	// addi r30,r1,348
	ctx.r30.s64 = ctx.r1.s64 + 348;
loc_8303C638:
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x8303c668
	if (!cr6.lt) goto loc_8303C668;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lbzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x8303c668
	if (cr6.eq) goto loc_8303C668;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d975b8
	ctx.lr = 0x8303C658;
	sub_82D975B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r11.u32);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_8303C668:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x8303c638
	if (cr6.lt) goto loc_8303C638;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d98c30
	ctx.lr = 0x8303C680;
	sub_82D98C30(ctx, base);
	// stb r3,488(r1)
	PPC_STORE_U8(ctx.r1.u32 + 488, ctx.r3.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d999a0
	ctx.lr = 0x8303C68C;
	sub_82D999A0(ctx, base);
	// stw r3,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8303C698;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da4370
	ctx.lr = 0x8303C6A4;
	sub_82DA4370(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8303C6B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8303C6C0;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8303C6C8;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303c834
	if (cr6.eq) goto loc_8303C834;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8303C6DC;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8303C700:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x8303C708;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8303C714;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x8303C720;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x8303C724;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x8303C728;
	sub_825832F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303c770
	if (!cr6.eq) goto loc_8303C770;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-5828
	ctx.r11.s64 = ctx.r11.s64 + -5828;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8303C748;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303C754;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8303C75C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8303C770:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82b54cc0
	ctx.lr = 0x8303C778;
	sub_82B54CC0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// stw r31,2392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2392, ctx.r31.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8303C79C;
	sub_831CDCF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e0
	ctx.lr = 0x8303C7A4;
	sub_825832E0(ctx, base);
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d976a0
	ctx.lr = 0x8303C7B0;
	sub_82D976A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,2400
	ctx.r3.s64 = ctx.r1.s64 + 2400;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x8303C7C0;
	sub_831CE980(ctx, base);
	// addi r6,r1,2392
	ctx.r6.s64 = ctx.r1.s64 + 2392;
	// addi r5,r1,2400
	ctx.r5.s64 = ctx.r1.s64 + 2400;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82d8d090
	ctx.lr = 0x8303C7D4;
	sub_82D8D090(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da44b8
	ctx.lr = 0x8303C7DC;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4370
	ctx.lr = 0x8303C7E8;
	sub_82DA4370(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r10.u32);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8303C7FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x8303C804;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x8303C80C;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303c834
	if (cr6.eq) goto loc_8303C834;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x8303C820;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r9.u32);
loc_8303C834:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8303C840:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-5828
	ctx.r11.s64 = ctx.r11.s64 + -5828;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8303C854;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303C860;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8303C868;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8303C87C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-5828
	ctx.r11.s64 = ctx.r11.s64 + -5828;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303C890;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303C89C;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x8303c8c4
	goto loc_8303C8C4;
loc_8303C8A4:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-5828
	ctx.r4.s64 = ctx.r11.s64 + -5828;
	// bl 0x837b0c10
	ctx.lr = 0x8303C8B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303C8C0;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_8303C8C4:
	// bl 0x8387e8e0
	ctx.lr = 0x8303C8C8;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2992
	ctx.r1.s64 = ctx.r1.s64 + 2992;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303C8DC"))) PPC_WEAK_FUNC(sub_8303C8DC);
PPC_FUNC_IMPL(__imp__sub_8303C8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303C8E0"))) PPC_WEAK_FUNC(sub_8303C8E0);
PPC_FUNC_IMPL(__imp__sub_8303C8E0) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5472
	ctx.r9.s64 = ctx.r11.s64 + -5472;
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
	// bl 0x82f42278
	ctx.lr = 0x8303C918;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8303c930
	if (cr6.eq) goto loc_8303C930;
	// bl 0x82416268
	ctx.lr = 0x8303C92C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303C930:
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

__attribute__((alias("__imp__sub_8303C948"))) PPC_WEAK_FUNC(sub_8303C948);
PPC_FUNC_IMPL(__imp__sub_8303C948) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303C978;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303c9ac
	if (cr6.eq) goto loc_8303C9AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8303C98C;
	sub_82F42220(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5472
	ctx.r9.s64 = ctx.r11.s64 + -5472;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303c9b0
	goto loc_8303C9B0;
loc_8303C9AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303C9B0:
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

__attribute__((alias("__imp__sub_8303C9C8"))) PPC_WEAK_FUNC(sub_8303C9C8);
PPC_FUNC_IMPL(__imp__sub_8303C9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303c9d8
	if (cr6.lt) goto loc_8303C9D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303C9D8:
	// b 0x8303c948
	sub_8303C948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303C9DC"))) PPC_WEAK_FUNC(sub_8303C9DC);
PPC_FUNC_IMPL(__imp__sub_8303C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303C9E0"))) PPC_WEAK_FUNC(sub_8303C9E0);
PPC_FUNC_IMPL(__imp__sub_8303C9E0) {
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
	// bl 0x82d95f98
	ctx.lr = 0x8303C9F8;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// beq cr6,0x8303ca44
	if (cr6.eq) goto loc_8303CA44;
	// addi r11,r11,-5568
	ctx.r11.s64 = ctx.r11.s64 + -5568;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303CA18;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303CA24;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303ca7c
	if (cr6.lt) goto loc_8303CA7C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8303ca78
	goto loc_8303CA78;
loc_8303CA44:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-5568
	ctx.r4.s64 = ctx.r11.s64 + -5568;
	// bl 0x837b0c10
	ctx.lr = 0x8303CA50;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303CA5C;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303ca7c
	if (cr6.lt) goto loc_8303CA7C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8303CA78:
	// bl 0x825952b8
	ctx.lr = 0x8303CA7C;
	sub_825952B8(ctx, base);
loc_8303CA7C:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8303CA94"))) PPC_WEAK_FUNC(sub_8303CA94);
PPC_FUNC_IMPL(__imp__sub_8303CA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303CA98"))) PPC_WEAK_FUNC(sub_8303CA98);
PPC_FUNC_IMPL(__imp__sub_8303CA98) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5008
	ctx.r9.s64 = ctx.r11.s64 + -5008;
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
	// bl 0x82f42278
	ctx.lr = 0x8303CAD0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8303cae8
	if (cr6.eq) goto loc_8303CAE8;
	// bl 0x82416268
	ctx.lr = 0x8303CAE4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303CAE8:
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

__attribute__((alias("__imp__sub_8303CB00"))) PPC_WEAK_FUNC(sub_8303CB00);
PPC_FUNC_IMPL(__imp__sub_8303CB00) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303CB30;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303cb64
	if (cr6.eq) goto loc_8303CB64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8303CB44;
	sub_82F42220(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5008
	ctx.r9.s64 = ctx.r11.s64 + -5008;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303cb68
	goto loc_8303CB68;
loc_8303CB64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303CB68:
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

__attribute__((alias("__imp__sub_8303CB80"))) PPC_WEAK_FUNC(sub_8303CB80);
PPC_FUNC_IMPL(__imp__sub_8303CB80) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303CB94;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303cc8c
	if (cr6.eq) goto loc_8303CC8C;
	// bl 0x831156e8
	ctx.lr = 0x8303CBA0;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82d96138
	ctx.lr = 0x8303CBA8;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303cc00
	if (cr6.eq) goto loc_8303CC00;
	// addis r11,r31,221
	ctx.r11.s64 = ctx.r31.s64 + 14483456;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-26512
	ctx.r11.s64 = ctx.r11.s64 + -26512;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,1292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1292, ctx.r10.u32);
	// stw r9,1296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1296, ctx.r9.u32);
	// bl 0x82d34e50
	ctx.lr = 0x8303CBD0;
	sub_82D34E50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303cbe8
	if (cr6.eq) goto loc_8303CBE8;
	// bl 0x82d34e50
	ctx.lr = 0x8303CBDC;
	sub_82D34E50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d35038
	ctx.lr = 0x8303CBE8;
	sub_82D35038(ctx, base);
loc_8303CBE8:
	// bl 0x82d26ed8
	ctx.lr = 0x8303CBEC;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303cc8c
	if (cr6.eq) goto loc_8303CC8C;
	// bl 0x82d26ed8
	ctx.lr = 0x8303CBF8;
	sub_82D26ED8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8303cc88
	goto loc_8303CC88;
loc_8303CC00:
	// bl 0x83572958
	ctx.lr = 0x8303CC04;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303cc40
	if (cr6.eq) goto loc_8303CC40;
	// addis r11,r31,221
	ctx.r11.s64 = ctx.r31.s64 + 14483456;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r11,-26512
	ctx.r11.s64 = ctx.r11.s64 + -26512;
	// stw r10,1292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1292, ctx.r10.u32);
	// stw r9,1296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1296, ctx.r9.u32);
	// bl 0x82d34e50
	ctx.lr = 0x8303CC2C;
	sub_82D34E50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303cc74
	if (cr6.eq) goto loc_8303CC74;
	// bl 0x82d34e50
	ctx.lr = 0x8303CC38;
	sub_82D34E50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8303cc6c
	goto loc_8303CC6C;
loc_8303CC40:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addis r10,r31,221
	ctx.r10.s64 = ctx.r31.s64 + 14483456;
	// addi r10,r10,-26512
	ctx.r10.s64 = ctx.r10.s64 + -26512;
	// lwz r11,-19180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19180);
	// stw r9,1296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1296, ctx.r9.u32);
	// stw r11,1292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1292, ctx.r11.u32);
	// bl 0x82d34e50
	ctx.lr = 0x8303CC5C;
	sub_82D34E50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303cc74
	if (cr6.eq) goto loc_8303CC74;
	// bl 0x82d34e50
	ctx.lr = 0x8303CC68;
	sub_82D34E50(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
loc_8303CC6C:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d35038
	ctx.lr = 0x8303CC74;
	sub_82D35038(ctx, base);
loc_8303CC74:
	// bl 0x82d26ed8
	ctx.lr = 0x8303CC78;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303cc8c
	if (cr6.eq) goto loc_8303CC8C;
	// bl 0x82d26ed8
	ctx.lr = 0x8303CC84;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_8303CC88:
	// bl 0x82d26900
	ctx.lr = 0x8303CC8C;
	sub_82D26900(ctx, base);
loc_8303CC8C:
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

__attribute__((alias("__imp__sub_8303CCA0"))) PPC_WEAK_FUNC(sub_8303CCA0);
PPC_FUNC_IMPL(__imp__sub_8303CCA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303ccb0
	if (cr6.lt) goto loc_8303CCB0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303CCB0:
	// b 0x8303cb00
	sub_8303CB00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303CCB4"))) PPC_WEAK_FUNC(sub_8303CCB4);
PPC_FUNC_IMPL(__imp__sub_8303CCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303CCB8"))) PPC_WEAK_FUNC(sub_8303CCB8);
PPC_FUNC_IMPL(__imp__sub_8303CCB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d34e50
	ctx.lr = 0x8303CCD0;
	sub_82D34E50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303cd04
	if (cr6.eq) goto loc_8303CD04;
	// bl 0x82d34e50
	ctx.lr = 0x8303CCDC;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x8303CCE0;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8303cd04
	if (!cr6.eq) goto loc_8303CD04;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8303CD04:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,-5100
	ctx.r4.s64 = ctx.r9.s64 + -5100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8303CD2C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303CD38;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8303cd58
	if (cr6.lt) goto loc_8303CD58;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8303CD58;
	sub_825952B8(ctx, base);
loc_8303CD58:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8303CD70"))) PPC_WEAK_FUNC(sub_8303CD70);
PPC_FUNC_IMPL(__imp__sub_8303CD70) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,10752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10752);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303cdcc
	if (!cr6.eq) goto loc_8303CDCC;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303CDB0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303cdc4
	if (cr6.eq) goto loc_8303CDC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e61458
	ctx.lr = 0x8303CDC0;
	sub_82E61458(ctx, base);
	// b 0x8303cdc8
	goto loc_8303CDC8;
loc_8303CDC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303CDC8:
	// stw r3,10752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10752, ctx.r3.u32);
loc_8303CDCC:
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

__attribute__((alias("__imp__sub_8303CDE4"))) PPC_WEAK_FUNC(sub_8303CDE4);
PPC_FUNC_IMPL(__imp__sub_8303CDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303CDE8"))) PPC_WEAK_FUNC(sub_8303CDE8);
PPC_FUNC_IMPL(__imp__sub_8303CDE8) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,10756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10756);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303ce44
	if (!cr6.eq) goto loc_8303CE44;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303CE28;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303ce3c
	if (cr6.eq) goto loc_8303CE3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e614a8
	ctx.lr = 0x8303CE38;
	sub_82E614A8(ctx, base);
	// b 0x8303ce40
	goto loc_8303CE40;
loc_8303CE3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303CE40:
	// stw r3,10756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10756, ctx.r3.u32);
loc_8303CE44:
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

__attribute__((alias("__imp__sub_8303CE5C"))) PPC_WEAK_FUNC(sub_8303CE5C);
PPC_FUNC_IMPL(__imp__sub_8303CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303CE60"))) PPC_WEAK_FUNC(sub_8303CE60);
PPC_FUNC_IMPL(__imp__sub_8303CE60) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303CE84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8303CE98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8303CEB0"))) PPC_WEAK_FUNC(sub_8303CEB0);
PPC_FUNC_IMPL(__imp__sub_8303CEB0) {
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
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// beq cr6,0x8303cef8
	if (cr6.eq) goto loc_8303CEF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303CEF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
loc_8303CEF8:
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

__attribute__((alias("__imp__sub_8303CF14"))) PPC_WEAK_FUNC(sub_8303CF14);
PPC_FUNC_IMPL(__imp__sub_8303CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303CF18"))) PPC_WEAK_FUNC(sub_8303CF18);
PPC_FUNC_IMPL(__imp__sub_8303CF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addis r11,r11,-263
	ctx.r11.s64 = ctx.r11.s64 + -17235968;
	// addic. r11,r11,-4104
	xer.ca = ctx.r11.u32 > 4103;
	ctx.r11.s64 = ctx.r11.s64 + -4104;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8303cf58
	if (cr0.eq) goto loc_8303CF58;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8303cf7c
	if (!cr6.eq) goto loc_8303CF7C;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303cf7c
	if (cr6.eq) goto loc_8303CF7C;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x8303cf7c
	if (!cr6.eq) goto loc_8303CF7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// b 0x8303cf78
	goto loc_8303CF78;
loc_8303CF58:
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303cf7c
	if (cr6.eq) goto loc_8303CF7C;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x8303cf7c
	if (!cr6.eq) goto loc_8303CF7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
loc_8303CF78:
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
loc_8303CF7C:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303CF80"))) PPC_WEAK_FUNC(sub_8303CF80);
PPC_FUNC_IMPL(__imp__sub_8303CF80) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303CF94;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303cfb0
	if (cr6.eq) goto loc_8303CFB0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82db4fb0
	ctx.lr = 0x8303CFA8;
	sub_82DB4FB0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82db5030
	ctx.lr = 0x8303CFB0;
	sub_82DB5030(ctx, base);
loc_8303CFB0:
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

__attribute__((alias("__imp__sub_8303CFC4"))) PPC_WEAK_FUNC(sub_8303CFC4);
PPC_FUNC_IMPL(__imp__sub_8303CFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303CFC8"))) PPC_WEAK_FUNC(sub_8303CFC8);
PPC_FUNC_IMPL(__imp__sub_8303CFC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e613e0
	sub_82E613E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303CFCC"))) PPC_WEAK_FUNC(sub_8303CFCC);
PPC_FUNC_IMPL(__imp__sub_8303CFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303CFD0"))) PPC_WEAK_FUNC(sub_8303CFD0);
PPC_FUNC_IMPL(__imp__sub_8303CFD0) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303CFE4;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303d004
	if (!cr6.eq) goto loc_8303D004;
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
loc_8303D004:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x837b89d8
	ctx.lr = 0x8303D00C;
	sub_837B89D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303d028
	if (cr6.eq) goto loc_8303D028;
	// bl 0x825832f0
	ctx.lr = 0x8303D020;
	sub_825832F0(ctx, base);
	// bl 0x82dc4fc0
	ctx.lr = 0x8303D024;
	sub_82DC4FC0(ctx, base);
	// b 0x8303d02c
	goto loc_8303D02C;
loc_8303D028:
	// bl 0x82db4cd0
	ctx.lr = 0x8303D02C;
	sub_82DB4CD0(ctx, base);
loc_8303D02C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x833f24b0
	ctx.lr = 0x8303D034;
	sub_833F24B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303d050
	if (cr6.eq) goto loc_8303D050;
	// bl 0x8332f198
	ctx.lr = 0x8303D048;
	sub_8332F198(ctx, base);
	// bl 0x82dbe9b0
	ctx.lr = 0x8303D04C;
	sub_82DBE9B0(ctx, base);
	// b 0x8303d054
	goto loc_8303D054;
loc_8303D050:
	// bl 0x82db5bf8
	ctx.lr = 0x8303D054;
	sub_82DB5BF8(ctx, base);
loc_8303D054:
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

__attribute__((alias("__imp__sub_8303D06C"))) PPC_WEAK_FUNC(sub_8303D06C);
PPC_FUNC_IMPL(__imp__sub_8303D06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D070"))) PPC_WEAK_FUNC(sub_8303D070);
PPC_FUNC_IMPL(__imp__sub_8303D070) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,-4564
	ctx.r3.s64 = ctx.r11.s64 + -4564;
	// bl 0x8303cd70
	ctx.lr = 0x8303D08C;
	sub_8303CD70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303d0c0
	if (cr6.eq) goto loc_8303D0C0;
	// bl 0x82e616b8
	ctx.lr = 0x8303D09C;
	sub_82E616B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303d0c0
	if (cr6.eq) goto loc_8303D0C0;
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
loc_8303D0C0:
	// bl 0x82e613e0
	ctx.lr = 0x8303D0C4;
	sub_82E613E0(ctx, base);
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

__attribute__((alias("__imp__sub_8303D0DC"))) PPC_WEAK_FUNC(sub_8303D0DC);
PPC_FUNC_IMPL(__imp__sub_8303D0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D0E0"))) PPC_WEAK_FUNC(sub_8303D0E0);
PPC_FUNC_IMPL(__imp__sub_8303D0E0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82db80c8
	sub_82DB80C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303D0E8"))) PPC_WEAK_FUNC(sub_8303D0E8);
PPC_FUNC_IMPL(__imp__sub_8303D0E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8303D100;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303d120
	if (cr6.eq) goto loc_8303D120;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82e61320
	ctx.lr = 0x8303D120;
	sub_82E61320(ctx, base);
loc_8303D120:
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

__attribute__((alias("__imp__sub_8303D134"))) PPC_WEAK_FUNC(sub_8303D134);
PPC_FUNC_IMPL(__imp__sub_8303D134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D138"))) PPC_WEAK_FUNC(sub_8303D138);
PPC_FUNC_IMPL(__imp__sub_8303D138) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303D14C;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303d170
	if (cr6.eq) goto loc_8303D170;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82dbb460
	ctx.lr = 0x8303D160;
	sub_82DBB460(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82dbb4f0
	ctx.lr = 0x8303D168;
	sub_82DBB4F0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82dbb740
	ctx.lr = 0x8303D170;
	sub_82DBB740(ctx, base);
loc_8303D170:
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

__attribute__((alias("__imp__sub_8303D184"))) PPC_WEAK_FUNC(sub_8303D184);
PPC_FUNC_IMPL(__imp__sub_8303D184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D188"))) PPC_WEAK_FUNC(sub_8303D188);
PPC_FUNC_IMPL(__imp__sub_8303D188) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e614f8
	sub_82E614F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303D18C"))) PPC_WEAK_FUNC(sub_8303D18C);
PPC_FUNC_IMPL(__imp__sub_8303D18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D190"))) PPC_WEAK_FUNC(sub_8303D190);
PPC_FUNC_IMPL(__imp__sub_8303D190) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303D1A4;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303d1c4
	if (!cr6.eq) goto loc_8303D1C4;
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
loc_8303D1C4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82dbb4a0
	ctx.lr = 0x8303D1CC;
	sub_82DBB4A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303d1e8
	if (cr6.eq) goto loc_8303D1E8;
	// bl 0x835d3198
	ctx.lr = 0x8303D1E0;
	sub_835D3198(ctx, base);
	// bl 0x82dd1608
	ctx.lr = 0x8303D1E4;
	sub_82DD1608(ctx, base);
	// b 0x8303d1ec
	goto loc_8303D1EC;
loc_8303D1E8:
	// bl 0x82dbb420
	ctx.lr = 0x8303D1EC;
	sub_82DBB420(ctx, base);
loc_8303D1EC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82dbb530
	ctx.lr = 0x8303D1F4;
	sub_82DBB530(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303d210
	if (cr6.eq) goto loc_8303D210;
	// bl 0x835d3178
	ctx.lr = 0x8303D208;
	sub_835D3178(ctx, base);
	// bl 0x82de1ca8
	ctx.lr = 0x8303D20C;
	sub_82DE1CA8(ctx, base);
	// b 0x8303d214
	goto loc_8303D214;
loc_8303D210:
	// bl 0x82dbb4b0
	ctx.lr = 0x8303D214;
	sub_82DBB4B0(ctx, base);
loc_8303D214:
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

__attribute__((alias("__imp__sub_8303D22C"))) PPC_WEAK_FUNC(sub_8303D22C);
PPC_FUNC_IMPL(__imp__sub_8303D22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D230"))) PPC_WEAK_FUNC(sub_8303D230);
PPC_FUNC_IMPL(__imp__sub_8303D230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,-4520
	ctx.r3.s64 = ctx.r11.s64 + -4520;
	// b 0x839e7938
	sub_839E7938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303D23C"))) PPC_WEAK_FUNC(sub_8303D23C);
PPC_FUNC_IMPL(__imp__sub_8303D23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D240"))) PPC_WEAK_FUNC(sub_8303D240);
PPC_FUNC_IMPL(__imp__sub_8303D240) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,-4496
	ctx.r3.s64 = ctx.r11.s64 + -4496;
	// bl 0x8303cde8
	ctx.lr = 0x8303D25C;
	sub_8303CDE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303d290
	if (cr6.eq) goto loc_8303D290;
	// bl 0x82e617e0
	ctx.lr = 0x8303D26C;
	sub_82E617E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303d290
	if (cr6.eq) goto loc_8303D290;
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
loc_8303D290:
	// bl 0x82e614f8
	ctx.lr = 0x8303D294;
	sub_82E614F8(ctx, base);
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

__attribute__((alias("__imp__sub_8303D2AC"))) PPC_WEAK_FUNC(sub_8303D2AC);
PPC_FUNC_IMPL(__imp__sub_8303D2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D2B0"))) PPC_WEAK_FUNC(sub_8303D2B0);
PPC_FUNC_IMPL(__imp__sub_8303D2B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x8303D2C8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303d2e8
	if (cr6.eq) goto loc_8303D2E8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82e61320
	ctx.lr = 0x8303D2E8;
	sub_82E61320(ctx, base);
loc_8303D2E8:
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

__attribute__((alias("__imp__sub_8303D2FC"))) PPC_WEAK_FUNC(sub_8303D2FC);
PPC_FUNC_IMPL(__imp__sub_8303D2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D300"))) PPC_WEAK_FUNC(sub_8303D300);
PPC_FUNC_IMPL(__imp__sub_8303D300) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303D324;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303d348
	if (cr6.eq) goto loc_8303D348;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r10,r11,-4384
	ctx.r10.s64 = ctx.r11.s64 + -4384;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8303D348:
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

__attribute__((alias("__imp__sub_8303D35C"))) PPC_WEAK_FUNC(sub_8303D35C);
PPC_FUNC_IMPL(__imp__sub_8303D35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D360"))) PPC_WEAK_FUNC(sub_8303D360);
PPC_FUNC_IMPL(__imp__sub_8303D360) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303D384;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303d3a8
	if (cr6.eq) goto loc_8303D3A8;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r10,r11,-4368
	ctx.r10.s64 = ctx.r11.s64 + -4368;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8303D3A8:
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

__attribute__((alias("__imp__sub_8303D3BC"))) PPC_WEAK_FUNC(sub_8303D3BC);
PPC_FUNC_IMPL(__imp__sub_8303D3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D3C0"))) PPC_WEAK_FUNC(sub_8303D3C0);
PPC_FUNC_IMPL(__imp__sub_8303D3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8303D3C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r11,-4352
	ctx.r9.s64 = ctx.r11.s64 + -4352;
	// addi r8,r10,-4212
	ctx.r8.s64 = ctx.r10.s64 + -4212;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// lwz r7,148(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8303d40c
	if (cr6.lt) goto loc_8303D40C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8303D40C;
	sub_825952B8(ctx, base);
loc_8303D40C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,92
	ctx.r31.s64 = ctx.r29.s64 + 92;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303d440
	if (cr6.lt) goto loc_8303D440;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8303D440;
	sub_825952B8(ctx, base);
loc_8303D440:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82f42278
	ctx.lr = 0x8303D454;
	sub_82F42278(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303D45C"))) PPC_WEAK_FUNC(sub_8303D45C);
PPC_FUNC_IMPL(__imp__sub_8303D45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D460"))) PPC_WEAK_FUNC(sub_8303D460);
PPC_FUNC_IMPL(__imp__sub_8303D460) {
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
	// bl 0x8303d3c0
	ctx.lr = 0x8303D480;
	sub_8303D3C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303d498
	if (cr6.eq) goto loc_8303D498;
	// bl 0x82416268
	ctx.lr = 0x8303D494;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303D498:
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

__attribute__((alias("__imp__sub_8303D4B0"))) PPC_WEAK_FUNC(sub_8303D4B0);
PPC_FUNC_IMPL(__imp__sub_8303D4B0) {
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
	// lwz r11,-72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r4,-72
	ctx.r3.s64 = ctx.r4.s64 + -72;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303D4D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x8303D4FC;
	sub_83878E28(ctx, base);
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

__attribute__((alias("__imp__sub_8303D514"))) PPC_WEAK_FUNC(sub_8303D514);
PPC_FUNC_IMPL(__imp__sub_8303D514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D518"))) PPC_WEAK_FUNC(sub_8303D518);
PPC_FUNC_IMPL(__imp__sub_8303D518) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,-19080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19080);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8303d564
	if (cr6.eq) goto loc_8303D564;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8303D540:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303d540
	if (!cr6.eq) goto loc_8303D540;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303D564;
	sub_8259CC28(ctx, base);
loc_8303D564:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8303d58c
	if (cr6.lt) goto loc_8303D58C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8303D58C:
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_8303D5A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303d5a0
	if (!cr6.eq) goto loc_8303D5A0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303D5C4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303D5D0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303d5f0
	if (cr6.lt) goto loc_8303D5F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8303D5F0;
	sub_825952B8(ctx, base);
loc_8303D5F0:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8303D608"))) PPC_WEAK_FUNC(sub_8303D608);
PPC_FUNC_IMPL(__imp__sub_8303D608) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r3,92
	ctx.r4.s64 = ctx.r3.s64 + 92;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r11.u64);
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8303d644
	if (cr6.lt) goto loc_8303D644;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8303D644:
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_8303D658:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303d658
	if (!cr6.eq) goto loc_8303D658;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303D67C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303D688;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303d6a8
	if (cr6.lt) goto loc_8303D6A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8303D6A8;
	sub_825952B8(ctx, base);
loc_8303D6A8:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8303D6C0"))) PPC_WEAK_FUNC(sub_8303D6C0);
PPC_FUNC_IMPL(__imp__sub_8303D6C0) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303D6D8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303d738
	if (!cr6.eq) goto loc_8303D738;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,-19076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19076);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8303d720
	if (cr6.eq) goto loc_8303D720;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8303D6FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303d6fc
	if (!cr6.eq) goto loc_8303D6FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303D720;
	sub_8259CC28(ctx, base);
loc_8303D720:
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
loc_8303D738:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x8303D740;
	sub_825832F0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bgt cr6,0x8303d754
	if (cr6.gt) goto loc_8303D754;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303D754:
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

__attribute__((alias("__imp__sub_8303D768"))) PPC_WEAK_FUNC(sub_8303D768);
PPC_FUNC_IMPL(__imp__sub_8303D768) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303D780;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303d7e0
	if (!cr6.eq) goto loc_8303D7E0;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,-19076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19076);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8303d7c8
	if (cr6.eq) goto loc_8303D7C8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8303D7A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303d7a4
	if (!cr6.eq) goto loc_8303D7A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303D7C8;
	sub_8259CC28(ctx, base);
loc_8303D7C8:
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
loc_8303D7E0:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x835d3198
	ctx.lr = 0x8303D7E8;
	sub_835D3198(ctx, base);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bgt cr6,0x8303d7fc
	if (cr6.gt) goto loc_8303D7FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303D7FC:
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

__attribute__((alias("__imp__sub_8303D810"))) PPC_WEAK_FUNC(sub_8303D810);
PPC_FUNC_IMPL(__imp__sub_8303D810) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d48260
	ctx.lr = 0x8303D828;
	sub_82D48260(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303d858
	if (cr6.eq) goto loc_8303D858;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8303D844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_8303D858:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,-19076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19076);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8303d898
	if (cr6.eq) goto loc_8303D898;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8303D874:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303d874
	if (!cr6.eq) goto loc_8303D874;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303D898;
	sub_8259CC28(ctx, base);
loc_8303D898:
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-10744
	ctx.r9.s64 = ctx.r11.s64 + -10744;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r8.u64);
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

__attribute__((alias("__imp__sub_8303D8CC"))) PPC_WEAK_FUNC(sub_8303D8CC);
PPC_FUNC_IMPL(__imp__sub_8303D8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D8D0"))) PPC_WEAK_FUNC(sub_8303D8D0);
PPC_FUNC_IMPL(__imp__sub_8303D8D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x8303D8E8;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x8303D8EC;
	sub_83524138(ctx, base);
	// ld r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// cmpld cr6,r3,r11
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, xer);
	// ble cr6,0x8303d958
	if (!cr6.gt) goto loc_8303D958;
	// lis r3,44
	ctx.r3.s64 = 2883584;
	// ori r3,r3,24
	ctx.r3.u64 = ctx.r3.u64 | 24;
	// bl 0x82d86180
	ctx.lr = 0x8303D904;
	sub_82D86180(ctx, base);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,-19076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19076);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8303d944
	if (cr6.eq) goto loc_8303D944;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8303D920:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303d920
	if (!cr6.eq) goto loc_8303D920;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303D944;
	sub_8259CC28(ctx, base);
loc_8303D944:
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-10744
	ctx.r9.s64 = ctx.r11.s64 + -10744;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x8303d988
	goto loc_8303D988;
loc_8303D958:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303D96C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8303d994
	if (cr6.eq) goto loc_8303D994;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r10,-10984
	ctx.r9.s64 = ctx.r10.s64 + -10984;
loc_8303D988:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r8.u64);
loc_8303D994:
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

__attribute__((alias("__imp__sub_8303D9AC"))) PPC_WEAK_FUNC(sub_8303D9AC);
PPC_FUNC_IMPL(__imp__sub_8303D9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303D9B0"))) PPC_WEAK_FUNC(sub_8303D9B0);
PPC_FUNC_IMPL(__imp__sub_8303D9B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303D9D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303da44
	if (!cr6.eq) goto loc_8303DA44;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,-19076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19076);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8303da24
	if (cr6.eq) goto loc_8303DA24;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8303DA00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303da00
	if (!cr6.eq) goto loc_8303DA00;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303DA24;
	sub_8259CC28(ctx, base);
loc_8303DA24:
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-10744
	ctx.r9.s64 = ctx.r11.s64 + -10744;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r8.u64);
	// b 0x8303dafc
	goto loc_8303DAFC;
loc_8303DA44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303DA58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303dac8
	if (!cr6.eq) goto loc_8303DAC8;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,-19076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19076);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8303da24
	if (cr6.eq) goto loc_8303DA24;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8303DA84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303da84
	if (!cr6.eq) goto loc_8303DA84;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303DAA8;
	sub_8259CC28(ctx, base);
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-10744
	ctx.r9.s64 = ctx.r11.s64 + -10744;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r8.u64);
	// b 0x8303dafc
	goto loc_8303DAFC;
loc_8303DAC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x8303DAD0;
	sub_83103100(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x8303DAD4;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x8303DAD8;
	sub_83524138(ctx, base);
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-10032
	ctx.r9.s64 = ctx.r11.s64 + -10032;
	// addi r8,r3,30000
	ctx.r8.s64 = ctx.r3.s64 + 30000;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r8.u64);
	// std r7,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r7.u64);
loc_8303DAFC:
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

__attribute__((alias("__imp__sub_8303DB18"))) PPC_WEAK_FUNC(sub_8303DB18);
PPC_FUNC_IMPL(__imp__sub_8303DB18) {
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
	// bl 0x83a7d958
	ctx.lr = 0x8303DB34;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x8303DB38;
	sub_83524138(ctx, base);
	// ld r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// cmpld cr6,r3,r11
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, xer);
	// ble cr6,0x8303dbb4
	if (!cr6.gt) goto loc_8303DBB4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r3,44
	ctx.r3.s64 = 2883584;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// ori r3,r3,24
	ctx.r3.u64 = ctx.r3.u64 | 24;
	// bl 0x82d86180
	ctx.lr = 0x8303DB58;
	sub_82D86180(ctx, base);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,-19076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19076);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8303db98
	if (cr6.eq) goto loc_8303DB98;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8303DB74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303db74
	if (!cr6.eq) goto loc_8303DB74;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303DB98;
	sub_8259CC28(ctx, base);
loc_8303DB98:
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r10,r11,-10744
	ctx.r10.s64 = ctx.r11.s64 + -10744;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r9.u64);
	// b 0x8303dc3c
	goto loc_8303DC3C;
loc_8303DBB4:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8303dc3c
	if (!cr6.eq) goto loc_8303DC3C;
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303dc20
	if (cr6.eq) goto loc_8303DC20;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,-19076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19076);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8303dc0c
	if (cr6.eq) goto loc_8303DC0C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8303DBE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303dbe8
	if (!cr6.eq) goto loc_8303DBE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303DC0C;
	sub_8259CC28(ctx, base);
loc_8303DC0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r10,-10744
	ctx.r9.s64 = ctx.r10.s64 + -10744;
	// b 0x8303dc30
	goto loc_8303DC30;
loc_8303DC20:
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-9808
	ctx.r9.s64 = ctx.r11.s64 + -9808;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8303DC30:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r8.u64);
loc_8303DC3C:
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

__attribute__((alias("__imp__sub_8303DC58"))) PPC_WEAK_FUNC(sub_8303DC58);
PPC_FUNC_IMPL(__imp__sub_8303DC58) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303DC7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// beq cr6,0x8303dcc4
	if (cr6.eq) goto loc_8303DCC4;
	// bl 0x83a7d958
	ctx.lr = 0x8303DC8C;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x8303DC90;
	sub_83524138(ctx, base);
	// addi r11,r3,30000
	ctx.r11.s64 = ctx.r3.s64 + 30000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x83103100
	ctx.lr = 0x8303DCA4;
	sub_83103100(ctx, base);
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-9448
	ctx.r8.s64 = ctx.r10.s64 + -9448;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r7.u64);
	// b 0x8303dce0
	goto loc_8303DCE0;
loc_8303DCC4:
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-9808
	ctx.r9.s64 = ctx.r11.s64 + -9808;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r8.u64);
loc_8303DCE0:
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

__attribute__((alias("__imp__sub_8303DCF8"))) PPC_WEAK_FUNC(sub_8303DCF8);
PPC_FUNC_IMPL(__imp__sub_8303DCF8) {
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
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303dd3c
	if (!cr6.eq) goto loc_8303DD3C;
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-9128
	ctx.r9.s64 = ctx.r11.s64 + -9128;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r8.u64);
	// b 0x8303dda4
	goto loc_8303DDA4;
loc_8303DD3C:
	// bl 0x82e716d8
	ctx.lr = 0x8303DD40;
	sub_82E716D8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8303dda4
	if (cr6.lt) goto loc_8303DDA4;
	// bne cr6,0x8303dd64
	if (!cr6.eq) goto loc_8303DD64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303DD64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8303DD64:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303dd8c
	if (cr6.eq) goto loc_8303DD8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303DD88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
loc_8303DD8C:
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r10,r11,-9128
	ctx.r10.s64 = ctx.r11.s64 + -9128;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r9.u64);
loc_8303DDA4:
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

__attribute__((alias("__imp__sub_8303DDC0"))) PPC_WEAK_FUNC(sub_8303DDC0);
PPC_FUNC_IMPL(__imp__sub_8303DDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8303DDC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// lis r4,508
	ctx.r4.s64 = 33292288;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,41
	ctx.r4.u64 = ctx.r4.u64 | 41;
	// bl 0x82d042a8
	ctx.lr = 0x8303DDF4;
	sub_82D042A8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8303DE0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,128(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8303DE20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8303de70
	if (!cr6.eq) goto loc_8303DE70;
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r11,-9128
	ctx.r9.s64 = ctx.r11.s64 + -9128;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r8.u64);
	// blt cr6,0x8303df0c
	if (cr6.lt) goto loc_8303DF0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8303DE64;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8303DE70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303DE8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,29
	ctx.r9.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r4,1352
	ctx.r4.s64 = 1352;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x8303DEA4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303ded0
	if (cr6.eq) goto loc_8303DED0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303dec4
	if (cr6.lt) goto loc_8303DEC4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82e712a8
	ctx.lr = 0x8303DEC0;
	sub_82E712A8(ctx, base);
	// b 0x8303ded4
	goto loc_8303DED4;
loc_8303DEC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e712a8
	ctx.lr = 0x8303DECC;
	sub_82E712A8(ctx, base);
	// b 0x8303ded4
	goto loc_8303DED4;
loc_8303DED0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8303DED4:
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x8303def4
	if (!cr6.eq) goto loc_8303DEF4;
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// addi r10,r11,-9128
	ctx.r10.s64 = ctx.r11.s64 + -9128;
	// b 0x8303defc
	goto loc_8303DEFC;
loc_8303DEF4:
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// addi r10,r11,-8968
	ctx.r10.s64 = ctx.r11.s64 + -8968;
loc_8303DEFC:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r9.u64);
	// bl 0x8387e8e0
	ctx.lr = 0x8303DF0C;
	sub_8387E8E0(ctx, base);
loc_8303DF0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303DF18"))) PPC_WEAK_FUNC(sub_8303DF18);
PPC_FUNC_IMPL(__imp__sub_8303DF18) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303DF3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8303df54
	if (cr6.eq) goto loc_8303DF54;
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// addi r9,r11,-8768
	ctx.r9.s64 = ctx.r11.s64 + -8768;
	// b 0x8303df9c
	goto loc_8303DF9C;
loc_8303DF54:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,-19076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19076);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8303df94
	if (cr6.eq) goto loc_8303DF94;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8303DF70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303df70
	if (!cr6.eq) goto loc_8303DF70;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303DF94;
	sub_8259CC28(ctx, base);
loc_8303DF94:
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// addi r9,r11,-10744
	ctx.r9.s64 = ctx.r11.s64 + -10744;
loc_8303DF9C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r8.u64);
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

__attribute__((alias("__imp__sub_8303DFC8"))) PPC_WEAK_FUNC(sub_8303DFC8);
PPC_FUNC_IMPL(__imp__sub_8303DFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8303DFD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f42220
	ctx.lr = 0x8303DFDC;
	sub_82F42220(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-31773
	ctx.r9.s64 = -2082275328;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,-4352
	ctx.r8.s64 = ctx.r11.s64 + -4352;
	// addi r7,r10,-4212
	ctx.r7.s64 = ctx.r10.s64 + -4212;
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// lwz r4,-19076(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19076);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
loc_8303E01C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8303e01c
	if (!cr6.eq) goto loc_8303E01C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8303E03C;
	sub_8259CC28(ctx, base);
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// std r30,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-8424
	ctx.r9.s64 = ctx.r10.s64 + -8424;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// std r8,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r8.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303E07C"))) PPC_WEAK_FUNC(sub_8303E07C);
PPC_FUNC_IMPL(__imp__sub_8303E07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303E080"))) PPC_WEAK_FUNC(sub_8303E080);
PPC_FUNC_IMPL(__imp__sub_8303E080) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r11,-4208
	ctx.r9.s64 = ctx.r11.s64 + -4208;
	// addi r8,r10,-4212
	ctx.r8.s64 = ctx.r10.s64 + -4212;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8303d3c0
	ctx.lr = 0x8303E0B8;
	sub_8303D3C0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8303e0d0
	if (cr6.eq) goto loc_8303E0D0;
	// bl 0x82416268
	ctx.lr = 0x8303E0CC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303E0D0:
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

__attribute__((alias("__imp__sub_8303E0E8"))) PPC_WEAK_FUNC(sub_8303E0E8);
PPC_FUNC_IMPL(__imp__sub_8303E0E8) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r11,-4064
	ctx.r9.s64 = ctx.r11.s64 + -4064;
	// addi r8,r10,-4212
	ctx.r8.s64 = ctx.r10.s64 + -4212;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8303d3c0
	ctx.lr = 0x8303E120;
	sub_8303D3C0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8303e138
	if (cr6.eq) goto loc_8303E138;
	// bl 0x82416268
	ctx.lr = 0x8303E134;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303E138:
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

__attribute__((alias("__imp__sub_8303E150"))) PPC_WEAK_FUNC(sub_8303E150);
PPC_FUNC_IMPL(__imp__sub_8303E150) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303E180;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303e1b4
	if (cr6.eq) goto loc_8303E1B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8303dfc8
	ctx.lr = 0x8303E194;
	sub_8303DFC8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r11,-4208
	ctx.r9.s64 = ctx.r11.s64 + -4208;
	// addi r8,r10,-4212
	ctx.r8.s64 = ctx.r10.s64 + -4212;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303e1b8
	goto loc_8303E1B8;
loc_8303E1B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303E1B8:
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

__attribute__((alias("__imp__sub_8303E1D0"))) PPC_WEAK_FUNC(sub_8303E1D0);
PPC_FUNC_IMPL(__imp__sub_8303E1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303e1e0
	if (cr6.lt) goto loc_8303E1E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303E1E0:
	// b 0x8303e150
	sub_8303E150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303E1E4"))) PPC_WEAK_FUNC(sub_8303E1E4);
PPC_FUNC_IMPL(__imp__sub_8303E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303E1E8"))) PPC_WEAK_FUNC(sub_8303E1E8);
PPC_FUNC_IMPL(__imp__sub_8303E1E8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303E218;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303e24c
	if (cr6.eq) goto loc_8303E24C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8303dfc8
	ctx.lr = 0x8303E22C;
	sub_8303DFC8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r11,-4064
	ctx.r9.s64 = ctx.r11.s64 + -4064;
	// addi r8,r10,-4212
	ctx.r8.s64 = ctx.r10.s64 + -4212;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303e250
	goto loc_8303E250;
loc_8303E24C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303E250:
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

__attribute__((alias("__imp__sub_8303E268"))) PPC_WEAK_FUNC(sub_8303E268);
PPC_FUNC_IMPL(__imp__sub_8303E268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303e278
	if (cr6.lt) goto loc_8303E278;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303E278:
	// b 0x8303e1e8
	sub_8303E1E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303E27C"))) PPC_WEAK_FUNC(sub_8303E27C);
PPC_FUNC_IMPL(__imp__sub_8303E27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303E280"))) PPC_WEAK_FUNC(sub_8303E280);
PPC_FUNC_IMPL(__imp__sub_8303E280) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r11,-3752
	ctx.r9.s64 = ctx.r11.s64 + -3752;
	// addi r8,r10,10424
	ctx.r8.s64 = ctx.r10.s64 + 10424;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x8303E2B8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8303e2d0
	if (cr6.eq) goto loc_8303E2D0;
	// bl 0x82416268
	ctx.lr = 0x8303E2CC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303E2D0:
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

__attribute__((alias("__imp__sub_8303E2E8"))) PPC_WEAK_FUNC(sub_8303E2E8);
PPC_FUNC_IMPL(__imp__sub_8303E2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303E304;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8303E318"))) PPC_WEAK_FUNC(sub_8303E318);
PPC_FUNC_IMPL(__imp__sub_8303E318) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303E328;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303e338
	if (cr6.eq) goto loc_8303E338;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82db4f38
	ctx.lr = 0x8303E338;
	sub_82DB4F38(ctx, base);
loc_8303E338:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E348"))) PPC_WEAK_FUNC(sub_8303E348);
PPC_FUNC_IMPL(__imp__sub_8303E348) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303E35C;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303e37c
	if (!cr6.eq) goto loc_8303E37C;
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
loc_8303E37C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x829efd40
	ctx.lr = 0x8303E384;
	sub_829EFD40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303e3a0
	if (cr6.eq) goto loc_8303E3A0;
	// bl 0x825832e8
	ctx.lr = 0x8303E398;
	sub_825832E8(ctx, base);
	// bl 0x82dcaeb8
	ctx.lr = 0x8303E39C;
	sub_82DCAEB8(ctx, base);
	// b 0x8303e3a4
	goto loc_8303E3A4;
loc_8303E3A0:
	// bl 0x82db6448
	ctx.lr = 0x8303E3A4;
	sub_82DB6448(ctx, base);
loc_8303E3A4:
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

__attribute__((alias("__imp__sub_8303E3BC"))) PPC_WEAK_FUNC(sub_8303E3BC);
PPC_FUNC_IMPL(__imp__sub_8303E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303E3C0"))) PPC_WEAK_FUNC(sub_8303E3C0);
PPC_FUNC_IMPL(__imp__sub_8303E3C0) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303E3D0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303e3e0
	if (cr6.eq) goto loc_8303E3E0;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82dbb6c8
	ctx.lr = 0x8303E3E0;
	sub_82DBB6C8(ctx, base);
loc_8303E3E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E3F0"))) PPC_WEAK_FUNC(sub_8303E3F0);
PPC_FUNC_IMPL(__imp__sub_8303E3F0) {
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
	// bl 0x82d86078
	ctx.lr = 0x8303E404;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303e424
	if (!cr6.eq) goto loc_8303E424;
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
loc_8303E424:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82dbb410
	ctx.lr = 0x8303E42C;
	sub_82DBB410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8303e448
	if (cr6.eq) goto loc_8303E448;
	// bl 0x82927030
	ctx.lr = 0x8303E440;
	sub_82927030(ctx, base);
	// bl 0x82dcaeb8
	ctx.lr = 0x8303E444;
	sub_82DCAEB8(ctx, base);
	// b 0x8303e44c
	goto loc_8303E44C;
loc_8303E448:
	// bl 0x82dbbe58
	ctx.lr = 0x8303E44C;
	sub_82DBBE58(ctx, base);
loc_8303E44C:
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

__attribute__((alias("__imp__sub_8303E464"))) PPC_WEAK_FUNC(sub_8303E464);
PPC_FUNC_IMPL(__imp__sub_8303E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303E468"))) PPC_WEAK_FUNC(sub_8303E468);
PPC_FUNC_IMPL(__imp__sub_8303E468) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303E498;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303e4cc
	if (cr6.eq) goto loc_8303E4CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8303E4AC;
	sub_82F42220(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r11,-3640
	ctx.r9.s64 = ctx.r11.s64 + -3640;
	// addi r8,r10,10424
	ctx.r8.s64 = ctx.r10.s64 + 10424;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303e4d0
	goto loc_8303E4D0;
loc_8303E4CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303E4D0:
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

__attribute__((alias("__imp__sub_8303E4E8"))) PPC_WEAK_FUNC(sub_8303E4E8);
PPC_FUNC_IMPL(__imp__sub_8303E4E8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303E518;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303e54c
	if (cr6.eq) goto loc_8303E54C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8303E52C;
	sub_82F42220(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r11,-3528
	ctx.r9.s64 = ctx.r11.s64 + -3528;
	// addi r8,r10,10424
	ctx.r8.s64 = ctx.r10.s64 + 10424;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303e550
	goto loc_8303E550;
loc_8303E54C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303E550:
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

__attribute__((alias("__imp__sub_8303E568"))) PPC_WEAK_FUNC(sub_8303E568);
PPC_FUNC_IMPL(__imp__sub_8303E568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303e578
	if (cr6.lt) goto loc_8303E578;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303E578:
	// b 0x8303e468
	sub_8303E468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303E57C"))) PPC_WEAK_FUNC(sub_8303E57C);
PPC_FUNC_IMPL(__imp__sub_8303E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303E580"))) PPC_WEAK_FUNC(sub_8303E580);
PPC_FUNC_IMPL(__imp__sub_8303E580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303e590
	if (cr6.lt) goto loc_8303E590;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303E590:
	// b 0x8303e4e8
	sub_8303E4E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303E594"))) PPC_WEAK_FUNC(sub_8303E594);
PPC_FUNC_IMPL(__imp__sub_8303E594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303E598"))) PPC_WEAK_FUNC(sub_8303E598);
PPC_FUNC_IMPL(__imp__sub_8303E598) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303E5BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303e5e0
	if (cr6.eq) goto loc_8303E5E0;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r10,r11,-3416
	ctx.r10.s64 = ctx.r11.s64 + -3416;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8303E5E0:
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

__attribute__((alias("__imp__sub_8303E5F4"))) PPC_WEAK_FUNC(sub_8303E5F4);
PPC_FUNC_IMPL(__imp__sub_8303E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303E5F8"))) PPC_WEAK_FUNC(sub_8303E5F8);
PPC_FUNC_IMPL(__imp__sub_8303E5F8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303E61C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303e640
	if (cr6.eq) goto loc_8303E640;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r10,r11,-3404
	ctx.r10.s64 = ctx.r11.s64 + -3404;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8303E640:
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

__attribute__((alias("__imp__sub_8303E654"))) PPC_WEAK_FUNC(sub_8303E654);
PPC_FUNC_IMPL(__imp__sub_8303E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303E658"))) PPC_WEAK_FUNC(sub_8303E658);
PPC_FUNC_IMPL(__imp__sub_8303E658) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303E67C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8303e6c8
	if (cr6.eq) goto loc_8303E6C8;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-3848
	ctx.r11.s64 = ctx.r11.s64 + -3848;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8303E69C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303E6A8;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303e708
	if (cr6.lt) goto loc_8303E708;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8303e704
	goto loc_8303E704;
loc_8303E6C8:
	// bl 0x82d89740
	ctx.lr = 0x8303E6CC;
	sub_82D89740(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-3848
	ctx.r4.s64 = ctx.r11.s64 + -3848;
	// bl 0x837b0c10
	ctx.lr = 0x8303E6DC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303E6E8;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8303e708
	if (cr6.lt) goto loc_8303E708;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8303E704:
	// bl 0x825952b8
	ctx.lr = 0x8303E708;
	sub_825952B8(ctx, base);
loc_8303E708:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8303E720"))) PPC_WEAK_FUNC(sub_8303E720);
PPC_FUNC_IMPL(__imp__sub_8303E720) {
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-3232
	ctx.r9.s64 = ctx.r11.s64 + -3232;
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
	// bl 0x82f42278
	ctx.lr = 0x8303E758;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8303e770
	if (cr6.eq) goto loc_8303E770;
	// bl 0x82416268
	ctx.lr = 0x8303E76C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8303E770:
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

__attribute__((alias("__imp__sub_8303E788"))) PPC_WEAK_FUNC(sub_8303E788);
PPC_FUNC_IMPL(__imp__sub_8303E788) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303E7B8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303e7ec
	if (cr6.eq) goto loc_8303E7EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8303E7CC;
	sub_82F42220(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-3120
	ctx.r9.s64 = ctx.r11.s64 + -3120;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303e7f0
	goto loc_8303E7F0;
loc_8303E7EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303E7F0:
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

__attribute__((alias("__imp__sub_8303E808"))) PPC_WEAK_FUNC(sub_8303E808);
PPC_FUNC_IMPL(__imp__sub_8303E808) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303E838;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303e86c
	if (cr6.eq) goto loc_8303E86C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8303E84C;
	sub_82F42220(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-3008
	ctx.r9.s64 = ctx.r11.s64 + -3008;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8303e870
	goto loc_8303E870;
loc_8303E86C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303E870:
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

__attribute__((alias("__imp__sub_8303E888"))) PPC_WEAK_FUNC(sub_8303E888);
PPC_FUNC_IMPL(__imp__sub_8303E888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303e898
	if (cr6.lt) goto loc_8303E898;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303E898:
	// b 0x8303e788
	sub_8303E788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303E89C"))) PPC_WEAK_FUNC(sub_8303E89C);
PPC_FUNC_IMPL(__imp__sub_8303E89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303E8A0"))) PPC_WEAK_FUNC(sub_8303E8A0);
PPC_FUNC_IMPL(__imp__sub_8303E8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303e8b0
	if (cr6.lt) goto loc_8303E8B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303E8B0:
	// b 0x8303e808
	sub_8303E808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303E8B4"))) PPC_WEAK_FUNC(sub_8303E8B4);
PPC_FUNC_IMPL(__imp__sub_8303E8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303E8B8"))) PPC_WEAK_FUNC(sub_8303E8B8);
PPC_FUNC_IMPL(__imp__sub_8303E8B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8303E8DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r8,-3328
	ctx.r4.s64 = ctx.r8.s64 + -3328;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8303E904;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8303E910;
	sub_82E88020(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8303e930
	if (cr6.lt) goto loc_8303E930;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8303E930;
	sub_825952B8(ctx, base);
loc_8303E930:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8303E948"))) PPC_WEAK_FUNC(sub_8303E948);
PPC_FUNC_IMPL(__imp__sub_8303E948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8303e964
	if (!cr6.eq) goto loc_8303E964;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_8303E964:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303E968"))) PPC_WEAK_FUNC(sub_8303E968);
PPC_FUNC_IMPL(__imp__sub_8303E968) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8303E998;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303e9dc
	if (cr6.eq) goto loc_8303E9DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8303E9AC;
	sub_83061E98(ctx, base);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-2424
	ctx.r8.s64 = ctx.r10.s64 + -2424;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x8303e9e0
	goto loc_8303E9E0;
loc_8303E9DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8303E9E0:
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

__attribute__((alias("__imp__sub_8303E9F8"))) PPC_WEAK_FUNC(sub_8303E9F8);
PPC_FUNC_IMPL(__imp__sub_8303E9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8303ea08
	if (cr6.lt) goto loc_8303EA08;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8303EA08:
	// b 0x8303e968
	sub_8303E968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303EA0C"))) PPC_WEAK_FUNC(sub_8303EA0C);
PPC_FUNC_IMPL(__imp__sub_8303EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8303EA10"))) PPC_WEAK_FUNC(sub_8303EA10);
PPC_FUNC_IMPL(__imp__sub_8303EA10) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80848
	ctx.lr = 0x8303EA2C;
	sub_82B80848(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303ea40
	if (!cr6.eq) goto loc_8303EA40;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8303ea48
	goto loc_8303EA48;
loc_8303EA40:
	// bl 0x82e7c068
	ctx.lr = 0x8303EA44;
	sub_82E7C068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8303EA48:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303ea58
	if (cr6.eq) goto loc_8303EA58;
	// bl 0x8259b510
	ctx.lr = 0x8303EA58;
	sub_8259B510(ctx, base);
loc_8303EA58:
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

__attribute__((alias("__imp__sub_8303EA70"))) PPC_WEAK_FUNC(sub_8303EA70);
PPC_FUNC_IMPL(__imp__sub_8303EA70) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82b80848
	ctx.lr = 0x8303EA98;
	sub_82B80848(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303eaac
	if (!cr6.eq) goto loc_8303EAAC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8303eabc
	goto loc_8303EABC;
loc_8303EAAC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e7cae8
	ctx.lr = 0x8303EAB8;
	sub_82E7CAE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8303EABC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303eacc
	if (cr6.eq) goto loc_8303EACC;
	// bl 0x8259b510
	ctx.lr = 0x8303EACC;
	sub_8259B510(ctx, base);
loc_8303EACC:
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

__attribute__((alias("__imp__sub_8303EAE8"))) PPC_WEAK_FUNC(sub_8303EAE8);
PPC_FUNC_IMPL(__imp__sub_8303EAE8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80848
	ctx.lr = 0x8303EB04;
	sub_82B80848(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8303eb18
	if (!cr6.eq) goto loc_8303EB18;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8303eb20
	goto loc_8303EB20;
loc_8303EB18:
	// bl 0x82e78e58
	ctx.lr = 0x8303EB1C;
	sub_82E78E58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8303EB20:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303eb30
	if (cr6.eq) goto loc_8303EB30;
	// bl 0x8259b510
	ctx.lr = 0x8303EB30;
	sub_8259B510(ctx, base);
loc_8303EB30:
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

__attribute__((alias("__imp__sub_8303EB48"))) PPC_WEAK_FUNC(sub_8303EB48);
PPC_FUNC_IMPL(__imp__sub_8303EB48) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80848
	ctx.lr = 0x8303EB64;
	sub_82B80848(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8303eb78
	if (!cr6.eq) goto loc_8303EB78;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8303ebac
	goto loc_8303EBAC;
loc_8303EB78:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8303eb8c
	if (!cr6.eq) goto loc_8303EB8C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8303ebac
	goto loc_8303EBAC;
loc_8303EB8C:
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8303eba4
	if (cr6.eq) goto loc_8303EBA4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8303eba8
	if (!cr6.eq) goto loc_8303EBA8;
loc_8303EBA4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8303EBA8:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_8303EBAC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8303ebbc
	if (cr6.eq) goto loc_8303EBBC;
	// bl 0x8259b510
	ctx.lr = 0x8303EBBC;
	sub_8259B510(ctx, base);
loc_8303EBBC:
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

__attribute__((alias("__imp__sub_8303EBD4"))) PPC_WEAK_FUNC(sub_8303EBD4);
PPC_FUNC_IMPL(__imp__sub_8303EBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

