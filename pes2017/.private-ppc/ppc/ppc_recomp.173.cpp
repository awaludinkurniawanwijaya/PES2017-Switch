#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D12CBC"))) PPC_WEAK_FUNC(sub_82D12CBC);
PPC_FUNC_IMPL(__imp__sub_82D12CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D12CC0"))) PPC_WEAK_FUNC(sub_82D12CC0);
PPC_FUNC_IMPL(__imp__sub_82D12CC0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-2568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d12d04
	if (cr6.eq) goto loc_82D12D04;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d52cb8
	ctx.lr = 0x82D12CE8;
	sub_82D52CB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d12d04
	if (cr6.eq) goto loc_82D12D04;
	// bl 0x82d12a10
	ctx.lr = 0x82D12CF4;
	sub_82D12A10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D12D04:
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

__attribute__((alias("__imp__sub_82D12D18"))) PPC_WEAK_FUNC(sub_82D12D18);
PPC_FUNC_IMPL(__imp__sub_82D12D18) {
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
	// lis r30,-31758
	ctx.r30.s64 = -2081292288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-2568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2568);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d12d68
	if (cr6.eq) goto loc_82D12D68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d52cb8
	ctx.lr = 0x82D12D48;
	sub_82D52CB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d12d70
	if (!cr6.eq) goto loc_82D12D70;
	// lwz r3,-2568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2568);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d12d68
	if (cr6.eq) goto loc_82D12D68;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d52e88
	ctx.lr = 0x82D12D68;
	sub_82D52E88(ctx, base);
loc_82D12D68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d12d94
	goto loc_82D12D94;
loc_82D12D70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d126b0
	ctx.lr = 0x82D12D78;
	sub_82D126B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82d12d68
	if (cr6.eq) goto loc_82D12D68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d12cc0
	ctx.lr = 0x82D12D88;
	sub_82D12CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82D12D94:
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

__attribute__((alias("__imp__sub_82D12DAC"))) PPC_WEAK_FUNC(sub_82D12DAC);
PPC_FUNC_IMPL(__imp__sub_82D12DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D12DB0"))) PPC_WEAK_FUNC(sub_82D12DB0);
PPC_FUNC_IMPL(__imp__sub_82D12DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d12dc4
	if (!cr6.eq) goto loc_82D12DC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D12DC4:
	// lbz r11,230(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 230);
	// li r10,3
	ctx.r10.s64 = 3;
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

__attribute__((alias("__imp__sub_82D12DDC"))) PPC_WEAK_FUNC(sub_82D12DDC);
PPC_FUNC_IMPL(__imp__sub_82D12DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D12DE0"))) PPC_WEAK_FUNC(sub_82D12DE0);
PPC_FUNC_IMPL(__imp__sub_82D12DE0) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// beq cr6,0x82d12e18
	if (cr6.eq) goto loc_82D12E18;
	// addi r11,r11,8120
	ctx.r11.s64 = ctx.r11.s64 + 8120;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// b 0x82d12e1c
	goto loc_82D12E1C;
loc_82D12E18:
	// addi r4,r11,8120
	ctx.r4.s64 = ctx.r11.s64 + 8120;
loc_82D12E1C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d12e3c
	if (cr6.eq) goto loc_82D12E3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D12E3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D12E3C:
	// stb r30,1230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1230, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82D12E58"))) PPC_WEAK_FUNC(sub_82D12E58);
PPC_FUNC_IMPL(__imp__sub_82D12E58) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1229(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1229, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D12E60"))) PPC_WEAK_FUNC(sub_82D12E60);
PPC_FUNC_IMPL(__imp__sub_82D12E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,1192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1192);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r4,1192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1192, ctx.r4.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,1192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1192, ctx.r4.u32);
	// b 0x8337f1e0
	sub_8337F1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D12E88"))) PPC_WEAK_FUNC(sub_82D12E88);
PPC_FUNC_IMPL(__imp__sub_82D12E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D12E8C"))) PPC_WEAK_FUNC(sub_82D12E8C);
PPC_FUNC_IMPL(__imp__sub_82D12E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D12E90"))) PPC_WEAK_FUNC(sub_82D12E90);
PPC_FUNC_IMPL(__imp__sub_82D12E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D12E98;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d13038
	if (!cr6.eq) goto loc_82D13038;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,24704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24704);
	// bl 0x83815a48
	ctx.lr = 0x82D12EBC;
	sub_83815A48(ctx, base);
	// bl 0x82d4b8e0
	ctx.lr = 0x82D12EC0;
	sub_82D4B8E0(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lwz r4,1192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	// bl 0x8337f1e0
	ctx.lr = 0x82D12ECC;
	sub_8337F1E0(ctx, base);
	// li r4,-101
	ctx.r4.s64 = -101;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83545640
	ctx.lr = 0x82D12ED8;
	sub_83545640(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d5e0
	ctx.lr = 0x82D12EE4;
	sub_82D2D5E0(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r11,7932
	ctx.r27.s64 = ctx.r11.s64 + 7932;
	// beq cr6,0x82d12f20
	if (cr6.eq) goto loc_82D12F20;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r27,164
	ctx.r4.s64 = ctx.r27.s64 + 164;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D12F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d12f20
	if (cr6.eq) goto loc_82D12F20;
	// stb r28,165(r3)
	PPC_STORE_U8(ctx.r3.u32 + 165, ctx.r28.u8);
loc_82D12F20:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82D12F34;
	sub_82D2D510(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82d29598
	ctx.lr = 0x82D12F44;
	sub_82D29598(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// addi r30,r27,3
	ctx.r30.s64 = ctx.r27.s64 + 3;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82D12F54:
	// lbz r10,-1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82D12F6C;
	sub_82D2D510(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,18
	ctx.r4.s64 = 18;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82D12F88;
	sub_82D2D510(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d294d0
	ctx.lr = 0x82D12F98;
	sub_82D294D0(ctx, base);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r8,r27,25
	ctx.r8.s64 = ctx.r27.s64 + 25;
	// stfsu f31,12(r29)
	ctx.fpscr.disableFlushMode();
	ea = 12 + ctx.r29.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r30,r8
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, xer);
	// blt cr6,0x82d12f54
	if (cr6.lt) goto loc_82D12F54;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D12FD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D12FF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lbz r30,1230(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1230);
	// stfs f13,224(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// addi r4,r27,176
	ctx.r4.s64 = ctx.r27.s64 + 176;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82d13014
	if (!cr6.eq) goto loc_82D13014;
	// addi r4,r27,188
	ctx.r4.s64 = ctx.r27.s64 + 188;
loc_82D13014:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d13034
	if (cr6.eq) goto loc_82D13034;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D13034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D13034:
	// stb r30,1230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1230, ctx.r30.u8);
loc_82D13038:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D13044"))) PPC_WEAK_FUNC(sub_82D13044);
PPC_FUNC_IMPL(__imp__sub_82D13044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D13048"))) PPC_WEAK_FUNC(sub_82D13048);
PPC_FUNC_IMPL(__imp__sub_82D13048) {
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
	// lwz r11,1204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d130a0
	if (cr6.eq) goto loc_82D130A0;
	// lbz r11,1229(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1229);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 & ctx.r4.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82d1308c
	if (cr6.eq) goto loc_82D1308C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12de0
	ctx.lr = 0x82D1308C;
	sub_82D12DE0(ctx, base);
loc_82D1308C:
	// lbz r11,230(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 230);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82d130a0
	if (cr6.lt) goto loc_82D130A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r11.u8);
loc_82D130A0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D130B4"))) PPC_WEAK_FUNC(sub_82D130B4);
PPC_FUNC_IMPL(__imp__sub_82D130B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D130B8"))) PPC_WEAK_FUNC(sub_82D130B8);
PPC_FUNC_IMPL(__imp__sub_82D130B8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d12de0
	ctx.lr = 0x82D130D4;
	sub_82D12DE0(ctx, base);
	// lbz r11,230(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 230);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d130e8
	if (!cr6.lt) goto loc_82D130E8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r11.u8);
loc_82D130E8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D130FC"))) PPC_WEAK_FUNC(sub_82D130FC);
PPC_FUNC_IMPL(__imp__sub_82D130FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D13100"))) PPC_WEAK_FUNC(sub_82D13100);
PPC_FUNC_IMPL(__imp__sub_82D13100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d1315c
	if (!cr6.eq) goto loc_82D1315C;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82D1311C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82d13130
	if (!cr6.lt) goto loc_82D13130;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82d13150
	goto loc_82D13150;
loc_82D13130:
	// lbz r8,45(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d13148
	if (cr6.eq) goto loc_82D13148;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d13148
	if (!cr6.lt) goto loc_82D13148;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82D13148:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D13150:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d1311c
	if (cr6.eq) goto loc_82D1311C;
loc_82D1315C:
	// lbz r11,45(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d13174
	if (cr6.eq) goto loc_82D13174;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82d13178
	goto loc_82D13178;
loc_82D13174:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82D13178:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d131b0
	if (!cr6.eq) goto loc_82D131B0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82D13188:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82d131a0
	if (!cr6.lt) goto loc_82D131A0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82d131a4
	goto loc_82D131A4;
loc_82D131A0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82D131A4:
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d13188
	if (cr6.eq) goto loc_82D13188;
loc_82D131B0:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D131BC"))) PPC_WEAK_FUNC(sub_82D131BC);
PPC_FUNC_IMPL(__imp__sub_82D131BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D131C0"))) PPC_WEAK_FUNC(sub_82D131C0);
PPC_FUNC_IMPL(__imp__sub_82D131C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d13200
	if (!cr6.eq) goto loc_82D13200;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82D131D8:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x82d131ec
	if (!cr6.lt) goto loc_82D131EC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82d131f4
	goto loc_82D131F4;
loc_82D131EC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D131F4:
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d131d8
	if (cr6.eq) goto loc_82D131D8;
loc_82D13200:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d13230
	if (cr6.eq) goto loc_82D13230;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82d13230
	if (cr6.lt) goto loc_82D13230;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D13230:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D13244"))) PPC_WEAK_FUNC(sub_82D13244);
PPC_FUNC_IMPL(__imp__sub_82D13244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D13248"))) PPC_WEAK_FUNC(sub_82D13248);
PPC_FUNC_IMPL(__imp__sub_82D13248) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,1196
	ctx.r4.s64 = ctx.r3.s64 + 1196;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d131c0
	ctx.lr = 0x82D13270;
	sub_82D131C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_82D13298"))) PPC_WEAK_FUNC(sub_82D13298);
PPC_FUNC_IMPL(__imp__sub_82D13298) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_82D132D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d132d4
	if (!cr6.eq) goto loc_82D132D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D132F4;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82D1330C"))) PPC_WEAK_FUNC(sub_82D1330C);
PPC_FUNC_IMPL(__imp__sub_82D1330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D13310"))) PPC_WEAK_FUNC(sub_82D13310);
PPC_FUNC_IMPL(__imp__sub_82D13310) {
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
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d13344
	if (cr6.lt) goto loc_82D13344;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D13344;
	sub_825952B8(ctx, base);
loc_82D13344:
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

__attribute__((alias("__imp__sub_82D1336C"))) PPC_WEAK_FUNC(sub_82D1336C);
PPC_FUNC_IMPL(__imp__sub_82D1336C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D13370"))) PPC_WEAK_FUNC(sub_82D13370);
PPC_FUNC_IMPL(__imp__sub_82D13370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D13378;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,232
	ctx.r30.s64 = ctx.r3.s64 + 232;
	// addi r31,r3,681
	ctx.r31.s64 = ctx.r3.s64 + 681;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82D13398:
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d133dc
	if (cr6.eq) goto loc_82D133DC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d133c0
	if (cr6.lt) goto loc_82D133C0;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// b 0x82d133dc
	goto loc_82D133DC;
loc_82D133C0:
	// stb r25,-1(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1, ctx.r25.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r26,228(r29)
	PPC_STORE_U8(ctx.r29.u32 + 228, ctx.r26.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,3
	ctx.r4.s64 = ctx.r31.s64 + 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D133DC;
	sub_8259CB28(ctx, base);
loc_82D133DC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x82d13398
	if (!cr0.eq) goto loc_82D13398;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D133F4"))) PPC_WEAK_FUNC(sub_82D133F4);
PPC_FUNC_IMPL(__imp__sub_82D133F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D133F8"))) PPC_WEAK_FUNC(sub_82D133F8);
PPC_FUNC_IMPL(__imp__sub_82D133F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D13400;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,45(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 45);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d13428
	if (cr6.eq) goto loc_82D13428;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82D13428;
	sub_831CC188(ctx, base);
loc_82D13428:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x837c05a0
	ctx.lr = 0x82D13434;
	sub_837C05A0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82d13450
	if (cr6.eq) goto loc_82D13450;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82d13474
	goto loc_82D13474;
loc_82D13450:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d13468
	if (cr6.eq) goto loc_82D13468;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82d13474
	goto loc_82D13474;
loc_82D13468:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d13560
	if (!cr6.eq) goto loc_82D13560;
loc_82D13474:
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d13488
	if (!cr6.eq) goto loc_82D13488;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82D13488:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d134a0
	if (!cr6.eq) goto loc_82D134A0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82d134b8
	goto loc_82D134B8;
loc_82D134A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d134b4
	if (!cr6.eq) goto loc_82D134B4;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82d134b8
	goto loc_82D134B8;
loc_82D134B4:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82D134B8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d13508
	if (!cr6.eq) goto loc_82D13508;
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d134dc
	if (cr6.eq) goto loc_82D134DC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82d13504
	goto loc_82D13504;
loc_82D134DC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d13504
	if (!cr6.eq) goto loc_82D13504;
loc_82D134F0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d134f0
	if (cr6.eq) goto loc_82D134F0;
loc_82D13504:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82D13508:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d135f4
	if (!cr6.eq) goto loc_82D135F4;
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d13530
	if (cr6.eq) goto loc_82D13530;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82d135f4
	goto loc_82D135F4;
loc_82D13530:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d13558
	if (!cr6.eq) goto loc_82D13558;
loc_82D13544:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d13544
	if (cr6.eq) goto loc_82D13544;
loc_82D13558:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82d135f4
	goto loc_82D135F4;
loc_82D13560:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d13580
	if (!cr6.eq) goto loc_82D13580;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82d135a8
	goto loc_82D135A8;
loc_82D13580:
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d13594
	if (!cr6.eq) goto loc_82D13594;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82D13594:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82D135A8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d135c0
	if (!cr6.eq) goto loc_82D135C0;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82d135dc
	goto loc_82D135DC;
loc_82D135C0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d135d8
	if (!cr6.eq) goto loc_82D135D8;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82d135dc
	goto loc_82D135DC;
loc_82D135D8:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82D135DC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,44(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 44);
	// lbz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 44);
	// stb r9,44(r25)
	PPC_STORE_U8(ctx.r25.u32 + 44, ctx.r9.u8);
	// stb r10,44(r26)
	PPC_STORE_U8(ctx.r26.u32 + 44, ctx.r10.u8);
loc_82D135F4:
	// lbz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d1378c
	if (!cr6.eq) goto loc_82D1378C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d13788
	if (cr6.eq) goto loc_82D13788;
loc_82D13618:
	// lbz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d13788
	if (!cr6.eq) goto loc_82D13788;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d136d0
	if (!cr6.eq) goto loc_82D136D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d13658
	if (!cr6.eq) goto loc_82D13658;
	// stb r30,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835840a0
	ctx.lr = 0x82D13654;
	sub_835840A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D13658:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d13724
	if (!cr6.eq) goto loc_82D13724;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82d13684
	if (!cr6.eq) goto loc_82D13684;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d13720
	if (cr6.eq) goto loc_82D13720;
loc_82D13684:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d136ac
	if (!cr6.eq) goto loc_82D136AC;
	// stb r30,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83b63848
	ctx.lr = 0x82D136A8;
	sub_83B63848(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D136AC:
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r30.u8);
	// bl 0x835840a0
	ctx.lr = 0x82D136CC;
	sub_835840A0(ctx, base);
	// b 0x82d13788
	goto loc_82D13788;
loc_82D136D0:
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d136f4
	if (!cr6.eq) goto loc_82D136F4;
	// stb r30,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83b63848
	ctx.lr = 0x82D136F0;
	sub_83B63848(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D136F4:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d13724
	if (!cr6.eq) goto loc_82D13724;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82d13740
	if (!cr6.eq) goto loc_82D13740;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d13740
	if (!cr6.eq) goto loc_82D13740;
loc_82D13720:
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
loc_82D13724:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d13618
	if (!cr6.eq) goto loc_82D13618;
	// b 0x82d13788
	goto loc_82D13788;
loc_82D13740:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d13768
	if (!cr6.eq) goto loc_82D13768;
	// stb r30,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835840a0
	ctx.lr = 0x82D13764;
	sub_835840A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D13768:
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r30.u8);
	// bl 0x83b63848
	ctx.lr = 0x82D13788;
	sub_83B63848(ctx, base);
loc_82D13788:
	// stb r30,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r30.u8);
loc_82D1378C:
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d137b0
	if (cr6.lt) goto loc_82D137B0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D137B0;
	sub_825952B8(ctx, base);
loc_82D137B0:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D137D0;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d137e4
	if (cr6.eq) goto loc_82D137E4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82D137E4:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D137F4"))) PPC_WEAK_FUNC(sub_82D137F4);
PPC_FUNC_IMPL(__imp__sub_82D137F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D137F8"))) PPC_WEAK_FUNC(sub_82D137F8);
PPC_FUNC_IMPL(__imp__sub_82D137F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D13800;
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
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d13894
	if (!cr6.eq) goto loc_82D13894;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
loc_82D13838:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d1385c
	if (cr6.eq) goto loc_82D1385C;
	// srawi r6,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r5,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r5.s64 = ctx.r8.s64 - ctx.r10.s64;
	// adde r31,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ctx.r7.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82d13870
	goto loc_82D13870;
loc_82D1385C:
	// subfc r7,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// eqv r6,r8,r10
	ctx.r6.u64 = ~(ctx.r8.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82D13870:
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d13884
	if (cr6.eq) goto loc_82D13884;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82d13888
	goto loc_82D13888;
loc_82D13884:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82D13888:
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d13838
	if (cr6.eq) goto loc_82D13838;
loc_82D13894:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d138f4
	if (cr6.eq) goto loc_82D138F4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d138ec
	if (!cr6.eq) goto loc_82D138EC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82e64970
	ctx.lr = 0x82D138D0;
	sub_82E64970(ctx, base);
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
loc_82D138EC:
	// bl 0x82921010
	ctx.lr = 0x82D138F0;
	sub_82921010(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D138F4:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d13938
	if (!cr6.lt) goto loc_82D13938;
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
	// bl 0x82e64970
	ctx.lr = 0x82D1391C;
	sub_82E64970(ctx, base);
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
loc_82D13938:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r27,13
	ctx.r3.s64 = ctx.r27.s64 + 13;
	// bl 0x82d13310
	ctx.lr = 0x82D13944;
	sub_82D13310(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82D13958;
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

__attribute__((alias("__imp__sub_82D13970"))) PPC_WEAK_FUNC(sub_82D13970);
PPC_FUNC_IMPL(__imp__sub_82D13970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D13978;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d139b4
	if (!cr6.eq) goto loc_82D139B4;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e64970
	ctx.lr = 0x82D139A8;
	sub_82E64970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D139B4:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d139f8
	if (!cr6.eq) goto loc_82D139F8;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d13af4
	if (!cr6.lt) goto loc_82D13AF4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e64970
	ctx.lr = 0x82D139EC;
	sub_82E64970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D139F8:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82d13a34
	if (!cr6.eq) goto loc_82D13A34;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x82d13af4
	if (!cr6.lt) goto loc_82D13AF4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e64970
	ctx.lr = 0x82D13A28;
	sub_82E64970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D13A34:
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
	// ble cr6,0x82d13a98
	if (!cr6.gt) goto loc_82D13A98;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82921010
	ctx.lr = 0x82D13A50;
	sub_82921010(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bge cr6,0x82d13a94
	if (!cr6.lt) goto loc_82D13A94;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d13ae0
	if (!cr6.eq) goto loc_82D13AE0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82D13A80:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e64970
	ctx.lr = 0x82D13A88;
	sub_82E64970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D13A94:
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
loc_82D13A98:
	// bge cr6,0x82d13af4
	if (!cr6.lt) goto loc_82D13AF4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c05a0
	ctx.lr = 0x82D13AA8;
	sub_837C05A0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82d13ac0
	if (cr6.eq) goto loc_82D13AC0;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// bge cr6,0x82d13af4
	if (!cr6.lt) goto loc_82D13AF4;
loc_82D13AC0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d13a80
	if (cr6.eq) goto loc_82D13A80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82D13AE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82e64970
	ctx.lr = 0x82D13AE8;
	sub_82E64970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D13AF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d137f8
	ctx.lr = 0x82D13B08;
	sub_82D137F8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D13B20"))) PPC_WEAK_FUNC(sub_82D13B20);
PPC_FUNC_IMPL(__imp__sub_82D13B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D13B28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d13b74
	if (!cr6.eq) goto loc_82D13B74;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d13b74
	if (!cr6.eq) goto loc_82D13B74;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82b1c8d0
	ctx.lr = 0x82D13B5C;
	sub_82B1C8D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D13B74:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82d13ba4
	if (cr6.eq) goto loc_82D13BA4;
loc_82D13B7C:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x837c05a0
	ctx.lr = 0x82D13B88;
	sub_837C05A0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d133f8
	ctx.lr = 0x82D13B98;
	sub_82D133F8(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d13b7c
	if (!cr6.eq) goto loc_82D13B7C;
loc_82D13BA4:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D13BB4"))) PPC_WEAK_FUNC(sub_82D13BB4);
PPC_FUNC_IMPL(__imp__sub_82D13BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D13BB8"))) PPC_WEAK_FUNC(sub_82D13BB8);
PPC_FUNC_IMPL(__imp__sub_82D13BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D13BC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d13100
	ctx.lr = 0x82D13BD8;
	sub_82D13100(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83895840
	ctx.lr = 0x82D13BFC;
	sub_83895840(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d13b20
	ctx.lr = 0x82D13C10;
	sub_82D13B20(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D13C1C"))) PPC_WEAK_FUNC(sub_82D13C1C);
PPC_FUNC_IMPL(__imp__sub_82D13C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D13C20"))) PPC_WEAK_FUNC(sub_82D13C20);
PPC_FUNC_IMPL(__imp__sub_82D13C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D13C28;
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
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D13C4C;
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
	// stb r10,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r10.u8);
	// stb r10,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r10.u8);
	// beq 0x82d13ca8
	if (cr0.eq) goto loc_82D13CA8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82D13CA8;
	sub_8259CB28(ctx, base);
loc_82D13CA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D13CB4"))) PPC_WEAK_FUNC(sub_82D13CB4);
PPC_FUNC_IMPL(__imp__sub_82D13CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D13CB8"))) PPC_WEAK_FUNC(sub_82D13CB8);
PPC_FUNC_IMPL(__imp__sub_82D13CB8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r30,r3,1196
	ctx.r30.s64 = ctx.r3.s64 + 1196;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d131c0
	ctx.lr = 0x82D13CE8;
	sub_82D131C0(ctx, base);
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d13d04
	if (cr6.eq) goto loc_82D13D04;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d13bb8
	ctx.lr = 0x82D13D04;
	sub_82D13BB8(ctx, base);
loc_82D13D04:
	// addi r30,r31,1212
	ctx.r30.s64 = ctx.r31.s64 + 1212;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d131c0
	ctx.lr = 0x82D13D18;
	sub_82D131C0(ctx, base);
	// lwz r11,1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d13d34
	if (cr6.eq) goto loc_82D13D34;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d13bb8
	ctx.lr = 0x82D13D34;
	sub_82D13BB8(ctx, base);
loc_82D13D34:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1228, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82D13D54"))) PPC_WEAK_FUNC(sub_82D13D54);
PPC_FUNC_IMPL(__imp__sub_82D13D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D13D58"))) PPC_WEAK_FUNC(sub_82D13D58);
PPC_FUNC_IMPL(__imp__sub_82D13D58) {
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
	// bl 0x82d13c20
	ctx.lr = 0x82D13D80;
	sub_82D13C20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d137f8
	ctx.lr = 0x82D13D94;
	sub_82D137F8(ctx, base);
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

__attribute__((alias("__imp__sub_82D13DB0"))) PPC_WEAK_FUNC(sub_82D13DB0);
PPC_FUNC_IMPL(__imp__sub_82D13DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D13DB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// addi r9,r11,8216
	ctx.r9.s64 = ctx.r11.s64 + 8216;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,1212
	ctx.r4.s64 = ctx.r3.s64 + 1212;
	// stw r28,-29760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29760, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r6,1216(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d13b20
	ctx.lr = 0x82D13DF0;
	sub_82D13B20(ctx, base);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,1216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// bl 0x825952b8
	ctx.lr = 0x82D13E04;
	sub_825952B8(ctx, base);
	// lwz r6,1200(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r4,r31,1196
	ctx.r4.s64 = ctx.r31.s64 + 1196;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d13b20
	ctx.lr = 0x82D13E18;
	sub_82D13B20(ctx, base);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,1200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// bl 0x825952b8
	ctx.lr = 0x82D13E28;
	sub_825952B8(ctx, base);
	// addi r11,r31,1192
	ctx.r11.s64 = ctx.r31.s64 + 1192;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82D13E38:
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d13e58
	if (cr6.lt) goto loc_82D13E58;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D13E58;
	sub_825952B8(ctx, base);
loc_82D13E58:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// bge 0x82d13e38
	if (!cr0.lt) goto loc_82D13E38;
	// addi r30,r31,680
	ctx.r30.s64 = ctx.r31.s64 + 680;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82D13E74:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d13e94
	if (cr6.lt) goto loc_82D13E94;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D13E94;
	sub_825952B8(ctx, base);
loc_82D13E94:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// bge 0x82d13e74
	if (!cr0.lt) goto loc_82D13E74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x82D13EB0;
	sub_831032A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D13EB8"))) PPC_WEAK_FUNC(sub_82D13EB8);
PPC_FUNC_IMPL(__imp__sub_82D13EB8) {
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
	// mulli r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d13efc
	if (!cr6.eq) goto loc_82D13EFC;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d13fec
	if (cr6.eq) goto loc_82D13FEC;
loc_82D13EFC:
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,8104
	ctx.r4.s64 = ctx.r8.s64 + 8104;
	// stb r10,680(r11)
	PPC_STORE_U8(ctx.r11.u32 + 680, ctx.r10.u8);
	// addi r3,r11,684
	ctx.r3.s64 = ctx.r11.s64 + 684;
	// stb r9,681(r11)
	PPC_STORE_U8(ctx.r11.u32 + 681, ctx.r9.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D13F28;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r30,15
	cr6.compare<uint32_t>(ctx.r30.u32, 15, xer);
	// bgt cr6,0x82d13fec
	if (cr6.gt) goto loc_82D13FEC;
	// lis r12,-32047
	ctx.r12.s64 = -2100232192;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16200
	ctx.r12.s64 = ctx.r12.s64 + 16200;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u32) {
	case 0:
		goto loc_82D13F88;
	case 1:
		goto loc_82D13F90;
	case 2:
		goto loc_82D13F98;
	case 3:
		goto loc_82D13FA0;
	case 4:
		goto loc_82D13FA8;
	case 5:
		goto loc_82D13FB0;
	case 6:
		goto loc_82D13FEC;
	case 7:
		goto loc_82D13FEC;
	case 8:
		goto loc_82D13FEC;
	case 9:
		goto loc_82D13FEC;
	case 10:
		goto loc_82D13FB8;
	case 11:
		goto loc_82D13FC0;
	case 12:
		goto loc_82D13FD0;
	case 13:
		goto loc_82D13FD8;
	case 14:
		goto loc_82D13FC8;
	case 15:
		goto loc_82D13FE0;
	default:
		return;
	}
	// lwz r22,16264(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16264);
	// lwz r22,16272(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16272);
	// lwz r22,16280(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16280);
	// lwz r22,16288(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16288);
	// lwz r22,16296(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16296);
	// lwz r22,16304(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r22,16364(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16364);
	// lwz r22,16364(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16364);
	// lwz r22,16364(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16364);
	// lwz r22,16364(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16364);
	// lwz r22,16312(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16312);
	// lwz r22,16320(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16320);
	// lwz r22,16336(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16336);
	// lwz r22,16344(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16344);
	// lwz r22,16328(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16328);
	// lwz r22,16352(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16352);
loc_82D13F88:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82d13fe4
	goto loc_82D13FE4;
loc_82D13F90:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82d13fe4
	goto loc_82D13FE4;
loc_82D13F98:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82d13fe4
	goto loc_82D13FE4;
loc_82D13FA0:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82d13fe4
	goto loc_82D13FE4;
loc_82D13FA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d13fe4
	goto loc_82D13FE4;
loc_82D13FB0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d13fe4
	goto loc_82D13FE4;
loc_82D13FB8:
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82d13fe4
	goto loc_82D13FE4;
loc_82D13FC0:
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x82d13fe4
	goto loc_82D13FE4;
loc_82D13FC8:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82d13fe4
	goto loc_82D13FE4;
loc_82D13FD0:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82d13fe4
	goto loc_82D13FE4;
loc_82D13FD8:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82d13fe4
	goto loc_82D13FE4;
loc_82D13FE0:
	// li r4,8
	ctx.r4.s64 = 8;
loc_82D13FE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d13cb8
	ctx.lr = 0x82D13FEC;
	sub_82D13CB8(ctx, base);
loc_82D13FEC:
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

__attribute__((alias("__imp__sub_82D14004"))) PPC_WEAK_FUNC(sub_82D14004);
PPC_FUNC_IMPL(__imp__sub_82D14004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D14008"))) PPC_WEAK_FUNC(sub_82D14008);
PPC_FUNC_IMPL(__imp__sub_82D14008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D14010;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r29,228(r3)
	PPC_STORE_U8(ctx.r3.u32 + 228, ctx.r29.u8);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82D14028:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d13eb8
	ctx.lr = 0x82D14034;
	sub_82D13EB8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// blt cr6,0x82d14028
	if (cr6.lt) goto loc_82D14028;
	// lwz r11,1192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d14068
	if (cr6.eq) goto loc_82D14068;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r29,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d14068
	if (cr6.eq) goto loc_82D14068;
	// stw r29,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8337f1e0
	ctx.lr = 0x82D14068;
	sub_8337F1E0(ctx, base);
loc_82D14068:
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r3,r31,1196
	ctx.r3.s64 = ctx.r31.s64 + 1196;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82b1c5f8
	ctx.lr = 0x82D14078;
	sub_82B1C5F8(ctx, base);
	// lwz r10,1200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r3,r31,1212
	ctx.r3.s64 = ctx.r31.s64 + 1212;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,1200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,1200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r28,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r28.u32);
	// lwz r7,1216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82b1c5f8
	ctx.lr = 0x82D140A4;
	sub_82B1C5F8(ctx, base);
	// lwz r6,1216(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// lwz r5,1216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// stw r5,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r5.u32);
	// lwz r4,1216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// stw r4,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r4.u32);
	// stw r28,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r28.u32);
	// stb r29,1228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1228, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D140CC"))) PPC_WEAK_FUNC(sub_82D140CC);
PPC_FUNC_IMPL(__imp__sub_82D140CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D140D0"))) PPC_WEAK_FUNC(sub_82D140D0);
PPC_FUNC_IMPL(__imp__sub_82D140D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D140D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d14120
	if (!cr6.eq) goto loc_82D14120;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D140F8:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d1410c
	if (!cr6.lt) goto loc_82D1410C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82d14114
	goto loc_82D14114;
loc_82D1410C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D14114:
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d140f8
	if (cr6.eq) goto loc_82D140F8;
loc_82D14120:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d1413c
	if (cr6.eq) goto loc_82D1413C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82d141e4
	if (!cr6.lt) goto loc_82D141E4;
loc_82D1413C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82D14178;
	sub_8259CB28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d13c20
	ctx.lr = 0x82D14184;
	sub_82D13C20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d13970
	ctx.lr = 0x82D14198;
	sub_82D13970(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// blt cr6,0x82d141bc
	if (cr6.lt) goto loc_82D141BC;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82D141BC;
	sub_825952B8(ctx, base);
loc_82D141BC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// blt cr6,0x82d141e4
	if (cr6.lt) goto loc_82D141E4;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D141E4;
	sub_825952B8(ctx, base);
loc_82D141E4:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D141F0"))) PPC_WEAK_FUNC(sub_82D141F0);
PPC_FUNC_IMPL(__imp__sub_82D141F0) {
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
	ctx.lr = 0x82D141F8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r26,r11,8092
	ctx.r26.s64 = ctx.r11.s64 + 8092;
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// bl 0x83103328
	ctx.lr = 0x82D14214;
	sub_83103328(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r8,r9,8216
	ctx.r8.s64 = ctx.r9.s64 + 8216;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r28,r30,232
	ctx.r28.s64 = ctx.r30.s64 + 232;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,220(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 220, temp.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stfs f31,224(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 224, temp.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stb r29,228(r30)
	PPC_STORE_U8(ctx.r30.u32 + 228, ctx.r29.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r31,229(r30)
	PPC_STORE_U8(ctx.r30.u32 + 229, ctx.r31.u8);
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r31,230(r30)
	PPC_STORE_U8(ctx.r30.u32 + 230, ctx.r31.u8);
loc_82D1425C:
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r31,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// stb r31,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r31.u8);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r31.u32);
	// stb r31,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r31.u8);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r31,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r31.u32);
	// stb r31,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r31.u8);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// bdnz 0x82d1425c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D1425C;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r30,680
	ctx.r8.s64 = ctx.r30.s64 + 680;
	// addi r11,r8,24
	ctx.r11.s64 = ctx.r8.s64 + 24;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D142A4:
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,-23(r11)
	PPC_STORE_U8(ctx.r11.u32 + -23, ctx.r31.u8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// stb r31,-20(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20, ctx.r31.u8);
	// stb r31,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r31.u8);
	// stb r31,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r31.u8);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d142dc
	if (cr6.lt) goto loc_82D142DC;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82d142e0
	goto loc_82D142E0;
loc_82D142DC:
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
loc_82D142E0:
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r31.u8);
	// stb r31,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r31.u8);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r31,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r31.u32);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d14308
	if (cr6.lt) goto loc_82D14308;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x82d1430c
	goto loc_82D1430C;
loc_82D14308:
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
loc_82D1430C:
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r31.u8);
	// stb r31,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r31.u8);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// stw r31,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r31.u32);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d14334
	if (cr6.lt) goto loc_82D14334;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x82d14338
	goto loc_82D14338;
loc_82D14334:
	// addi r9,r11,76
	ctx.r9.s64 = ctx.r11.s64 + 76;
loc_82D14338:
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82d142a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D142A4;
	// stw r29,1192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1192, ctx.r29.u32);
	// addi r27,r30,1196
	ctx.r27.s64 = ctx.r30.s64 + 1196;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837dfc58
	ctx.lr = 0x82D14360;
	sub_837DFC58(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1212
	ctx.r3.s64 = ctx.r30.s64 + 1212;
	// bl 0x837dfc58
	ctx.lr = 0x82D14370;
	sub_837DFC58(ctx, base);
	// stb r29,1230(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1230, ctx.r29.u8);
	// stb r31,1228(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1228, ctx.r31.u8);
	// li r29,16
	ctx.r29.s64 = 16;
	// stb r31,1229(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1229, ctx.r31.u8);
loc_82D14380:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D14390;
	sub_8259CC28(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bne 0x82d14380
	if (!cr0.eq) goto loc_82D14380;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D143A8:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stfsu f31,12(r11)
	ctx.fpscr.disableFlushMode();
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d143a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D143A8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82b1c5f8
	ctx.lr = 0x82D143C8;
	sub_82B1C5F8(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D143F4"))) PPC_WEAK_FUNC(sub_82D143F4);
PPC_FUNC_IMPL(__imp__sub_82D143F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D143F8"))) PPC_WEAK_FUNC(sub_82D143F8);
PPC_FUNC_IMPL(__imp__sub_82D143F8) {
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
	// bl 0x82d13db0
	ctx.lr = 0x82D14418;
	sub_82D13DB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d14430
	if (cr6.eq) goto loc_82D14430;
	// bl 0x82416268
	ctx.lr = 0x82D1442C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D14430:
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

__attribute__((alias("__imp__sub_82D14448"))) PPC_WEAK_FUNC(sub_82D14448);
PPC_FUNC_IMPL(__imp__sub_82D14448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82D14450;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce778
	ctx.lr = 0x82D14458;
	__savefpr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d14484
	if (!cr6.eq) goto loc_82D14484;
	// lwz r11,1204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82d14484
	if (!cr6.gt) goto loc_82D14484;
	// bl 0x82d12e90
	ctx.lr = 0x82D14480;
	sub_82D12E90(ctx, base);
	// stb r22,1228(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1228, ctx.r22.u8);
loc_82D14484:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d147cc
	if (cr6.eq) goto loc_82D147CC;
	// lbz r11,1228(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d147cc
	if (cr6.eq) goto loc_82D147CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lfs f30,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_82D144B4:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82D144C8;
	sub_82D2D510(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r29,7
	ctx.r5.s64 = ctx.r29.s64 + 7;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82D144E0;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d14504
	if (cr6.eq) goto loc_82D14504;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D14504;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D14504:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82d14524
	if (cr6.eq) goto loc_82D14524;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D14524;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D14524:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,7
	cr6.compare<uint32_t>(ctx.r29.u32, 7, xer);
	// blt cr6,0x82d144b4
	if (cr6.lt) goto loc_82D144B4;
	// lwz r11,1200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1200);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// beq cr6,0x82d1475c
	if (cr6.eq) goto loc_82D1475C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r25,-31772
	ctx.r25.s64 = -2082209792;
	// addi r24,r11,8004
	ctx.r24.s64 = ctx.r11.s64 + 8004;
	// lfs f28,-6672(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6672);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,-26940(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26940);
	ctx.f29.f64 = double(temp.f32);
loc_82D14568:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82D1457C;
	sub_82D2D510(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r28,7
	ctx.r5.s64 = ctx.r28.s64 + 7;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82D14594;
	sub_82D2D510(ctx, base);
	// lwz r11,-13652(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13652);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-19
	ctx.r11.s64 = ctx.r11.s64 + -19;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d04828
	ctx.lr = 0x82D145B0;
	sub_82D04828(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d14668
	if (cr6.eq) goto loc_82D14668;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// bl 0x82d29598
	ctx.lr = 0x82D145CC;
	sub_82D29598(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82D145DC;
	sub_82D2AEC8(ctx, base);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D145FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r27,24
	ctx.r7.u64 = ctx.r27.u32 & 0xFF;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d14614
	if (cr6.eq) goto loc_82D14614;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// b 0x82d14618
	goto loc_82D14618;
loc_82D14614:
	// fadds f13,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82D14618:
	// stfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D14634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28370
	ctx.lr = 0x82D14640;
	sub_82D28370(ctx, base);
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	// bl 0x82d08988
	ctx.lr = 0x82D14654;
	sub_82D08988(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d047a8
	ctx.lr = 0x82D1465C;
	sub_82D047A8(ctx, base);
	// lfs f0,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f31,f13,f29
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
loc_82D14668:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d14730
	if (cr6.eq) goto loc_82D14730;
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82D14688;
	sub_82D291E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82D14698;
	sub_82D2AEC8(ctx, base);
	// stfs f30,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D146B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d146d0
	if (cr6.eq) goto loc_82D146D0;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// b 0x82d146d4
	goto loc_82D146D4;
loc_82D146D0:
	// fadds f13,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82D146D4:
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D146F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d28370
	ctx.lr = 0x82D146FC;
	sub_82D28370(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d14710
	if (cr6.lt) goto loc_82D14710;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d14714
	goto loc_82D14714;
loc_82D14710:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82D14714:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d06fa0
	ctx.lr = 0x82D1471C;
	sub_82D06FA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d047a8
	ctx.lr = 0x82D14724;
	sub_82D047A8(ctx, base);
	// lfs f0,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f31,f13,f28
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
loc_82D14730:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x837c05a0
	ctx.lr = 0x82D1473C;
	sub_837C05A0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d04b60
	ctx.lr = 0x82D14744;
	sub_82D04B60(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,1200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1200);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d14568
	if (!cr6.eq) goto loc_82D14568;
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// bge cr6,0x82d147c8
	if (!cr6.lt) goto loc_82D147C8;
loc_82D1475C:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82D14770;
	sub_82D2D510(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r28,7
	ctx.r5.s64 = ctx.r28.s64 + 7;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82D14788;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d147a4
	if (cr6.eq) goto loc_82D147A4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82D147A4;
	sub_82D2AEC8(ctx, base);
loc_82D147A4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d147bc
	if (cr6.eq) goto loc_82D147BC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82D147BC;
	sub_82D2AEC8(ctx, base);
loc_82D147BC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// blt cr6,0x82d1475c
	if (cr6.lt) goto loc_82D1475C;
loc_82D147C8:
	// stb r23,1228(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1228, ctx.r23.u8);
loc_82D147CC:
	// lbz r11,230(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 230);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82d148fc
	if (cr6.gt) goto loc_82D148FC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d14834
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D14834;
	// bdzf 4*cr6+eq,0x82d148fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D148FC;
	// bdzf 4*cr6+eq,0x82d14874
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D14874;
	// bne cr6,0x82d148b4
	if (!cr6.eq) goto loc_82D148B4;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stb r22,228(r30)
	PPC_STORE_U8(ctx.r30.u32 + 228, ctx.r22.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d148fc
	if (cr6.eq) goto loc_82D148FC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r11,24712
	ctx.r9.s64 = ctx.r11.s64 + 24712;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,-4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D14820;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r22,230(r30)
	PPC_STORE_U8(ctx.r30.u32 + 230, ctx.r22.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7c4
	ctx.lr = 0x82D14830;
	__restfpr_28(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82D14834:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d148fc
	if (cr6.eq) goto loc_82D148FC;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,24712
	ctx.r10.s64 = ctx.r11.s64 + 24712;
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x82d2bb40
	ctx.lr = 0x82D14850;
	sub_82D2BB40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d148fc
	if (cr6.eq) goto loc_82D148FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,230(r30)
	PPC_STORE_U8(ctx.r30.u32 + 230, ctx.r11.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7c4
	ctx.lr = 0x82D14870;
	__restfpr_28(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82D14874:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d1489c
	if (cr6.eq) goto loc_82D1489C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,24712(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24712);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D1489C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D1489C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,230(r30)
	PPC_STORE_U8(ctx.r30.u32 + 230, ctx.r11.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7c4
	ctx.lr = 0x82D148B0;
	__restfpr_28(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82D148B4:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d148d8
	if (cr6.eq) goto loc_82D148D8;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,24712(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24712);
	// bl 0x82d2bb40
	ctx.lr = 0x82D148CC;
	sub_82D2BB40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d148fc
	if (cr6.eq) goto loc_82D148FC;
loc_82D148D8:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r11,230(r30)
	PPC_STORE_U8(ctx.r30.u32 + 230, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d148f4
	if (cr6.eq) goto loc_82D148F4;
	// bl 0x82d49a78
	ctx.lr = 0x82D148F0;
	sub_82D49A78(ctx, base);
	// stw r23,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r23.u32);
loc_82D148F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14008
	ctx.lr = 0x82D148FC;
	sub_82D14008(ctx, base);
loc_82D148FC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7c4
	ctx.lr = 0x82D14908;
	__restfpr_28(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D1490C"))) PPC_WEAK_FUNC(sub_82D1490C);
PPC_FUNC_IMPL(__imp__sub_82D1490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D14910"))) PPC_WEAK_FUNC(sub_82D14910);
PPC_FUNC_IMPL(__imp__sub_82D14910) {
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
	// bl 0x82d34e50
	ctx.lr = 0x82D14928;
	sub_82D34E50(ctx, base);
	// bl 0x82d34da8
	ctx.lr = 0x82D1492C;
	sub_82D34DA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,229(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 229);
	// beq cr6,0x82d14978
	if (cr6.eq) goto loc_82D14978;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d149c8
	if (!cr6.eq) goto loc_82D149C8;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d1495c
	if (cr6.eq) goto loc_82D1495C;
	// bl 0x82d49a78
	ctx.lr = 0x82D14954;
	sub_82D49A78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82D1495C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D14978:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d149b8
	if (cr6.eq) goto loc_82D149B8;
	// bl 0x82d34e50
	ctx.lr = 0x82D14984;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82D14988;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d149c8
	if (cr6.eq) goto loc_82D149C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r11.u8);
	// stb r10,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D149B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d13370
	ctx.lr = 0x82D149C0;
	sub_82D13370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d14448
	ctx.lr = 0x82D149C8;
	sub_82D14448(ctx, base);
loc_82D149C8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D149DC"))) PPC_WEAK_FUNC(sub_82D149DC);
PPC_FUNC_IMPL(__imp__sub_82D149DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D149E0"))) PPC_WEAK_FUNC(sub_82D149E0);
PPC_FUNC_IMPL(__imp__sub_82D149E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D149E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// addi r27,r3,1196
	ctx.r27.s64 = ctx.r3.s64 + 1196;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d131c0
	ctx.lr = 0x82D14A0C;
	sub_82D131C0(ctx, base);
	// lwz r11,1200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1200);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d14af8
	if (cr6.eq) goto loc_82D14AF8;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d140d0
	ctx.lr = 0x82D14A28;
	sub_82D140D0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82D14A54;
	sub_8259CB28(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cb28
	ctx.lr = 0x82D14A78;
	sub_8259CB28(ctx, base);
	// addi r30,r29,1212
	ctx.r30.s64 = ctx.r29.s64 + 1212;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d13c20
	ctx.lr = 0x82D14A88;
	sub_82D13C20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d137f8
	ctx.lr = 0x82D14A9C;
	sub_82D137F8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d14abc
	if (cr6.lt) goto loc_82D14ABC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82D14ABC;
	sub_825952B8(ctx, base);
loc_82D14ABC:
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// bl 0x82d13bb8
	ctx.lr = 0x82D14AD4;
	sub_82D13BB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r11,1228(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1228, ctx.r11.u8);
	// blt cr6,0x82d14af8
	if (cr6.lt) goto loc_82D14AF8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D14AF8;
	sub_825952B8(ctx, base);
loc_82D14AF8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D14B00"))) PPC_WEAK_FUNC(sub_82D14B00);
PPC_FUNC_IMPL(__imp__sub_82D14B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D14B08;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// addi r27,r3,1212
	ctx.r27.s64 = ctx.r3.s64 + 1212;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d131c0
	ctx.lr = 0x82D14B2C;
	sub_82D131C0(ctx, base);
	// lwz r11,1216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1216);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d14c18
	if (cr6.eq) goto loc_82D14C18;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d140d0
	ctx.lr = 0x82D14B48;
	sub_82D140D0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82D14B74;
	sub_8259CB28(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cb28
	ctx.lr = 0x82D14B98;
	sub_8259CB28(ctx, base);
	// addi r30,r29,1196
	ctx.r30.s64 = ctx.r29.s64 + 1196;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d13c20
	ctx.lr = 0x82D14BA8;
	sub_82D13C20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d137f8
	ctx.lr = 0x82D14BBC;
	sub_82D137F8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d14bdc
	if (cr6.lt) goto loc_82D14BDC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82D14BDC;
	sub_825952B8(ctx, base);
loc_82D14BDC:
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// bl 0x82d13bb8
	ctx.lr = 0x82D14BF4;
	sub_82D13BB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r11,1228(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1228, ctx.r11.u8);
	// blt cr6,0x82d14c18
	if (cr6.lt) goto loc_82D14C18;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D14C18;
	sub_825952B8(ctx, base);
loc_82D14C18:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D14C20"))) PPC_WEAK_FUNC(sub_82D14C20);
PPC_FUNC_IMPL(__imp__sub_82D14C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D14C28;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// addi r4,r3,1212
	ctx.r4.s64 = ctx.r3.s64 + 1212;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d131c0
	ctx.lr = 0x82D14C4C;
	sub_82D131C0(ctx, base);
	// lwz r11,1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d14ce0
	if (!cr6.eq) goto loc_82D14CE0;
	// addi r30,r31,1196
	ctx.r30.s64 = ctx.r31.s64 + 1196;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d131c0
	ctx.lr = 0x82D14C70;
	sub_82D131C0(ctx, base);
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d14cc4
	if (!cr6.eq) goto loc_82D14CC4;
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x82d14ce0
	if (cr6.eq) goto loc_82D14CE0;
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d13298
	ctx.lr = 0x82D14C9C;
	sub_82D13298(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d13d58
	ctx.lr = 0x82D14CAC;
	sub_82D13D58(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x838760e0
	ctx.lr = 0x82D14CB4;
	sub_838760E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1228, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14CC4:
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d140d0
	ctx.lr = 0x82D14CD0;
	sub_82D140D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82D14CD8;
	sub_8259D6C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1228, ctx.r11.u8);
loc_82D14CE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D14CE8"))) PPC_WEAK_FUNC(sub_82D14CE8);
PPC_FUNC_IMPL(__imp__sub_82D14CE8) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r3,-29760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29760);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d14d6c
	if (!cr6.eq) goto loc_82D14D6C;
	// bl 0x831021a0
	ctx.lr = 0x82D14D10;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82D14D18;
	sub_82DA45F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d14d2c
	if (!cr6.eq) goto loc_82D14D2C;
loc_82D14D24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d14d6c
	goto loc_82D14D6C;
loc_82D14D2C:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1232
	ctx.r4.s64 = 1232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D14D44;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d14d84
	if (cr6.eq) goto loc_82D14D84;
	// bl 0x82d141f0
	ctx.lr = 0x82D14D50;
	sub_82D141F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,-29760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29760, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d14d24
	if (cr6.eq) goto loc_82D14D24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82D14D68;
	sub_83103100(ctx, base);
	// lwz r3,-29760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29760);
loc_82D14D6C:
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
loc_82D14D84:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-29760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29760, ctx.r11.u32);
	// b 0x82d14d6c
	goto loc_82D14D6C;
}

__attribute__((alias("__imp__sub_82D14D94"))) PPC_WEAK_FUNC(sub_82D14D94);
PPC_FUNC_IMPL(__imp__sub_82D14D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D14D98"))) PPC_WEAK_FUNC(sub_82D14D98);
PPC_FUNC_IMPL(__imp__sub_82D14D98) {
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
	// bl 0x82d14ce8
	ctx.lr = 0x82D14DAC;
	sub_82D14CE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d14dd4
	if (cr6.eq) goto loc_82D14DD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d12de0
	ctx.lr = 0x82D14DC0;
	sub_82D12DE0(ctx, base);
	// lbz r11,230(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 230);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d14dd4
	if (!cr6.lt) goto loc_82D14DD4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r11.u8);
loc_82D14DD4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D14DE8"))) PPC_WEAK_FUNC(sub_82D14DE8);
PPC_FUNC_IMPL(__imp__sub_82D14DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D14DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stb r9,680(r11)
	PPC_STORE_U8(ctx.r11.u32 + 680, ctx.r9.u8);
	// stb r8,681(r11)
	PPC_STORE_U8(ctx.r11.u32 + 681, ctx.r8.u8);
loc_82D14E1C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d14e1c
	if (!cr6.eq) goto loc_82D14E1C;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,684
	ctx.r3.s64 = ctx.r11.s64 + 684;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D14E44;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r29,15
	cr6.compare<uint32_t>(ctx.r29.u32, 15, xer);
	// bgt cr6,0x82d14fbc
	if (cr6.gt) goto loc_82D14FBC;
	// lis r12,-32047
	ctx.r12.s64 = -2100232192;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20068
	ctx.r12.s64 = ctx.r12.s64 + 20068;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_82D14EA4;
	case 1:
		goto loc_82D14EBC;
	case 2:
		goto loc_82D14ED4;
	case 3:
		goto loc_82D14EEC;
	case 4:
		goto loc_82D14F04;
	case 5:
		goto loc_82D14F1C;
	case 6:
		goto loc_82D14FBC;
	case 7:
		goto loc_82D14FBC;
	case 8:
		goto loc_82D14FBC;
	case 9:
		goto loc_82D14FBC;
	case 10:
		goto loc_82D14F34;
	case 11:
		goto loc_82D14F4C;
	case 12:
		goto loc_82D14F7C;
	case 13:
		goto loc_82D14F94;
	case 14:
		goto loc_82D14F64;
	case 15:
		goto loc_82D14FAC;
	default:
		return;
	}
	// lwz r22,20132(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20132);
	// lwz r22,20156(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20156);
	// lwz r22,20180(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20180);
	// lwz r22,20204(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20204);
	// lwz r22,20228(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20228);
	// lwz r22,20252(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20252);
	// lwz r22,20412(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20412);
	// lwz r22,20412(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20412);
	// lwz r22,20412(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20412);
	// lwz r22,20412(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20412);
	// lwz r22,20276(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20276);
	// lwz r22,20300(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r22,20348(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20348);
	// lwz r22,20372(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20372);
	// lwz r22,20324(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20324);
	// lwz r22,20396(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20396);
loc_82D14EA4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14EB4;
	sub_82D14C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14EBC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14ECC;
	sub_82D14C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14ED4:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14EE4;
	sub_82D14C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14EEC:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14EFC;
	sub_82D14C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14F04:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14F14;
	sub_82D14C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14F1C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14F2C;
	sub_82D14C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14F34:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14F44;
	sub_82D14C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14F4C:
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14F5C;
	sub_82D14C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14F64:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14F74;
	sub_82D14C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14F7C:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14F8C;
	sub_82D14C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14F94:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14FA4;
	sub_82D14C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D14FAC:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d14c20
	ctx.lr = 0x82D14FBC;
	sub_82D14C20(ctx, base);
loc_82D14FBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D14FC4"))) PPC_WEAK_FUNC(sub_82D14FC4);
PPC_FUNC_IMPL(__imp__sub_82D14FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D14FC8"))) PPC_WEAK_FUNC(sub_82D14FC8);
PPC_FUNC_IMPL(__imp__sub_82D14FC8) {
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
	// bl 0x831156e8
	ctx.lr = 0x82D14FD8;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d15038
	if (cr6.eq) goto loc_82D15038;
	// bl 0x831156e8
	ctx.lr = 0x82D14FE4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d15004
	if (cr6.eq) goto loc_82D15004;
	// bl 0x83115808
	ctx.lr = 0x82D14FF4;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82d15008
	if (!cr6.eq) goto loc_82D15008;
loc_82D15004:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D15008:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d15038
	if (cr6.eq) goto loc_82D15038;
	// bl 0x831156e8
	ctx.lr = 0x82D15018;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,40316
	ctx.r9.u64 = ctx.r11.u64 | 40316;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D15038:
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

__attribute__((alias("__imp__sub_82D1504C"))) PPC_WEAK_FUNC(sub_82D1504C);
PPC_FUNC_IMPL(__imp__sub_82D1504C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D15050"))) PPC_WEAK_FUNC(sub_82D15050);
PPC_FUNC_IMPL(__imp__sub_82D15050) {
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
	// bl 0x831156e8
	ctx.lr = 0x82D15060;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d150d4
	if (cr6.eq) goto loc_82D150D4;
	// bl 0x831156e8
	ctx.lr = 0x82D1506C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d1508c
	if (cr6.eq) goto loc_82D1508C;
	// bl 0x83115808
	ctx.lr = 0x82D1507C;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82d15090
	if (!cr6.eq) goto loc_82D15090;
loc_82D1508C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D15090:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d150d4
	if (cr6.eq) goto loc_82D150D4;
	// bl 0x831156e8
	ctx.lr = 0x82D150A0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123778
	ctx.lr = 0x82D150B0;
	sub_83123778(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314e3c0
	ctx.lr = 0x82D150C0;
	sub_8314E3C0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D150D4:
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

__attribute__((alias("__imp__sub_82D150E8"))) PPC_WEAK_FUNC(sub_82D150E8);
PPC_FUNC_IMPL(__imp__sub_82D150E8) {
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
	ctx.lr = 0x82D150F8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82D150FC;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// beq cr6,0x82d15138
	if (cr6.eq) goto loc_82D15138;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x82d15138
	if (cr6.eq) goto loc_82D15138;
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// beq cr6,0x82d15138
	if (cr6.eq) goto loc_82D15138;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x82d15138
	if (cr6.eq) goto loc_82D15138;
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// beq cr6,0x82d15138
	if (cr6.eq) goto loc_82D15138;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// beq cr6,0x82d15138
	if (cr6.eq) goto loc_82D15138;
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82d1513c
	if (!cr6.eq) goto loc_82D1513C;
loc_82D15138:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D1513C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D1514C"))) PPC_WEAK_FUNC(sub_82D1514C);
PPC_FUNC_IMPL(__imp__sub_82D1514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D15150"))) PPC_WEAK_FUNC(sub_82D15150);
PPC_FUNC_IMPL(__imp__sub_82D15150) {
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
	ctx.lr = 0x82D15160;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82d151a8
	if (cr6.eq) goto loc_82D151A8;
	// cmplwi cr6,r11,49
	cr6.compare<uint32_t>(ctx.r11.u32, 49, xer);
	// beq cr6,0x82d151a8
	if (cr6.eq) goto loc_82D151A8;
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// beq cr6,0x82d151a8
	if (cr6.eq) goto loc_82D151A8;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// beq cr6,0x82d151a8
	if (cr6.eq) goto loc_82D151A8;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// beq cr6,0x82d151a8
	if (cr6.eq) goto loc_82D151A8;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// beq cr6,0x82d151a8
	if (cr6.eq) goto loc_82D151A8;
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// beq cr6,0x82d151a8
	if (cr6.eq) goto loc_82D151A8;
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82d151ac
	if (!cr6.eq) goto loc_82D151AC;
loc_82D151A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D151AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D151BC"))) PPC_WEAK_FUNC(sub_82D151BC);
PPC_FUNC_IMPL(__imp__sub_82D151BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D151C0"))) PPC_WEAK_FUNC(sub_82D151C0);
PPC_FUNC_IMPL(__imp__sub_82D151C0) {
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
	// bl 0x831156e8
	ctx.lr = 0x82D151D0;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d15238
	if (cr6.eq) goto loc_82D15238;
	// bl 0x831156e8
	ctx.lr = 0x82D151DC;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d151fc
	if (cr6.eq) goto loc_82D151FC;
	// bl 0x83115808
	ctx.lr = 0x82D151EC;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82d15200
	if (!cr6.eq) goto loc_82D15200;
loc_82D151FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D15200:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d15238
	if (cr6.eq) goto loc_82D15238;
	// bl 0x831156e8
	ctx.lr = 0x82D15210;
	sub_831156E8(ctx, base);
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,5128
	ctx.r9.u64 = ctx.r11.u64 | 5128;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D15238:
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

__attribute__((alias("__imp__sub_82D1524C"))) PPC_WEAK_FUNC(sub_82D1524C);
PPC_FUNC_IMPL(__imp__sub_82D1524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D15250"))) PPC_WEAK_FUNC(sub_82D15250);
PPC_FUNC_IMPL(__imp__sub_82D15250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D15258;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x82D15264;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82D15268;
	sub_830FFAA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82d1528c
	if (cr6.eq) goto loc_82D1528C;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82d1528c
	if (cr6.eq) goto loc_82D1528C;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// beq cr6,0x82d1528c
	if (cr6.eq) goto loc_82D1528C;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bne cr6,0x82d153f4
	if (!cr6.eq) goto loc_82D153F4;
loc_82D1528C:
	// bl 0x830ff290
	ctx.lr = 0x82D15290;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// bne cr6,0x82d152a4
	if (!cr6.eq) goto loc_82D152A4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x82d153f4
	if (!cr6.eq) goto loc_82D153F4;
loc_82D152A4:
	// bl 0x831156e8
	ctx.lr = 0x82D152A8;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d153f4
	if (cr6.eq) goto loc_82D153F4;
	// bl 0x831156e8
	ctx.lr = 0x82D152B4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d152d4
	if (cr6.eq) goto loc_82D152D4;
	// bl 0x83115808
	ctx.lr = 0x82D152C4;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82d152d8
	if (!cr6.eq) goto loc_82D152D8;
loc_82D152D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D152D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d153f4
	if (cr6.eq) goto loc_82D153F4;
	// bl 0x831156e8
	ctx.lr = 0x82D152E8;
	sub_831156E8(ctx, base);
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r4,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d153f4
	if (cr6.eq) goto loc_82D153F4;
	// lis r31,-31776
	ctx.r31.s64 = -2082471936;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// lwz r11,24948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24948);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82d15350
	if (!cr6.eq) goto loc_82D15350;
	// bl 0x831156e8
	ctx.lr = 0x82D15318;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,5
	ctx.r4.s64 = ctx.r10.s64 + 327680;
	// addi r4,r4,14904
	ctx.r4.s64 = ctx.r4.s64 + 14904;
	// bl 0x831239e0
	ctx.lr = 0x82D15334;
	sub_831239E0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// b 0x82d15394
	goto loc_82D15394;
loc_82D15350:
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// beq cr6,0x82d153f4
	if (cr6.eq) goto loc_82D153F4;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// beq cr6,0x82d153f4
	if (cr6.eq) goto loc_82D153F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r10,8288
	ctx.r5.s64 = ctx.r10.s64 + 8288;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x82D1537C;
	sub_831178A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r9,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r8,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
loc_82D15394:
	// lwz r10,24948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24948);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d153c0
	if (!cr6.eq) goto loc_82D153C0;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d153c4
	if (cr6.eq) goto loc_82D153C4;
loc_82D153C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D153C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d153f4
	if (!cr6.eq) goto loc_82D153F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314c958
	ctx.lr = 0x82D153D8;
	sub_8314C958(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82d153e8
	if (cr6.eq) goto loc_82D153E8;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x82d153f4
	if (!cr6.eq) goto loc_82D153F4;
loc_82D153E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D153F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D15400"))) PPC_WEAK_FUNC(sub_82D15400);
PPC_FUNC_IMPL(__imp__sub_82D15400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82d15424
	if (cr6.eq) goto loc_82D15424;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82d15424
	if (cr6.eq) goto loc_82D15424;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82D15424:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D1542C"))) PPC_WEAK_FUNC(sub_82D1542C);
PPC_FUNC_IMPL(__imp__sub_82D1542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D15430"))) PPC_WEAK_FUNC(sub_82D15430);
PPC_FUNC_IMPL(__imp__sub_82D15430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d1547c
	if (cr6.eq) goto loc_82D1547C;
	// lbz r10,393(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 393);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d15450
	if (cr6.eq) goto loc_82D15450;
loc_82D15448:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D15450:
	// lbz r10,394(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 394);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d15448
	if (!cr6.eq) goto loc_82D15448;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82d1547c
	if (cr6.eq) goto loc_82D1547C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82d1547c
	if (cr6.eq) goto loc_82D1547C;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82D1547C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D15484"))) PPC_WEAK_FUNC(sub_82D15484);
PPC_FUNC_IMPL(__imp__sub_82D15484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D15488"))) PPC_WEAK_FUNC(sub_82D15488);
PPC_FUNC_IMPL(__imp__sub_82D15488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82d2aec8
	sub_82D2AEC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D1549C"))) PPC_WEAK_FUNC(sub_82D1549C);
PPC_FUNC_IMPL(__imp__sub_82D1549C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D154A0"))) PPC_WEAK_FUNC(sub_82D154A0);
PPC_FUNC_IMPL(__imp__sub_82D154A0) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r3,-29384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d154d8
	if (cr6.eq) goto loc_82D154D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D154D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-29384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29384, ctx.r11.u32);
loc_82D154D8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D154EC"))) PPC_WEAK_FUNC(sub_82D154EC);
PPC_FUNC_IMPL(__imp__sub_82D154EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D154F0"))) PPC_WEAK_FUNC(sub_82D154F0);
PPC_FUNC_IMPL(__imp__sub_82D154F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D154F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// beq cr6,0x82d15530
	if (cr6.eq) goto loc_82D15530;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x82d15524
	if (cr6.eq) goto loc_82D15524;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r30,r11,-21792
	ctx.r30.s64 = ctx.r11.s64 + -21792;
	// b 0x82d15538
	goto loc_82D15538;
loc_82D15524:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r30,r11,-28512
	ctx.r30.s64 = ctx.r11.s64 + -28512;
	// b 0x82d15538
	goto loc_82D15538;
loc_82D15530:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r30,r11,-19048
	ctx.r30.s64 = ctx.r11.s64 + -19048;
loc_82D15538:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82d15550
	if (!cr6.eq) goto loc_82D15550;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d14fc8
	ctx.lr = 0x82D15548;
	sub_82D14FC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82d15554
	goto loc_82D15554;
loc_82D15550:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82D15554:
	// bl 0x830ff290
	ctx.lr = 0x82D15558;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82D1555C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// beq cr6,0x82d15598
	if (cr6.eq) goto loc_82D15598;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x82d15598
	if (cr6.eq) goto loc_82D15598;
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// beq cr6,0x82d15598
	if (cr6.eq) goto loc_82D15598;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x82d15598
	if (cr6.eq) goto loc_82D15598;
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// beq cr6,0x82d15598
	if (cr6.eq) goto loc_82D15598;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// beq cr6,0x82d15598
	if (cr6.eq) goto loc_82D15598;
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d1559c
	if (!cr6.eq) goto loc_82D1559C;
loc_82D15598:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D1559C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d157b0
	if (!cr6.eq) goto loc_82D157B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d15150
	ctx.lr = 0x82D155B0;
	sub_82D15150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d157b0
	if (!cr6.eq) goto loc_82D157B0;
	// bl 0x830ff290
	ctx.lr = 0x82D155C0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82D155C4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// beq cr6,0x82d155d8
	if (cr6.eq) goto loc_82D155D8;
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d155dc
	if (!cr6.eq) goto loc_82D155DC;
loc_82D155D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D155DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d155f8
	if (cr6.eq) goto loc_82D155F8;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-20424
	ctx.r3.s64 = ctx.r11.s64 + -20424;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D155F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d151c0
	ctx.lr = 0x82D15600;
	sub_82D151C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d15660
	if (cr6.eq) goto loc_82D15660;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-27768
	ctx.r8.s64 = ctx.r11.s64 + -27768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D15620:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// beq cr6,0x82d15650
	if (cr6.eq) goto loc_82D15650;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,496
	cr6.compare<uint32_t>(ctx.r10.u32, 496, xer);
	// blt cr6,0x82d15620
	if (cr6.lt) goto loc_82D15620;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-26520
	ctx.r3.s64 = ctx.r11.s64 + -26520;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D15650:
	// mulli r11,r9,124
	ctx.r11.s64 = ctx.r9.s64 * 124;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D15660:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82d15674
	if (!cr6.eq) goto loc_82D15674;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d14fc8
	ctx.lr = 0x82D15670;
	sub_82D14FC8(ctx, base);
	// b 0x82d15678
	goto loc_82D15678;
loc_82D15674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D15678:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82D15680:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x82d157e4
	if (cr6.eq) goto loc_82D157E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x82d15680
	if (cr6.lt) goto loc_82D15680;
	// lbz r10,395(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 395);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d156d0
	if (cr6.eq) goto loc_82D156D0;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d156c0
	if (!cr6.eq) goto loc_82D156C0;
	// lwz r9,136(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// cmpwi cr6,r9,15
	cr6.compare<int32_t>(ctx.r9.s32, 15, xer);
	// beq cr6,0x82d156c8
	if (cr6.eq) goto loc_82D156C8;
loc_82D156C0:
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x82d156d0
	if (!cr6.eq) goto loc_82D156D0;
loc_82D156C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d156d4
	goto loc_82D156D4;
loc_82D156D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D156D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d156f0
	if (cr6.eq) goto loc_82D156F0;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r11,25128
	ctx.r3.s64 = ctx.r11.s64 + 25128;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D156F0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d15708
	if (cr6.eq) goto loc_82D15708;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r11,25256
	ctx.r3.s64 = ctx.r11.s64 + 25256;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D15708:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82d15718
	if (!cr6.eq) goto loc_82D15718;
	// bl 0x830ff290
	ctx.lr = 0x82D15714;
	sub_830FF290(ctx, base);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_82D15718:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d15250
	ctx.lr = 0x82D15724;
	sub_82D15250(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82d15774
	if (!cr6.eq) goto loc_82D15774;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r8,r11,-27272
	ctx.r8.s64 = ctx.r11.s64 + -27272;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D15744:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82d15650
	if (cr6.eq) goto loc_82D15650;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,496
	cr6.compare<uint32_t>(ctx.r10.u32, 496, xer);
	// blt cr6,0x82d15744
	if (cr6.lt) goto loc_82D15744;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r11,25000
	ctx.r3.s64 = ctx.r11.s64 + 25000;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D15774:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r8,r11,-29008
	ctx.r8.s64 = ctx.r11.s64 + -29008;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D15780:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82d15650
	if (cr6.eq) goto loc_82D15650;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,496
	cr6.compare<uint32_t>(ctx.r10.u32, 496, xer);
	// blt cr6,0x82d15780
	if (cr6.lt) goto loc_82D15780;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r11,25000
	ctx.r3.s64 = ctx.r11.s64 + 25000;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D157B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82D157B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// beq cr6,0x82d157e4
	if (cr6.eq) goto loc_82D157E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x82d157b8
	if (cr6.lt) goto loc_82D157B8;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D157E4:
	// mulli r11,r10,124
	ctx.r11.s64 = ctx.r10.s64 * 124;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D157F4"))) PPC_WEAK_FUNC(sub_82D157F4);
PPC_FUNC_IMPL(__imp__sub_82D157F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D157F8"))) PPC_WEAK_FUNC(sub_82D157F8);
PPC_FUNC_IMPL(__imp__sub_82D157F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D15800;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x830ff290
	ctx.lr = 0x82D15814;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d15868
	if (cr6.eq) goto loc_82D15868;
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// bgt cr6,0x82d15d44
	if (cr6.gt) goto loc_82D15D44;
	// lis r12,-32047
	ctx.r12.s64 = -2100232192;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22588
	ctx.r12.s64 = ctx.r12.s64 + 22588;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u32) {
	case 0:
		goto loc_82D15868;
	case 1:
		goto loc_82D15D44;
	case 2:
		goto loc_82D15D44;
	case 3:
		goto loc_82D15A84;
	case 4:
		goto loc_82D15B60;
	case 5:
		goto loc_82D15890;
	case 6:
		goto loc_82D15878;
	case 7:
		goto loc_82D15878;
	case 8:
		goto loc_82D15878;
	case 9:
		goto loc_82D15C30;
	case 10:
		goto loc_82D15CD8;
	default:
		return;
	}
	// lwz r22,22632(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 22632);
	// lwz r22,23876(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23876);
	// lwz r22,23876(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23876);
	// lwz r22,23172(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23172);
	// lwz r22,23392(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23392);
	// lwz r22,22672(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 22672);
	// lwz r22,22648(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 22648);
	// lwz r22,22648(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 22648);
	// lwz r22,22648(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 22648);
	// lwz r22,23600(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23600);
	// lwz r22,23768(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23768);
loc_82D15868:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r11,25128
	ctx.r3.s64 = ctx.r11.s64 + 25128;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15878:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d154f0
	ctx.lr = 0x82D15888;
	sub_82D154F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15890:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d150e8
	ctx.lr = 0x82D15898;
	sub_82D150E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d1597c
	if (cr6.eq) goto loc_82D1597C;
	// bl 0x82d14fc8
	ctx.lr = 0x82D158AC;
	sub_82D14FC8(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x82d1596c
	if (cr6.eq) goto loc_82D1596C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82d158c4
	if (!cr6.eq) goto loc_82D158C4;
	// bl 0x830ff290
	ctx.lr = 0x82D158C0;
	sub_830FF290(ctx, base);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_82D158C4:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d15250
	ctx.lr = 0x82D158D0;
	sub_82D15250(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82d15930
	if (!cr6.eq) goto loc_82D15930;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r8,r11,-18048
	ctx.r8.s64 = ctx.r11.s64 + -18048;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D158F0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82d15920
	if (cr6.eq) goto loc_82D15920;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,3596
	cr6.compare<uint32_t>(ctx.r10.u32, 3596, xer);
	// blt cr6,0x82d158f0
	if (cr6.lt) goto loc_82D158F0;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15920:
	// mulli r11,r9,124
	ctx.r11.s64 = ctx.r9.s64 * 124;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15930:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r8,r11,-26264
	ctx.r8.s64 = ctx.r11.s64 + -26264;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D1593C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82d15920
	if (cr6.eq) goto loc_82D15920;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,3596
	cr6.compare<uint32_t>(ctx.r10.u32, 3596, xer);
	// blt cr6,0x82d1593c
	if (cr6.lt) goto loc_82D1593C;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D1596C:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-26648
	ctx.r3.s64 = ctx.r11.s64 + -26648;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D1597C:
	// bl 0x82d151c0
	ctx.lr = 0x82D15980;
	sub_82D151C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d1599c
	if (cr6.eq) goto loc_82D1599C;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-26520
	ctx.r3.s64 = ctx.r11.s64 + -26520;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D1599C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82d159ac
	if (!cr6.eq) goto loc_82D159AC;
	// bl 0x830ff290
	ctx.lr = 0x82D159A8;
	sub_830FF290(ctx, base);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_82D159AC:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d15250
	ctx.lr = 0x82D159B8;
	sub_82D15250(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82d159fc
	if (!cr6.eq) goto loc_82D159FC;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r8,r11,-18048
	ctx.r8.s64 = ctx.r11.s64 + -18048;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D159D8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82d15920
	if (cr6.eq) goto loc_82D15920;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,3596
	cr6.compare<uint32_t>(ctx.r10.u32, 3596, xer);
	// blt cr6,0x82d159d8
	if (cr6.lt) goto loc_82D159D8;
	// b 0x82d15a28
	goto loc_82D15A28;
loc_82D159FC:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r8,r11,-26264
	ctx.r8.s64 = ctx.r11.s64 + -26264;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D15A08:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82d15920
	if (cr6.eq) goto loc_82D15920;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,3596
	cr6.compare<uint32_t>(ctx.r10.u32, 3596, xer);
	// blt cr6,0x82d15a08
	if (cr6.lt) goto loc_82D15A08;
loc_82D15A28:
	// lbz r10,395(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 395);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d15a5c
	if (cr6.eq) goto loc_82D15A5C;
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d15a4c
	if (!cr6.eq) goto loc_82D15A4C;
	// lwz r9,136(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmpwi cr6,r9,15
	cr6.compare<int32_t>(ctx.r9.s32, 15, xer);
	// beq cr6,0x82d15a54
	if (cr6.eq) goto loc_82D15A54;
loc_82D15A4C:
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x82d15a5c
	if (!cr6.eq) goto loc_82D15A5C;
loc_82D15A54:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d15a60
	goto loc_82D15A60;
loc_82D15A5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D15A60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d15868
	if (!cr6.eq) goto loc_82D15868;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d15d78
	if (!cr6.eq) goto loc_82D15D78;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r11,25000
	ctx.r3.s64 = ctx.r11.s64 + 25000;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15A84:
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82D15A8C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-21
	ctx.r11.s64 = ctx.r11.s64 + -21;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x82d15b1c
	if (cr6.gt) goto loc_82D15B1C;
	// lis r12,-32047
	ctx.r12.s64 = -2100232192;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23220
	ctx.r12.s64 = ctx.r12.s64 + 23220;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82D15AF8;
	case 1:
		goto loc_82D15B00;
	case 2:
		goto loc_82D15B1C;
	case 3:
		goto loc_82D15B1C;
	case 4:
		goto loc_82D15B1C;
	case 5:
		goto loc_82D15B1C;
	case 6:
		goto loc_82D15B1C;
	case 7:
		goto loc_82D15B1C;
	case 8:
		goto loc_82D15B1C;
	case 9:
		goto loc_82D15B1C;
	case 10:
		goto loc_82D15B10;
	case 11:
		goto loc_82D15B1C;
	case 12:
		goto loc_82D15B10;
	case 13:
		goto loc_82D15B18;
	case 14:
		goto loc_82D15B18;
	case 15:
		goto loc_82D15B1C;
	case 16:
		goto loc_82D15B08;
	default:
		return;
	}
	// lwz r22,23288(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23288);
	// lwz r22,23296(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23296);
	// lwz r22,23324(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23324);
	// lwz r22,23324(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23324);
	// lwz r22,23324(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23324);
	// lwz r22,23324(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23324);
	// lwz r22,23324(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23324);
	// lwz r22,23324(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23324);
	// lwz r22,23324(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23324);
	// lwz r22,23324(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23324);
	// lwz r22,23312(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23312);
	// lwz r22,23324(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23324);
	// lwz r22,23312(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23312);
	// lwz r22,23320(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23320);
	// lwz r22,23320(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23320);
	// lwz r22,23324(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23324);
	// lwz r22,23304(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23304);
loc_82D15AF8:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82d15b1c
	goto loc_82D15B1C;
loc_82D15B00:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82d15b1c
	goto loc_82D15B1C;
loc_82D15B08:
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82d15b1c
	goto loc_82D15B1C;
loc_82D15B10:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82d15b1c
	goto loc_82D15B1C;
loc_82D15B18:
	// li r31,6
	ctx.r31.s64 = 6;
loc_82D15B1C:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-27768
	ctx.r8.s64 = ctx.r11.s64 + -27768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D15B30:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82d15920
	if (cr6.eq) goto loc_82D15920;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,496
	cr6.compare<uint32_t>(ctx.r10.u32, 496, xer);
	// blt cr6,0x82d15b30
	if (cr6.lt) goto loc_82D15B30;
loc_82D15B50:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-26392
	ctx.r3.s64 = ctx.r11.s64 + -26392;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15B60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d150e8
	ctx.lr = 0x82D15B68;
	sub_82D150E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d15b88
	if (cr6.eq) goto loc_82D15B88;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82d15b9c
	if (!cr6.eq) goto loc_82D15B9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d14fc8
	ctx.lr = 0x82D15B84;
	sub_82D14FC8(ctx, base);
	// b 0x82d15ba0
	goto loc_82D15BA0;
loc_82D15B88:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82d15b9c
	if (!cr6.eq) goto loc_82D15B9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d15050
	ctx.lr = 0x82D15B98;
	sub_82D15050(ctx, base);
	// b 0x82d15ba0
	goto loc_82D15BA0;
loc_82D15B9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D15BA0:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-19424
	ctx.r8.s64 = ctx.r11.s64 + -19424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D15BB4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x82d15920
	if (cr6.eq) goto loc_82D15920;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,248
	cr6.compare<uint32_t>(ctx.r10.u32, 248, xer);
	// blt cr6,0x82d15bb4
	if (cr6.lt) goto loc_82D15BB4;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-27768
	ctx.r8.s64 = ctx.r11.s64 + -27768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D15BE8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x82d15920
	if (cr6.eq) goto loc_82D15920;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,496
	cr6.compare<uint32_t>(ctx.r10.u32, 496, xer);
	// blt cr6,0x82d15be8
	if (cr6.lt) goto loc_82D15BE8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d15250
	ctx.lr = 0x82D15C14;
	sub_82D15250(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d15b50
	if (cr6.eq) goto loc_82D15B50;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15C30:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82d15c40
	if (!cr6.eq) goto loc_82D15C40;
	// bl 0x830ff290
	ctx.lr = 0x82D15C3C;
	sub_830FF290(ctx, base);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_82D15C40:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d15250
	ctx.lr = 0x82D15C4C;
	sub_82D15250(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82d15c9c
	if (!cr6.eq) goto loc_82D15C9C;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r8,r11,-20296
	ctx.r8.s64 = ctx.r11.s64 + -20296;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D15C6C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82d15920
	if (cr6.eq) goto loc_82D15920;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,868
	cr6.compare<uint32_t>(ctx.r10.u32, 868, xer);
	// blt cr6,0x82d15c6c
	if (cr6.lt) goto loc_82D15C6C;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-18176
	ctx.r3.s64 = ctx.r11.s64 + -18176;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15C9C:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r8,r11,-22664
	ctx.r8.s64 = ctx.r11.s64 + -22664;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82D15CA8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82d15920
	if (cr6.eq) goto loc_82D15920;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,868
	cr6.compare<uint32_t>(ctx.r10.u32, 868, xer);
	// blt cr6,0x82d15ca8
	if (cr6.lt) goto loc_82D15CA8;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-18176
	ctx.r3.s64 = ctx.r11.s64 + -18176;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15CD8:
	// bl 0x830ff290
	ctx.lr = 0x82D15CDC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bne cr6,0x82d15cf8
	if (!cr6.eq) goto loc_82D15CF8;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-20552
	ctx.r3.s64 = ctx.r11.s64 + -20552;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15CF8:
	// bl 0x830ff290
	ctx.lr = 0x82D15CFC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82D15D00;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// beq cr6,0x82d15d14
	if (cr6.eq) goto loc_82D15D14;
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d15d18
	if (!cr6.eq) goto loc_82D15D18;
loc_82D15D14:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D15D18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d15d34
	if (cr6.eq) goto loc_82D15D34;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-20424
	ctx.r3.s64 = ctx.r11.s64 + -20424;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15D34:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-26776
	ctx.r3.s64 = ctx.r11.s64 + -26776;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D15D44:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-21048
	ctx.r8.s64 = ctx.r11.s64 + -21048;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D15D58:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, xer);
	// beq cr6,0x82d15920
	if (cr6.eq) goto loc_82D15920;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// cmplwi cr6,r10,496
	cr6.compare<uint32_t>(ctx.r10.u32, 496, xer);
	// blt cr6,0x82d15d58
	if (cr6.lt) goto loc_82D15D58;
loc_82D15D78:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r11,25256
	ctx.r3.s64 = ctx.r11.s64 + 25256;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D15D88"))) PPC_WEAK_FUNC(sub_82D15D88);
PPC_FUNC_IMPL(__imp__sub_82D15D88) {
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
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,108
	ctx.r11.s64 = ctx.r3.s64 + 108;
	// stw r30,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d15dbc
	if (cr6.lt) goto loc_82D15DBC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D15DBC:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d15de4
	if (cr6.eq) goto loc_82D15DE4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82D15DD8;
	sub_82D2AEC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82d49b58
	ctx.lr = 0x82D15DE0;
	sub_82D49B58(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_82D15DE4:
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

__attribute__((alias("__imp__sub_82D15DFC"))) PPC_WEAK_FUNC(sub_82D15DFC);
PPC_FUNC_IMPL(__imp__sub_82D15DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D15E00"))) PPC_WEAK_FUNC(sub_82D15E00);
PPC_FUNC_IMPL(__imp__sub_82D15E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D15E08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82D15E14;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d15f5c
	if (cr6.eq) goto loc_82D15F5C;
	// bl 0x831156e8
	ctx.lr = 0x82D15E20;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d15e40
	if (cr6.eq) goto loc_82D15E40;
	// bl 0x83115808
	ctx.lr = 0x82D15E30;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82d15e44
	if (!cr6.eq) goto loc_82D15E44;
loc_82D15E40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D15E44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d15f5c
	if (cr6.eq) goto loc_82D15F5C;
	// bl 0x830ff290
	ctx.lr = 0x82D15E54;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82D15E58;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82d15e78
	if (cr6.eq) goto loc_82D15E78;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// beq cr6,0x82d15e78
	if (cr6.eq) goto loc_82D15E78;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82d15e78
	if (cr6.eq) goto loc_82D15E78;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82d15f5c
	if (!cr6.eq) goto loc_82D15F5C;
loc_82D15E78:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r31,r28,64
	ctx.r31.s64 = ctx.r28.s64 + 64;
	// addi r30,r11,18884
	ctx.r30.s64 = ctx.r11.s64 + 18884;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,7
	ctx.r29.s64 = 7;
	// bl 0x82574d38
	ctx.lr = 0x82D15E9C;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d15ea8
	if (cr6.eq) goto loc_82D15EA8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D15EA8:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574d38
	ctx.lr = 0x82D15EBC;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d15ec8
	if (cr6.eq) goto loc_82D15EC8;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82D15EC8:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574d38
	ctx.lr = 0x82D15EDC;
	sub_82574D38(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 & ctx.r29.u64;
	// bl 0x82574d38
	ctx.lr = 0x82D15F04;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d15f10
	if (cr6.eq) goto loc_82D15F10;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82D15F10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574d38
	ctx.lr = 0x82D15F24;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d15f30
	if (cr6.eq) goto loc_82D15F30;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82D15F30:
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82d15f40
	if (cr6.eq) goto loc_82D15F40;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82D15F40:
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(ctx.r29.s32, 7, xer);
	// bne cr6,0x82d15f4c
	if (!cr6.eq) goto loc_82D15F4C;
	// li r29,6
	ctx.r29.s64 = 6;
loc_82D15F4C:
	// bl 0x82d34e50
	ctx.lr = 0x82D15F50;
	sub_82D34E50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d35038
	ctx.lr = 0x82D15F5C;
	sub_82D35038(ctx, base);
loc_82D15F5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D15F64"))) PPC_WEAK_FUNC(sub_82D15F64);
PPC_FUNC_IMPL(__imp__sub_82D15F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D15F68"))) PPC_WEAK_FUNC(sub_82D15F68);
PPC_FUNC_IMPL(__imp__sub_82D15F68) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82d16010
	if (!cr6.eq) goto loc_82D16010;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d16010
	if (!cr6.eq) goto loc_82D16010;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d15fc0
	if (cr6.lt) goto loc_82D15FC0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D15FC0:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x82D15FD0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d16010
	if (!cr6.eq) goto loc_82D16010;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d15ff4
	if (cr6.lt) goto loc_82D15FF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D15FF4:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x82D16004;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82d16014
	if (cr6.eq) goto loc_82D16014;
loc_82D16010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D16014:
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

__attribute__((alias("__imp__sub_82D1602C"))) PPC_WEAK_FUNC(sub_82D1602C);
PPC_FUNC_IMPL(__imp__sub_82D1602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D16030"))) PPC_WEAK_FUNC(sub_82D16030);
PPC_FUNC_IMPL(__imp__sub_82D16030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D16038;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,92
	ctx.r30.s64 = ctx.r3.s64 + 92;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16064
	if (cr6.lt) goto loc_82D16064;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D16064;
	sub_825952B8(ctx, base);
loc_82D16064:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r28,64
	ctx.r29.s64 = ctx.r28.s64 + 64;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16098
	if (cr6.lt) goto loc_82D16098;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D16098;
	sub_825952B8(ctx, base);
loc_82D16098:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,36
	ctx.r30.s64 = ctx.r28.s64 + 36;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d160c4
	if (cr6.lt) goto loc_82D160C4;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D160C4;
	sub_825952B8(ctx, base);
loc_82D160C4:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d160f0
	if (cr6.lt) goto loc_82D160F0;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D160F0;
	sub_825952B8(ctx, base);
loc_82D160F0:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D16104"))) PPC_WEAK_FUNC(sub_82D16104);
PPC_FUNC_IMPL(__imp__sub_82D16104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D16108"))) PPC_WEAK_FUNC(sub_82D16108);
PPC_FUNC_IMPL(__imp__sub_82D16108) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,19088
	ctx.r9.s64 = ctx.r11.s64 + 19088;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,260
	ctx.r3.s64 = ctx.r3.s64 + 260;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82d16030
	ctx.lr = 0x82D16140;
	sub_82D16030(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82d16030
	ctx.lr = 0x82D16148;
	sub_82D16030(ctx, base);
	// lwz r7,128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82d1616c
	if (cr6.lt) goto loc_82D1616C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D1616C;
	sub_825952B8(ctx, base);
loc_82D1616C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82d25548
	ctx.lr = 0x82D16188;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82D161A0"))) PPC_WEAK_FUNC(sub_82D161A0);
PPC_FUNC_IMPL(__imp__sub_82D161A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D161A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d15d88
	ctx.lr = 0x82D161B4;
	sub_82D15D88(ctx, base);
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d161dc
	if (cr6.eq) goto loc_82D161DC;
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// addi r11,r30,296
	ctx.r11.s64 = ctx.r30.s64 + 296;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d161d4
	if (cr6.lt) goto loc_82D161D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D161D4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d12668
	ctx.lr = 0x82D161DC;
	sub_82D12668(ctx, base);
loc_82D161DC:
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d1623c
	if (cr6.eq) goto loc_82D1623C;
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// addi r11,r30,296
	ctx.r11.s64 = ctx.r30.s64 + 296;
	// lwz r7,312(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// addi r31,r30,172
	ctx.r31.s64 = ctx.r30.s64 + 172;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d16204
	if (cr6.lt) goto loc_82D16204;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D16204:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D16218;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d1623c
	if (cr6.eq) goto loc_82D1623C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16234
	if (cr6.lt) goto loc_82D16234;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d16238
	goto loc_82D16238;
loc_82D16234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D16238:
	// bl 0x82d12668
	ctx.lr = 0x82D1623C;
	sub_82D12668(ctx, base);
loc_82D1623C:
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r30,296
	ctx.r11.s64 = ctx.r30.s64 + 296;
	// stw r29,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r29.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d1625c
	if (cr6.lt) goto loc_82D1625C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82d16260
	goto loc_82D16260;
loc_82D1625C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D16260:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// addi r11,r30,172
	ctx.r11.s64 = ctx.r30.s64 + 172;
	// lwz r10,192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r29,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r29.u32);
	// blt cr6,0x82d1627c
	if (cr6.lt) goto loc_82D1627C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D1627C:
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d162a8
	if (cr6.eq) goto loc_82D162A8;
	// lwz r10,288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// addi r11,r30,268
	ctx.r11.s64 = ctx.r30.s64 + 268;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d162a0
	if (cr6.lt) goto loc_82D162A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D162A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d12668
	ctx.lr = 0x82D162A8;
	sub_82D12668(ctx, base);
loc_82D162A8:
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d16308
	if (cr6.eq) goto loc_82D16308;
	// lwz r10,288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// addi r11,r30,268
	ctx.r11.s64 = ctx.r30.s64 + 268;
	// lwz r7,284(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// addi r31,r30,144
	ctx.r31.s64 = ctx.r30.s64 + 144;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d162d0
	if (cr6.lt) goto loc_82D162D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D162D0:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D162E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d16308
	if (cr6.eq) goto loc_82D16308;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16300
	if (cr6.lt) goto loc_82D16300;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d16304
	goto loc_82D16304;
loc_82D16300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D16304:
	// bl 0x82d12668
	ctx.lr = 0x82D16308;
	sub_82D12668(ctx, base);
loc_82D16308:
	// lwz r10,288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// addi r11,r30,268
	ctx.r11.s64 = ctx.r30.s64 + 268;
	// stw r29,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r29.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d16324
	if (cr6.lt) goto loc_82D16324;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82d16328
	goto loc_82D16328;
loc_82D16324:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D16328:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// addi r11,r30,144
	ctx.r11.s64 = ctx.r30.s64 + 144;
	// lwz r10,164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r29,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r29.u32);
	// blt cr6,0x82d16344
	if (cr6.lt) goto loc_82D16344;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D16344:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D16354"))) PPC_WEAK_FUNC(sub_82D16354);
PPC_FUNC_IMPL(__imp__sub_82D16354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D16358"))) PPC_WEAK_FUNC(sub_82D16358);
PPC_FUNC_IMPL(__imp__sub_82D16358) {
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
	// bl 0x82d16108
	ctx.lr = 0x82D16378;
	sub_82D16108(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d16390
	if (cr6.eq) goto loc_82D16390;
	// bl 0x82416268
	ctx.lr = 0x82D1638C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D16390:
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

__attribute__((alias("__imp__sub_82D163A8"))) PPC_WEAK_FUNC(sub_82D163A8);
PPC_FUNC_IMPL(__imp__sub_82D163A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D163B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stb r29,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82D163F8;
	sub_8259CB28(ctx, base);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// bl 0x8259cb28
	ctx.lr = 0x82D16418;
	sub_8259CB28(ctx, base);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// bl 0x8259cb28
	ctx.lr = 0x82D16438;
	sub_8259CB28(ctx, base);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stb r29,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// bl 0x8259cb28
	ctx.lr = 0x82D16458;
	sub_8259CB28(ctx, base);
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D1646C"))) PPC_WEAK_FUNC(sub_82D1646C);
PPC_FUNC_IMPL(__imp__sub_82D1646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D16470"))) PPC_WEAK_FUNC(sub_82D16470);
PPC_FUNC_IMPL(__imp__sub_82D16470) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r4,r9,18956
	ctx.r4.s64 = ctx.r9.s64 + 18956;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82D164AC;
	sub_8259CC28(ctx, base);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82d164c4
	if (cr6.lt) goto loc_82D164C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D164C4:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82D164D8;
	sub_827A8810(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d16518
	if (!cr6.eq) goto loc_82D16518;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16500
	if (cr6.lt) goto loc_82D16500;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D16500;
	sub_825952B8(ctx, base);
loc_82D16500:
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
loc_82D16518:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16534
	if (cr6.lt) goto loc_82D16534;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D16534;
	sub_825952B8(ctx, base);
loc_82D16534:
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
}

__attribute__((alias("__imp__sub_82D1654C"))) PPC_WEAK_FUNC(sub_82D1654C);
PPC_FUNC_IMPL(__imp__sub_82D1654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D16550"))) PPC_WEAK_FUNC(sub_82D16550);
PPC_FUNC_IMPL(__imp__sub_82D16550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D16558;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
loc_82D1658C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d1658c
	if (!cr6.eq) goto loc_82D1658C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D165B0;
	sub_8259CC28(ctx, base);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r27,r31,36
	ctx.r27.s64 = ctx.r31.s64 + 36;
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
loc_82D165D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d165d4
	if (!cr6.eq) goto loc_82D165D4;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D165F8;
	sub_8259CC28(ctx, base);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// li r5,46
	ctx.r5.s64 = 46;
	// stw r26,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r26.u32);
	// addi r30,r10,18940
	ctx.r30.s64 = ctx.r10.s64 + 18940;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// addi r29,r31,92
	ctx.r29.s64 = ctx.r31.s64 + 92;
	// bl 0x8259cc28
	ctx.lr = 0x82D16624;
	sub_8259CC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D16634;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D16640"))) PPC_WEAK_FUNC(sub_82D16640);
PPC_FUNC_IMPL(__imp__sub_82D16640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D16648;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82D16654;
	sub_8308E078(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r29,r11,18592
	ctx.r29.s64 = ctx.r11.s64 + 18592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d253f8
	ctx.lr = 0x82D16674;
	sub_82D253F8(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r10,19088
	ctx.r8.s64 = ctx.r10.s64 + 19088;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// addi r28,r5,25128
	ctx.r28.s64 = ctx.r5.s64 + 25128;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d163a8
	ctx.lr = 0x82D166BC;
	sub_82D163A8(ctx, base);
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d163a8
	ctx.lr = 0x82D166C8;
	sub_82D163A8(ctx, base);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r30.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r30,393(r31)
	PPC_STORE_U8(ctx.r31.u32 + 393, ctx.r30.u8);
	// stb r30,394(r31)
	PPC_STORE_U8(ctx.r31.u32 + 394, ctx.r30.u8);
	// stb r30,395(r31)
	PPC_STORE_U8(ctx.r31.u32 + 395, ctx.r30.u8);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bl 0x82d195d8
	ctx.lr = 0x82D166F0;
	sub_82D195D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d58b80
	ctx.lr = 0x82D166FC;
	sub_82D58B80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// bl 0x82d23788
	ctx.lr = 0x82D1670C;
	sub_82D23788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D16718"))) PPC_WEAK_FUNC(sub_82D16718);
PPC_FUNC_IMPL(__imp__sub_82D16718) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d167a8
	if (cr6.eq) goto loc_82D167A8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d16470
	ctx.lr = 0x82D16748;
	sub_82D16470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d167a8
	if (cr6.eq) goto loc_82D167A8;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r4,24864(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24864);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D16774;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d167a8
	if (cr6.eq) goto loc_82D167A8;
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d16790
	if (cr6.lt) goto loc_82D16790;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D16790:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D167A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D167A8:
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

__attribute__((alias("__imp__sub_82D167C0"))) PPC_WEAK_FUNC(sub_82D167C0);
PPC_FUNC_IMPL(__imp__sub_82D167C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D167C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82d16968
	if (cr6.eq) goto loc_82D16968;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82d16968
	if (cr6.eq) goto loc_82D16968;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d16808
	if (cr6.eq) goto loc_82D16808;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d16808
	if (!cr6.eq) goto loc_82D16808;
	// bl 0x82d591a0
	ctx.lr = 0x82D16800;
	sub_82D591A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82D16808:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r29,r31,352
	ctx.r29.s64 = ctx.r31.s64 + 352;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16828
	if (cr6.lt) goto loc_82D16828;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d1682c
	goto loc_82D1682C;
loc_82D16828:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82D1682C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D1683C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d168a8
	if (cr6.eq) goto loc_82D168A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d15d88
	ctx.lr = 0x82D1684C;
	sub_82D15D88(ctx, base);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d168a8
	if (cr6.eq) goto loc_82D168A8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D1686C;
	sub_8259CB28(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16880
	if (cr6.lt) goto loc_82D16880;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82d16884
	goto loc_82D16884;
loc_82D16880:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D16884:
	// bl 0x83815a48
	ctx.lr = 0x82D16888;
	sub_83815A48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d4b370
	ctx.lr = 0x82D16890;
	sub_82D4B370(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8337f1e0
	ctx.lr = 0x82D1689C;
	sub_8337F1E0(ctx, base);
	// li r4,127
	ctx.r4.s64 = 127;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x83545640
	ctx.lr = 0x82D168A8;
	sub_83545640(ctx, base);
loc_82D168A8:
	// addi r29,r31,260
	ctx.r29.s64 = ctx.r31.s64 + 260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d16470
	ctx.lr = 0x82D168B4;
	sub_82D16470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d168cc
	if (cr6.eq) goto loc_82D168CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d16718
	ctx.lr = 0x82D168CC;
	sub_82D16718(ctx, base);
loc_82D168CC:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d1694c
	if (cr6.eq) goto loc_82D1694C;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// beq cr6,0x82d168f0
	if (cr6.eq) goto loc_82D168F0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82d16910
	if (!cr6.eq) goto loc_82D16910;
loc_82D168F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,24852(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24852);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D16910;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D16910:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82d1694c
	if (!cr6.eq) goto loc_82D1694C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82d1694c
	if (!cr6.eq) goto loc_82D1694C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,24856(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24856);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D1694C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D1694C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d16960
	if (!cr6.eq) goto loc_82D16960;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
loc_82D16960:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
loc_82D16968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D16970"))) PPC_WEAK_FUNC(sub_82D16970);
PPC_FUNC_IMPL(__imp__sub_82D16970) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r3,-29384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d169e8
	if (!cr6.eq) goto loc_82D169E8;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,396
	ctx.r4.s64 = 396;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D169A8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d169bc
	if (cr6.eq) goto loc_82D169BC;
	// bl 0x82d16640
	ctx.lr = 0x82D169B4;
	sub_82D16640(ctx, base);
	// stw r3,-29384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29384, ctx.r3.u32);
	// b 0x82d169c4
	goto loc_82D169C4;
loc_82D169BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-29384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29384, ctx.r11.u32);
loc_82D169C4:
	// bl 0x831021a0
	ctx.lr = 0x82D169C8;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82D169D0;
	sub_82DA45F8(ctx, base);
	// lwz r4,-29384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29384);
	// bl 0x83103100
	ctx.lr = 0x82D169D8;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-29384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29384);
	// bl 0x82d17e60
	ctx.lr = 0x82D169E4;
	sub_82D17E60(ctx, base);
	// lwz r3,-29384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29384);
loc_82D169E8:
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

__attribute__((alias("__imp__sub_82D169FC"))) PPC_WEAK_FUNC(sub_82D169FC);
PPC_FUNC_IMPL(__imp__sub_82D169FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D16A00"))) PPC_WEAK_FUNC(sub_82D16A00);
PPC_FUNC_IMPL(__imp__sub_82D16A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D16A08;
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
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82D16A3C;
	sub_8259CB28(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// bl 0x8259cb28
	ctx.lr = 0x82D16A50;
	sub_8259CB28(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// bl 0x8259cb28
	ctx.lr = 0x82D16A64;
	sub_8259CB28(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// bl 0x8259cb28
	ctx.lr = 0x82D16A78;
	sub_8259CB28(ctx, base);
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D16A8C"))) PPC_WEAK_FUNC(sub_82D16A8C);
PPC_FUNC_IMPL(__imp__sub_82D16A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D16A90"))) PPC_WEAK_FUNC(sub_82D16A90);
PPC_FUNC_IMPL(__imp__sub_82D16A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D16A98;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r7,392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 392, ctx.r7.u8);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// addi r25,r3,260
	ctx.r25.s64 = ctx.r3.s64 + 260;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d16ad4
	if (!cr6.eq) goto loc_82D16AD4;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x82d15f68
	ctx.lr = 0x82D16AC8;
	sub_82D15F68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d16d84
	if (!cr6.eq) goto loc_82D16D84;
loc_82D16AD4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d15f68
	ctx.lr = 0x82D16AE0;
	sub_82D15F68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d16d84
	if (!cr6.eq) goto loc_82D16D84;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,25128
	ctx.r4.s64 = ctx.r11.s64 + 25128;
	// bl 0x82d15f68
	ctx.lr = 0x82D16AFC;
	sub_82D15F68(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d16d84
	if (!cr6.eq) goto loc_82D16D84;
	// lbz r11,393(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 393);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d16b54
	if (cr6.eq) goto loc_82D16B54;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16b30
	if (cr6.lt) goto loc_82D16B30;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d16b34
	goto loc_82D16B34;
loc_82D16B30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D16B34:
	// bl 0x82d12668
	ctx.lr = 0x82D16B38;
	sub_82D12668(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16b4c
	if (cr6.lt) goto loc_82D16B4C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D16B4C:
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// stb r26,393(r29)
	PPC_STORE_U8(ctx.r29.u32 + 393, ctx.r26.u8);
loc_82D16B54:
	// lbz r11,394(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 394);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d16b9c
	if (cr6.eq) goto loc_82D16B9C;
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// addi r31,r29,268
	ctx.r31.s64 = ctx.r29.s64 + 268;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16b78
	if (cr6.lt) goto loc_82D16B78;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d16b7c
	goto loc_82D16B7C;
loc_82D16B78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D16B7C:
	// bl 0x82d12668
	ctx.lr = 0x82D16B80;
	sub_82D12668(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16b94
	if (cr6.lt) goto loc_82D16B94;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D16B94:
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// stb r26,394(r29)
	PPC_STORE_U8(ctx.r29.u32 + 394, ctx.r26.u8);
loc_82D16B9C:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r31,r29,144
	ctx.r31.s64 = ctx.r29.s64 + 144;
	// lwz r7,160(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16bbc
	if (cr6.lt) goto loc_82D16BBC;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d16bc0
	goto loc_82D16BC0;
loc_82D16BBC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82D16BC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D16BD0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d16c34
	if (!cr6.eq) goto loc_82D16C34;
	// lwz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// addi r11,r29,172
	ctx.r11.s64 = ctx.r29.s64 + 172;
	// lwz r7,188(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// addi r3,r27,36
	ctx.r3.s64 = ctx.r27.s64 + 36;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d16bf4
	if (cr6.lt) goto loc_82D16BF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D16BF4:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x82D16C04;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d16c34
	if (!cr6.eq) goto loc_82D16C34;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r29,136
	ctx.r3.s64 = ctx.r29.s64 + 136;
	// bl 0x82d16a00
	ctx.lr = 0x82D16C18;
	sub_82D16A00(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d16a00
	ctx.lr = 0x82D16C24;
	sub_82D16A00(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 384, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D16C34:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d15e00
	ctx.lr = 0x82D16C40;
	sub_82D15E00(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d16cb0
	if (cr6.eq) goto loc_82D16CB0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16c68
	if (cr6.lt) goto loc_82D16C68;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d16c6c
	goto loc_82D16C6C;
loc_82D16C68:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82D16C6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D16C7C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d16cb0
	if (cr6.eq) goto loc_82D16CB0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16c98
	if (cr6.lt) goto loc_82D16C98;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d16c9c
	goto loc_82D16C9C;
loc_82D16C98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D16C9C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12640
	ctx.lr = 0x82D16CA4;
	sub_82D12640(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d16cb0
	if (cr6.eq) goto loc_82D16CB0;
	// stb r28,394(r29)
	PPC_STORE_U8(ctx.r29.u32 + 394, ctx.r28.u8);
loc_82D16CB0:
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d16d14
	if (cr6.eq) goto loc_82D16D14;
	// lwz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// addi r11,r29,172
	ctx.r11.s64 = ctx.r29.s64 + 172;
	// lwz r7,188(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// addi r31,r27,36
	ctx.r31.s64 = ctx.r27.s64 + 36;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d16cd8
	if (cr6.lt) goto loc_82D16CD8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D16CD8:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D16CEC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d16d14
	if (cr6.eq) goto loc_82D16D14;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d16d08
	if (cr6.lt) goto loc_82D16D08;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d16d0c
	goto loc_82D16D0C;
loc_82D16D08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D16D0C:
	// bl 0x82d12d18
	ctx.lr = 0x82D16D10;
	sub_82D12D18(ctx, base);
	// stb r28,393(r29)
	PPC_STORE_U8(ctx.r29.u32 + 393, ctx.r28.u8);
loc_82D16D14:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bne cr6,0x82d16d74
	if (!cr6.eq) goto loc_82D16D74;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d16d74
	if (cr6.eq) goto loc_82D16D74;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d16d44
	if (cr6.eq) goto loc_82D16D44;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,24848(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24848);
	// b 0x82d16d60
	goto loc_82D16D60;
loc_82D16D44:
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// blt cr6,0x82d16d74
	if (cr6.lt) goto loc_82D16D74;
	// beq cr6,0x82d16d58
	if (cr6.eq) goto loc_82D16D58;
	// cmplwi cr6,r24,3
	cr6.compare<uint32_t>(ctx.r24.u32, 3, xer);
	// bge cr6,0x82d16d74
	if (!cr6.lt) goto loc_82D16D74;
loc_82D16D58:
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,24860(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24860);
loc_82D16D60:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D16D74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D16D74:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d16a00
	ctx.lr = 0x82D16D80;
	sub_82D16A00(ctx, base);
	// stw r26,384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 384, ctx.r26.u32);
loc_82D16D84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D16D8C"))) PPC_WEAK_FUNC(sub_82D16D8C);
PPC_FUNC_IMPL(__imp__sub_82D16D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D16D90"))) PPC_WEAK_FUNC(sub_82D16D90);
PPC_FUNC_IMPL(__imp__sub_82D16D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D16D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bge cr6,0x82d16e60
	if (!cr6.lt) goto loc_82D16E60;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82d16e60
	if (cr6.eq) goto loc_82D16E60;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d16df0
	if (cr6.eq) goto loc_82D16DF0;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d16df0
	if (cr6.eq) goto loc_82D16DF0;
	// bl 0x82d58be8
	ctx.lr = 0x82D16DD4;
	sub_82D58BE8(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d58fe0
	ctx.lr = 0x82D16DDC;
	sub_82D58FE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d16df8
	if (cr6.eq) goto loc_82D16DF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d16df4
	goto loc_82D16DF4;
loc_82D16DF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D16DF4:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82D16DF8:
	// bl 0x830ff290
	ctx.lr = 0x82D16DFC;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d16e10
	if (!cr6.eq) goto loc_82D16E10;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r4,r11,25128
	ctx.r4.s64 = ctx.r11.s64 + 25128;
	// b 0x82d16e4c
	goto loc_82D16E4C;
loc_82D16E10:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,-21048
	ctx.r8.s64 = ctx.r11.s64 + -21048;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82D16E24:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,15
	cr6.compare<int32_t>(ctx.r7.s32, 15, xer);
	// beq cr6,0x82d16e68
	if (cr6.eq) goto loc_82D16E68;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,124
	ctx.r9.s64 = ctx.r9.s64 + 124;
	// cmplwi cr6,r11,496
	cr6.compare<uint32_t>(ctx.r11.u32, 496, xer);
	// blt cr6,0x82d16e24
	if (cr6.lt) goto loc_82D16E24;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r4,r11,25256
	ctx.r4.s64 = ctx.r11.s64 + 25256;
loc_82D16E4C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d16a90
	ctx.lr = 0x82D16E60;
	sub_82D16A90(ctx, base);
loc_82D16E60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D16E68:
	// mulli r11,r10,124
	ctx.r11.s64 = ctx.r10.s64 * 124;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82d16e4c
	goto loc_82D16E4C;
}

__attribute__((alias("__imp__sub_82D16E74"))) PPC_WEAK_FUNC(sub_82D16E74);
PPC_FUNC_IMPL(__imp__sub_82D16E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D16E78"))) PPC_WEAK_FUNC(sub_82D16E78);
PPC_FUNC_IMPL(__imp__sub_82D16E78) {
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
	// addi r30,r3,260
	ctx.r30.s64 = ctx.r3.s64 + 260;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d16a00
	ctx.lr = 0x82D16EA0;
	sub_82D16A00(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,25128
	ctx.r4.s64 = ctx.r11.s64 + 25128;
	// bl 0x82d16a00
	ctx.lr = 0x82D16EB0;
	sub_82D16A00(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D16ED0"))) PPC_WEAK_FUNC(sub_82D16ED0);
PPC_FUNC_IMPL(__imp__sub_82D16ED0) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r3,-29384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d16ef8
	if (!cr6.eq) goto loc_82D16EF8;
	// bl 0x82d16970
	ctx.lr = 0x82D16EF4;
	sub_82D16970(ctx, base);
	// stw r3,-29384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29384, ctx.r3.u32);
loc_82D16EF8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D16F0C"))) PPC_WEAK_FUNC(sub_82D16F0C);
PPC_FUNC_IMPL(__imp__sub_82D16F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D16F10"))) PPC_WEAK_FUNC(sub_82D16F10);
PPC_FUNC_IMPL(__imp__sub_82D16F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D16F18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31758
	ctx.r28.s64 = -2081292288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-29384(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d16f40
	if (!cr6.eq) goto loc_82D16F40;
	// bl 0x82d16970
	ctx.lr = 0x82D16F34;
	sub_82D16970(ctx, base);
	// stw r3,-29384(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29384, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d1700c
	if (cr6.eq) goto loc_82D1700C;
loc_82D16F40:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,19376
	ctx.r29.s64 = ctx.r11.s64 + 19376;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82D16F50:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D16F58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x82d16f7c
	if (cr6.eq) goto loc_82D16F7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d16f58
	if (cr6.eq) goto loc_82D16F58;
loc_82D16F7C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d16f9c
	if (cr6.eq) goto loc_82D16F9C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// blt cr6,0x82d16f50
	if (cr6.lt) goto loc_82D16F50;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D16F9C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d16fac
	if (!cr6.eq) goto loc_82D16FAC;
	// bl 0x82d16970
	ctx.lr = 0x82D16FA8;
	sub_82D16970(ctx, base);
	// stw r3,-29384(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29384, ctx.r3.u32);
loc_82D16FAC:
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x82d157f8
	ctx.lr = 0x82D16FC0;
	sub_82D157F8(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82d16fd8
	if (cr6.eq) goto loc_82D16FD8;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82d16fe4
	if (!cr6.eq) goto loc_82D16FE4;
loc_82D16FD8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d1700c
	if (cr6.eq) goto loc_82D1700C;
loc_82D16FE4:
	// lwz r3,-29384(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d16ff8
	if (!cr6.eq) goto loc_82D16FF8;
	// bl 0x82d16970
	ctx.lr = 0x82D16FF4;
	sub_82D16970(ctx, base);
	// stw r3,-29384(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29384, ctx.r3.u32);
loc_82D16FF8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d16a90
	ctx.lr = 0x82D1700C;
	sub_82D16A90(ctx, base);
loc_82D1700C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D17014"))) PPC_WEAK_FUNC(sub_82D17014);
PPC_FUNC_IMPL(__imp__sub_82D17014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17018"))) PPC_WEAK_FUNC(sub_82D17018);
PPC_FUNC_IMPL(__imp__sub_82D17018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D17020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82d157f8
	ctx.lr = 0x82D1703C;
	sub_82D157F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d16a90
	ctx.lr = 0x82D17054;
	sub_82D16A90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D1705C"))) PPC_WEAK_FUNC(sub_82D1705C);
PPC_FUNC_IMPL(__imp__sub_82D1705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17060"))) PPC_WEAK_FUNC(sub_82D17060);
PPC_FUNC_IMPL(__imp__sub_82D17060) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d170f0
	if (cr6.eq) goto loc_82D170F0;
	// bl 0x830ff290
	ctx.lr = 0x82D1708C;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d170a0
	if (!cr6.eq) goto loc_82D170A0;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r4,r11,25128
	ctx.r4.s64 = ctx.r11.s64 + 25128;
	// b 0x82d170dc
	goto loc_82D170DC;
loc_82D170A0:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,-21048
	ctx.r8.s64 = ctx.r11.s64 + -21048;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82D170B4:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,15
	cr6.compare<int32_t>(ctx.r7.s32, 15, xer);
	// beq cr6,0x82d1710c
	if (cr6.eq) goto loc_82D1710C;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,124
	ctx.r9.s64 = ctx.r9.s64 + 124;
	// cmplwi cr6,r11,496
	cr6.compare<uint32_t>(ctx.r11.u32, 496, xer);
	// blt cr6,0x82d170b4
	if (cr6.lt) goto loc_82D170B4;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r4,r11,25256
	ctx.r4.s64 = ctx.r11.s64 + 25256;
loc_82D170DC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d16a90
	ctx.lr = 0x82D170F0;
	sub_82D16A90(ctx, base);
loc_82D170F0:
	// stb r30,395(r31)
	PPC_STORE_U8(ctx.r31.u32 + 395, ctx.r30.u8);
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
loc_82D1710C:
	// mulli r11,r10,124
	ctx.r11.s64 = ctx.r10.s64 * 124;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82d170dc
	goto loc_82D170DC;
}

__attribute__((alias("__imp__sub_82D17118"))) PPC_WEAK_FUNC(sub_82D17118);
PPC_FUNC_IMPL(__imp__sub_82D17118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D17120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d1714c
	if (!cr6.eq) goto loc_82D1714C;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d1714c
	if (!cr6.eq) goto loc_82D1714C;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bne cr6,0x82d17528
	if (!cr6.eq) goto loc_82D17528;
loc_82D1714C:
	// lwz r11,384(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d17228
	if (!cr6.eq) goto loc_82D17228;
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d17198
	if (cr6.eq) goto loc_82D17198;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bne cr6,0x82d17180
	if (!cr6.eq) goto loc_82D17180;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 384, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D17180:
	// lbz r11,393(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 393);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d171ac
	if (!cr6.eq) goto loc_82D171AC;
	// lbz r10,394(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 394);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d171ac
	if (!cr6.eq) goto loc_82D171AC;
loc_82D17198:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 384, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D171AC:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d171e4
	if (cr6.eq) goto loc_82D171E4;
	// lwz r10,316(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// addi r11,r29,296
	ctx.r11.s64 = ctx.r29.s64 + 296;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d171cc
	if (cr6.lt) goto loc_82D171CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D171CC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d12d18
	ctx.lr = 0x82D171D4;
	sub_82D12D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d171e4
	if (cr6.eq) goto loc_82D171E4;
	// stb r30,393(r29)
	PPC_STORE_U8(ctx.r29.u32 + 393, ctx.r30.u8);
loc_82D171E4:
	// lbz r11,394(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 394);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17528
	if (cr6.eq) goto loc_82D17528;
	// lwz r10,288(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// addi r11,r29,268
	ctx.r11.s64 = ctx.r29.s64 + 268;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d17204
	if (cr6.lt) goto loc_82D17204;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D17204:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d12d18
	ctx.lr = 0x82D1720C;
	sub_82D12D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17528
	if (cr6.eq) goto loc_82D17528;
	// stb r30,394(r29)
	PPC_STORE_U8(ctx.r29.u32 + 394, ctx.r30.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D17228:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d17254
	if (!cr6.eq) goto loc_82D17254;
	// lbz r10,392(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 392);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d17254
	if (cr6.eq) goto loc_82D17254;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d167c0
	ctx.lr = 0x82D17248;
	sub_82D167C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D17254:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82d17424
	if (!cr6.eq) goto loc_82D17424;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d17280
	if (cr6.eq) goto loc_82D17280;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,24852(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24852);
	// bl 0x82d2bb40
	ctx.lr = 0x82D17274;
	sub_82D2BB40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d17528
	if (cr6.eq) goto loc_82D17528;
loc_82D17280:
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d172a8
	if (cr6.eq) goto loc_82D172A8;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82d172a8
	if (!cr6.eq) goto loc_82D172A8;
	// bl 0x82d58888
	ctx.lr = 0x82D1729C;
	sub_82D58888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17528
	if (cr6.eq) goto loc_82D17528;
loc_82D172A8:
	// lwz r11,388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d172c8
	if (cr6.eq) goto loc_82D172C8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 388, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D172C8:
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17344
	if (cr6.eq) goto loc_82D17344;
	// lwz r10,288(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// addi r11,r29,268
	ctx.r11.s64 = ctx.r29.s64 + 268;
	// lwz r7,284(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// addi r31,r29,144
	ctx.r31.s64 = ctx.r29.s64 + 144;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d172f4
	if (cr6.lt) goto loc_82D172F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D172F4:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D17308;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d17344
	if (cr6.eq) goto loc_82D17344;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d17324
	if (cr6.lt) goto loc_82D17324;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d17328
	goto loc_82D17328;
loc_82D17324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D17328:
	// bl 0x82d12668
	ctx.lr = 0x82D1732C;
	sub_82D12668(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d17340
	if (cr6.lt) goto loc_82D17340;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D17340:
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_82D17344:
	// lwz r11,188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d173bc
	if (cr6.eq) goto loc_82D173BC;
	// lwz r10,316(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// addi r11,r29,296
	ctx.r11.s64 = ctx.r29.s64 + 296;
	// lwz r7,312(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// addi r31,r29,172
	ctx.r31.s64 = ctx.r29.s64 + 172;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d1736c
	if (cr6.lt) goto loc_82D1736C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D1736C:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D17380;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d173bc
	if (cr6.eq) goto loc_82D173BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d1739c
	if (cr6.lt) goto loc_82D1739C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d173a0
	goto loc_82D173A0;
loc_82D1739C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D173A0:
	// bl 0x82d12668
	ctx.lr = 0x82D173A4;
	sub_82D12668(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d173b8
	if (cr6.lt) goto loc_82D173B8;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D173B8:
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_82D173BC:
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d173cc
	if (cr6.eq) goto loc_82D173CC;
	// bl 0x82d588a0
	ctx.lr = 0x82D173CC;
	sub_82D588A0(ctx, base);
loc_82D173CC:
	// lwz r10,260(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r29,260
	ctx.r31.s64 = ctx.r29.s64 + 260;
	// addi r30,r11,25128
	ctx.r30.s64 = ctx.r11.s64 + 25128;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bne cr6,0x82d173f0
	if (!cr6.eq) goto loc_82D173F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d16a00
	ctx.lr = 0x82D173F0;
	sub_82D16A00(ctx, base);
loc_82D173F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,136
	ctx.r3.s64 = ctx.r29.s64 + 136;
	// bl 0x82d16a00
	ctx.lr = 0x82D173FC;
	sub_82D16A00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d16a00
	ctx.lr = 0x82D17408;
	sub_82D16A00(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 384, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D17424:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82d17528
	if (!cr6.eq) goto loc_82D17528;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d17470
	if (cr6.eq) goto loc_82D17470;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,24860(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24860);
	// bl 0x82d2bb40
	ctx.lr = 0x82D17444;
	sub_82D2BB40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d17528
	if (cr6.eq) goto loc_82D17528;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,24848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24848);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D17470;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D17470:
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bne cr6,0x82d17484
	if (!cr6.eq) goto loc_82D17484;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d15d88
	ctx.lr = 0x82D17484;
	sub_82D15D88(ctx, base);
loc_82D17484:
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d174cc
	if (cr6.eq) goto loc_82D174CC;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r31,r29,144
	ctx.r31.s64 = ctx.r29.s64 + 144;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d174ac
	if (cr6.lt) goto loc_82D174AC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d174b0
	goto loc_82D174B0;
loc_82D174AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D174B0:
	// bl 0x82d12668
	ctx.lr = 0x82D174B4;
	sub_82D12668(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d174c8
	if (cr6.lt) goto loc_82D174C8;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D174C8:
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_82D174CC:
	// lwz r11,188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17510
	if (cr6.eq) goto loc_82D17510;
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// addi r31,r29,172
	ctx.r31.s64 = ctx.r29.s64 + 172;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d174f0
	if (cr6.lt) goto loc_82D174F0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d174f4
	goto loc_82D174F4;
loc_82D174F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D174F4:
	// bl 0x82d12668
	ctx.lr = 0x82D174F8;
	sub_82D12668(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d1750c
	if (cr6.lt) goto loc_82D1750C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D1750C:
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_82D17510:
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d17520
	if (cr6.eq) goto loc_82D17520;
	// bl 0x82d58be8
	ctx.lr = 0x82D17520;
	sub_82D58BE8(ctx, base);
loc_82D17520:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d16e78
	ctx.lr = 0x82D17528;
	sub_82D16E78(ctx, base);
loc_82D17528:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D17534"))) PPC_WEAK_FUNC(sub_82D17534);
PPC_FUNC_IMPL(__imp__sub_82D17534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17538"))) PPC_WEAK_FUNC(sub_82D17538);
PPC_FUNC_IMPL(__imp__sub_82D17538) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d17568
	if (cr6.eq) goto loc_82D17568;
	// bl 0x82d49b58
	ctx.lr = 0x82D17564;
	sub_82D49B58(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_82D17568:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// stb r11,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82D17590"))) PPC_WEAK_FUNC(sub_82D17590);
PPC_FUNC_IMPL(__imp__sub_82D17590) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d17628
	if (!cr6.eq) goto loc_82D17628;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,25380(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25380);
	// bl 0x83815a48
	ctx.lr = 0x82D175BC;
	sub_83815A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d175dc
	if (!cr6.eq) goto loc_82D175DC;
loc_82D175C4:
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
loc_82D175DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d4b370
	ctx.lr = 0x82D175E4;
	sub_82D4B370(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d175c4
	if (cr6.eq) goto loc_82D175C4;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8337f1e0
	ctx.lr = 0x82D175F8;
	sub_8337F1E0(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82d2bbb8
	ctx.lr = 0x82D17600;
	sub_82D2BBB8(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,25384(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25384);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D17620;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r8.u8);
loc_82D17628:
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

__attribute__((alias("__imp__sub_82D17640"))) PPC_WEAK_FUNC(sub_82D17640);
PPC_FUNC_IMPL(__imp__sub_82D17640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D17648;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D17664;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r30,1(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bl 0x82597088
	ctx.lr = 0x82D17678;
	sub_82597088(ctx, base);
	// rlwinm r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d17688
	if (cr6.eq) goto loc_82D17688;
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_82D17688:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// clrlwi r10,r30,30
	ctx.r10.u64 = ctx.r30.u32 & 0x3;
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// subfe r29,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r29,24
	ctx.r30.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d176e8
	if (cr6.eq) goto loc_82D176E8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d176e4
	if (cr6.eq) goto loc_82D176E4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d176e8
	if (!cr6.eq) goto loc_82D176E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x83a7d958
	ctx.lr = 0x82D176DC;
	sub_83A7D958(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x82d176e8
	goto loc_82D176E8;
loc_82D176E4:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82D176E8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d1777c
	if (!cr6.eq) goto loc_82D1777C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d17778
	if (cr6.eq) goto loc_82D17778;
	// bl 0x82d34e50
	ctx.lr = 0x82D17700;
	sub_82D34E50(ctx, base);
	// bl 0x82d34da8
	ctx.lr = 0x82D17704;
	sub_82D34DA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d1777c
	if (!cr6.eq) goto loc_82D1777C;
	// bl 0x83a7d958
	ctx.lr = 0x82D17714;
	sub_83A7D958(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82D17720;
	sub_83524138(ctx, base);
	// clrldi r10,r27,48
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r3,r10
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r10.u64, xer);
	// bge cr6,0x82d17734
	if (!cr6.lt) goto loc_82D17734;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82D17734:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d1777c
	if (cr6.eq) goto loc_82D1777C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d17590
	ctx.lr = 0x82D17748;
	sub_82D17590(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d1777c
	if (cr6.eq) goto loc_82D1777C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x83a7d958
	ctx.lr = 0x82D17760;
	sub_83A7D958(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D17778:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82D1777C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D17790"))) PPC_WEAK_FUNC(sub_82D17790);
PPC_FUNC_IMPL(__imp__sub_82D17790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D17798;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x837d59a0
	ctx.lr = 0x82D177A4;
	sub_837D59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837d5cf8
	ctx.lr = 0x82D177AC;
	sub_837D5CF8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82d177e8
	if (!cr6.eq) goto loc_82D177E8;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r31,-14452(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14452);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d177e8
	if (cr6.eq) goto loc_82D177E8;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D177D4;
	sub_82596FE8(ctx, base);
	// lbz r11,85(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 85);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82D177E8;
	sub_82597088(ctx, base);
loc_82D177E8:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r24,r11,25392
	ctx.r24.s64 = ctx.r11.s64 + 25392;
	// addi r27,r10,19960
	ctx.r27.s64 = ctx.r10.s64 + 19960;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r28,r24,-4
	ctx.r28.s64 = ctx.r24.s64 + -4;
	// addi r29,r26,84
	ctx.r29.s64 = ctx.r26.s64 + 84;
loc_82D17810:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzu r5,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x82d17640
	ctx.lr = 0x82D17824;
	sub_82D17640(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r8,r27,4
	ctx.r8.s64 = ctx.r27.s64 + 4;
	// stbx r3,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u8);
	// or r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, xer);
	// blt cr6,0x82d17810
	if (cr6.lt) goto loc_82D17810;
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17984
	if (cr6.eq) goto loc_82D17984;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D17874;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d17888
	if (cr6.eq) goto loc_82D17888;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82D17888;
	sub_82D2AEC8(ctx, base);
loc_82D17888:
	// lbz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// bne cr6,0x82d178b8
	if (!cr6.eq) goto loc_82D178B8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d17984
	if (!cr6.eq) goto loc_82D17984;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,76(r26)
	PPC_STORE_U8(ctx.r26.u32 + 76, ctx.r11.u8);
	// bl 0x83a7d958
	ctx.lr = 0x82D178AC;
	sub_83A7D958(ctx, base);
	// stw r3,164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 164, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D178B8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,77(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 77);
	// beq cr6,0x82d178fc
	if (cr6.eq) goto loc_82D178FC;
	// stb r23,76(r26)
	PPC_STORE_U8(ctx.r26.u32 + 76, ctx.r23.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17984
	if (cr6.eq) goto loc_82D17984;
	// lwz r3,72(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,25384(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25384);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D178F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r23,77(r26)
	PPC_STORE_U8(ctx.r26.u32 + 77, ctx.r23.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D178FC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17930
	if (cr6.eq) goto loc_82D17930;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,72(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// lwz r4,25388(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25388);
	// bl 0x82d2bb40
	ctx.lr = 0x82D17914;
	sub_82D2BB40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d17984
	if (cr6.eq) goto loc_82D17984;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d17538
	ctx.lr = 0x82D17928;
	sub_82D17538(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D17930:
	// bl 0x83a7d958
	ctx.lr = 0x82D17934;
	sub_83A7D958(ctx, base);
	// lwz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82D17940;
	sub_83524138(ctx, base);
	// cmpldi cr6,r3,200
	cr6.compare<uint64_t>(ctx.r3.u64, 200, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82d17950
	if (!cr6.lt) goto loc_82D17950;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82D17950:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17984
	if (cr6.eq) goto loc_82D17984;
	// lwz r3,72(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,25388(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25388);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D1797C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,77(r26)
	PPC_STORE_U8(ctx.r26.u32 + 77, ctx.r8.u8);
loc_82D17984:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D1798C"))) PPC_WEAK_FUNC(sub_82D1798C);
PPC_FUNC_IMPL(__imp__sub_82D1798C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17990"))) PPC_WEAK_FUNC(sub_82D17990);
PPC_FUNC_IMPL(__imp__sub_82D17990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D17998;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,19864
	ctx.r4.s64 = ctx.r11.s64 + 19864;
	// bl 0x83103328
	ctx.lr = 0x82D179AC;
	sub_83103328(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r9,r10,19964
	ctx.r9.s64 = ctx.r10.s64 + 19964;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r28,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r28.u8);
	// addi r27,r31,84
	ctx.r27.s64 = ctx.r31.s64 + 84;
	// stb r28,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r28.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stb r30,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r30.u8);
	// stb r8,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r8.u8);
loc_82D179E4:
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stb r30,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r30.u8);
	// stb r30,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r30.u8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// bl 0x82596fa8
	ctx.lr = 0x82D179FC;
	sub_82596FA8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// bge 0x82d179e4
	if (!cr0.lt) goto loc_82D179E4;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r30.u8);
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D17A20"))) PPC_WEAK_FUNC(sub_82D17A20);
PPC_FUNC_IMPL(__imp__sub_82D17A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D17A28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,19964
	ctx.r10.s64 = ctx.r11.s64 + 19964;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d17a54
	if (cr6.eq) goto loc_82D17A54;
	// bl 0x82d49b58
	ctx.lr = 0x82D17A50;
	sub_82D49B58(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_82D17A54:
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// addi r11,r31,164
	ctx.r11.s64 = ctx.r31.s64 + 164;
	// stb r9,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r9.u8);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,-14452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14452, ctx.r30.u32);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_82D17A78:
	// addi r30,r30,-40
	ctx.r30.s64 = ctx.r30.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596f90
	ctx.lr = 0x82D17A84;
	sub_82596F90(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x82d17a78
	if (!cr0.lt) goto loc_82D17A78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x82D17A94;
	sub_831032A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D17A9C"))) PPC_WEAK_FUNC(sub_82D17A9C);
PPC_FUNC_IMPL(__imp__sub_82D17A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17AA0"))) PPC_WEAK_FUNC(sub_82D17AA0);
PPC_FUNC_IMPL(__imp__sub_82D17AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D17AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-14452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14452);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17b10
	if (cr6.eq) goto loc_82D17B10;
	// addi r31,r11,84
	ctx.r31.s64 = ctx.r11.s64 + 84;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D17AD0;
	sub_82596FE8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17af8
	if (cr6.eq) goto loc_82D17AF8;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82D17AF0;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D17AF8:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82D17B10;
	sub_82597088(ctx, base);
loc_82D17B10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D17B18"))) PPC_WEAK_FUNC(sub_82D17B18);
PPC_FUNC_IMPL(__imp__sub_82D17B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D17B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-14452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14452);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17b88
	if (cr6.eq) goto loc_82D17B88;
	// addi r31,r11,84
	ctx.r31.s64 = ctx.r11.s64 + 84;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D17B48;
	sub_82596FE8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d17b70
	if (!cr6.eq) goto loc_82D17B70;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82D17B68;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D17B70:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82D17B88;
	sub_82597088(ctx, base);
loc_82D17B88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D17B90"))) PPC_WEAK_FUNC(sub_82D17B90);
PPC_FUNC_IMPL(__imp__sub_82D17B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D17B98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-14452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14452);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17c00
	if (cr6.eq) goto loc_82D17C00;
	// addi r31,r11,124
	ctx.r31.s64 = ctx.r11.s64 + 124;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D17BC0;
	sub_82596FE8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17be8
	if (cr6.eq) goto loc_82D17BE8;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82D17BE0;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D17BE8:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82D17C00;
	sub_82597088(ctx, base);
loc_82D17C00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D17C08"))) PPC_WEAK_FUNC(sub_82D17C08);
PPC_FUNC_IMPL(__imp__sub_82D17C08) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r11,-14452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14452);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17c40
	if (cr6.eq) goto loc_82D17C40;
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
loc_82D17C40:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,168
	ctx.r4.s64 = 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D17C58;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d17c6c
	if (cr6.eq) goto loc_82D17C6C;
	// bl 0x82d17990
	ctx.lr = 0x82D17C64;
	sub_82D17990(ctx, base);
	// stw r3,-14452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14452, ctx.r3.u32);
	// b 0x82d17c74
	goto loc_82D17C74;
loc_82D17C6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-14452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14452, ctx.r11.u32);
loc_82D17C74:
	// bl 0x831021a0
	ctx.lr = 0x82D17C78;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82D17C80;
	sub_82DA45F8(ctx, base);
	// lwz r4,-14452(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14452);
	// bl 0x83103100
	ctx.lr = 0x82D17C88;
	sub_83103100(ctx, base);
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

__attribute__((alias("__imp__sub_82D17CA0"))) PPC_WEAK_FUNC(sub_82D17CA0);
PPC_FUNC_IMPL(__imp__sub_82D17CA0) {
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
	// bl 0x82d17a20
	ctx.lr = 0x82D17CC0;
	sub_82D17A20(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17cd8
	if (cr6.eq) goto loc_82D17CD8;
	// bl 0x82416268
	ctx.lr = 0x82D17CD4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D17CD8:
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

__attribute__((alias("__imp__sub_82D17CF0"))) PPC_WEAK_FUNC(sub_82D17CF0);
PPC_FUNC_IMPL(__imp__sub_82D17CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D17CF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17d64
	if (cr6.eq) goto loc_82D17D64;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,25516
	ctx.r31.s64 = ctx.r11.s64 + 25516;
loc_82D17D18:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D17D20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d17d20
	if (!cr6.eq) goto loc_82D17D20;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D17D4C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d17d70
	if (cr6.eq) goto loc_82D17D70;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(ctx.r29.u32, 5, xer);
	// blt cr6,0x82d17d18
	if (cr6.lt) goto loc_82D17D18;
loc_82D17D64:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D17D70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D17D7C"))) PPC_WEAK_FUNC(sub_82D17D7C);
PPC_FUNC_IMPL(__imp__sub_82D17D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17D80"))) PPC_WEAK_FUNC(sub_82D17D80);
PPC_FUNC_IMPL(__imp__sub_82D17D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// stw r4,-14432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14432, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D17D8C"))) PPC_WEAK_FUNC(sub_82D17D8C);
PPC_FUNC_IMPL(__imp__sub_82D17D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17D90"))) PPC_WEAK_FUNC(sub_82D17D90);
PPC_FUNC_IMPL(__imp__sub_82D17D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r3,-14432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14432);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D17D9C"))) PPC_WEAK_FUNC(sub_82D17D9C);
PPC_FUNC_IMPL(__imp__sub_82D17D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17DA0"))) PPC_WEAK_FUNC(sub_82D17DA0);
PPC_FUNC_IMPL(__imp__sub_82D17DA0) {
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
	// bl 0x82d26ed8
	ctx.lr = 0x82D17DB8;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d17dc8
	if (cr6.eq) goto loc_82D17DC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d26b18
	ctx.lr = 0x82D17DC8;
	sub_82D26B18(ctx, base);
loc_82D17DC8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D17DDC"))) PPC_WEAK_FUNC(sub_82D17DDC);
PPC_FUNC_IMPL(__imp__sub_82D17DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17DE0"))) PPC_WEAK_FUNC(sub_82D17DE0);
PPC_FUNC_IMPL(__imp__sub_82D17DE0) {
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
	// bl 0x82d26ed8
	ctx.lr = 0x82D17DF8;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d17e08
	if (cr6.eq) goto loc_82D17E08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d26b30
	ctx.lr = 0x82D17E08;
	sub_82D26B30(ctx, base);
loc_82D17E08:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D17E1C"))) PPC_WEAK_FUNC(sub_82D17E1C);
PPC_FUNC_IMPL(__imp__sub_82D17E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17E20"))) PPC_WEAK_FUNC(sub_82D17E20);
PPC_FUNC_IMPL(__imp__sub_82D17E20) {
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
	// bl 0x82d26ed8
	ctx.lr = 0x82D17E38;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d17e4c
	if (cr6.eq) goto loc_82D17E4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d26b48
	ctx.lr = 0x82D17E4C;
	sub_82D26B48(ctx, base);
loc_82D17E4C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D17E60"))) PPC_WEAK_FUNC(sub_82D17E60);
PPC_FUNC_IMPL(__imp__sub_82D17E60) {
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
	// bl 0x82927030
	ctx.lr = 0x82D17E78;
	sub_82927030(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82721310
	ctx.lr = 0x82D17E80;
	sub_82721310(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D17E94"))) PPC_WEAK_FUNC(sub_82D17E94);
PPC_FUNC_IMPL(__imp__sub_82D17E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17E98"))) PPC_WEAK_FUNC(sub_82D17E98);
PPC_FUNC_IMPL(__imp__sub_82D17E98) {
	PPC_FUNC_PROLOGUE();
	// b 0x83824eb0
	sub_83824EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D17E9C"))) PPC_WEAK_FUNC(sub_82D17E9C);
PPC_FUNC_IMPL(__imp__sub_82D17E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17EA0"))) PPC_WEAK_FUNC(sub_82D17EA0);
PPC_FUNC_IMPL(__imp__sub_82D17EA0) {
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
	// ori r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 7;
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
	// bl 0x831036c0
	ctx.lr = 0x82D17ED8;
	sub_831036C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D17EE8"))) PPC_WEAK_FUNC(sub_82D17EE8);
PPC_FUNC_IMPL(__imp__sub_82D17EE8) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d17f10
	if (!cr6.eq) goto loc_82D17F10;
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
loc_82D17F10:
	// bl 0x82d26ed8
	ctx.lr = 0x82D17F14;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d17f24
	if (cr6.eq) goto loc_82D17F24;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x82d26b30
	ctx.lr = 0x82D17F24;
	sub_82D26B30(ctx, base);
loc_82D17F24:
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

__attribute__((alias("__imp__sub_82D17F38"))) PPC_WEAK_FUNC(sub_82D17F38);
PPC_FUNC_IMPL(__imp__sub_82D17F38) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d17f60
	if (!cr6.eq) goto loc_82D17F60;
loc_82D17F4C:
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
loc_82D17F60:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82d3cc58
	ctx.lr = 0x82D17F68;
	sub_82D3CC58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d17f4c
	if (cr6.eq) goto loc_82D17F4C;
	// bl 0x82d26ed8
	ctx.lr = 0x82D17F78;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d17f88
	if (cr6.eq) goto loc_82D17F88;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x82d26b30
	ctx.lr = 0x82D17F88;
	sub_82D26B30(ctx, base);
loc_82D17F88:
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

__attribute__((alias("__imp__sub_82D17F9C"))) PPC_WEAK_FUNC(sub_82D17F9C);
PPC_FUNC_IMPL(__imp__sub_82D17F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D17FA0"))) PPC_WEAK_FUNC(sub_82D17FA0);
PPC_FUNC_IMPL(__imp__sub_82D17FA0) {
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
	ctx.lr = 0x82D17FB4;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f0,-29844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29844);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x82d18024
	if (cr6.gt) goto loc_82D18024;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-4460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fabs f29,f4
	ctx.f29.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f28,f3
	ctx.f28.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// b 0x82d18064
	goto loc_82D18064;
loc_82D18024:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f13,f0,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f4,f10,f0,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f3,f12,f0,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f2,f7,f0,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsubs f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fabs f29,f1
	ctx.f29.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fabs f28,f0
	ctx.f28.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D18064:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f29,f30
	cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bne cr6,0x82d18084
	if (!cr6.eq) goto loc_82D18084;
	// fcmpu cr6,f28,f30
	cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// bne cr6,0x82d18084
	if (!cr6.eq) goto loc_82D18084;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x82d180b0
	goto loc_82D180B0;
loc_82D18084:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a5a9f8
	ctx.lr = 0x82D18090;
	sub_82A5A9F8(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x82d180a4
	if (!cr6.lt) goto loc_82D180A4;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lfs f0,25680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25680);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_82D180A4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lfs f0,25700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25700);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_82D180B0:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82d180bc
	if (!cr6.gt) goto loc_82D180BC;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_82D180BC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// beq cr6,0x82d180e0
	if (cr6.eq) goto loc_82D180E0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82D180E0:
	// bl 0x82a5aa98
	ctx.lr = 0x82D180E4;
	sub_82A5AA98(ctx, base);
	// fmuls f13,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// fsubs f0,f31,f1
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmadds f12,f28,f28,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fmadds f0,f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7c4
	ctx.lr = 0x82D18108;
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

__attribute__((alias("__imp__sub_82D18118"))) PPC_WEAK_FUNC(sub_82D18118);
PPC_FUNC_IMPL(__imp__sub_82D18118) {
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
	ctx.lr = 0x82D1812C;
	__savefpr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// fadds f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f31,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fmr f26,f2
	ctx.f26.f64 = ctx.f2.f64;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lfs f0,-29844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x82d18190
	if (cr6.gt) goto loc_82D18190;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f0,-4460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// b 0x82d181b0
	goto loc_82D181B0;
loc_82D18190:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f9,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f12,f0,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmadds f30,f13,f0,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f30.f64));
	// fmadds f29,f9,f0,f11
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f28,f8,f0,f10
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
loc_82D181B0:
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// bne cr6,0x82d181cc
	if (!cr6.eq) goto loc_82D181CC;
	// fcmpu cr6,f29,f31
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x82d181cc
	if (!cr6.eq) goto loc_82D181CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82d18200
	goto loc_82D18200;
loc_82D181CC:
	// fsubs f2,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// fsubs f1,f29,f31
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// bl 0x82a5a9f8
	ctx.lr = 0x82D181D8;
	sub_82A5A9F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82d181f4
	if (!cr6.lt) goto loc_82D181F4;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lfs f0,25680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25680);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_82D181F4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lfs f0,25700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25700);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_82D18200:
	// fsubs f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-25156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d18224
	if (cr6.lt) goto loc_82D18224;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,11412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11412);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82D18224:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x82d18238
	if (cr6.lt) goto loc_82D18238;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82d18288
	goto loc_82D18288;
loc_82D18238:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// fsubs f31,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// fsubs f30,f28,f30
	ctx.f30.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// lfs f13,25696(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25696);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,21204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x831d1af0
	ctx.lr = 0x82D1825C;
	sub_831D1AF0(ctx, base);
	// fmuls f12,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fmadds f10,f30,f30,f12
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// bne cr6,0x82d18288
	if (!cr6.eq) goto loc_82D18288;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f0,26160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26160);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82D18288:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7bc
	ctx.lr = 0x82D18294;
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

__attribute__((alias("__imp__sub_82D182A4"))) PPC_WEAK_FUNC(sub_82D182A4);
PPC_FUNC_IMPL(__imp__sub_82D182A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D182A8"))) PPC_WEAK_FUNC(sub_82D182A8);
PPC_FUNC_IMPL(__imp__sub_82D182A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f1,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// bgt cr6,0x82d182d8
	if (cr6.gt) goto loc_82D182D8;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82d182f8
	if (!cr6.lt) goto loc_82D182F8;
loc_82D182D8:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bgt cr6,0x82d182e8
	if (cr6.gt) goto loc_82D182E8;
	// fcmpu cr6,f12,f9
	cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bge cr6,0x82d182f8
	if (!cr6.lt) goto loc_82D182F8;
loc_82D182E8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// fcmpu cr6,f12,f9
	cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82D182F8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f12,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f11,f12,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// beq cr6,0x82d18340
	if (cr6.eq) goto loc_82D18340;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f1,f13
	ctx.f1.f64 = double(float(sqrt(ctx.f13.f64)));
	// blr 
	return;
loc_82D18340:
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f1,f13
	ctx.f1.f64 = double(float(sqrt(ctx.f13.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D18364"))) PPC_WEAK_FUNC(sub_82D18364);
PPC_FUNC_IMPL(__imp__sub_82D18364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D18368"))) PPC_WEAK_FUNC(sub_82D18368);
PPC_FUNC_IMPL(__imp__sub_82D18368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fadds f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f1,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// bgt cr6,0x82d18398
	if (cr6.gt) goto loc_82D18398;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82d183b8
	if (!cr6.lt) goto loc_82D183B8;
loc_82D18398:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82d183a8
	if (cr6.gt) goto loc_82D183A8;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82d183b8
	if (!cr6.lt) goto loc_82D183B8;
loc_82D183A8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82D183B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f10,f9,f0,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// beq cr6,0x82d183f4
	if (cr6.eq) goto loc_82D183F4;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// b 0x82d18400
	goto loc_82D18400;
loc_82D183F4:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
loc_82D18400:
	// fadds f11,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fsubs f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f1,f13
	ctx.f1.f64 = double(float(sqrt(ctx.f13.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D18418"))) PPC_WEAK_FUNC(sub_82D18418);
PPC_FUNC_IMPL(__imp__sub_82D18418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D18420;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// beq cr6,0x82d184ac
	if (cr6.eq) goto loc_82D184AC;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82D1846C;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d184ac
	if (cr6.eq) goto loc_82D184AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D1848C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D184A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
loc_82D184AC:
	// fabs f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,21212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82d1855c
	if (cr6.gt) goto loc_82D1855C;
	// fabs f13,f29
	ctx.f13.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82d1855c
	if (cr6.gt) goto loc_82D1855C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// lfs f30,-8332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8332);
	ctx.f30.f64 = double(temp.f32);
	// bge cr6,0x82d1850c
	if (!cr6.lt) goto loc_82D1850C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x82d184f0
	if (!cr6.lt) goto loc_82D184F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-6656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6656);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82d185f8
	goto loc_82D185F8;
loc_82D184F0:
	// bne cr6,0x82d18500
	if (!cr6.eq) goto loc_82D18500;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-25156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82d185f8
	goto loc_82D185F8;
loc_82D18500:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-8380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8380);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82d185f8
	goto loc_82D185F8;
loc_82D1850C:
	// bne cr6,0x82d18530
	if (!cr6.eq) goto loc_82D18530;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x82d18524
	if (!cr6.lt) goto loc_82D18524;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,5068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5068);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82d185f8
	goto loc_82D185F8;
loc_82D18524:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,-23844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82d185f8
	goto loc_82D185F8;
loc_82D18530:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x82d18544
	if (!cr6.lt) goto loc_82D18544;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,11832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11832);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82d185f8
	goto loc_82D185F8;
loc_82D18544:
	// bne cr6,0x82d18550
	if (!cr6.eq) goto loc_82D18550;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82d185f8
	goto loc_82D185F8;
loc_82D18550:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f1,19176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82d185f8
	goto loc_82D185F8;
loc_82D1855C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f30,30444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30444);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x825c28d8
	ctx.lr = 0x82D18578;
	sub_825C28D8(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lfs f13,11412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11412);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82d1858c
	if (!cr6.lt) goto loc_82D1858C;
	// fsubs f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
loc_82D1858C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,19272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19272);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d185a4
	if (!cr6.gt) goto loc_82D185A4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82D185A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,32044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32044);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82d185cc
	if (!cr6.lt) goto loc_82D185CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d185d8
	goto loc_82D185D8;
loc_82D185CC:
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// ble cr6,0x82d185d8
	if (!cr6.gt) goto loc_82D185D8;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82D185D8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,21208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21208);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_82D185F8:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d18118
	ctx.lr = 0x82D1860C;
	sub_82D18118(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D18628"))) PPC_WEAK_FUNC(sub_82D18628);
PPC_FUNC_IMPL(__imp__sub_82D18628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d18674
	if (!cr6.eq) goto loc_82D18674;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d1866c
	if (!cr6.eq) goto loc_82D1866C;
loc_82D18658:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d18658
	if (cr6.eq) goto loc_82D18658;
loc_82D1866C:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D18674:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d186ac
	if (!cr6.eq) goto loc_82D186AC;
loc_82D18684:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d186ac
	if (!cr6.eq) goto loc_82D186AC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d18684
	if (cr6.eq) goto loc_82D18684;
loc_82D186AC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D186B4"))) PPC_WEAK_FUNC(sub_82D186B4);
PPC_FUNC_IMPL(__imp__sub_82D186B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D186B8"))) PPC_WEAK_FUNC(sub_82D186B8);
PPC_FUNC_IMPL(__imp__sub_82D186B8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d18734
	if (cr6.lt) goto loc_82D18734;
	// beq cr6,0x82d18710
	if (cr6.eq) goto loc_82D18710;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d18748
	if (!cr6.lt) goto loc_82D18748;
	// bl 0x82d12cc0
	ctx.lr = 0x82D186EC;
	sub_82D12CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d18748
	if (cr6.eq) goto loc_82D18748;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D18710:
	// bl 0x82d126b0
	ctx.lr = 0x82D18714;
	sub_82D126B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82d18748
	if (cr6.eq) goto loc_82D18748;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D18734:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12640
	ctx.lr = 0x82D1873C;
	sub_82D12640(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82d1874c
	if (!cr6.eq) goto loc_82D1874C;
loc_82D18748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D1874C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D18760"))) PPC_WEAK_FUNC(sub_82D18760);
PPC_FUNC_IMPL(__imp__sub_82D18760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d1877c
	if (cr6.eq) goto loc_82D1877C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D1877C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d187b8
	if (!cr6.eq) goto loc_82D187B8;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d187b0
	if (!cr6.eq) goto loc_82D187B0;
loc_82D1879C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d1879c
	if (cr6.eq) goto loc_82D1879C;
loc_82D187B0:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D187B8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d187f0
	if (!cr6.eq) goto loc_82D187F0;
loc_82D187C8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d187f0
	if (!cr6.eq) goto loc_82D187F0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d187c8
	if (cr6.eq) goto loc_82D187C8;
loc_82D187F0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D18808"))) PPC_WEAK_FUNC(sub_82D18808);
PPC_FUNC_IMPL(__imp__sub_82D18808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D18810;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x830ff290
	ctx.lr = 0x82D18830;
	sub_830FF290(ctx, base);
	// lwz r25,24(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x830ff290
	ctx.lr = 0x82D18838;
	sub_830FF290(ctx, base);
	// std r25,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r25.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f3,f11
	ctx.f3.f64 = double(ctx.f11.s64);
	// fcfid f2,f10
	ctx.f2.f64 = double(ctx.f10.s64);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// lfs f12,-4460(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4460);
	ctx.f12.f64 = double(temp.f32);
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// frsp f3,f2
	ctx.f3.f64 = double(float(ctx.f2.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r5,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// fmuls f2,f10,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f1,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fneg f0,f2
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fadds f10,f3,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// bgt cr6,0x82d18b98
	if (cr6.gt) goto loc_82D18B98;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d189a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D189A8;
	// bdzf 4*cr6+eq,0x82d18a50
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D18A50;
	// bne cr6,0x82d18af8
	if (!cr6.eq) goto loc_82D18AF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,22108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22108);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82d18944
	if (!cr6.lt) goto loc_82D18944;
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fcmpu cr6,f4,f6
	cr6.compare(ctx.f4.f64, ctx.f6.f64);
	// bge cr6,0x82d18944
	if (!cr6.lt) goto loc_82D18944;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// b 0x82d18978
	goto loc_82D18978;
loc_82D18944:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82d18978
	if (!cr6.lt) goto loc_82D18978;
	// lfs f13,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f5,f10
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82d18978
	if (!cr6.lt) goto loc_82D18978;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
loc_82D18978:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d18990
	if (!cr6.eq) goto loc_82D18990;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d18b98
	if (cr6.eq) goto loc_82D18B98;
loc_82D18990:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d182a8
	ctx.lr = 0x82D189A0;
	sub_82D182A8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D189A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,22108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22108);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x82d189ec
	if (!cr6.gt) goto loc_82D189EC;
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fsubs f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fcmpu cr6,f4,f5
	cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// ble cr6,0x82d189ec
	if (!cr6.gt) goto loc_82D189EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// b 0x82d18a20
	goto loc_82D18A20;
loc_82D189EC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82d18a20
	if (!cr6.gt) goto loc_82D18A20;
	// lfs f13,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f6,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x82d18a20
	if (!cr6.gt) goto loc_82D18A20;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
loc_82D18A20:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d18a38
	if (!cr6.eq) goto loc_82D18A38;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d18b98
	if (cr6.eq) goto loc_82D18B98;
loc_82D18A38:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d182a8
	ctx.lr = 0x82D18A48;
	sub_82D182A8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D18A50:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,22108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22108);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x82d18a94
	if (!cr6.lt) goto loc_82D18A94;
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fcmpu cr6,f5,f6
	cr6.compare(ctx.f5.f64, ctx.f6.f64);
	// bge cr6,0x82d18a94
	if (!cr6.lt) goto loc_82D18A94;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// b 0x82d18ac8
	goto loc_82D18AC8;
loc_82D18A94:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d18ac8
	if (!cr6.lt) goto loc_82D18AC8;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f7,f13
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82d18ac8
	if (!cr6.lt) goto loc_82D18AC8;
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f4,4(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
loc_82D18AC8:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d18ae0
	if (!cr6.eq) goto loc_82D18AE0;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d18b98
	if (cr6.eq) goto loc_82D18B98;
loc_82D18AE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d18368
	ctx.lr = 0x82D18AF0;
	sub_82D18368(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D18AF8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,22108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22108);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x82d18b3c
	if (!cr6.gt) goto loc_82D18B3C;
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fcmpu cr6,f5,f6
	cr6.compare(ctx.f5.f64, ctx.f6.f64);
	// ble cr6,0x82d18b3c
	if (!cr6.gt) goto loc_82D18B3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// b 0x82d18b70
	goto loc_82D18B70;
loc_82D18B3C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82d18b70
	if (!cr6.gt) goto loc_82D18B70;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x82d18b70
	if (!cr6.gt) goto loc_82D18B70;
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f4,4(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
loc_82D18B70:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d18b88
	if (!cr6.eq) goto loc_82D18B88;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d18b98
	if (cr6.eq) goto loc_82D18B98;
loc_82D18B88:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d18368
	ctx.lr = 0x82D18B98;
	sub_82D18368(ctx, base);
loc_82D18B98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D18BA0"))) PPC_WEAK_FUNC(sub_82D18BA0);
PPC_FUNC_IMPL(__imp__sub_82D18BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D18BA8;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x82d18808
	ctx.lr = 0x82D18C08;
	sub_82D18808(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f0,20056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82d18c20
	if (!cr6.eq) goto loc_82D18C20;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82D18C20:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// subfic r8,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r5,r9
	ctx.r30.u64 = ctx.r5.u64 & ctx.r9.u64;
	// bne cr6,0x82d18c60
	if (!cr6.eq) goto loc_82D18C60;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d18c60
	if (!cr6.eq) goto loc_82D18C60;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D18C60:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82d18c94
	if (!cr6.lt) goto loc_82D18C94;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82d18c7c
	if (cr6.eq) goto loc_82D18C7C;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x82d18c80
	if (!cr6.eq) goto loc_82D18C80;
loc_82D18C7C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D18C80:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d17fa0
	ctx.lr = 0x82D18C94;
	sub_82D17FA0(ctx, base);
loc_82D18C94:
	// stb r30,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r30.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D18CA8"))) PPC_WEAK_FUNC(sub_82D18CA8);
PPC_FUNC_IMPL(__imp__sub_82D18CA8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d18d80
	if (cr6.eq) goto loc_82D18D80;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82d18d80
	if (cr6.eq) goto loc_82D18D80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D18D08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,104(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D18D20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r5,88(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82D18D48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D18D80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D18D80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82D18D9C"))) PPC_WEAK_FUNC(sub_82D18D9C);
PPC_FUNC_IMPL(__imp__sub_82D18D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D18DA0"))) PPC_WEAK_FUNC(sub_82D18DA0);
PPC_FUNC_IMPL(__imp__sub_82D18DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// beq cr6,0x82d18dd4
	if (cr6.eq) goto loc_82D18DD4;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82d18de8
	if (cr6.gt) goto loc_82D18DE8;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82d18dec
	if (!cr6.gt) goto loc_82D18DEC;
	// b 0x82d18de8
	goto loc_82D18DE8;
loc_82D18DD4:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d18de8
	if (!cr6.lt) goto loc_82D18DE8;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82d18dec
	if (cr6.lt) goto loc_82D18DEC;
loc_82D18DE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D18DEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r10,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x82d18e38
	if (cr6.eq) goto loc_82D18E38;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82d18e4c
	if (cr6.gt) goto loc_82D18E4C;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82d18e50
	if (!cr6.gt) goto loc_82D18E50;
	// b 0x82d18e4c
	goto loc_82D18E4C;
loc_82D18E38:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d18e4c
	if (!cr6.lt) goto loc_82D18E4C;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82d18e50
	if (cr6.lt) goto loc_82D18E50;
loc_82D18E4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D18E50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// bne cr6,0x82d18e80
	if (!cr6.eq) goto loc_82D18E80;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D18E80:
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

__attribute__((alias("__imp__sub_82D18E90"))) PPC_WEAK_FUNC(sub_82D18E90);
PPC_FUNC_IMPL(__imp__sub_82D18E90) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82d18ec8
	if (!cr6.eq) goto loc_82D18EC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d18f18
	goto loc_82D18F18;
loc_82D18EC8:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d18ee4
	if (!cr6.gt) goto loc_82D18EE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82D18EE4;
	sub_831CC150(ctx, base);
loc_82D18EE4:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r30,r4,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D18F00;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82D18F18:
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

__attribute__((alias("__imp__sub_82D18F30"))) PPC_WEAK_FUNC(sub_82D18F30);
PPC_FUNC_IMPL(__imp__sub_82D18F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D18F38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d18f88
	if (!cr6.eq) goto loc_82D18F88;
loc_82D18F54:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82d59230
	ctx.lr = 0x82D18F60;
	sub_82D59230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d18f74
	if (cr6.eq) goto loc_82D18F74;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82d18f7c
	goto loc_82D18F7C;
loc_82D18F74:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D18F7C:
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d18f54
	if (cr6.eq) goto loc_82D18F54;
loc_82D18F88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D18F94"))) PPC_WEAK_FUNC(sub_82D18F94);
PPC_FUNC_IMPL(__imp__sub_82D18F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D18F98"))) PPC_WEAK_FUNC(sub_82D18F98);
PPC_FUNC_IMPL(__imp__sub_82D18F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D18FA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d19010
	if (cr6.eq) goto loc_82D19010;
loc_82D18FC0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D18FC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d18fc4
	if (!cr6.eq) goto loc_82D18FC4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D18FF4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d19010
	if (cr6.eq) goto loc_82D19010;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d18fc0
	if (!cr6.eq) goto loc_82D18FC0;
loc_82D19010:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D1901C"))) PPC_WEAK_FUNC(sub_82D1901C);
PPC_FUNC_IMPL(__imp__sub_82D1901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19020"))) PPC_WEAK_FUNC(sub_82D19020);
PPC_FUNC_IMPL(__imp__sub_82D19020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D19028;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d19068
	if (cr6.eq) goto loc_82D19068;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82D19040:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d19058
	if (cr6.eq) goto loc_82D19058;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,129
	ctx.r5.s64 = 129;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D19058;
	sub_831CE980(ctx, base);
loc_82D19058:
	// addi r31,r31,129
	ctx.r31.s64 = ctx.r31.s64 + 129;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82d19040
	if (!cr6.eq) goto loc_82D19040;
loc_82D19068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D19074"))) PPC_WEAK_FUNC(sub_82D19074);
PPC_FUNC_IMPL(__imp__sub_82D19074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19078"))) PPC_WEAK_FUNC(sub_82D19078);
PPC_FUNC_IMPL(__imp__sub_82D19078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D19080;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r10,r11,21216
	ctx.r10.s64 = ctx.r11.s64 + 21216;
	// addi r31,r3,516
	ctx.r31.s64 = ctx.r3.s64 + 516;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D190A4:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d190c4
	if (cr6.lt) goto loc_82D190C4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D190C4;
	sub_825952B8(ctx, base);
loc_82D190C4:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bge 0x82d190a4
	if (!cr0.lt) goto loc_82D190A4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D190E0"))) PPC_WEAK_FUNC(sub_82D190E0);
PPC_FUNC_IMPL(__imp__sub_82D190E0) {
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
	// bl 0x82d19078
	ctx.lr = 0x82D19100;
	sub_82D19078(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d19118
	if (cr6.eq) goto loc_82D19118;
	// bl 0x82416268
	ctx.lr = 0x82D19114;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D19118:
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

__attribute__((alias("__imp__sub_82D19130"))) PPC_WEAK_FUNC(sub_82D19130);
PPC_FUNC_IMPL(__imp__sub_82D19130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D19138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,104(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d191a4
	if (cr6.eq) goto loc_82D191A4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D19158:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d19190
	if (cr6.eq) goto loc_82D19190;
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d19188
	if (cr6.eq) goto loc_82D19188;
	// bl 0x82d49a78
	ctx.lr = 0x82D19174;
	sub_82D49A78(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r29,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r29.u32);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r29,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r29.u32);
	// b 0x82d1918c
	goto loc_82D1918C;
loc_82D19188:
	// bl 0x82d49b58
	ctx.lr = 0x82D1918C;
	sub_82D49B58(ctx, base);
loc_82D1918C:
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_82D19190:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d19158
	if (!cr6.eq) goto loc_82D19158;
loc_82D191A4:
	// lwz r31,88(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d191dc
	if (cr6.eq) goto loc_82D191DC;
loc_82D191B4:
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d191c8
	if (cr6.eq) goto loc_82D191C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d12668
	ctx.lr = 0x82D191C8;
	sub_82D12668(ctx, base);
loc_82D191C8:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r31,r31,129
	ctx.r31.s64 = ctx.r31.s64 + 129;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d191b4
	if (!cr6.eq) goto loc_82D191B4;
loc_82D191DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D191E4"))) PPC_WEAK_FUNC(sub_82D191E4);
PPC_FUNC_IMPL(__imp__sub_82D191E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D191E8"))) PPC_WEAK_FUNC(sub_82D191E8);
PPC_FUNC_IMPL(__imp__sub_82D191E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D191F8"))) PPC_WEAK_FUNC(sub_82D191F8);
PPC_FUNC_IMPL(__imp__sub_82D191F8) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82927030
	ctx.lr = 0x82D19214;
	sub_82927030(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x838257c0
	ctx.lr = 0x82D1921C;
	sub_838257C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D1922C"))) PPC_WEAK_FUNC(sub_82D1922C);
PPC_FUNC_IMPL(__imp__sub_82D1922C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19230"))) PPC_WEAK_FUNC(sub_82D19230);
PPC_FUNC_IMPL(__imp__sub_82D19230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D1923C"))) PPC_WEAK_FUNC(sub_82D1923C);
PPC_FUNC_IMPL(__imp__sub_82D1923C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19240"))) PPC_WEAK_FUNC(sub_82D19240);
PPC_FUNC_IMPL(__imp__sub_82D19240) {
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
	// bl 0x82d34e50
	ctx.lr = 0x82D1925C;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82D19260;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d19274
	if (!cr6.eq) goto loc_82D19274;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d192d4
	goto loc_82D192D4;
loc_82D19274:
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 + 88;
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,92(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82d192d4
	if (cr6.eq) goto loc_82D192D4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d192d4
	if (cr6.eq) goto loc_82D192D4;
loc_82D192A0:
	// lbz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// beq cr6,0x82d192c0
	if (cr6.eq) goto loc_82D192C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d186b8
	ctx.lr = 0x82D192B8;
	sub_82D186B8(ctx, base);
	// stb r3,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D192C0:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r31,r31,129
	ctx.r31.s64 = ctx.r31.s64 + 129;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d192a0
	if (!cr6.eq) goto loc_82D192A0;
loc_82D192D4:
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

__attribute__((alias("__imp__sub_82D192EC"))) PPC_WEAK_FUNC(sub_82D192EC);
PPC_FUNC_IMPL(__imp__sub_82D192EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D192F0"))) PPC_WEAK_FUNC(sub_82D192F0);
PPC_FUNC_IMPL(__imp__sub_82D192F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,6
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 6;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// blt cr6,0x82d19318
	if (cr6.lt) goto loc_82D19318;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D19318:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82d1933c
	if (cr6.gt) goto loc_82D1933C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82D1933C:
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D1934C"))) PPC_WEAK_FUNC(sub_82D1934C);
PPC_FUNC_IMPL(__imp__sub_82D1934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19350"))) PPC_WEAK_FUNC(sub_82D19350);
PPC_FUNC_IMPL(__imp__sub_82D19350) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d193c0
	if (cr6.eq) goto loc_82D193C0;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d193c0
	if (cr6.eq) goto loc_82D193C0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83815a48
	ctx.lr = 0x82D19384;
	sub_83815A48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d193c0
	if (cr6.eq) goto loc_82D193C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D193A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4b8e0
	ctx.lr = 0x82D193B0;
	sub_82D4B8E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d193c8
	if (!cr6.eq) goto loc_82D193C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83815558
	ctx.lr = 0x82D193C0;
	sub_83815558(ctx, base);
loc_82D193C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d193d0
	goto loc_82D193D0;
loc_82D193C8:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r31,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r31.u32);
loc_82D193D0:
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

__attribute__((alias("__imp__sub_82D193E8"))) PPC_WEAK_FUNC(sub_82D193E8);
PPC_FUNC_IMPL(__imp__sub_82D193E8) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d194e8
	if (cr6.eq) goto loc_82D194E8;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82d273d8
	ctx.lr = 0x82D19418;
	sub_82D273D8(ctx, base);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x82d27860
	ctx.lr = 0x82D19424;
	sub_82D27860(ctx, base);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d1944c
	if (!cr6.eq) goto loc_82D1944C;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// ble cr6,0x82d19440
	if (!cr6.gt) goto loc_82D19440;
	// li r3,10
	ctx.r3.s64 = 10;
loc_82D19440:
	// mulli r11,r3,3043
	ctx.r11.s64 = ctx.r3.s64 * 3043;
	// addi r11,r11,30688
	ctx.r11.s64 = ctx.r11.s64 + 30688;
	// b 0x82d194cc
	goto loc_82D194CC;
loc_82D1944C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82d1945c
	if (!cr6.eq) goto loc_82D1945C;
	// li r4,-4416
	ctx.r4.s64 = -4416;
	// b 0x82d194e0
	goto loc_82D194E0;
loc_82D1945C:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82d1946c
	if (!cr6.eq) goto loc_82D1946C;
	// li r4,-4160
	ctx.r4.s64 = -4160;
	// b 0x82d194e0
	goto loc_82D194E0;
loc_82D1946C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82d1949c
	if (!cr6.eq) goto loc_82D1949C;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-4352
	ctx.r11.s64 = ctx.r11.s64 + -4352;
	// cmplwi cr6,r11,61312
	cr6.compare<uint32_t>(ctx.r11.u32, 61312, xer);
	// ble cr6,0x82d194dc
	if (!cr6.gt) goto loc_82D194DC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,61312
	ctx.r11.u64 = ctx.r11.u64 | 61312;
	// b 0x82d194dc
	goto loc_82D194DC;
loc_82D1949C:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x82d194e8
	if (cr6.lt) goto loc_82D194E8;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// ble cr6,0x82d194b0
	if (!cr6.gt) goto loc_82D194B0;
	// li r3,10
	ctx.r3.s64 = 10;
loc_82D194B0:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// mulli r10,r3,102
	ctx.r10.s64 = ctx.r3.s64 * 102;
	// rlwinm r8,r11,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 65536;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
loc_82D194CC:
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// ble cr6,0x82d194dc
	if (!cr6.gt) goto loc_82D194DC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_82D194DC:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
loc_82D194E0:
	// lwz r3,124(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// bl 0x83545640
	ctx.lr = 0x82D194E8;
	sub_83545640(ctx, base);
loc_82D194E8:
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

__attribute__((alias("__imp__sub_82D19500"))) PPC_WEAK_FUNC(sub_82D19500);
PPC_FUNC_IMPL(__imp__sub_82D19500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D19508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d19560
	if (cr6.eq) goto loc_82D19560;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82d33c10
	ctx.lr = 0x82D19528;
	sub_82D33C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d19560
	if (cr6.eq) goto loc_82D19560;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D19538:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x82d33db0
	ctx.lr = 0x82D19548;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d19554
	if (cr6.eq) goto loc_82D19554;
	// bl 0x83572958
	ctx.lr = 0x82D19554;
	sub_83572958(ctx, base);
loc_82D19554:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82d19538
	if (cr6.lt) goto loc_82D19538;
loc_82D19560:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D19568"))) PPC_WEAK_FUNC(sub_82D19568);
PPC_FUNC_IMPL(__imp__sub_82D19568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D19570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r10,104
	ctx.r11.s64 = ctx.r10.s64 + 104;
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r8,108(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82d195d0
	if (cr6.eq) goto loc_82D195D0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d195d0
	if (cr6.eq) goto loc_82D195D0;
loc_82D195A4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d195bc
	if (cr6.eq) goto loc_82D195BC;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82D195BC;
	sub_82D2AEC8(ctx, base);
loc_82D195BC:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d195a4
	if (!cr6.eq) goto loc_82D195A4;
loc_82D195D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D195D8"))) PPC_WEAK_FUNC(sub_82D195D8);
PPC_FUNC_IMPL(__imp__sub_82D195D8) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d1961c
	if (cr6.eq) goto loc_82D1961C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r4,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r4.u32);
	// lwz r30,88(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// bl 0x82d273d8
	ctx.lr = 0x82D19610;
	sub_82D273D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x82d27eb8
	ctx.lr = 0x82D1961C;
	sub_82D27EB8(ctx, base);
loc_82D1961C:
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

__attribute__((alias("__imp__sub_82D19634"))) PPC_WEAK_FUNC(sub_82D19634);
PPC_FUNC_IMPL(__imp__sub_82D19634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19638"))) PPC_WEAK_FUNC(sub_82D19638);
PPC_FUNC_IMPL(__imp__sub_82D19638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r3,220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19644"))) PPC_WEAK_FUNC(sub_82D19644);
PPC_FUNC_IMPL(__imp__sub_82D19644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19648"))) PPC_WEAK_FUNC(sub_82D19648);
PPC_FUNC_IMPL(__imp__sub_82D19648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r4,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r4.u8);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r10,84(r9)
	PPC_STORE_U8(ctx.r9.u32 + 84, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19660"))) PPC_WEAK_FUNC(sub_82D19660);
PPC_FUNC_IMPL(__imp__sub_82D19660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r4,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r4.u8);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r10,84(r9)
	PPC_STORE_U8(ctx.r9.u32 + 84, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19678"))) PPC_WEAK_FUNC(sub_82D19678);
PPC_FUNC_IMPL(__imp__sub_82D19678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r4,70(r11)
	PPC_STORE_U8(ctx.r11.u32 + 70, ctx.r4.u8);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r10,84(r9)
	PPC_STORE_U8(ctx.r9.u32 + 84, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19690"))) PPC_WEAK_FUNC(sub_82D19690);
PPC_FUNC_IMPL(__imp__sub_82D19690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f1,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stfs f2,76(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 76, temp.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r10,84(r8)
	PPC_STORE_U8(ctx.r8.u32 + 84, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D196B0"))) PPC_WEAK_FUNC(sub_82D196B0);
PPC_FUNC_IMPL(__imp__sub_82D196B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f3,-8(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stfs f4,-4(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// stfs f1,52(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// std r10,60(r11)
	PPC_STORE_U64(ctx.r11.u32 + 60, ctx.r10.u64);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f2,56(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r8,84(r9)
	PPC_STORE_U8(ctx.r9.u32 + 84, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D196DC"))) PPC_WEAK_FUNC(sub_82D196DC);
PPC_FUNC_IMPL(__imp__sub_82D196DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D196E0"))) PPC_WEAK_FUNC(sub_82D196E0);
PPC_FUNC_IMPL(__imp__sub_82D196E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r4.u32);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r10,84(r9)
	PPC_STORE_U8(ctx.r9.u32 + 84, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D196F8"))) PPC_WEAK_FUNC(sub_82D196F8);
PPC_FUNC_IMPL(__imp__sub_82D196F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r4,71(r11)
	PPC_STORE_U8(ctx.r11.u32 + 71, ctx.r4.u8);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r10,84(r9)
	PPC_STORE_U8(ctx.r9.u32 + 84, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19710"))) PPC_WEAK_FUNC(sub_82D19710);
PPC_FUNC_IMPL(__imp__sub_82D19710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r4,1009(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1009, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D1971C"))) PPC_WEAK_FUNC(sub_82D1971C);
PPC_FUNC_IMPL(__imp__sub_82D1971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19720"))) PPC_WEAK_FUNC(sub_82D19720);
PPC_FUNC_IMPL(__imp__sub_82D19720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r4,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D1972C"))) PPC_WEAK_FUNC(sub_82D1972C);
PPC_FUNC_IMPL(__imp__sub_82D1972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19730"))) PPC_WEAK_FUNC(sub_82D19730);
PPC_FUNC_IMPL(__imp__sub_82D19730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r4,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D1973C"))) PPC_WEAK_FUNC(sub_82D1973C);
PPC_FUNC_IMPL(__imp__sub_82D1973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19740"))) PPC_WEAK_FUNC(sub_82D19740);
PPC_FUNC_IMPL(__imp__sub_82D19740) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r4,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D1974C"))) PPC_WEAK_FUNC(sub_82D1974C);
PPC_FUNC_IMPL(__imp__sub_82D1974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19750"))) PPC_WEAK_FUNC(sub_82D19750);
PPC_FUNC_IMPL(__imp__sub_82D19750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r4,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D1975C"))) PPC_WEAK_FUNC(sub_82D1975C);
PPC_FUNC_IMPL(__imp__sub_82D1975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19760"))) PPC_WEAK_FUNC(sub_82D19760);
PPC_FUNC_IMPL(__imp__sub_82D19760) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82d1977c
	if (!cr6.lt) goto loc_82D1977C;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// blr 
	return;
loc_82D1977C:
	// stfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19784"))) PPC_WEAK_FUNC(sub_82D19784);
PPC_FUNC_IMPL(__imp__sub_82D19784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19788"))) PPC_WEAK_FUNC(sub_82D19788);
PPC_FUNC_IMPL(__imp__sub_82D19788) {
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
	// addi r11,r4,57
	ctx.r11.s64 = ctx.r4.s64 + 57;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// beq cr6,0x82d1981c
	if (cr6.eq) goto loc_82D1981C;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mulli r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 * 28;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d1981c
	if (!cr6.eq) goto loc_82D1981C;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x82d197fc
	if (cr6.lt) goto loc_82D197FC;
	// beq cr6,0x82d197ec
	if (cr6.eq) goto loc_82D197EC;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bne cr6,0x82d1981c
	if (!cr6.eq) goto loc_82D1981C;
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// ori r5,r5,48
	ctx.r5.u64 = ctx.r5.u64 | 48;
	// b 0x82d19808
	goto loc_82D19808;
loc_82D197EC:
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// b 0x82d19808
	goto loc_82D19808;
loc_82D197FC:
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,35
	ctx.r5.u64 = ctx.r5.u64 | 35;
loc_82D19808:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D1981C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D1981C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r10.u8);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D1983C"))) PPC_WEAK_FUNC(sub_82D1983C);
PPC_FUNC_IMPL(__imp__sub_82D1983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19840"))) PPC_WEAK_FUNC(sub_82D19840);
PPC_FUNC_IMPL(__imp__sub_82D19840) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,57
	ctx.r11.s64 = ctx.r4.s64 + 57;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19854"))) PPC_WEAK_FUNC(sub_82D19854);
PPC_FUNC_IMPL(__imp__sub_82D19854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19858"))) PPC_WEAK_FUNC(sub_82D19858);
PPC_FUNC_IMPL(__imp__sub_82D19858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r4,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19864"))) PPC_WEAK_FUNC(sub_82D19864);
PPC_FUNC_IMPL(__imp__sub_82D19864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19868"))) PPC_WEAK_FUNC(sub_82D19868);
PPC_FUNC_IMPL(__imp__sub_82D19868) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r3,216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19874"))) PPC_WEAK_FUNC(sub_82D19874);
PPC_FUNC_IMPL(__imp__sub_82D19874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19878"))) PPC_WEAK_FUNC(sub_82D19878);
PPC_FUNC_IMPL(__imp__sub_82D19878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mulli r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 * 28;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d19898
	if (!cr6.eq) goto loc_82D19898;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D19898:
	// mulli r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d198b4
	if (cr6.lt) goto loc_82D198B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D198B4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D198BC"))) PPC_WEAK_FUNC(sub_82D198BC);
PPC_FUNC_IMPL(__imp__sub_82D198BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D198C0"))) PPC_WEAK_FUNC(sub_82D198C0);
PPC_FUNC_IMPL(__imp__sub_82D198C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lbz r3,740(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 740);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D198CC"))) PPC_WEAK_FUNC(sub_82D198CC);
PPC_FUNC_IMPL(__imp__sub_82D198CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D198D0"))) PPC_WEAK_FUNC(sub_82D198D0);
PPC_FUNC_IMPL(__imp__sub_82D198D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r4,740(r11)
	PPC_STORE_U8(ctx.r11.u32 + 740, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D198DC"))) PPC_WEAK_FUNC(sub_82D198DC);
PPC_FUNC_IMPL(__imp__sub_82D198DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D198E0"))) PPC_WEAK_FUNC(sub_82D198E0);
PPC_FUNC_IMPL(__imp__sub_82D198E0) {
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
	// addi r11,r4,57
	ctx.r11.s64 = ctx.r4.s64 + 57;
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,292
	ctx.r3.s64 = ctx.r11.s64 + 292;
	// bl 0x8246e3e8
	ctx.lr = 0x82D19924;
	sub_8246E3E8(ctx, base);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,192(r5)
	PPC_STORE_U8(ctx.r5.u32 + 192, ctx.r6.u8);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82D19944"))) PPC_WEAK_FUNC(sub_82D19944);
PPC_FUNC_IMPL(__imp__sub_82D19944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19948"))) PPC_WEAK_FUNC(sub_82D19948);
PPC_FUNC_IMPL(__imp__sub_82D19948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D19950;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,228
	ctx.r31.s64 = 228;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82D1996C:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r26,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r26.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,292
	ctx.r3.s64 = ctx.r11.s64 + 292;
	// bl 0x8246e3e8
	ctx.lr = 0x82D1998C;
	sub_8246E3E8(ctx, base);
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmplwi cr6,r31,292
	cr6.compare<uint32_t>(ctx.r31.u32, 292, xer);
	// stb r28,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r28.u8);
	// blt cr6,0x82d1996c
	if (cr6.lt) goto loc_82D1996C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D199AC"))) PPC_WEAK_FUNC(sub_82D199AC);
PPC_FUNC_IMPL(__imp__sub_82D199AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D199B0"))) PPC_WEAK_FUNC(sub_82D199B0);
PPC_FUNC_IMPL(__imp__sub_82D199B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D199BC"))) PPC_WEAK_FUNC(sub_82D199BC);
PPC_FUNC_IMPL(__imp__sub_82D199BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D199C0"))) PPC_WEAK_FUNC(sub_82D199C0);
PPC_FUNC_IMPL(__imp__sub_82D199C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D199CC"))) PPC_WEAK_FUNC(sub_82D199CC);
PPC_FUNC_IMPL(__imp__sub_82D199CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D199D0"))) PPC_WEAK_FUNC(sub_82D199D0);
PPC_FUNC_IMPL(__imp__sub_82D199D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stb r4,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D199DC"))) PPC_WEAK_FUNC(sub_82D199DC);
PPC_FUNC_IMPL(__imp__sub_82D199DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D199E0"))) PPC_WEAK_FUNC(sub_82D199E0);
PPC_FUNC_IMPL(__imp__sub_82D199E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lbz r3,38(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D199EC"))) PPC_WEAK_FUNC(sub_82D199EC);
PPC_FUNC_IMPL(__imp__sub_82D199EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D199F0"))) PPC_WEAK_FUNC(sub_82D199F0);
PPC_FUNC_IMPL(__imp__sub_82D199F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lbz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D199FC"))) PPC_WEAK_FUNC(sub_82D199FC);
PPC_FUNC_IMPL(__imp__sub_82D199FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19A00"))) PPC_WEAK_FUNC(sub_82D19A00);
PPC_FUNC_IMPL(__imp__sub_82D19A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// rlwinm r3,r10,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19A10"))) PPC_WEAK_FUNC(sub_82D19A10);
PPC_FUNC_IMPL(__imp__sub_82D19A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19A1C"))) PPC_WEAK_FUNC(sub_82D19A1C);
PPC_FUNC_IMPL(__imp__sub_82D19A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19A20"))) PPC_WEAK_FUNC(sub_82D19A20);
PPC_FUNC_IMPL(__imp__sub_82D19A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19A30"))) PPC_WEAK_FUNC(sub_82D19A30);
PPC_FUNC_IMPL(__imp__sub_82D19A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x8337f1e0
	sub_8337F1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D19A54"))) PPC_WEAK_FUNC(sub_82D19A54);
PPC_FUNC_IMPL(__imp__sub_82D19A54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19A58"))) PPC_WEAK_FUNC(sub_82D19A58);
PPC_FUNC_IMPL(__imp__sub_82D19A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19A64"))) PPC_WEAK_FUNC(sub_82D19A64);
PPC_FUNC_IMPL(__imp__sub_82D19A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19A68"))) PPC_WEAK_FUNC(sub_82D19A68);
PPC_FUNC_IMPL(__imp__sub_82D19A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D19A74"))) PPC_WEAK_FUNC(sub_82D19A74);
PPC_FUNC_IMPL(__imp__sub_82D19A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D19A78"))) PPC_WEAK_FUNC(sub_82D19A78);
PPC_FUNC_IMPL(__imp__sub_82D19A78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// blr 
	return;
}

