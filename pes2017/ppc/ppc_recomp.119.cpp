#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AA6F70"))) PPC_WEAK_FUNC(sub_82AA6F70);
PPC_FUNC_IMPL(__imp__sub_82AA6F70) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21080
	ctx.r9.s64 = ctx.r11.s64 + -21080;
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
	// bl 0x82be10c0
	ctx.lr = 0x82AA6FA8;
	sub_82BE10C0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aa6fc0
	if (cr6.eq) goto loc_82AA6FC0;
	// bl 0x82416268
	ctx.lr = 0x82AA6FBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AA6FC0:
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

__attribute__((alias("__imp__sub_82AA6FD8"))) PPC_WEAK_FUNC(sub_82AA6FD8);
PPC_FUNC_IMPL(__imp__sub_82AA6FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AA6FE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82AA6FEC;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7028
	if (cr6.eq) goto loc_82AA7028;
	// bl 0x83763ef8
	ctx.lr = 0x82AA6FF8;
	sub_83763EF8(ctx, base);
	// ld r29,160(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// addi r30,r31,132
	ctx.r30.s64 = ctx.r31.s64 + 132;
	// bl 0x83763ef8
	ctx.lr = 0x82AA7004;
	sub_83763EF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83777e50
	ctx.lr = 0x82AA7010;
	sub_83777E50(ctx, base);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// li r5,126
	ctx.r5.s64 = 126;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x82AA7020;
	sub_82A76558(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82AA7028:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA7034"))) PPC_WEAK_FUNC(sub_82AA7034);
PPC_FUNC_IMPL(__imp__sub_82AA7034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7038"))) PPC_WEAK_FUNC(sub_82AA7038);
PPC_FUNC_IMPL(__imp__sub_82AA7038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r3,132
	ctx.r31.s64 = ctx.r3.s64 + 132;
	// li r4,126
	ctx.r4.s64 = 126;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8b528
	ctx.lr = 0x82AA705C;
	sub_82A8B528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,126
	ctx.r4.s64 = 126;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a90728
	ctx.lr = 0x82AA706C;
	sub_82A90728(ctx, base);
	// subf. r3,r3,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82aa7078
	if (!cr0.eq) goto loc_82AA7078;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82AA7078:
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

__attribute__((alias("__imp__sub_82AA7090"))) PPC_WEAK_FUNC(sub_82AA7090);
PPC_FUNC_IMPL(__imp__sub_82AA7090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AA7098;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82bda618
	ctx.lr = 0x82AA70A8;
	sub_82BDA618(ctx, base);
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-22728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa7200
	if (cr6.eq) goto loc_82AA7200;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7200
	if (cr6.eq) goto loc_82AA7200;
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82aa71c0
	if (!cr6.eq) goto loc_82AA71C0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r29,r30,132
	ctx.r29.s64 = ctx.r30.s64 + 132;
	// li r5,126
	ctx.r5.s64 = 126;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a76558
	ctx.lr = 0x82AA70E8;
	sub_82A76558(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82aa71b4
	if (cr6.eq) goto loc_82AA71B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x82aa71b4
	if (cr6.eq) goto loc_82AA71B4;
	// li r5,126
	ctx.r5.s64 = 126;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a10c0
	ctx.lr = 0x82AA7110;
	sub_825A10C0(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82AA7114;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa712c
	if (cr6.eq) goto loc_82AA712C;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83777d88
	ctx.lr = 0x82AA712C;
	sub_83777D88(ctx, base);
loc_82AA712C:
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82AA713C;
	sub_831CE980(ctx, base);
	// stw r28,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r28.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,-21220
	ctx.r29.s64 = ctx.r11.s64 + -21220;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r29,-52
	ctx.r5.s64 = ctx.r29.s64 + -52;
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
	// lwzx r4,r9,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// bl 0x82bd9e08
	ctx.lr = 0x82AA7170;
	sub_82BD9E08(ctx, base);
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82bdbb88
	ctx.lr = 0x82AA718C;
	sub_82BDBB88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9f18
	ctx.lr = 0x82AA7198;
	sub_82BD9F18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82AA71A4;
	sub_82BD9DB8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AA71B4:
	// lbz r11,129(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 129);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// b 0x82aa71f0
	goto loc_82AA71F0;
loc_82AA71C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a780d0
	ctx.lr = 0x82AA71C8;
	sub_82A780D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa7200
	if (cr6.eq) goto loc_82AA7200;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82AA71E0;
	sub_82BD9DB8(ctx, base);
	// lbz r10,129(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 129);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r11.u8);
loc_82AA71F0:
	// beq cr6,0x82aa7200
	if (cr6.eq) goto loc_82AA7200;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19858
	ctx.lr = 0x82AA7200;
	sub_82D19858(ctx, base);
loc_82AA7200:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA7208"))) PPC_WEAK_FUNC(sub_82AA7208);
PPC_FUNC_IMPL(__imp__sub_82AA7208) {
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
	// bl 0x82be1460
	ctx.lr = 0x82AA7220;
	sub_82BE1460(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-21080
	ctx.r8.s64 = ctx.r10.s64 + -21080;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r6,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r6.u8);
	// stb r11,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r11.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82AA7260;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_82AA7278"))) PPC_WEAK_FUNC(sub_82AA7278);
PPC_FUNC_IMPL(__imp__sub_82AA7278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,124(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// b 0x82aa7090
	sub_82AA7090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA728C"))) PPC_WEAK_FUNC(sub_82AA728C);
PPC_FUNC_IMPL(__imp__sub_82AA728C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7290"))) PPC_WEAK_FUNC(sub_82AA7290);
PPC_FUNC_IMPL(__imp__sub_82AA7290) {
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
	// bl 0x82be0df0
	ctx.lr = 0x82AA72A8;
	sub_82BE0DF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82aa72c4
	if (cr6.lt) goto loc_82AA72C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// bl 0x82aa7090
	ctx.lr = 0x82AA72C4;
	sub_82AA7090(ctx, base);
loc_82AA72C4:
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

__attribute__((alias("__imp__sub_82AA72D8"))) PPC_WEAK_FUNC(sub_82AA72D8);
PPC_FUNC_IMPL(__imp__sub_82AA72D8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,120(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 129, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r10.u8);
	// bl 0x82aa7090
	ctx.lr = 0x82AA7304;
	sub_82AA7090(ctx, base);
	// lis r9,-31760
	ctx.r9.s64 = -2081423360;
	// lwz r3,-22728(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7320
	if (cr6.eq) goto loc_82AA7320;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82bf7300
	ctx.lr = 0x82AA7320;
	sub_82BF7300(ctx, base);
loc_82AA7320:
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

__attribute__((alias("__imp__sub_82AA7334"))) PPC_WEAK_FUNC(sub_82AA7334);
PPC_FUNC_IMPL(__imp__sub_82AA7334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7338"))) PPC_WEAK_FUNC(sub_82AA7338);
PPC_FUNC_IMPL(__imp__sub_82AA7338) {
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
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aa7360
	if (cr6.lt) goto loc_82AA7360;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82aa7364
	goto loc_82AA7364;
loc_82AA7360:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AA7364:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AA7380;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7398
	if (cr6.eq) goto loc_82AA7398;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aa7208
	ctx.lr = 0x82AA7394;
	sub_82AA7208(ctx, base);
	// b 0x82aa739c
	goto loc_82AA739C;
loc_82AA7398:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA739C:
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

__attribute__((alias("__imp__sub_82AA73B4"))) PPC_WEAK_FUNC(sub_82AA73B4);
PPC_FUNC_IMPL(__imp__sub_82AA73B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA73B8"))) PPC_WEAK_FUNC(sub_82AA73B8);
PPC_FUNC_IMPL(__imp__sub_82AA73B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20392
	ctx.r9.s64 = ctx.r11.s64 + -20392;
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
	// bl 0x82be0430
	ctx.lr = 0x82AA73F0;
	sub_82BE0430(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aa7408
	if (cr6.eq) goto loc_82AA7408;
	// bl 0x82416268
	ctx.lr = 0x82AA7404;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AA7408:
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

__attribute__((alias("__imp__sub_82AA7420"))) PPC_WEAK_FUNC(sub_82AA7420);
PPC_FUNC_IMPL(__imp__sub_82AA7420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AA7428;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82AA7434;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa749c
	if (cr6.eq) goto loc_82AA749C;
	// bl 0x83763ef8
	ctx.lr = 0x82AA7440;
	sub_83763EF8(ctx, base);
	// ld r29,160(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// addi r31,r30,108
	ctx.r31.s64 = ctx.r30.s64 + 108;
	// bl 0x83763ef8
	ctx.lr = 0x82AA744C;
	sub_83763EF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83777e50
	ctx.lr = 0x82AA7458;
	sub_83777E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// bl 0x82a76558
	ctx.lr = 0x82AA7468;
	sub_82A76558(ctx, base);
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
	ctx.lr = 0x82AA7480;
	sub_82BEE188(ctx, base);
	// li r5,25
	ctx.r5.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83740288
	ctx.lr = 0x82AA7490;
	sub_83740288(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be0600
	ctx.lr = 0x82AA749C;
	sub_82BE0600(ctx, base);
loc_82AA749C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA74A8"))) PPC_WEAK_FUNC(sub_82AA74A8);
PPC_FUNC_IMPL(__imp__sub_82AA74A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AA74B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,108
	ctx.r31.s64 = ctx.r3.s64 + 108;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x82AA74D4;
	sub_82A76558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa7500
	if (cr6.eq) goto loc_82AA7500;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x82aa7500
	if (cr6.eq) goto loc_82AA7500;
	// li r5,25
	ctx.r5.s64 = 25;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x82AA74FC;
	sub_825A10C0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82AA7500:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa7550
	if (cr6.eq) goto loc_82AA7550;
	// bl 0x83763ef8
	ctx.lr = 0x82AA7510;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7528
	if (cr6.eq) goto loc_82AA7528;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83777d88
	ctx.lr = 0x82AA7528;
	sub_83777D88(ctx, base);
loc_82AA7528:
	// bl 0x82bda618
	ctx.lr = 0x82AA752C;
	sub_82BDA618(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7550
	if (cr6.eq) goto loc_82AA7550;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82AA7548;
	sub_831CE980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdb278
	ctx.lr = 0x82AA7550;
	sub_82BDB278(ctx, base);
loc_82AA7550:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA7558"))) PPC_WEAK_FUNC(sub_82AA7558);
PPC_FUNC_IMPL(__imp__sub_82AA7558) {
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
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82be02f8
	ctx.lr = 0x82AA7578;
	sub_82BE02F8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// addi r9,r11,-20392
	ctx.r9.s64 = ctx.r11.s64 + -20392;
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
	ctx.lr = 0x82AA75A4;
	sub_831CDCF0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82AA75BC;
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

__attribute__((alias("__imp__sub_82AA75D8"))) PPC_WEAK_FUNC(sub_82AA75D8);
PPC_FUNC_IMPL(__imp__sub_82AA75D8) {
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
	// bl 0x82be05e8
	ctx.lr = 0x82AA75F4;
	sub_82BE05E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be0618
	ctx.lr = 0x82AA7600;
	sub_82BE0618(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82aa760c
	if (!cr6.eq) goto loc_82AA760C;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
loc_82AA760C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa74a8
	ctx.lr = 0x82AA7618;
	sub_82AA74A8(ctx, base);
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

__attribute__((alias("__imp__sub_82AA7630"))) PPC_WEAK_FUNC(sub_82AA7630);
PPC_FUNC_IMPL(__imp__sub_82AA7630) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,180(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// b 0x82aa74a8
	sub_82AA74A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA7638"))) PPC_WEAK_FUNC(sub_82AA7638);
PPC_FUNC_IMPL(__imp__sub_82AA7638) {
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
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aa7660
	if (cr6.lt) goto loc_82AA7660;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82aa7664
	goto loc_82AA7664;
loc_82AA7660:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AA7664:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,184
	ctx.r4.s64 = 184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AA7680;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7698
	if (cr6.eq) goto loc_82AA7698;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aa7558
	ctx.lr = 0x82AA7694;
	sub_82AA7558(ctx, base);
	// b 0x82aa769c
	goto loc_82AA769C;
loc_82AA7698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA769C:
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

__attribute__((alias("__imp__sub_82AA76B4"))) PPC_WEAK_FUNC(sub_82AA76B4);
PPC_FUNC_IMPL(__imp__sub_82AA76B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA76B8"))) PPC_WEAK_FUNC(sub_82AA76B8);
PPC_FUNC_IMPL(__imp__sub_82AA76B8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,367
	ctx.r3.u64 = ctx.r3.u64 | 367;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA76C4"))) PPC_WEAK_FUNC(sub_82AA76C4);
PPC_FUNC_IMPL(__imp__sub_82AA76C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA76C8"))) PPC_WEAK_FUNC(sub_82AA76C8);
PPC_FUNC_IMPL(__imp__sub_82AA76C8) {
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
	// bl 0x82be0df0
	ctx.lr = 0x82AA76E0;
	sub_82BE0DF0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82aa7708
	if (cr6.eq) goto loc_82AA7708;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19858
	ctx.lr = 0x82AA76F4;
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
loc_82AA7708:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19816
	ctx.r5.s64 = ctx.r11.s64 + -19816;
	// bl 0x82d20da8
	ctx.lr = 0x82AA7718;
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

__attribute__((alias("__imp__sub_82AA772C"))) PPC_WEAK_FUNC(sub_82AA772C);
PPC_FUNC_IMPL(__imp__sub_82AA772C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7730"))) PPC_WEAK_FUNC(sub_82AA7730);
PPC_FUNC_IMPL(__imp__sub_82AA7730) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19720
	ctx.r9.s64 = ctx.r11.s64 + -19720;
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
	// bl 0x82be10c0
	ctx.lr = 0x82AA7768;
	sub_82BE10C0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aa7780
	if (cr6.eq) goto loc_82AA7780;
	// bl 0x82416268
	ctx.lr = 0x82AA777C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AA7780:
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

__attribute__((alias("__imp__sub_82AA7798"))) PPC_WEAK_FUNC(sub_82AA7798);
PPC_FUNC_IMPL(__imp__sub_82AA7798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AA77A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82AA77AC;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa77e8
	if (cr6.eq) goto loc_82AA77E8;
	// bl 0x83763ef8
	ctx.lr = 0x82AA77B8;
	sub_83763EF8(ctx, base);
	// ld r29,160(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// bl 0x83763ef8
	ctx.lr = 0x82AA77C4;
	sub_83763EF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83777e50
	ctx.lr = 0x82AA77D0;
	sub_83777E50(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// li r5,26
	ctx.r5.s64 = 26;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x82AA77E0;
	sub_82A76558(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82AA77E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA77F4"))) PPC_WEAK_FUNC(sub_82AA77F4);
PPC_FUNC_IMPL(__imp__sub_82AA77F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA77F8"))) PPC_WEAK_FUNC(sub_82AA77F8);
PPC_FUNC_IMPL(__imp__sub_82AA77F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r3,120
	ctx.r31.s64 = ctx.r3.s64 + 120;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8b528
	ctx.lr = 0x82AA781C;
	sub_82A8B528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a90728
	ctx.lr = 0x82AA782C;
	sub_82A90728(ctx, base);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// addic. r3,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r3.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82aa783c
	if (!cr0.eq) goto loc_82AA783C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82AA783C:
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

__attribute__((alias("__imp__sub_82AA7854"))) PPC_WEAK_FUNC(sub_82AA7854);
PPC_FUNC_IMPL(__imp__sub_82AA7854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7858"))) PPC_WEAK_FUNC(sub_82AA7858);
PPC_FUNC_IMPL(__imp__sub_82AA7858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AA7860;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,120
	ctx.r31.s64 = ctx.r3.s64 + 120;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,26
	ctx.r5.s64 = 26;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x82AA7884;
	sub_82A76558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa78b0
	if (cr6.eq) goto loc_82AA78B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x82aa78b0
	if (cr6.eq) goto loc_82AA78B0;
	// li r5,26
	ctx.r5.s64 = 26;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x82AA78AC;
	sub_825A10C0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82AA78B0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa7900
	if (cr6.eq) goto loc_82AA7900;
	// bl 0x83763ef8
	ctx.lr = 0x82AA78C0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa78d8
	if (cr6.eq) goto loc_82AA78D8;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83777d88
	ctx.lr = 0x82AA78D8;
	sub_83777D88(ctx, base);
loc_82AA78D8:
	// bl 0x82bda618
	ctx.lr = 0x82AA78DC;
	sub_82BDA618(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7900
	if (cr6.eq) goto loc_82AA7900;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82AA78F8;
	sub_831CE980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdb278
	ctx.lr = 0x82AA7900;
	sub_82BDB278(ctx, base);
loc_82AA7900:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA7908"))) PPC_WEAK_FUNC(sub_82AA7908);
PPC_FUNC_IMPL(__imp__sub_82AA7908) {
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
	// bl 0x82be1460
	ctx.lr = 0x82AA7924;
	sub_82BE1460(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// addi r9,r11,-19720
	ctx.r9.s64 = ctx.r11.s64 + -19720;
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
	ctx.lr = 0x82AA7950;
	sub_831CDCF0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82AA7968;
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

__attribute__((alias("__imp__sub_82AA7984"))) PPC_WEAK_FUNC(sub_82AA7984);
PPC_FUNC_IMPL(__imp__sub_82AA7984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7988"))) PPC_WEAK_FUNC(sub_82AA7988);
PPC_FUNC_IMPL(__imp__sub_82AA7988) {
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
	// bl 0x82be0df0
	ctx.lr = 0x82AA79A0;
	sub_82BE0DF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82aa79b4
	if (cr6.lt) goto loc_82AA79B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa7858
	ctx.lr = 0x82AA79B4;
	sub_82AA7858(ctx, base);
loc_82AA79B4:
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

__attribute__((alias("__imp__sub_82AA79C8"))) PPC_WEAK_FUNC(sub_82AA79C8);
PPC_FUNC_IMPL(__imp__sub_82AA79C8) {
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
	// lwz r4,192(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82aa7858
	ctx.lr = 0x82AA79E4;
	sub_82AA7858(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82AA79F0;
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

__attribute__((alias("__imp__sub_82AA7A04"))) PPC_WEAK_FUNC(sub_82AA7A04);
PPC_FUNC_IMPL(__imp__sub_82AA7A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7A08"))) PPC_WEAK_FUNC(sub_82AA7A08);
PPC_FUNC_IMPL(__imp__sub_82AA7A08) {
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
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aa7a30
	if (cr6.lt) goto loc_82AA7A30;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82aa7a34
	goto loc_82AA7A34;
loc_82AA7A30:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AA7A34:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,196
	ctx.r4.s64 = 196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AA7A50;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7a68
	if (cr6.eq) goto loc_82AA7A68;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aa7908
	ctx.lr = 0x82AA7A64;
	sub_82AA7908(ctx, base);
	// b 0x82aa7a6c
	goto loc_82AA7A6C;
loc_82AA7A68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA7A6C:
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

__attribute__((alias("__imp__sub_82AA7A84"))) PPC_WEAK_FUNC(sub_82AA7A84);
PPC_FUNC_IMPL(__imp__sub_82AA7A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7A88"))) PPC_WEAK_FUNC(sub_82AA7A88);
PPC_FUNC_IMPL(__imp__sub_82AA7A88) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r3,-22728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7aa8
	if (cr6.eq) goto loc_82AA7AA8;
	// bl 0x82bf7190
	ctx.lr = 0x82AA7AA8;
	sub_82BF7190(ctx, base);
loc_82AA7AA8:
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

__attribute__((alias("__imp__sub_82AA7ABC"))) PPC_WEAK_FUNC(sub_82AA7ABC);
PPC_FUNC_IMPL(__imp__sub_82AA7ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7AC0"))) PPC_WEAK_FUNC(sub_82AA7AC0);
PPC_FUNC_IMPL(__imp__sub_82AA7AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AA7AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7afc
	if (cr6.eq) goto loc_82AA7AFC;
	// bl 0x82bf71a0
	ctx.lr = 0x82AA7AE4;
	sub_82BF71A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82aa7afc
	if (!cr6.eq) goto loc_82AA7AFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AA7AFC:
	// lbz r11,207(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 207);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa7b80
	if (cr6.eq) goto loc_82AA7B80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AA7B18;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AA7B28;
	sub_82D19788(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x82AA7B30;
	sub_82D17AA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA7B38;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AA7B40;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7b58
	if (cr6.eq) goto loc_82AA7B58;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82AA7B58;
	sub_82D2B608(ctx, base);
loc_82AA7B58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA7B60;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82AA7B68;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7b80
	if (cr6.eq) goto loc_82AA7B80;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82AA7B80;
	sub_82D2B608(ctx, base);
loc_82AA7B80:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-20620
	ctx.r11.s64 = ctx.r11.s64 + -20620;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82AA7B90:
	// bl 0x830ff290
	ctx.lr = 0x82AA7B94;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AA7B98;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82aa7ba8
	if (!cr6.eq) goto loc_82AA7BA8;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// beq cr6,0x82aa7bdc
	if (cr6.eq) goto loc_82AA7BDC;
loc_82AA7BA8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82AA7BBC;
	sub_82BDC948(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82AA7BD0;
	sub_82D233B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x82aa7b90
	if (cr6.lt) goto loc_82AA7B90;
loc_82AA7BDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17d80
	ctx.lr = 0x82AA7BE8;
	sub_82D17D80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA7BF4"))) PPC_WEAK_FUNC(sub_82AA7BF4);
PPC_FUNC_IMPL(__imp__sub_82AA7BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7BF8"))) PPC_WEAK_FUNC(sub_82AA7BF8);
PPC_FUNC_IMPL(__imp__sub_82AA7BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,39
	ctx.r3.s64 = 2555904;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7C04"))) PPC_WEAK_FUNC(sub_82AA7C04);
PPC_FUNC_IMPL(__imp__sub_82AA7C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7C08"))) PPC_WEAK_FUNC(sub_82AA7C08);
PPC_FUNC_IMPL(__imp__sub_82AA7C08) {
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
	// bl 0x830ff290
	ctx.lr = 0x82AA7C18;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AA7C1C;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7C40"))) PPC_WEAK_FUNC(sub_82AA7C40);
PPC_FUNC_IMPL(__imp__sub_82AA7C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x82aa7c5c
	if (!cr6.lt) goto loc_82AA7C5C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-20604
	ctx.r9.s64 = ctx.r11.s64 + -20604;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82AA7C5C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7C64"))) PPC_WEAK_FUNC(sub_82AA7C64);
PPC_FUNC_IMPL(__imp__sub_82AA7C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7C68"))) PPC_WEAK_FUNC(sub_82AA7C68);
PPC_FUNC_IMPL(__imp__sub_82AA7C68) {
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
	// lis r11,229
	ctx.r11.s64 = 15007744;
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// ori r9,r11,46
	ctx.r9.u64 = ctx.r11.u64 | 46;
	// ori r8,r10,26
	ctx.r8.u64 = ctx.r10.u64 | 26;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r6,-18848
	ctx.r3.s64 = ctx.r6.s64 + -18848;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82AA7CB4;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7cd8
	if (cr6.eq) goto loc_82AA7CD8;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ac30
	ctx.lr = 0x82AA7CCC;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82AA7CD8;
	sub_83103100(ctx, base);
loc_82AA7CD8:
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

__attribute__((alias("__imp__sub_82AA7CF0"))) PPC_WEAK_FUNC(sub_82AA7CF0);
PPC_FUNC_IMPL(__imp__sub_82AA7CF0) {
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
	// lis r11,244
	ctx.r11.s64 = 15990784;
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// ori r9,r11,18
	ctx.r9.u64 = ctx.r11.u64 | 18;
	// ori r8,r10,26
	ctx.r8.u64 = ctx.r10.u64 | 26;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r6,-18828
	ctx.r3.s64 = ctx.r6.s64 + -18828;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82AA7D3C;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7d60
	if (cr6.eq) goto loc_82AA7D60;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ac30
	ctx.lr = 0x82AA7D54;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82AA7D60;
	sub_83103100(ctx, base);
loc_82AA7D60:
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

__attribute__((alias("__imp__sub_82AA7D78"))) PPC_WEAK_FUNC(sub_82AA7D78);
PPC_FUNC_IMPL(__imp__sub_82AA7D78) {
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
	ctx.lr = 0x82AA7D94;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82AA7D9C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AA7DA0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82aa7db8
	if (cr6.eq) goto loc_82AA7DB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-18788
	ctx.r11.s64 = ctx.r11.s64 + -18788;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// b 0x82aa7de0
	goto loc_82AA7DE0;
loc_82AA7DB8:
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82aa7ddc
	if (!cr6.eq) goto loc_82AA7DDC;
	// addi r11,r11,-18788
	ctx.r11.s64 = ctx.r11.s64 + -18788;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// b 0x82aa7de0
	goto loc_82AA7DE0;
loc_82AA7DDC:
	// addi r5,r11,-18788
	ctx.r5.s64 = ctx.r11.s64 + -18788;
loc_82AA7DE0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82AA7DEC;
	sub_82D20DA8(ctx, base);
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

__attribute__((alias("__imp__sub_82AA7E04"))) PPC_WEAK_FUNC(sub_82AA7E04);
PPC_FUNC_IMPL(__imp__sub_82AA7E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7E08"))) PPC_WEAK_FUNC(sub_82AA7E08);
PPC_FUNC_IMPL(__imp__sub_82AA7E08) {
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
	// bl 0x82aa7cf0
	ctx.lr = 0x82AA7E20;
	sub_82AA7CF0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AA7E3C"))) PPC_WEAK_FUNC(sub_82AA7E3C);
PPC_FUNC_IMPL(__imp__sub_82AA7E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7E40"))) PPC_WEAK_FUNC(sub_82AA7E40);
PPC_FUNC_IMPL(__imp__sub_82AA7E40) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82AA7E58;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7eb0
	if (cr6.eq) goto loc_82AA7EB0;
	// li r10,9
	ctx.r10.s64 = 9;
	// ld r30,160(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82AA7E78:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82aa7e78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AA7E78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA7E9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83777d88
	ctx.lr = 0x82AA7EB0;
	sub_83777D88(ctx, base);
loc_82AA7EB0:
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

__attribute__((alias("__imp__sub_82AA7EC8"))) PPC_WEAK_FUNC(sub_82AA7EC8);
PPC_FUNC_IMPL(__imp__sub_82AA7EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AA7ED0;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82aa7f10
	if (!cr6.eq) goto loc_82AA7F10;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82aa80b0
	if (!cr6.eq) goto loc_82AA80B0;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r3,-22728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7f04
	if (cr6.eq) goto loc_82AA7F04;
	// bl 0x82bf7340
	ctx.lr = 0x82AA7F04;
	sub_82BF7340(ctx, base);
loc_82AA7F04:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,205(r28)
	PPC_STORE_U8(ctx.r28.u32 + 205, ctx.r11.u8);
	// b 0x82aa80a4
	goto loc_82AA80A4;
loc_82AA7F10:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82aa80b0
	if (!cr6.eq) goto loc_82AA80B0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82aa80b0
	if (!cr6.eq) goto loc_82AA80B0;
	// bl 0x830ff290
	ctx.lr = 0x82AA7F24;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AA7F28;
	sub_830FFAA8(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82aa80a0
	if (cr6.eq) goto loc_82AA80A0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82aa7e40
	ctx.lr = 0x82AA7F3C;
	sub_82AA7E40(ctx, base);
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r3,-22728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa7f50
	if (cr6.eq) goto loc_82AA7F50;
	// bl 0x82bf7190
	ctx.lr = 0x82AA7F50;
	sub_82BF7190(ctx, base);
loc_82AA7F50:
	// bl 0x830ff290
	ctx.lr = 0x82AA7F54;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AA7F58;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82aa80a0
	if (!cr6.eq) goto loc_82AA80A0;
	// bl 0x831156e8
	ctx.lr = 0x82AA7F64;
	sub_831156E8(ctx, base);
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82aa8080
	if (!cr6.eq) goto loc_82AA8080;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82AA7F8C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82aa7f8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AA7F8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8373fae8
	ctx.lr = 0x82AA7FA0;
	sub_8373FAE8(ctx, base);
	// lis r10,222
	ctx.r10.s64 = 14548992;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// ori r9,r10,30348
	ctx.r9.u64 = ctx.r10.u64 | 30348;
	// addi r11,r11,-20556
	ctx.r11.s64 = ctx.r11.s64 + -20556;
	// ldx r30,r29,r9
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// bne cr6,0x82aa7fd4
	if (!cr6.eq) goto loc_82AA7FD4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82aa7ffc
	goto loc_82AA7FFC;
loc_82AA7FD4:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82aa7ff4
	if (!cr6.eq) goto loc_82AA7FF4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// beq cr6,0x82aa7ff8
	if (cr6.eq) goto loc_82AA7FF8;
loc_82AA7FF4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82AA7FF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AA7FFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa801c
	if (cr6.eq) goto loc_82AA801C;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// sth r27,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
	// ori r10,r11,187
	ctx.r10.u64 = ctx.r11.u64 | 187;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82AA801C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a76558
	ctx.lr = 0x82AA802C;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82aa8048
	if (!cr6.eq) goto loc_82AA8048;
	// bl 0x83763ef8
	ctx.lr = 0x82AA803C;
	sub_83763EF8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83777e50
	ctx.lr = 0x82AA8048;
	sub_83777E50(ctx, base);
loc_82AA8048:
	// bl 0x83763ef8
	ctx.lr = 0x82AA804C;
	sub_83763EF8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83777d88
	ctx.lr = 0x82AA805C;
	sub_83777D88(ctx, base);
	// addis r3,r29,222
	ctx.r3.s64 = ctx.r29.s64 + 14548992;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,30988
	ctx.r3.s64 = ctx.r3.s64 + 30988;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x82AA8070;
	sub_831CE980(ctx, base);
	// lis r11,222
	ctx.r11.s64 = 14548992;
	// ori r10,r11,31060
	ctx.r10.u64 = ctx.r11.u64 | 31060;
	// stbx r27,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r27.u8);
	// b 0x82aa80a0
	goto loc_82AA80A0;
loc_82AA8080:
	// bl 0x83763ef8
	ctx.lr = 0x82AA8084;
	sub_83763EF8(ctx, base);
	// ld r30,160(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// bl 0x83763ef8
	ctx.lr = 0x82AA808C;
	sub_83763EF8(ctx, base);
	// addis r4,r29,222
	ctx.r4.s64 = ctx.r29.s64 + 14548992;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r4,30988
	ctx.r4.s64 = ctx.r4.s64 + 30988;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83777d88
	ctx.lr = 0x82AA80A0;
	sub_83777D88(ctx, base);
loc_82AA80A0:
	// stb r31,204(r28)
	PPC_STORE_U8(ctx.r28.u32 + 204, ctx.r31.u8);
loc_82AA80A4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82AA80B0;
	sub_82D199D0(ctx, base);
loc_82AA80B0:
	// stw r27,200(r28)
	PPC_STORE_U32(ctx.r28.u32 + 200, ctx.r27.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA80BC"))) PPC_WEAK_FUNC(sub_82AA80BC);
PPC_FUNC_IMPL(__imp__sub_82AA80BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA80C0"))) PPC_WEAK_FUNC(sub_82AA80C0);
PPC_FUNC_IMPL(__imp__sub_82AA80C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AA80C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82AA80D8;
	sub_82BDC848(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,-18648
	ctx.r8.s64 = ctx.r11.s64 + -18648;
	// addi r7,r10,-18652
	ctx.r7.s64 = ctx.r10.s64 + -18652;
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r27,r31,208
	ctx.r27.s64 = ctx.r31.s64 + 208;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r30,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r30.u8);
	// stb r30,205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 205, ctx.r30.u8);
	// stb r30,206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 206, ctx.r30.u8);
	// stb r30,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r30.u8);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// lwz r3,-19904(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82aa8128
	if (!cr6.eq) goto loc_82AA8128;
	// bl 0x837792e0
	ctx.lr = 0x82AA8124;
	sub_837792E0(ctx, base);
	// b 0x82aa812c
	goto loc_82AA812C;
loc_82AA8128:
	// bl 0x83779358
	ctx.lr = 0x82AA812C;
	sub_83779358(ctx, base);
loc_82AA812C:
	// lis r29,-31760
	ctx.r29.s64 = -2081423360;
	// lwz r11,-22728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22728);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82aa81d8
	if (!cr6.eq) goto loc_82AA81D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bf8248
	ctx.lr = 0x82AA8144;
	sub_82BF8248(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stb r11,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r10,-18948
	ctx.r11.s64 = ctx.r10.s64 + -18948;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x82AA8164;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82d21bf8
	ctx.lr = 0x82AA8174;
	sub_82D21BF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82AA817C;
	sub_82D199F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82aa8234
	if (cr6.eq) goto loc_82AA8234;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82aa8234
	if (!cr6.eq) goto loc_82AA8234;
	// bl 0x83763ef8
	ctx.lr = 0x82AA8198;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8234
	if (cr6.eq) goto loc_82AA8234;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82AA81AC:
	// stdu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r30.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82aa81ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AA81AC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// bl 0x83777e50
	ctx.lr = 0x82AA81C0;
	sub_83777E50(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,-22728(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22728);
	// bl 0x82bf71c8
	ctx.lr = 0x82AA81CC;
	sub_82BF71C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AA81D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82AA81E0;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa8234
	if (cr6.eq) goto loc_82AA8234;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-22728(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22728);
	// bl 0x82bf7bc8
	ctx.lr = 0x82AA81F8;
	sub_82BF7BC8(ctx, base);
	// lwz r11,-22728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22728);
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r30,569(r11)
	PPC_STORE_U8(ctx.r11.u32 + 569, ctx.r30.u8);
	// stb r28,568(r11)
	PPC_STORE_U8(ctx.r11.u32 + 568, ctx.r28.u8);
	// lwz r3,-22728(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22728);
	// bl 0x82bf78e8
	ctx.lr = 0x82AA8210;
	sub_82BF78E8(ctx, base);
	// stb r28,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r28.u8);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18948
	ctx.r4.s64 = ctx.r11.s64 + -18948;
	// bl 0x837b0c10
	ctx.lr = 0x82AA8224;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82d21bf8
	ctx.lr = 0x82AA8234;
	sub_82D21BF8(ctx, base);
loc_82AA8234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA8240"))) PPC_WEAK_FUNC(sub_82AA8240);
PPC_FUNC_IMPL(__imp__sub_82AA8240) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r11,-18648
	ctx.r9.s64 = ctx.r11.s64 + -18648;
	// addi r8,r10,-18652
	ctx.r8.s64 = ctx.r10.s64 + -18652;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bdc910
	ctx.lr = 0x82AA8278;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aa8290
	if (cr6.eq) goto loc_82AA8290;
	// bl 0x82416268
	ctx.lr = 0x82AA828C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AA8290:
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

__attribute__((alias("__imp__sub_82AA82A8"))) PPC_WEAK_FUNC(sub_82AA82A8);
PPC_FUNC_IMPL(__imp__sub_82AA82A8) {
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
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82AA82D4;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa82f0
	if (cr6.eq) goto loc_82AA82F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-18312
	ctx.r10.s64 = ctx.r11.s64 + -18312;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82aa82f4
	goto loc_82AA82F4;
loc_82AA82F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AA82F4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x82AA8310;
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

__attribute__((alias("__imp__sub_82AA8328"))) PPC_WEAK_FUNC(sub_82AA8328);
PPC_FUNC_IMPL(__imp__sub_82AA8328) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82AA8344;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82aa841c
	if (!cr6.eq) goto loc_82AA841C;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r3,-22728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8360
	if (cr6.eq) goto loc_82AA8360;
	// bl 0x82bf7af8
	ctx.lr = 0x82AA8360;
	sub_82BF7AF8(ctx, base);
loc_82AA8360:
	// bl 0x830ff290
	ctx.lr = 0x82AA8364;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AA8368;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82aa8394
	if (cr6.eq) goto loc_82AA8394;
	// bl 0x830ff290
	ctx.lr = 0x82AA8374;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AA8378;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82aa8394
	if (cr6.eq) goto loc_82AA8394;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa7c68
	ctx.lr = 0x82AA8388;
	sub_82AA7C68(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r11.u32);
	// b 0x82aa8484
	goto loc_82AA8484;
loc_82AA8394:
	// bl 0x831156e8
	ctx.lr = 0x82AA8398;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x83763ef8
	ctx.lr = 0x82AA83A0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa83e0
	if (cr6.eq) goto loc_82AA83E0;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82AA83B8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82aa83b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AA83B8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// bl 0x83777e50
	ctx.lr = 0x82AA83CC;
	sub_83777E50(ctx, base);
	// addis r3,r31,222
	ctx.r3.s64 = ctx.r31.s64 + 14548992;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r3,30988
	ctx.r3.s64 = ctx.r3.s64 + 30988;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x82AA83E0;
	sub_831CE980(ctx, base);
loc_82AA83E0:
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-18884
	ctx.r11.s64 = ctx.r11.s64 + -18884;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r11,-28
	ctx.r5.s64 = ctx.r11.s64 + -28;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82aa840c
	if (cr6.eq) goto loc_82AA840C;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
loc_82AA840C:
	// bl 0x82d20da8
	ctx.lr = 0x82AA8410;
	sub_82D20DA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r11.u32);
	// b 0x82aa8484
	goto loc_82AA8484;
loc_82AA841C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82AA8424;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x82aa8444
	if (!cr6.lt) goto loc_82AA8444;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r3,-22728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8444
	if (cr6.eq) goto loc_82AA8444;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bf7bc8
	ctx.lr = 0x82AA8444;
	sub_82BF7BC8(ctx, base);
loc_82AA8444:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19230
	ctx.lr = 0x82AA8450;
	sub_82D19230(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdccb8
	ctx.lr = 0x82AA8458;
	sub_82BDCCB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82AA8460;
	sub_82D1C1A8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-18884
	ctx.r4.s64 = ctx.r11.s64 + -18884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82AA8474;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d22d48
	ctx.lr = 0x82AA8484;
	sub_82D22D48(ctx, base);
loc_82AA8484:
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
}

__attribute__((alias("__imp__sub_82AA849C"))) PPC_WEAK_FUNC(sub_82AA849C);
PPC_FUNC_IMPL(__imp__sub_82AA849C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA84A0"))) PPC_WEAK_FUNC(sub_82AA84A0);
PPC_FUNC_IMPL(__imp__sub_82AA84A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AA84A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82AA84B4;
	sub_82BDA618(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa859c
	if (cr6.eq) goto loc_82AA859C;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa84f4
	if (cr6.eq) goto loc_82AA84F4;
	// bl 0x837c9c08
	ctx.lr = 0x82AA84D8;
	sub_837C9C08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa84f4
	if (cr6.eq) goto loc_82AA84F4;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x82aa84f8
	if (cr6.eq) goto loc_82AA84F8;
loc_82AA84F4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82AA84F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa859c
	if (cr6.eq) goto loc_82AA859C;
	// lbz r11,207(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 207);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa859c
	if (cr6.eq) goto loc_82AA859C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AA8520;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AA8530;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA8538;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AA8540;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8558
	if (cr6.eq) goto loc_82AA8558;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82AA8558;
	sub_82D2B608(ctx, base);
loc_82AA8558:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA8560;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82AA8568;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8580
	if (cr6.eq) goto loc_82AA8580;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82AA8580;
	sub_82D2B608(ctx, base);
loc_82AA8580:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82AA8588;
	sub_82D17AA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x82d1eac0
	ctx.lr = 0x82AA8598;
	sub_82D1EAC0(ctx, base);
	// stb r28,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r28.u8);
loc_82AA859C:
	// lbz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa85ec
	if (cr6.eq) goto loc_82AA85EC;
	// bl 0x830ff290
	ctx.lr = 0x82AA85AC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AA85B0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82aa85d8
	if (cr6.eq) goto loc_82AA85D8;
	// bl 0x830ff290
	ctx.lr = 0x82AA85BC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AA85C0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82aa85d8
	if (cr6.eq) goto loc_82AA85D8;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,-22728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82aa86c8
	if (!cr6.eq) goto loc_82AA86C8;
loc_82AA85D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa7d78
	ctx.lr = 0x82AA85E0;
	sub_82AA7D78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AA85EC:
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lbz r10,205(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r29,-22728(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22728);
	// beq cr6,0x82aa8674
	if (cr6.eq) goto loc_82AA8674;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82aa8674
	if (cr6.eq) goto loc_82AA8674;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf7330
	ctx.lr = 0x82AA8610;
	sub_82BF7330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa86c8
	if (cr6.eq) goto loc_82AA86C8;
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82AA862C;
	sub_82572FA0(ctx, base);
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lwz r3,-19904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa864c
	if (cr6.eq) goto loc_82AA864C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83779460
	ctx.lr = 0x82AA8644;
	sub_83779460(ctx, base);
	// lwz r11,-19904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19904);
	// stw r27,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r27.u32);
loc_82AA864C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf7190
	ctx.lr = 0x82AA8654;
	sub_82BF7190(ctx, base);
	// stb r27,206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 206, ctx.r27.u8);
	// stb r28,205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 205, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82AA8668;
	sub_82572FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AA8674:
	// lbz r11,206(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 206);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa86c8
	if (cr6.eq) goto loc_82AA86C8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82aa86c8
	if (!cr6.eq) goto loc_82AA86C8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,-18764
	ctx.r30.s64 = ctx.r11.s64 + -18764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82AA86A0;
	sub_82D20DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82AA86A8;
	sub_82D19BA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82AA86B8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d22d48
	ctx.lr = 0x82AA86C8;
	sub_82D22D48(ctx, base);
loc_82AA86C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA86D4"))) PPC_WEAK_FUNC(sub_82AA86D4);
PPC_FUNC_IMPL(__imp__sub_82AA86D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA86D8"))) PPC_WEAK_FUNC(sub_82AA86D8);
PPC_FUNC_IMPL(__imp__sub_82AA86D8) {
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
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aa8700
	if (cr6.lt) goto loc_82AA8700;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82aa8704
	goto loc_82AA8704;
loc_82AA8700:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AA8704:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,212
	ctx.r4.s64 = 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AA8720;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8738
	if (cr6.eq) goto loc_82AA8738;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aa80c0
	ctx.lr = 0x82AA8734;
	sub_82AA80C0(ctx, base);
	// b 0x82aa873c
	goto loc_82AA873C;
loc_82AA8738:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA873C:
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

__attribute__((alias("__imp__sub_82AA8754"))) PPC_WEAK_FUNC(sub_82AA8754);
PPC_FUNC_IMPL(__imp__sub_82AA8754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8758"))) PPC_WEAK_FUNC(sub_82AA8758);
PPC_FUNC_IMPL(__imp__sub_82AA8758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AA8760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83763ef8
	ctx.lr = 0x82AA8770;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8788
	if (cr6.eq) goto loc_82AA8788;
	// lbz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 440);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa8788
	if (cr6.eq) goto loc_82AA8788;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82AA8788:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-20452
	ctx.r29.s64 = ctx.r11.s64 + -20452;
loc_82AA8798:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82AA87AC;
	sub_82BDC948(ctx, base);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x82d233b0
	ctx.lr = 0x82AA87C8;
	sub_82D233B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82aa8798
	if (cr6.lt) goto loc_82AA8798;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA87E0"))) PPC_WEAK_FUNC(sub_82AA87E0);
PPC_FUNC_IMPL(__imp__sub_82AA87E0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,39
	ctx.r3.s64 = 2555904;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA87EC"))) PPC_WEAK_FUNC(sub_82AA87EC);
PPC_FUNC_IMPL(__imp__sub_82AA87EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA87F0"))) PPC_WEAK_FUNC(sub_82AA87F0);
PPC_FUNC_IMPL(__imp__sub_82AA87F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA87F8"))) PPC_WEAK_FUNC(sub_82AA87F8);
PPC_FUNC_IMPL(__imp__sub_82AA87F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bge cr6,0x82aa8814
	if (!cr6.lt) goto loc_82AA8814;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-17996
	ctx.r9.s64 = ctx.r11.s64 + -17996;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82AA8814:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA881C"))) PPC_WEAK_FUNC(sub_82AA881C);
PPC_FUNC_IMPL(__imp__sub_82AA881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8820"))) PPC_WEAK_FUNC(sub_82AA8820);
PPC_FUNC_IMPL(__imp__sub_82AA8820) {
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
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82aa88b4
	if (!cr6.eq) goto loc_82AA88B4;
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8868
	if (cr6.eq) goto loc_82AA8868;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA8864;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
loc_82AA8868:
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82AA8870;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8888
	if (cr6.eq) goto loc_82AA8888;
	// lbz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 440);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa8888
	if (cr6.eq) goto loc_82AA8888;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82AA8888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82AA8890;
	sub_82D1C1A8(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r10,-20452
	ctx.r8.s64 = ctx.r10.s64 + -20452;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x82d20da8
	ctx.lr = 0x82AA88B4;
	sub_82D20DA8(ctx, base);
loc_82AA88B4:
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

__attribute__((alias("__imp__sub_82AA88D0"))) PPC_WEAK_FUNC(sub_82AA88D0);
PPC_FUNC_IMPL(__imp__sub_82AA88D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bdccb8
	sub_82BDCCB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA88D4"))) PPC_WEAK_FUNC(sub_82AA88D4);
PPC_FUNC_IMPL(__imp__sub_82AA88D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA88D8"))) PPC_WEAK_FUNC(sub_82AA88D8);
PPC_FUNC_IMPL(__imp__sub_82AA88D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AA88E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82AA88F0;
	sub_82BDC848(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r11,-17880
	ctx.r9.s64 = ctx.r11.s64 + -17880;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// stw r29,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
	// bl 0x82d199f0
	ctx.lr = 0x82AA8920;
	sub_82D199F0(ctx, base);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r7,-17988
	ctx.r3.s64 = ctx.r7.s64 + -17988;
	// bl 0x82c07238
	ctx.lr = 0x82AA8930;
	sub_82C07238(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8948
	if (cr6.eq) goto loc_82AA8948;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23788
	ctx.lr = 0x82AA8948;
	sub_82D23788(ctx, base);
loc_82AA8948:
	// bl 0x83763ef8
	ctx.lr = 0x82AA894C;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa89b8
	if (cr6.eq) goto loc_82AA89B8;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// ori r10,r11,187
	ctx.r10.u64 = ctx.r11.u64 | 187;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a8f3f8
	ctx.lr = 0x82AA8974;
	sub_82A8F3F8(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82AA8980:
	// stdu r29,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r29.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82aa8980
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AA8980;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA89A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83777d88
	ctx.lr = 0x82AA89B8;
	sub_83777D88(ctx, base);
loc_82AA89B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA89C4"))) PPC_WEAK_FUNC(sub_82AA89C4);
PPC_FUNC_IMPL(__imp__sub_82AA89C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA89C8"))) PPC_WEAK_FUNC(sub_82AA89C8);
PPC_FUNC_IMPL(__imp__sub_82AA89C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17880
	ctx.r9.s64 = ctx.r11.s64 + -17880;
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
	// bl 0x82bdc910
	ctx.lr = 0x82AA8A00;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aa8a18
	if (cr6.eq) goto loc_82AA8A18;
	// bl 0x82416268
	ctx.lr = 0x82AA8A14;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AA8A18:
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

__attribute__((alias("__imp__sub_82AA8A30"))) PPC_WEAK_FUNC(sub_82AA8A30);
PPC_FUNC_IMPL(__imp__sub_82AA8A30) {
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
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aa8a58
	if (cr6.lt) goto loc_82AA8A58;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82aa8a5c
	goto loc_82AA8A5C;
loc_82AA8A58:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AA8A5C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,212
	ctx.r4.s64 = 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AA8A78;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8a90
	if (cr6.eq) goto loc_82AA8A90;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aa88d8
	ctx.lr = 0x82AA8A8C;
	sub_82AA88D8(ctx, base);
	// b 0x82aa8a94
	goto loc_82AA8A94;
loc_82AA8A90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA8A94:
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

__attribute__((alias("__imp__sub_82AA8AAC"))) PPC_WEAK_FUNC(sub_82AA8AAC);
PPC_FUNC_IMPL(__imp__sub_82AA8AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8AB0"))) PPC_WEAK_FUNC(sub_82AA8AB0);
PPC_FUNC_IMPL(__imp__sub_82AA8AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AA8AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AA8AC4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8b24
	if (cr6.eq) goto loc_82AA8B24;
	// bl 0x83763ef8
	ctx.lr = 0x82AA8AD0;
	sub_83763EF8(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// ld r31,180(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 180);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82AA8AE4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82aa8ae4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AA8AE4;
	// bl 0x83763ef8
	ctx.lr = 0x82AA8AF0;
	sub_83763EF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82aa6118
	ctx.lr = 0x82AA8AFC;
	sub_82AA6118(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82AA8B14;
	sub_83763EF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x837776a8
	ctx.lr = 0x82AA8B24;
	sub_837776A8(ctx, base);
loc_82AA8B24:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA8B2C"))) PPC_WEAK_FUNC(sub_82AA8B2C);
PPC_FUNC_IMPL(__imp__sub_82AA8B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8B30"))) PPC_WEAK_FUNC(sub_82AA8B30);
PPC_FUNC_IMPL(__imp__sub_82AA8B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AA8B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AA8B5C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8c18
	if (cr6.eq) goto loc_82AA8C18;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82beaf70
	ctx.lr = 0x82AA8B78;
	sub_82BEAF70(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32085
	ctx.r9.s64 = -2102722560;
	// addi r8,r11,-10912
	ctx.r8.s64 = ctx.r11.s64 + -10912;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-30032
	ctx.r6.s64 = ctx.r9.s64 + -30032;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r6,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r11.u8);
	// stb r11,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r11.u8);
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x8376e8a0
	ctx.lr = 0x82AA8BC0;
	sub_8376E8A0(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x82aa8bf4
	if (cr6.eq) goto loc_82AA8BF4;
loc_82AA8BD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82b399d8
	ctx.lr = 0x82AA8BE0;
	sub_82B399D8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82aa8bd4
	if (!cr6.eq) goto loc_82AA8BD4;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82AA8BF4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82aa8c0c
	if (cr6.eq) goto loc_82AA8C0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AA8C0C;
	sub_825952B8(ctx, base);
loc_82AA8C0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AA8C18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA8C24"))) PPC_WEAK_FUNC(sub_82AA8C24);
PPC_FUNC_IMPL(__imp__sub_82AA8C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8C28"))) PPC_WEAK_FUNC(sub_82AA8C28);
PPC_FUNC_IMPL(__imp__sub_82AA8C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aa8c38
	if (cr6.lt) goto loc_82AA8C38;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AA8C38:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82aa8b30
	sub_82AA8B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA8C40"))) PPC_WEAK_FUNC(sub_82AA8C40);
PPC_FUNC_IMPL(__imp__sub_82AA8C40) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8C50"))) PPC_WEAK_FUNC(sub_82AA8C50);
PPC_FUNC_IMPL(__imp__sub_82AA8C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-16716
	ctx.r3.s64 = ctx.r11.s64 + -16716;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8C5C"))) PPC_WEAK_FUNC(sub_82AA8C5C);
PPC_FUNC_IMPL(__imp__sub_82AA8C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8C60"))) PPC_WEAK_FUNC(sub_82AA8C60);
PPC_FUNC_IMPL(__imp__sub_82AA8C60) {
	PPC_FUNC_PROLOGUE();
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,448
	ctx.r3.u64 = ctx.r3.u64 | 448;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8C6C"))) PPC_WEAK_FUNC(sub_82AA8C6C);
PPC_FUNC_IMPL(__imp__sub_82AA8C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8C70"))) PPC_WEAK_FUNC(sub_82AA8C70);
PPC_FUNC_IMPL(__imp__sub_82AA8C70) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,-16672
	ctx.r3.s64 = ctx.r11.s64 + -16672;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82AA8CA4;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8cdc
	if (cr6.eq) goto loc_82AA8CDC;
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// lis r10,244
	ctx.r10.s64 = 15990784;
	// ori r9,r11,26
	ctx.r9.u64 = ctx.r11.u64 | 26;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ac30
	ctx.lr = 0x82AA8CD0;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82AA8CDC;
	sub_83103100(ctx, base);
loc_82AA8CDC:
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

__attribute__((alias("__imp__sub_82AA8CF4"))) PPC_WEAK_FUNC(sub_82AA8CF4);
PPC_FUNC_IMPL(__imp__sub_82AA8CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8CF8"))) PPC_WEAK_FUNC(sub_82AA8CF8);
PPC_FUNC_IMPL(__imp__sub_82AA8CF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-16652
	ctx.r3.s64 = ctx.r11.s64 + -16652;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82AA8D28;
	sub_82D2EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8d4c
	if (cr6.eq) goto loc_82AA8D4C;
	// lis r4,229
	ctx.r4.s64 = 15007744;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d2ada8
	ctx.lr = 0x82AA8D40;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82AA8D4C;
	sub_83103100(ctx, base);
loc_82AA8D4C:
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

__attribute__((alias("__imp__sub_82AA8D64"))) PPC_WEAK_FUNC(sub_82AA8D64);
PPC_FUNC_IMPL(__imp__sub_82AA8D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8D68"))) PPC_WEAK_FUNC(sub_82AA8D68);
PPC_FUNC_IMPL(__imp__sub_82AA8D68) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82AA8D80;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa8da0
	if (cr6.eq) goto loc_82AA8DA0;
	// bl 0x83763ef8
	ctx.lr = 0x82AA8D8C;
	sub_83763EF8(ctx, base);
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82aa8da0
	if (cr6.eq) goto loc_82AA8DA0;
	// bl 0x83763ef8
	ctx.lr = 0x82AA8D9C;
	sub_83763EF8(ctx, base);
	// bl 0x83765360
	ctx.lr = 0x82AA8DA0;
	sub_83765360(ctx, base);
loc_82AA8DA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a7c5d0
	ctx.lr = 0x82AA8DA8;
	sub_82A7C5D0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AA8DC4"))) PPC_WEAK_FUNC(sub_82AA8DC4);
PPC_FUNC_IMPL(__imp__sub_82AA8DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8DC8"))) PPC_WEAK_FUNC(sub_82AA8DC8);
PPC_FUNC_IMPL(__imp__sub_82AA8DC8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83071e38
	ctx.lr = 0x82AA8DEC;
	sub_83071E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa8e40
	if (cr6.eq) goto loc_82AA8E40;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa8e40
	if (cr6.eq) goto loc_82AA8E40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82AA8E14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa8e40
	if (cr6.eq) goto loc_82AA8E40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82aa8e40
	if (cr6.lt) goto loc_82AA8E40;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82aa8e44
	if (!cr6.gt) goto loc_82AA8E44;
loc_82AA8E40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA8E44:
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

__attribute__((alias("__imp__sub_82AA8E5C"))) PPC_WEAK_FUNC(sub_82AA8E5C);
PPC_FUNC_IMPL(__imp__sub_82AA8E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8E60"))) PPC_WEAK_FUNC(sub_82AA8E60);
PPC_FUNC_IMPL(__imp__sub_82AA8E60) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83071e38
	ctx.lr = 0x82AA8E80;
	sub_83071E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa8ed8
	if (cr6.eq) goto loc_82AA8ED8;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82aa8ed8
	if (cr6.eq) goto loc_82AA8ED8;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82aa8ed8
	if (cr6.lt) goto loc_82AA8ED8;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82aa8ed8
	if (cr6.gt) goto loc_82AA8ED8;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82AA8EC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_82AA8ED8:
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
}

__attribute__((alias("__imp__sub_82AA8EF0"))) PPC_WEAK_FUNC(sub_82AA8EF0);
PPC_FUNC_IMPL(__imp__sub_82AA8EF0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16528
	ctx.r9.s64 = ctx.r11.s64 + -16528;
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
	// bl 0x82bdc910
	ctx.lr = 0x82AA8F28;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aa8f40
	if (cr6.eq) goto loc_82AA8F40;
	// bl 0x82416268
	ctx.lr = 0x82AA8F3C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AA8F40:
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

__attribute__((alias("__imp__sub_82AA8F58"))) PPC_WEAK_FUNC(sub_82AA8F58);
PPC_FUNC_IMPL(__imp__sub_82AA8F58) {
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
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82aa8fa4
	if (cr6.eq) goto loc_82AA8FA4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82aa8fac
	if (!cr6.eq) goto loc_82AA8FAC;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bne cr6,0x82aa8fac
	if (!cr6.eq) goto loc_82AA8FAC;
	// bl 0x82aa8c70
	ctx.lr = 0x82AA8F8C;
	sub_82AA8C70(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82AA8FA0;
	sub_82D19858(ctx, base);
	// b 0x82aa8fac
	goto loc_82AA8FAC;
loc_82AA8FA4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_82AA8FAC:
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

__attribute__((alias("__imp__sub_82AA8FC4"))) PPC_WEAK_FUNC(sub_82AA8FC4);
PPC_FUNC_IMPL(__imp__sub_82AA8FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8FC8"))) PPC_WEAK_FUNC(sub_82AA8FC8);
PPC_FUNC_IMPL(__imp__sub_82AA8FC8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83071ea8
	ctx.lr = 0x82AA8FEC;
	sub_83071EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82aa9000
	if (!cr6.eq) goto loc_82AA9000;
loc_82AA8FF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82aa9034
	goto loc_82AA9034;
loc_82AA9000:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa8ff8
	if (cr6.eq) goto loc_82AA8FF8;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82aa9024
	if (cr6.lt) goto loc_82AA9024;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82aa9028
	goto loc_82AA9028;
loc_82AA9024:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82AA9028:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AA9034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AA9034:
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

__attribute__((alias("__imp__sub_82AA904C"))) PPC_WEAK_FUNC(sub_82AA904C);
PPC_FUNC_IMPL(__imp__sub_82AA904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9050"))) PPC_WEAK_FUNC(sub_82AA9050);
PPC_FUNC_IMPL(__imp__sub_82AA9050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AA9058;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82AA9068;
	sub_82BDC848(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r31,204
	ctx.r30.s64 = ctx.r31.s64 + 204;
	// addi r9,r11,-16528
	ctx.r9.s64 = ctx.r11.s64 + -16528;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,88
	ctx.r5.s64 = 88;
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82AA909C;
	sub_831CDCF0(ctx, base);
	// addi r29,r31,292
	ctx.r29.s64 = ctx.r31.s64 + 292;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82AA90B0;
	sub_831CDCF0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82AA90C8;
	sub_831CDCF0(ctx, base);
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82AA90D8;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82AA90E0;
	sub_82D199F0(ctx, base);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r5,-16880
	ctx.r3.s64 = ctx.r5.s64 + -16880;
	// bl 0x82c06038
	ctx.lr = 0x82AA90F0;
	sub_82C06038(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82aa910c
	if (cr6.eq) goto loc_82AA910C;
	// bl 0x82d23788
	ctx.lr = 0x82AA9108;
	sub_82D23788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AA910C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA9114"))) PPC_WEAK_FUNC(sub_82AA9114);
PPC_FUNC_IMPL(__imp__sub_82AA9114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9118"))) PPC_WEAK_FUNC(sub_82AA9118);
PPC_FUNC_IMPL(__imp__sub_82AA9118) {
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
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aa9140
	if (cr6.lt) goto loc_82AA9140;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82aa9144
	goto loc_82AA9144;
loc_82AA9140:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AA9144:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,384
	ctx.r4.s64 = 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AA9160;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9178
	if (cr6.eq) goto loc_82AA9178;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aa9050
	ctx.lr = 0x82AA9174;
	sub_82AA9050(ctx, base);
	// b 0x82aa917c
	goto loc_82AA917C;
loc_82AA9178:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA917C:
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

__attribute__((alias("__imp__sub_82AA9194"))) PPC_WEAK_FUNC(sub_82AA9194);
PPC_FUNC_IMPL(__imp__sub_82AA9194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9198"))) PPC_WEAK_FUNC(sub_82AA9198);
PPC_FUNC_IMPL(__imp__sub_82AA9198) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-17
	xer.ca = ctx.r11.u32 > 16;
	ctx.r11.s64 = ctx.r11.s64 + -17;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82aa91dc
	if (cr0.eq) goto loc_82AA91DC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82aa9248
	if (!cr6.eq) goto loc_82AA9248;
	// bl 0x82d1c1a8
	ctx.lr = 0x82AA91C8;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82aa9248
	if (!cr6.eq) goto loc_82AA9248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8cf8
	ctx.lr = 0x82AA91D8;
	sub_82AA8CF8(ctx, base);
	// b 0x82aa9248
	goto loc_82AA9248;
loc_82AA91DC:
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa9248
	if (cr6.eq) goto loc_82AA9248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA91F0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AA91F8;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AA9200;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-16628
	ctx.r4.s64 = ctx.r11.s64 + -16628;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AA921C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9248
	if (cr6.eq) goto loc_82AA9248;
	// bl 0x82d3a1c8
	ctx.lr = 0x82AA9228;
	sub_82D3A1C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292a3f8
	ctx.lr = 0x82AA9234;
	sub_8292A3F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bl 0x82c06a60
	ctx.lr = 0x82AA9240;
	sub_82C06A60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82AA9248;
	sub_8387E8E0(ctx, base);
loc_82AA9248:
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
}

__attribute__((alias("__imp__sub_82AA9260"))) PPC_WEAK_FUNC(sub_82AA9260);
PPC_FUNC_IMPL(__imp__sub_82AA9260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82AA9268;
	__savegprlr_21(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82AA9274;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82aa928c
	if (!cr6.eq) goto loc_82AA928C;
loc_82AA9280:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82AA928C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA9294;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9758
	if (cr6.eq) goto loc_82AA9758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA92A4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AA92AC;
	sub_82D33DB0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9758
	if (cr6.eq) goto loc_82AA9758;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdca08
	ctx.lr = 0x82AA92C4;
	sub_82BDCA08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA92CC;
	sub_82D19A78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-16736
	ctx.r30.s64 = ctx.r11.s64 + -16736;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA92EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA92F4;
	sub_82D19A78(ctx, base);
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// bl 0x82d2f098
	ctx.lr = 0x82AA92FC;
	sub_82D2F098(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9758
	if (cr6.eq) goto loc_82AA9758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA9310;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9328;
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
	ctx.lr = 0x82AA933C;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82AA934C;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA9354;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AA936C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82AA9370;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9280
	if (cr6.eq) goto loc_82AA9280;
	// bl 0x831156e8
	ctx.lr = 0x82AA937C;
	sub_831156E8(ctx, base);
	// ld r5,180(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 180);
	// addi r26,r31,204
	ctx.r26.s64 = ctx.r31.s64 + 204;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// bl 0x82aa6118
	ctx.lr = 0x82AA9398;
	sub_82AA6118(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r31,292
	ctx.r4.s64 = ctx.r31.s64 + 292;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA93B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AA93C0;
	sub_82D33DB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9758
	if (cr6.eq) goto loc_82AA9758;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA93E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9758
	if (cr6.eq) goto loc_82AA9758;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r25,r11,-20156
	ctx.r25.s64 = ctx.r11.s64 + -20156;
	// lwz r4,-20156(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20156);
	// bl 0x82d29598
	ctx.lr = 0x82AA93FC;
	sub_82D29598(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82AA9410;
	sub_82BDC948(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AA941C;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9434;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9530
	if (cr6.eq) goto loc_82AA9530;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82aa6718
	ctx.lr = 0x82AA9468;
	sub_82AA6718(ctx, base);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// stb r29,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r29.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82AA948C;
	sub_837B0C10(ctx, base);
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r27,r11,572
	ctx.r27.u64 = ctx.r11.u64 | 572;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82AA94A0;
	sub_82D042A8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82aa94b8
	if (!cr6.lt) goto loc_82AA94B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82AA94B8:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259d6c0
	ctx.lr = 0x82AA94C0;
	sub_8259D6C0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82AA94D4;
	sub_8259CB28(ctx, base);
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83071ea8
	ctx.lr = 0x82AA94F0;
	sub_83071EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// stb r23,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r23.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// bl 0x82d3a988
	ctx.lr = 0x82AA9518;
	sub_82D3A988(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82AA9520;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8378e240
	ctx.lr = 0x82AA9528;
	sub_8378E240(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82AA9530;
	sub_8387E8E0(ctx, base);
loc_82AA9530:
	// lbz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82aa9554
	if (cr6.eq) goto loc_82AA9554;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82AA9554;
	sub_82D2B608(ctx, base);
loc_82AA9554:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AA9560;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9758
	if (cr6.eq) goto loc_82AA9758;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9758
	if (cr6.eq) goto loc_82AA9758;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82d29598
	ctx.lr = 0x82AA9598;
	sub_82D29598(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82AA95AC;
	sub_82BDC948(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA95C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 208);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82aa95d8
	if (!cr6.eq) goto loc_82AA95D8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82AA95D8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82be2738
	ctx.lr = 0x82AA95E0;
	sub_82BE2738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82AA95EC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3bcc0
	ctx.lr = 0x82AA95F8;
	sub_82D3BCC0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82AA9600;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82AA9614;
	sub_82D233B0(ctx, base);
	// lbz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82aa9638
	if (cr6.eq) goto loc_82AA9638;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82AA9638;
	sub_82D2B608(ctx, base);
loc_82AA9638:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AA9644;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9758
	if (cr6.eq) goto loc_82AA9758;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9758
	if (cr6.eq) goto loc_82AA9758;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x82d29598
	ctx.lr = 0x82AA9678;
	sub_82D29598(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82AA968C;
	sub_82BDC948(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82AA96A0;
	sub_82D233B0(ctx, base);
	// lbz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82aa96e4
	if (cr6.eq) goto loc_82AA96E4;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa96e4
	if (cr6.eq) goto loc_82AA96E4;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82d427a8
	ctx.lr = 0x82AA96C4;
	sub_82D427A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa96e4
	if (cr6.eq) goto loc_82AA96E4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82AA96E4;
	sub_82D2B608(ctx, base);
loc_82AA96E4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-19904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa96f8
	if (cr6.eq) goto loc_82AA96F8;
	// bl 0x83779190
	ctx.lr = 0x82AA96F8;
	sub_83779190(ctx, base);
loc_82AA96F8:
	// bl 0x82bda618
	ctx.lr = 0x82AA96FC;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82aa9720
	if (!cr6.eq) goto loc_82AA9720;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bdc5e8
	ctx.lr = 0x82AA970C;
	sub_82BDC5E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9720
	if (cr6.eq) goto loc_82AA9720;
	// bl 0x82bda618
	ctx.lr = 0x82AA9718;
	sub_82BDA618(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bda498
	ctx.lr = 0x82AA9720;
	sub_82BDA498(ctx, base);
loc_82AA9720:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8376ce70
	ctx.lr = 0x82AA9728;
	sub_8376CE70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa9758
	if (cr6.eq) goto loc_82AA9758;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AA9744;
	sub_82D19788(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,319
	ctx.r5.u64 = ctx.r5.u64 | 319;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82AA9758;
	sub_82D20EB8(ctx, base);
loc_82AA9758:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA9764"))) PPC_WEAK_FUNC(sub_82AA9764);
PPC_FUNC_IMPL(__imp__sub_82AA9764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9768"))) PPC_WEAK_FUNC(sub_82AA9768);
PPC_FUNC_IMPL(__imp__sub_82AA9768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AA9770;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA977C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AA9784;
	sub_82D33DB0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// bl 0x82d33db0
	ctx.lr = 0x82AA97AC;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-16728
	ctx.r4.s64 = ctx.r11.s64 + -16728;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AA97C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa986c
	if (cr6.eq) goto loc_82AA986C;
	// bl 0x82d3a1c8
	ctx.lr = 0x82AA97D4;
	sub_82D3A1C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82AA97E8;
	sub_8259CB28(ctx, base);
	// addi r31,r30,204
	ctx.r31.s64 = ctx.r30.s64 + 204;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8fc8
	ctx.lr = 0x82AA97FC;
	sub_82AA8FC8(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r30,292
	ctx.r3.s64 = ctx.r30.s64 + 292;
	// bl 0x82aa6718
	ctx.lr = 0x82AA980C;
	sub_82AA6718(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82aa9820
	if (!cr6.lt) goto loc_82AA9820;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
loc_82AA9820:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bge cr6,0x82aa9834
	if (!cr6.lt) goto loc_82AA9834;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82AA9834:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82aa9858
	if (cr6.eq) goto loc_82AA9858;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82aa9834
	if (cr6.eq) goto loc_82AA9834;
loc_82AA9858:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// subfe r4,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8e60
	ctx.lr = 0x82AA986C;
	sub_82AA8E60(ctx, base);
loc_82AA986C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aa988c
	if (cr6.lt) goto loc_82AA988C;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82AA988C;
	sub_825952B8(ctx, base);
loc_82AA988C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// blt cr6,0x82aa98b4
	if (cr6.lt) goto loc_82AA98B4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82AA98B4;
	sub_825952B8(ctx, base);
loc_82AA98B4:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r31,r30,204
	ctx.r31.s64 = ctx.r30.s64 + 204;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82aa8dc8
	ctx.lr = 0x82AA98D4;
	sub_82AA8DC8(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,292
	ctx.r3.s64 = ctx.r30.s64 + 292;
	// bl 0x82aa8dc8
	ctx.lr = 0x82AA98E4;
	sub_82AA8DC8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r4,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82aa8e60
	ctx.lr = 0x82AA9904;
	sub_82AA8E60(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82AA9908;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9934
	if (cr6.eq) goto loc_82AA9934;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82AA9924;
	sub_83763EF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x837776a8
	ctx.lr = 0x82AA9934;
	sub_837776A8(ctx, base);
loc_82AA9934:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA9940"))) PPC_WEAK_FUNC(sub_82AA9940);
PPC_FUNC_IMPL(__imp__sub_82AA9940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82AA9948;
	__savegprlr_24(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA9958;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9bf0
	if (cr6.eq) goto loc_82AA9BF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AA9968;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AA9970;
	sub_82D33DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9bf0
	if (cr6.eq) goto loc_82AA9BF0;
	// lwz r11,200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82aa9bf0
	if (!cr6.eq) goto loc_82AA9BF0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82aa9be8
	if (!cr6.eq) goto loc_82AA9BE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AA9998;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r11,-16688
	ctx.r28.s64 = ctx.r11.s64 + -16688;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA99B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r26,r29,292
	ctx.r26.s64 = ctx.r29.s64 + 292;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82aa6718
	ctx.lr = 0x82AA99E0;
	sub_82AA6718(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82aa9ac0
	if (cr6.eq) goto loc_82AA9AC0;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82AA9A10;
	sub_837B0C10(ctx, base);
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r30,r11,572
	ctx.r30.u64 = ctx.r11.u64 | 572;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82AA9A24;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82aa9a3c
	if (!cr6.lt) goto loc_82AA9A3C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AA9A3C:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259d6c0
	ctx.lr = 0x82AA9A44;
	sub_8259D6C0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82AA9A58;
	sub_8259CB28(ctx, base);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r30,r29,204
	ctx.r30.s64 = ctx.r29.s64 + 204;
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x83071ea8
	ctx.lr = 0x82AA9A78;
	sub_83071EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// stb r24,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r24.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// bl 0x82d3a988
	ctx.lr = 0x82AA9AA0;
	sub_82D3A988(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa8fc8
	ctx.lr = 0x82AA9AB0;
	sub_82AA8FC8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82AA9AB8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8378e240
	ctx.lr = 0x82AA9AC0;
	sub_8378E240(ctx, base);
loc_82AA9AC0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82aa8dc8
	ctx.lr = 0x82AA9AD4;
	sub_82AA8DC8(ctx, base);
	// addi r30,r29,204
	ctx.r30.s64 = ctx.r29.s64 + 204;
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa8e60
	ctx.lr = 0x82AA9AE8;
	sub_82AA8E60(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82AA9AFC;
	sub_82BDC948(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AA9B08;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AA9B20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82aa9b38
	if (!cr6.eq) goto loc_82AA9B38;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
loc_82AA9B38:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82be2738
	ctx.lr = 0x82AA9B40;
	sub_82BE2738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82AA9B4C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3bcc0
	ctx.lr = 0x82AA9B58;
	sub_82D3BCC0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82AA9B60;
	sub_8387E8E0(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82aa8dc8
	ctx.lr = 0x82AA9B74;
	sub_82AA8DC8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82aa8e60
	ctx.lr = 0x82AA9B84;
	sub_82AA8E60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377d5b0
	ctx.lr = 0x82AA9B90;
	sub_8377D5B0(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82AA9B94;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9bc0
	if (cr6.eq) goto loc_82AA9BC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82AA9BB0;
	sub_83763EF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x837776a8
	ctx.lr = 0x82AA9BC0;
	sub_837776A8(ctx, base);
loc_82AA9BC0:
	// lwz r3,380(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9be0
	if (cr6.eq) goto loc_82AA9BE0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82c06a60
	ctx.lr = 0x82AA9BD4;
	sub_82C06A60(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,380(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// bl 0x82c06b10
	ctx.lr = 0x82AA9BE0;
	sub_82C06B10(ctx, base);
loc_82AA9BE0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82AA9BE8;
	sub_8387E8E0(ctx, base);
loc_82AA9BE8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r11.u32);
loc_82AA9BF0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA9BF8"))) PPC_WEAK_FUNC(sub_82AA9BF8);
PPC_FUNC_IMPL(__imp__sub_82AA9BF8) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763ef8
	ctx.lr = 0x82AA9C10;
	sub_83763EF8(ctx, base);
	// stw r31,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82AA9C28"))) PPC_WEAK_FUNC(sub_82AA9C28);
PPC_FUNC_IMPL(__imp__sub_82AA9C28) {
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
	// bl 0x82d199f0
	ctx.lr = 0x82AA9C40;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa9c60
	if (cr6.eq) goto loc_82AA9C60;
	// bl 0x83763ef8
	ctx.lr = 0x82AA9C50;
	sub_83763EF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,168(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// bl 0x82b363e8
	ctx.lr = 0x82AA9C60;
	sub_82B363E8(ctx, base);
loc_82AA9C60:
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

__attribute__((alias("__imp__sub_82AA9C78"))) PPC_WEAK_FUNC(sub_82AA9C78);
PPC_FUNC_IMPL(__imp__sub_82AA9C78) {
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
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8306c810
	ctx.lr = 0x82AA9CA4;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa9cfc
	if (cr6.eq) goto loc_82AA9CFC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa9cfc
	if (cr6.eq) goto loc_82AA9CFC;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82AA9CD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa9cfc
	if (cr6.eq) goto loc_82AA9CFC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82aa9cfc
	if (cr6.lt) goto loc_82AA9CFC;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82aa9d00
	if (!cr6.gt) goto loc_82AA9D00;
loc_82AA9CFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AA9D00:
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

__attribute__((alias("__imp__sub_82AA9D18"))) PPC_WEAK_FUNC(sub_82AA9D18);
PPC_FUNC_IMPL(__imp__sub_82AA9D18) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8306c810
	ctx.lr = 0x82AA9D40;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa9d54
	if (cr6.eq) goto loc_82AA9D54;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x82aa9d78
	goto loc_82AA9D78;
loc_82AA9D54:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306c890
	ctx.lr = 0x82AA9D64;
	sub_8306C890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_82AA9D78:
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

__attribute__((alias("__imp__sub_82AA9D90"))) PPC_WEAK_FUNC(sub_82AA9D90);
PPC_FUNC_IMPL(__imp__sub_82AA9D90) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15832
	ctx.r9.s64 = ctx.r11.s64 + -15832;
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
	// bl 0x82beb058
	ctx.lr = 0x82AA9DC8;
	sub_82BEB058(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aa9de0
	if (cr6.eq) goto loc_82AA9DE0;
	// bl 0x82416268
	ctx.lr = 0x82AA9DDC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AA9DE0:
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

__attribute__((alias("__imp__sub_82AA9DF8"))) PPC_WEAK_FUNC(sub_82AA9DF8);
PPC_FUNC_IMPL(__imp__sub_82AA9DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AA9E00;
	__savegprlr_27(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x8376e6c0
	ctx.lr = 0x82AA9E20;
	sub_8376E6C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8376e928
	ctx.lr = 0x82AA9E28;
	sub_8376E928(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82aa9e54
	if (cr6.eq) goto loc_82AA9E54;
loc_82AA9E38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b399d8
	ctx.lr = 0x82AA9E44;
	sub_82B399D8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82aa9e38
	if (!cr6.eq) goto loc_82AA9E38;
loc_82AA9E54:
	// bl 0x83763ef8
	ctx.lr = 0x82AA9E58;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82aa9e88
	if (!cr6.eq) goto loc_82AA9E88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82aa9fc0
	if (cr6.eq) goto loc_82AA9FC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AA9E80;
	sub_825952B8(ctx, base);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AA9E88:
	// li r5,480
	ctx.r5.s64 = 480;
	// lwz r31,168(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x831cdcf0
	ctx.lr = 0x82AA9E9C;
	sub_831CDCF0(ctx, base);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aa9ec8
	if (cr6.eq) goto loc_82AA9EC8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x8306e988
	ctx.lr = 0x82AA9EB4;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83773c28
	ctx.lr = 0x82AA9EC8;
	sub_83773C28(ctx, base);
loc_82AA9EC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b371c0
	ctx.lr = 0x82AA9ED8;
	sub_82B371C0(ctx, base);
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8306c810
	ctx.lr = 0x82AA9EE8;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa9efc
	if (cr6.eq) goto loc_82AA9EFC;
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x82aa9f20
	goto loc_82AA9F20;
loc_82AA9EFC:
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8306c890
	ctx.lr = 0x82AA9F0C;
	sub_8306C890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r10
	ctx.r30.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_82AA9F20:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82aa9fa4
	if (cr6.eq) goto loc_82AA9FA4;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r27,-1
	ctx.r27.s64 = -1;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_82AA9F38:
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8306c810
	ctx.lr = 0x82AA9F4C;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa9f78
	if (cr6.eq) goto loc_82AA9F78;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aa9f78
	if (cr6.eq) goto loc_82AA9F78;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bctrl 
	ctx.lr = 0x82AA9F78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AA9F78:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82aa9f8c
	if (!cr6.gt) goto loc_82AA9F8C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82AA9F8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b371c0
	ctx.lr = 0x82AA9F98;
	sub_82B371C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82aa9f38
	if (cr6.lt) goto loc_82AA9F38;
loc_82AA9FA4:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82aa9fc0
	if (cr6.eq) goto loc_82AA9FC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AA9FC0;
	sub_825952B8(ctx, base);
loc_82AA9FC0:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AA9FC8"))) PPC_WEAK_FUNC(sub_82AA9FC8);
PPC_FUNC_IMPL(__imp__sub_82AA9FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AA9FD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AA9FF4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaa048
	if (cr6.eq) goto loc_82AAA048;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82beaf70
	ctx.lr = 0x82AAA010;
	sub_82BEAF70(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32085
	ctx.r9.s64 = -2102722560;
	// addi r8,r11,-15832
	ctx.r8.s64 = ctx.r11.s64 + -15832;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-25608
	ctx.r6.s64 = ctx.r9.s64 + -25608;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82aa9df8
	ctx.lr = 0x82AAA03C;
	sub_82AA9DF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AAA048:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAA054"))) PPC_WEAK_FUNC(sub_82AAA054);
PPC_FUNC_IMPL(__imp__sub_82AAA054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA058"))) PPC_WEAK_FUNC(sub_82AAA058);
PPC_FUNC_IMPL(__imp__sub_82AAA058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aaa068
	if (cr6.lt) goto loc_82AAA068;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AAA068:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82aa9fc8
	sub_82AA9FC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAA070"))) PPC_WEAK_FUNC(sub_82AAA070);
PPC_FUNC_IMPL(__imp__sub_82AAA070) {
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
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// lis r10,244
	ctx.r10.s64 = 15990784;
	// ori r9,r11,26
	ctx.r9.u64 = ctx.r11.u64 | 26;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r8,-15076
	ctx.r3.s64 = ctx.r8.s64 + -15076;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82AAA0B8;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaa0dc
	if (cr6.eq) goto loc_82AAA0DC;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ac30
	ctx.lr = 0x82AAA0D0;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82AAA0DC;
	sub_83103100(ctx, base);
loc_82AAA0DC:
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

__attribute__((alias("__imp__sub_82AAA0F4"))) PPC_WEAK_FUNC(sub_82AAA0F4);
PPC_FUNC_IMPL(__imp__sub_82AAA0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA0F8"))) PPC_WEAK_FUNC(sub_82AAA0F8);
PPC_FUNC_IMPL(__imp__sub_82AAA0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-15020
	ctx.r5.s64 = ctx.r11.s64 + -15020;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAA108"))) PPC_WEAK_FUNC(sub_82AAA108);
PPC_FUNC_IMPL(__imp__sub_82AAA108) {
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
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8306c810
	ctx.lr = 0x82AAA130;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aaa18c
	if (cr6.eq) goto loc_82AAA18C;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82aaa18c
	if (cr6.eq) goto loc_82AAA18C;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82aaa18c
	if (cr6.lt) goto loc_82AAA18C;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82aaa18c
	if (cr6.gt) goto loc_82AAA18C;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82AAA178;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_82AAA18C:
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

__attribute__((alias("__imp__sub_82AAA1A4"))) PPC_WEAK_FUNC(sub_82AAA1A4);
PPC_FUNC_IMPL(__imp__sub_82AAA1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA1A8"))) PPC_WEAK_FUNC(sub_82AAA1A8);
PPC_FUNC_IMPL(__imp__sub_82AAA1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82AAA1B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,116
	ctx.r29.s64 = ctx.r3.s64 + 116;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82aa9d18
	ctx.lr = 0x82AAA1C8;
	sub_82AA9D18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaa270
	if (cr6.eq) goto loc_82AAA270;
	// addi r28,r26,100
	ctx.r28.s64 = ctx.r26.s64 + 100;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AAA1E0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82aaa344
	if (!cr6.gt) goto loc_82AAA344;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8306c810
	ctx.lr = 0x82AAA218;
	sub_8306C810(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82aaa260
	if (cr6.eq) goto loc_82AAA260;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82aaa260
	if (cr6.eq) goto loc_82AAA260;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82aaa260
	if (cr6.lt) goto loc_82AAA260;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82aaa260
	if (cr6.gt) goto loc_82AAA260;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82AAA260;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AAA260:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x82aaa1e0
	if (cr6.lt) goto loc_82AAA1E0;
loc_82AAA270:
	// bl 0x83763ef8
	ctx.lr = 0x82AAA274;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaa298
	if (cr6.eq) goto loc_82AAA298;
	// lwz r30,96(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x83763ef8
	ctx.lr = 0x82AAA288;
	sub_83763EF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83775270
	ctx.lr = 0x82AAA298;
	sub_83775270(ctx, base);
loc_82AAA298:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x82AAA2B0;
	sub_8306C7A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82aaa304
	if (cr6.eq) goto loc_82AAA304;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aaa304
	if (cr6.eq) goto loc_82AAA304;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82AAA2D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aaa304
	if (cr6.eq) goto loc_82AAA304;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82aaa304
	if (cr6.lt) goto loc_82AAA304;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82aaa308
	if (!cr6.gt) goto loc_82AAA308;
loc_82AAA304:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AAA308:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aaa338
	if (cr6.eq) goto loc_82AAA338;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aaa338
	if (cr6.eq) goto loc_82AAA338;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aaa338
	if (cr6.eq) goto loc_82AAA338;
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x82d84728
	ctx.lr = 0x82AAA338;
	sub_82D84728(ctx, base);
loc_82AAA338:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82AAA344:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AAA350;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82AAA350"))) PPC_WEAK_FUNC(sub_82AAA350);
PPC_FUNC_IMPL(__imp__sub_82AAA350) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14928
	ctx.r9.s64 = ctx.r11.s64 + -14928;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82aaa398
	if (cr6.eq) goto loc_82AAA398;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AAA398;
	sub_825952B8(ctx, base);
loc_82AAA398:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82AAA3B0;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82AAA3C4"))) PPC_WEAK_FUNC(sub_82AAA3C4);
PPC_FUNC_IMPL(__imp__sub_82AAA3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA3C8"))) PPC_WEAK_FUNC(sub_82AAA3C8);
PPC_FUNC_IMPL(__imp__sub_82AAA3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AAA3D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82AAA3E4;
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
	ctx.lr = 0x82AAA3FC;
	sub_82D253F8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14928
	ctx.r9.s64 = ctx.r11.s64 + -14928;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// addi r30,r31,116
	ctx.r30.s64 = ctx.r31.s64 + 116;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// li r5,480
	ctx.r5.s64 = 480;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82AAA440;
	sub_831CDCF0(ctx, base);
	// addi r29,r31,596
	ctx.r29.s64 = ctx.r31.s64 + 596;
	// li r5,480
	ctx.r5.s64 = 480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82AAA454;
	sub_831CDCF0(ctx, base);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r6,-15204
	ctx.r28.s64 = ctx.r6.s64 + -15204;
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
	// bl 0x82d20ae0
	ctx.lr = 0x82AAA468;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82AAA478;
	sub_82D23390(ctx, base);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82AAA488;
	sub_831CDCF0(ctx, base);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82AAA498;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAA4A4"))) PPC_WEAK_FUNC(sub_82AAA4A4);
PPC_FUNC_IMPL(__imp__sub_82AAA4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA4A8"))) PPC_WEAK_FUNC(sub_82AAA4A8);
PPC_FUNC_IMPL(__imp__sub_82AAA4A8) {
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
	// bl 0x82aaa350
	ctx.lr = 0x82AAA4C8;
	sub_82AAA350(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aaa4e0
	if (cr6.eq) goto loc_82AAA4E0;
	// bl 0x82416268
	ctx.lr = 0x82AAA4DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAA4E0:
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

__attribute__((alias("__imp__sub_82AAA4F8"))) PPC_WEAK_FUNC(sub_82AAA4F8);
PPC_FUNC_IMPL(__imp__sub_82AAA4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82AAA500;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82AAA51C;
	sub_83763EF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaa870
	if (cr6.eq) goto loc_82AAA870;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AAA530;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AAA538;
	sub_82D33DB0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaa870
	if (cr6.eq) goto loc_82AAA870;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r23,r11,-15092
	ctx.r23.s64 = ctx.r11.s64 + -15092;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// addi r4,r23,-60
	ctx.r4.s64 = ctx.r23.s64 + -60;
	// bl 0x837b0c10
	ctx.lr = 0x82AAA56C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x82d21bf8
	ctx.lr = 0x82AAA57C;
	sub_82D21BF8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// clrlwi r24,r31,24
	ctx.r24.u64 = ctx.r31.u32 & 0xFF;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// lis r21,-31777
	ctx.r21.s64 = -2082537472;
loc_82AAA598:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82aaa5e0
	if (cr6.eq) goto loc_82AAA5E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82AAA5A8;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82aaa5b8
	if (!cr6.eq) goto loc_82AAA5B8;
	// addi r3,r30,596
	ctx.r3.s64 = ctx.r30.s64 + 596;
	// b 0x82aaa680
	goto loc_82AAA680;
loc_82AAA5B8:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82aaa7ac
	if (!cr6.gt) goto loc_82AAA7AC;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82AAA5DC;
	sub_835977D8(ctx, base);
	// b 0x82aaa6b4
	goto loc_82AAA6B4;
loc_82AAA5E0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82aaa630
	if (!cr6.eq) goto loc_82AAA630;
	// lwz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// ori r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 1;
	// lwz r10,-19792(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + -19792);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82aaa61c
	if (!cr6.eq) goto loc_82AAA61C;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82aaa620
	if (cr6.eq) goto loc_82AAA620;
loc_82AAA61C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82AAA620:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82aaa634
	if (cr6.eq) goto loc_82AAA634;
loc_82AAA630:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82AAA634:
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82aaa648
	if (cr6.eq) goto loc_82AAA648;
	// rlwinm r28,r28,0,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_82AAA648:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aaa67c
	if (cr6.eq) goto loc_82AAA67C;
	// lwz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x82AAA668;
	sub_835977D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82AAA678;
	sub_82D1EAC0(ctx, base);
	// b 0x82aaa6b4
	goto loc_82AAA6B4;
loc_82AAA67C:
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
loc_82AAA680:
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82aa9c78
	ctx.lr = 0x82AAA690;
	sub_82AA9C78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ble cr6,0x82aaa6a8
	if (!cr6.gt) goto loc_82AAA6A8;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
loc_82AAA6A8:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82AAA6B4;
	sub_835977D8(ctx, base);
loc_82AAA6B4:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r27,12
	cr6.compare<uint32_t>(ctx.r27.u32, 12, xer);
	// blt cr6,0x82aaa598
	if (cr6.lt) goto loc_82AAA598;
	// addi r26,r30,100
	ctx.r26.s64 = ctx.r30.s64 + 100;
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82aa2cc0
	ctx.lr = 0x82AAA6DC;
	sub_82AA2CC0(ctx, base);
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r24,100(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82AAA6EC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AAA6F8;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaa844
	if (cr6.eq) goto loc_82AAA844;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// addi r4,r23,-32
	ctx.r4.s64 = ctx.r23.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAA720;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaa844
	if (cr6.eq) goto loc_82AAA844;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r23,-24
	ctx.r4.s64 = ctx.r23.s64 + -24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAA744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaa844
	if (cr6.eq) goto loc_82AAA844;
	// subf r11,r25,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r25.s64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// ble cr6,0x82aaa878
	if (!cr6.gt) goto loc_82AAA878;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,-19792(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -19792);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82aaa7b8
	if (!cr6.eq) goto loc_82AAA7B8;
	// addi r4,r23,-16
	ctx.r4.s64 = ctx.r23.s64 + -16;
	// bctrl 
	ctx.lr = 0x82AAA794;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x82d29598
	ctx.lr = 0x82AAA7A4;
	sub_82D29598(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82aaa82c
	goto loc_82AAA82C;
loc_82AAA7AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AAA7B8;
	sub_831CC188(ctx, base);
loc_82AAA7B8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82AAA7C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82AAA7C4;
	sub_831156E8(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82AAA7D0;
	sub_8311C148(ctx, base);
	// lwz r9,324(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82aaa7ec
	if (cr6.eq) goto loc_82AAA7EC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82AAA7EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82AAA800;
	sub_82D329F8(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82AAA80C;
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
	ctx.lr = 0x82AAA820;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82AAA828;
	sub_8387E8E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_82AAA82C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82AAA838;
	sub_82D2AEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835977d8
	ctx.lr = 0x82AAA844;
	sub_835977D8(ctx, base);
loc_82AAA844:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// blt cr6,0x82aaa6ec
	if (cr6.lt) goto loc_82AAA6EC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82aaa870
	if (cr6.eq) goto loc_82AAA870;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82AAA870;
	sub_825952B8(ctx, base);
loc_82AAA870:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82AAA878:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AAA884;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82AAA884"))) PPC_WEAK_FUNC(sub_82AAA884);
PPC_FUNC_IMPL(__imp__sub_82AAA884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA888"))) PPC_WEAK_FUNC(sub_82AAA888);
PPC_FUNC_IMPL(__imp__sub_82AAA888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r4,r3,596
	ctx.r4.s64 = ctx.r3.s64 + 596;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82aaa4f8
	sub_82AAA4F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAA89C"))) PPC_WEAK_FUNC(sub_82AAA89C);
PPC_FUNC_IMPL(__imp__sub_82AAA89C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA8A0"))) PPC_WEAK_FUNC(sub_82AAA8A0);
PPC_FUNC_IMPL(__imp__sub_82AAA8A0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-19792(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19792);
	// bl 0x83763ef8
	ctx.lr = 0x82AAA8C4;
	sub_83763EF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r31.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,26
	ctx.r5.s64 = 26;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r31,r9,-15028
	ctx.r31.s64 = ctx.r9.s64 + -15028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x8259cc28
	ctx.lr = 0x82AAA8F4;
	sub_8259CC28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82AAA8FC;
	sub_82D1C1A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d22d48
	ctx.lr = 0x82AAA90C;
	sub_82D22D48(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82AAA91C;
	sub_82D20DA8(ctx, base);
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

__attribute__((alias("__imp__sub_82AAA934"))) PPC_WEAK_FUNC(sub_82AAA934);
PPC_FUNC_IMPL(__imp__sub_82AAA934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA938"))) PPC_WEAK_FUNC(sub_82AAA938);
PPC_FUNC_IMPL(__imp__sub_82AAA938) {
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
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aaa960
	if (cr6.lt) goto loc_82AAA960;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82aaa964
	goto loc_82AAA964;
loc_82AAA960:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AAA964:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1076
	ctx.r4.s64 = 1076;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AAA980;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaa998
	if (cr6.eq) goto loc_82AAA998;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aaa3c8
	ctx.lr = 0x82AAA994;
	sub_82AAA3C8(ctx, base);
	// b 0x82aaa99c
	goto loc_82AAA99C;
loc_82AAA998:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAA99C:
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

__attribute__((alias("__imp__sub_82AAA9B4"))) PPC_WEAK_FUNC(sub_82AAA9B4);
PPC_FUNC_IMPL(__imp__sub_82AAA9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA9B8"))) PPC_WEAK_FUNC(sub_82AAA9B8);
PPC_FUNC_IMPL(__imp__sub_82AAA9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AAA9C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AAA9CC;
	sub_82D19A78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,-15164
	ctx.r29.s64 = ctx.r11.s64 + -15164;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAA9EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82AAA9F0;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaaae0
	if (cr6.eq) goto loc_82AAAAE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AAAA04;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AAAA0C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaaae0
	if (cr6.eq) goto loc_82AAAAE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AAAA1C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAAA34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaaa4c
	if (cr6.eq) goto loc_82AAAA4C;
	// lis r4,38
	ctx.r4.s64 = 2490368;
	// ori r4,r4,144
	ctx.r4.u64 = ctx.r4.u64 | 144;
	// bl 0x82d303d0
	ctx.lr = 0x82AAAA4C;
	sub_82D303D0(ctx, base);
loc_82AAAA4C:
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r29,r31,116
	ctx.r29.s64 = ctx.r31.s64 + 116;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaaa88
	if (cr6.eq) goto loc_82AAAA88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8306e988
	ctx.lr = 0x82AAAA74;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83773c28
	ctx.lr = 0x82AAAA88;
	sub_83773C28(ctx, base);
loc_82AAAA88:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,596
	ctx.r4.s64 = ctx.r31.s64 + 596;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAAAA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaa4f8
	ctx.lr = 0x82AAAAB4;
	sub_82AAA4F8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AAAAC4;
	sub_82D19788(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,74
	ctx.r5.u64 = ctx.r5.u64 | 74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82AAAAD8;
	sub_82D20EB8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82be3b40
	ctx.lr = 0x82AAAAE0;
	sub_82BE3B40(ctx, base);
loc_82AAAAE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAAAEC"))) PPC_WEAK_FUNC(sub_82AAAAEC);
PPC_FUNC_IMPL(__imp__sub_82AAAAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAAF0"))) PPC_WEAK_FUNC(sub_82AAAAF0);
PPC_FUNC_IMPL(__imp__sub_82AAAAF0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8306e740
	ctx.lr = 0x82AAAB0C;
	sub_8306E740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82aaab2c
	if (!cr6.eq) goto loc_82AAAB2C;
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
loc_82AAAB2C:
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82AAAB38;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_82AAAB50"))) PPC_WEAK_FUNC(sub_82AAAB50);
PPC_FUNC_IMPL(__imp__sub_82AAAB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AAAB58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82aaab7c
	if (!cr6.eq) goto loc_82AAAB7C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AAAB7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8306e740
	ctx.lr = 0x82AAAB84;
	sub_8306E740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82aaab98
	if (!cr6.eq) goto loc_82AAAB98;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82aaaba8
	goto loc_82AAABA8;
loc_82AAAB98:
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82AAABA4;
	sub_831CE980(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82AAABA8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837725f0
	ctx.lr = 0x82AAABB8;
	sub_837725F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAABC0"))) PPC_WEAK_FUNC(sub_82AAABC0);
PPC_FUNC_IMPL(__imp__sub_82AAABC0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,41
	ctx.r3.s64 = 2686976;
	// ori r3,r3,88
	ctx.r3.u64 = ctx.r3.u64 | 88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAABCC"))) PPC_WEAK_FUNC(sub_82AAABCC);
PPC_FUNC_IMPL(__imp__sub_82AAABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAABD0"))) PPC_WEAK_FUNC(sub_82AAABD0);
PPC_FUNC_IMPL(__imp__sub_82AAABD0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14248
	ctx.r9.s64 = ctx.r11.s64 + -14248;
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
	// bl 0x82bdc910
	ctx.lr = 0x82AAAC08;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aaac20
	if (cr6.eq) goto loc_82AAAC20;
	// bl 0x82416268
	ctx.lr = 0x82AAAC1C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAAC20:
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

__attribute__((alias("__imp__sub_82AAAC38"))) PPC_WEAK_FUNC(sub_82AAAC38);
PPC_FUNC_IMPL(__imp__sub_82AAAC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AAAC40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AAAC4C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AAAC54;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82bdc948
	ctx.lr = 0x82AAAC6C;
	sub_82BDC948(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-14340
	ctx.r30.s64 = ctx.r11.s64 + -14340;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82AAAC88;
	sub_82D233B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AAAC94;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AAACAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaacc0
	if (cr6.eq) goto loc_82AAACC0;
	// lis r4,41
	ctx.r4.s64 = 2686976;
	// ori r4,r4,88
	ctx.r4.u64 = ctx.r4.u64 | 88;
	// bl 0x82d29598
	ctx.lr = 0x82AAACC0;
	sub_82D29598(ctx, base);
loc_82AAACC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AAACCC;
	sub_82D33DB0(ctx, base);
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
	ctx.lr = 0x82AAACE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaad58
	if (cr6.eq) goto loc_82AAAD58;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82a713f0
	ctx.lr = 0x82AAAD14;
	sub_82A713F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82a713f0
	ctx.lr = 0x82AAAD24;
	sub_82A713F0(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x82AAAD34;
	sub_82A713F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,255
	ctx.r7.s64 = 255;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r6,r11,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r10,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// rlwinm r4,r9,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFC;
	// bl 0x82d3bab8
	ctx.lr = 0x82AAAD58;
	sub_82D3BAB8(ctx, base);
loc_82AAAD58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAAD60"))) PPC_WEAK_FUNC(sub_82AAAD60);
PPC_FUNC_IMPL(__imp__sub_82AAAD60) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82AAAD80;
	sub_82BDC848(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// addi r9,r11,-14248
	ctx.r9.s64 = ctx.r11.s64 + -14248;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82AAADAC;
	sub_831CDCF0(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82AAADBC;
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

__attribute__((alias("__imp__sub_82AAADD8"))) PPC_WEAK_FUNC(sub_82AAADD8);
PPC_FUNC_IMPL(__imp__sub_82AAADD8) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82AAADF0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaae24
	if (cr6.eq) goto loc_82AAAE24;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// lwz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r8,200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// clrlwi r10,r8,25
	ctx.r10.u64 = ctx.r8.u32 & 0x7F;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82aaab50
	ctx.lr = 0x82AAAE24;
	sub_82AAAB50(ctx, base);
loc_82AAAE24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaac38
	ctx.lr = 0x82AAAE2C;
	sub_82AAAC38(ctx, base);
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,200
	ctx.r5.u64 = ctx.r5.u64 | 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82AAAE40;
	sub_82D20EB8(ctx, base);
	// lis r5,33
	ctx.r5.s64 = 2162688;
	// li r4,15
	ctx.r4.s64 = 15;
	// ori r5,r5,93
	ctx.r5.u64 = ctx.r5.u64 | 93;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82AAAE54;
	sub_82D20EB8(ctx, base);
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

__attribute__((alias("__imp__sub_82AAAE6C"))) PPC_WEAK_FUNC(sub_82AAAE6C);
PPC_FUNC_IMPL(__imp__sub_82AAAE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAE70"))) PPC_WEAK_FUNC(sub_82AAAE70);
PPC_FUNC_IMPL(__imp__sub_82AAAE70) {
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
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aaae98
	if (cr6.lt) goto loc_82AAAE98;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82aaae9c
	goto loc_82AAAE9C;
loc_82AAAE98:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AAAE9C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,332
	ctx.r4.s64 = 332;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AAAEB8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaaed0
	if (cr6.eq) goto loc_82AAAED0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aaad60
	ctx.lr = 0x82AAAECC;
	sub_82AAAD60(ctx, base);
	// b 0x82aaaed4
	goto loc_82AAAED4;
loc_82AAAED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AAAED4:
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

__attribute__((alias("__imp__sub_82AAAEEC"))) PPC_WEAK_FUNC(sub_82AAAEEC);
PPC_FUNC_IMPL(__imp__sub_82AAAEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAEF0"))) PPC_WEAK_FUNC(sub_82AAAEF0);
PPC_FUNC_IMPL(__imp__sub_82AAAEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r3,-19600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19600);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAEFC"))) PPC_WEAK_FUNC(sub_82AAAEFC);
PPC_FUNC_IMPL(__imp__sub_82AAAEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAF00"))) PPC_WEAK_FUNC(sub_82AAAF00);
PPC_FUNC_IMPL(__imp__sub_82AAAF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x82aaaf30
	if (!cr6.lt) goto loc_82AAAF30;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bge cr6,0x82aaaf30
	if (!cr6.lt) goto loc_82AAAF30;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r9,r10,-13644
	ctx.r9.s64 = ctx.r10.s64 + -13644;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82AAAF30:
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAF38"))) PPC_WEAK_FUNC(sub_82AAAF38);
PPC_FUNC_IMPL(__imp__sub_82AAAF38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AAAF40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,244
	ctx.r4.s64 = 244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AAAF64;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aaafa4
	if (cr6.eq) goto loc_82AAAFA4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c073f8
	ctx.lr = 0x82AAAF80;
	sub_82C073F8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-13480
	ctx.r9.s64 = ctx.r11.s64 + -13480;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AAAFA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAAFB0"))) PPC_WEAK_FUNC(sub_82AAAFB0);
PPC_FUNC_IMPL(__imp__sub_82AAAFB0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-13480
	ctx.r9.s64 = ctx.r11.s64 + -13480;
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
	// bl 0x82c07308
	ctx.lr = 0x82AAAFE8;
	sub_82C07308(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aab000
	if (cr6.eq) goto loc_82AAB000;
	// bl 0x82416268
	ctx.lr = 0x82AAAFFC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAB000:
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

__attribute__((alias("__imp__sub_82AAB018"))) PPC_WEAK_FUNC(sub_82AAB018);
PPC_FUNC_IMPL(__imp__sub_82AAB018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aab028
	if (cr6.lt) goto loc_82AAB028;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AAB028:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82aaaf38
	sub_82AAAF38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB030"))) PPC_WEAK_FUNC(sub_82AAB030);
PPC_FUNC_IMPL(__imp__sub_82AAB030) {
	PPC_FUNC_PROLOGUE();
	// lis r3,41
	ctx.r3.s64 = 2686976;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB03C"))) PPC_WEAK_FUNC(sub_82AAB03C);
PPC_FUNC_IMPL(__imp__sub_82AAB03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB040"))) PPC_WEAK_FUNC(sub_82AAB040);
PPC_FUNC_IMPL(__imp__sub_82AAB040) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB048"))) PPC_WEAK_FUNC(sub_82AAB048);
PPC_FUNC_IMPL(__imp__sub_82AAB048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r3,-19468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19468);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB054"))) PPC_WEAK_FUNC(sub_82AAB054);
PPC_FUNC_IMPL(__imp__sub_82AAB054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB058"))) PPC_WEAK_FUNC(sub_82AAB058);
PPC_FUNC_IMPL(__imp__sub_82AAB058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82aab068
	if (cr6.lt) goto loc_82AAB068;
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
loc_82AAB068:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12900
	ctx.r9.s64 = ctx.r11.s64 + -12900;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB07C"))) PPC_WEAK_FUNC(sub_82AAB07C);
PPC_FUNC_IMPL(__imp__sub_82AAB07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB080"))) PPC_WEAK_FUNC(sub_82AAB080);
PPC_FUNC_IMPL(__imp__sub_82AAB080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AAB088;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AAB0AC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aab0e8
	if (cr6.eq) goto loc_82AAB0E8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c07980
	ctx.lr = 0x82AAB0C4;
	sub_82C07980(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12760
	ctx.r9.s64 = ctx.r11.s64 + -12760;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AAB0E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB0F4"))) PPC_WEAK_FUNC(sub_82AAB0F4);
PPC_FUNC_IMPL(__imp__sub_82AAB0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB0F8"))) PPC_WEAK_FUNC(sub_82AAB0F8);
PPC_FUNC_IMPL(__imp__sub_82AAB0F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12760
	ctx.r9.s64 = ctx.r11.s64 + -12760;
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
	// bl 0x82c07820
	ctx.lr = 0x82AAB130;
	sub_82C07820(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aab148
	if (cr6.eq) goto loc_82AAB148;
	// bl 0x82416268
	ctx.lr = 0x82AAB144;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAB148:
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

__attribute__((alias("__imp__sub_82AAB160"))) PPC_WEAK_FUNC(sub_82AAB160);
PPC_FUNC_IMPL(__imp__sub_82AAB160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aab170
	if (cr6.lt) goto loc_82AAB170;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AAB170:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82aab080
	sub_82AAB080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB178"))) PPC_WEAK_FUNC(sub_82AAB178);
PPC_FUNC_IMPL(__imp__sub_82AAB178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-11644
	ctx.r3.s64 = ctx.r11.s64 + -11644;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB184"))) PPC_WEAK_FUNC(sub_82AAB184);
PPC_FUNC_IMPL(__imp__sub_82AAB184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB188"))) PPC_WEAK_FUNC(sub_82AAB188);
PPC_FUNC_IMPL(__imp__sub_82AAB188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-11636
	ctx.r3.s64 = ctx.r11.s64 + -11636;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB194"))) PPC_WEAK_FUNC(sub_82AAB194);
PPC_FUNC_IMPL(__imp__sub_82AAB194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB198"))) PPC_WEAK_FUNC(sub_82AAB198);
PPC_FUNC_IMPL(__imp__sub_82AAB198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19324
	ctx.r9.s64 = ctx.r11.s64 + -19324;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB1AC"))) PPC_WEAK_FUNC(sub_82AAB1AC);
PPC_FUNC_IMPL(__imp__sub_82AAB1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB1B0"))) PPC_WEAK_FUNC(sub_82AAB1B0);
PPC_FUNC_IMPL(__imp__sub_82AAB1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-11628
	ctx.r9.s64 = ctx.r11.s64 + -11628;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB1C4"))) PPC_WEAK_FUNC(sub_82AAB1C4);
PPC_FUNC_IMPL(__imp__sub_82AAB1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB1C8"))) PPC_WEAK_FUNC(sub_82AAB1C8);
PPC_FUNC_IMPL(__imp__sub_82AAB1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19336
	ctx.r9.s64 = ctx.r11.s64 + -19336;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB1DC"))) PPC_WEAK_FUNC(sub_82AAB1DC);
PPC_FUNC_IMPL(__imp__sub_82AAB1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB1E0"))) PPC_WEAK_FUNC(sub_82AAB1E0);
PPC_FUNC_IMPL(__imp__sub_82AAB1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12124
	ctx.r9.s64 = ctx.r11.s64 + -12124;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB1F4"))) PPC_WEAK_FUNC(sub_82AAB1F4);
PPC_FUNC_IMPL(__imp__sub_82AAB1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB1F8"))) PPC_WEAK_FUNC(sub_82AAB1F8);
PPC_FUNC_IMPL(__imp__sub_82AAB1F8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r8,r10,-12112
	ctx.r8.s64 = ctx.r10.s64 + -12112;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB218"))) PPC_WEAK_FUNC(sub_82AAB218);
PPC_FUNC_IMPL(__imp__sub_82AAB218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AAB220;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,412
	ctx.r4.s64 = 412;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AAB244;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aab280
	if (cr6.eq) goto loc_82AAB280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c09070
	ctx.lr = 0x82AAB25C;
	sub_82C09070(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11992
	ctx.r9.s64 = ctx.r11.s64 + -11992;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AAB280:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB28C"))) PPC_WEAK_FUNC(sub_82AAB28C);
PPC_FUNC_IMPL(__imp__sub_82AAB28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB290"))) PPC_WEAK_FUNC(sub_82AAB290);
PPC_FUNC_IMPL(__imp__sub_82AAB290) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11992
	ctx.r9.s64 = ctx.r11.s64 + -11992;
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
	// bl 0x82c08440
	ctx.lr = 0x82AAB2C8;
	sub_82C08440(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aab2e0
	if (cr6.eq) goto loc_82AAB2E0;
	// bl 0x82416268
	ctx.lr = 0x82AAB2DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAB2E0:
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

__attribute__((alias("__imp__sub_82AAB2F8"))) PPC_WEAK_FUNC(sub_82AAB2F8);
PPC_FUNC_IMPL(__imp__sub_82AAB2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AAB300;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82AAB30C;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aab354
	if (cr6.eq) goto loc_82AAB354;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x82bdbb88
	ctx.lr = 0x82AAB328;
	sub_82BDBB88(ctx, base);
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
	ctx.lr = 0x82AAB348;
	sub_82BD9E08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdc238
	ctx.lr = 0x82AAB354;
	sub_82BDC238(ctx, base);
loc_82AAB354:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-12124
	ctx.r11.s64 = ctx.r11.s64 + -12124;
	// addi r28,r27,96
	ctx.r28.s64 = ctx.r27.s64 + 96;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AAB36C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x82AAB380;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aab3d4
	if (cr6.eq) goto loc_82AAB3D4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aab3d4
	if (cr6.eq) goto loc_82AAB3D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82AAB3A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aab3d4
	if (cr6.eq) goto loc_82AAB3D4;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82aab3d4
	if (cr6.lt) goto loc_82AAB3D4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82aab3d8
	if (!cr6.gt) goto loc_82AAB3D8;
loc_82AAB3D4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82AAB3D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aab3f8
	if (cr6.eq) goto loc_82AAB3F8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c08670
	ctx.lr = 0x82AAB3F8;
	sub_82C08670(ctx, base);
loc_82AAB3F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82aab36c
	if (cr6.lt) goto loc_82AAB36C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB414"))) PPC_WEAK_FUNC(sub_82AAB414);
PPC_FUNC_IMPL(__imp__sub_82AAB414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB418"))) PPC_WEAK_FUNC(sub_82AAB418);
PPC_FUNC_IMPL(__imp__sub_82AAB418) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bge cr6,0x82aab458
	if (!cr6.lt) goto loc_82AAB458;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-12124
	ctx.r8.s64 = ctx.r10.s64 + -12124;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82a713f0
	ctx.lr = 0x82AAB454;
	sub_82A713F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82AAB458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB468"))) PPC_WEAK_FUNC(sub_82AAB468);
PPC_FUNC_IMPL(__imp__sub_82AAB468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AAB470;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bge cr6,0x82aab4fc
	if (!cr6.lt) goto loc_82AAB4FC;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r30,r10,-12112
	ctx.r30.s64 = ctx.r10.s64 + -12112;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r29,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82a713f0
	ctx.lr = 0x82AAB4BC;
	sub_82A713F0(ctx, base);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwzx r5,r29,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// bl 0x82a713f0
	ctx.lr = 0x82AAB4D0;
	sub_82A713F0(ctx, base);
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r29,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// bl 0x82a713f0
	ctx.lr = 0x82AAB4E4;
	sub_82A713F0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_82AAB4FC:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r3,255
	ctx.r3.s64 = 255;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwimi r3,r7,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB51C"))) PPC_WEAK_FUNC(sub_82AAB51C);
PPC_FUNC_IMPL(__imp__sub_82AAB51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB520"))) PPC_WEAK_FUNC(sub_82AAB520);
PPC_FUNC_IMPL(__imp__sub_82AAB520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aab530
	if (cr6.lt) goto loc_82AAB530;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AAB530:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82aab218
	sub_82AAB218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB538"))) PPC_WEAK_FUNC(sub_82AAB538);
PPC_FUNC_IMPL(__imp__sub_82AAB538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r3,-19176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19176);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB544"))) PPC_WEAK_FUNC(sub_82AAB544);
PPC_FUNC_IMPL(__imp__sub_82AAB544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB548"))) PPC_WEAK_FUNC(sub_82AAB548);
PPC_FUNC_IMPL(__imp__sub_82AAB548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x82aab578
	if (!cr6.lt) goto loc_82AAB578;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bge cr6,0x82aab578
	if (!cr6.lt) goto loc_82AAB578;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r9,r10,-11348
	ctx.r9.s64 = ctx.r10.s64 + -11348;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82AAB578:
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB580"))) PPC_WEAK_FUNC(sub_82AAB580);
PPC_FUNC_IMPL(__imp__sub_82AAB580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AAB588;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,244
	ctx.r4.s64 = 244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AAB5AC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aab5ec
	if (cr6.eq) goto loc_82AAB5EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c073f8
	ctx.lr = 0x82AAB5C8;
	sub_82C073F8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11176
	ctx.r9.s64 = ctx.r11.s64 + -11176;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AAB5EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB5F8"))) PPC_WEAK_FUNC(sub_82AAB5F8);
PPC_FUNC_IMPL(__imp__sub_82AAB5F8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11176
	ctx.r9.s64 = ctx.r11.s64 + -11176;
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
	// bl 0x82c07308
	ctx.lr = 0x82AAB630;
	sub_82C07308(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aab648
	if (cr6.eq) goto loc_82AAB648;
	// bl 0x82416268
	ctx.lr = 0x82AAB644;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAB648:
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

__attribute__((alias("__imp__sub_82AAB660"))) PPC_WEAK_FUNC(sub_82AAB660);
PPC_FUNC_IMPL(__imp__sub_82AAB660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aab670
	if (cr6.lt) goto loc_82AAB670;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AAB670:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82aab580
	sub_82AAB580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB678"))) PPC_WEAK_FUNC(sub_82AAB678);
PPC_FUNC_IMPL(__imp__sub_82AAB678) {
	PPC_FUNC_PROLOGUE();
	// lis r3,41
	ctx.r3.s64 = 2686976;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB684"))) PPC_WEAK_FUNC(sub_82AAB684);
PPC_FUNC_IMPL(__imp__sub_82AAB684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB688"))) PPC_WEAK_FUNC(sub_82AAB688);
PPC_FUNC_IMPL(__imp__sub_82AAB688) {
	PPC_FUNC_PROLOGUE();
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB690"))) PPC_WEAK_FUNC(sub_82AAB690);
PPC_FUNC_IMPL(__imp__sub_82AAB690) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB698"))) PPC_WEAK_FUNC(sub_82AAB698);
PPC_FUNC_IMPL(__imp__sub_82AAB698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r3,-19044(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19044);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB6A4"))) PPC_WEAK_FUNC(sub_82AAB6A4);
PPC_FUNC_IMPL(__imp__sub_82AAB6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB6A8"))) PPC_WEAK_FUNC(sub_82AAB6A8);
PPC_FUNC_IMPL(__imp__sub_82AAB6A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x82aab6b8
	if (cr6.lt) goto loc_82AAB6B8;
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
loc_82AAB6B8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-10596
	ctx.r9.s64 = ctx.r11.s64 + -10596;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB6CC"))) PPC_WEAK_FUNC(sub_82AAB6CC);
PPC_FUNC_IMPL(__imp__sub_82AAB6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB6D0"))) PPC_WEAK_FUNC(sub_82AAB6D0);
PPC_FUNC_IMPL(__imp__sub_82AAB6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AAB6D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AAB6FC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aab738
	if (cr6.eq) goto loc_82AAB738;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c07980
	ctx.lr = 0x82AAB714;
	sub_82C07980(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-10456
	ctx.r9.s64 = ctx.r11.s64 + -10456;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AAB738:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB744"))) PPC_WEAK_FUNC(sub_82AAB744);
PPC_FUNC_IMPL(__imp__sub_82AAB744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB748"))) PPC_WEAK_FUNC(sub_82AAB748);
PPC_FUNC_IMPL(__imp__sub_82AAB748) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-10456
	ctx.r9.s64 = ctx.r11.s64 + -10456;
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
	// bl 0x82c07820
	ctx.lr = 0x82AAB780;
	sub_82C07820(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aab798
	if (cr6.eq) goto loc_82AAB798;
	// bl 0x82416268
	ctx.lr = 0x82AAB794;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAB798:
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

__attribute__((alias("__imp__sub_82AAB7B0"))) PPC_WEAK_FUNC(sub_82AAB7B0);
PPC_FUNC_IMPL(__imp__sub_82AAB7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aab7c0
	if (cr6.lt) goto loc_82AAB7C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AAB7C0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82aab6d0
	sub_82AAB6D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB7C8"))) PPC_WEAK_FUNC(sub_82AAB7C8);
PPC_FUNC_IMPL(__imp__sub_82AAB7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-18896
	ctx.r9.s64 = ctx.r11.s64 + -18896;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB7DC"))) PPC_WEAK_FUNC(sub_82AAB7DC);
PPC_FUNC_IMPL(__imp__sub_82AAB7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB7E0"))) PPC_WEAK_FUNC(sub_82AAB7E0);
PPC_FUNC_IMPL(__imp__sub_82AAB7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-9316
	ctx.r9.s64 = ctx.r11.s64 + -9316;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB7F4"))) PPC_WEAK_FUNC(sub_82AAB7F4);
PPC_FUNC_IMPL(__imp__sub_82AAB7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB7F8"))) PPC_WEAK_FUNC(sub_82AAB7F8);
PPC_FUNC_IMPL(__imp__sub_82AAB7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-18912
	ctx.r9.s64 = ctx.r11.s64 + -18912;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB80C"))) PPC_WEAK_FUNC(sub_82AAB80C);
PPC_FUNC_IMPL(__imp__sub_82AAB80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB810"))) PPC_WEAK_FUNC(sub_82AAB810);
PPC_FUNC_IMPL(__imp__sub_82AAB810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-9812
	ctx.r9.s64 = ctx.r11.s64 + -9812;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB824"))) PPC_WEAK_FUNC(sub_82AAB824);
PPC_FUNC_IMPL(__imp__sub_82AAB824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB828"))) PPC_WEAK_FUNC(sub_82AAB828);
PPC_FUNC_IMPL(__imp__sub_82AAB828) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r8,r10,-9796
	ctx.r8.s64 = ctx.r10.s64 + -9796;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB848"))) PPC_WEAK_FUNC(sub_82AAB848);
PPC_FUNC_IMPL(__imp__sub_82AAB848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AAB850;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,412
	ctx.r4.s64 = 412;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AAB874;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aab8b0
	if (cr6.eq) goto loc_82AAB8B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c09070
	ctx.lr = 0x82AAB88C;
	sub_82C09070(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-9664
	ctx.r9.s64 = ctx.r11.s64 + -9664;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AAB8B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AAB8BC"))) PPC_WEAK_FUNC(sub_82AAB8BC);
PPC_FUNC_IMPL(__imp__sub_82AAB8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB8C0"))) PPC_WEAK_FUNC(sub_82AAB8C0);
PPC_FUNC_IMPL(__imp__sub_82AAB8C0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-9664
	ctx.r9.s64 = ctx.r11.s64 + -9664;
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
	// bl 0x82c08440
	ctx.lr = 0x82AAB8F8;
	sub_82C08440(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aab910
	if (cr6.eq) goto loc_82AAB910;
	// bl 0x82416268
	ctx.lr = 0x82AAB90C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AAB910:
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

__attribute__((alias("__imp__sub_82AAB928"))) PPC_WEAK_FUNC(sub_82AAB928);
PPC_FUNC_IMPL(__imp__sub_82AAB928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AAB930;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82AAB93C;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aab978
	if (cr6.eq) goto loc_82AAB978;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82bdbb88
	ctx.lr = 0x82AAB958;
	sub_82BDBB88(ctx, base);
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
	ctx.lr = 0x82AAB978;
	sub_82BD9E08(ctx, base);
loc_82AAB978:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-9812
	ctx.r11.s64 = ctx.r11.s64 + -9812;
	// addi r28,r27,96
	ctx.r28.s64 = ctx.r27.s64 + 96;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AAB990:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x82AAB9A4;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aab9f8
	if (cr6.eq) goto loc_82AAB9F8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aab9f8
	if (cr6.eq) goto loc_82AAB9F8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82AAB9CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aab9f8
	if (cr6.eq) goto loc_82AAB9F8;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82aab9f8
	if (cr6.lt) goto loc_82AAB9F8;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82aab9fc
	if (!cr6.gt) goto loc_82AAB9FC;
loc_82AAB9F8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82AAB9FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aaba1c
	if (cr6.eq) goto loc_82AABA1C;
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c08670
	ctx.lr = 0x82AABA1C;
	sub_82C08670(ctx, base);
loc_82AABA1C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x82aab990
	if (cr6.lt) goto loc_82AAB990;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AABA38"))) PPC_WEAK_FUNC(sub_82AABA38);
PPC_FUNC_IMPL(__imp__sub_82AABA38) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bge cr6,0x82aaba78
	if (!cr6.lt) goto loc_82AABA78;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-9812
	ctx.r8.s64 = ctx.r10.s64 + -9812;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82a713f0
	ctx.lr = 0x82AABA74;
	sub_82A713F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82AABA78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABA88"))) PPC_WEAK_FUNC(sub_82AABA88);
PPC_FUNC_IMPL(__imp__sub_82AABA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AABA90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bge cr6,0x82aabb1c
	if (!cr6.lt) goto loc_82AABB1C;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r30,r10,-9796
	ctx.r30.s64 = ctx.r10.s64 + -9796;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r29,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82a713f0
	ctx.lr = 0x82AABADC;
	sub_82A713F0(ctx, base);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwzx r5,r29,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// bl 0x82a713f0
	ctx.lr = 0x82AABAF0;
	sub_82A713F0(ctx, base);
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r29,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// bl 0x82a713f0
	ctx.lr = 0x82AABB04;
	sub_82A713F0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_82AABB1C:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r3,255
	ctx.r3.s64 = 255;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwimi r3,r7,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AABB3C"))) PPC_WEAK_FUNC(sub_82AABB3C);
PPC_FUNC_IMPL(__imp__sub_82AABB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AABB40"))) PPC_WEAK_FUNC(sub_82AABB40);
PPC_FUNC_IMPL(__imp__sub_82AABB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aabb50
	if (cr6.lt) goto loc_82AABB50;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AABB50:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82aab848
	sub_82AAB848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AABB58"))) PPC_WEAK_FUNC(sub_82AABB58);
PPC_FUNC_IMPL(__imp__sub_82AABB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r3,-18744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18744);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABB64"))) PPC_WEAK_FUNC(sub_82AABB64);
PPC_FUNC_IMPL(__imp__sub_82AABB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AABB68"))) PPC_WEAK_FUNC(sub_82AABB68);
PPC_FUNC_IMPL(__imp__sub_82AABB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bge cr6,0x82aabb98
	if (!cr6.lt) goto loc_82AABB98;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bge cr6,0x82aabb98
	if (!cr6.lt) goto loc_82AABB98;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r9,r10,-9028
	ctx.r9.s64 = ctx.r10.s64 + -9028;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82AABB98:
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABBA0"))) PPC_WEAK_FUNC(sub_82AABBA0);
PPC_FUNC_IMPL(__imp__sub_82AABBA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AABBA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,244
	ctx.r4.s64 = 244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AABBCC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aabc0c
	if (cr6.eq) goto loc_82AABC0C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c073f8
	ctx.lr = 0x82AABBE8;
	sub_82C073F8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8848
	ctx.r9.s64 = ctx.r11.s64 + -8848;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AABC0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AABC18"))) PPC_WEAK_FUNC(sub_82AABC18);
PPC_FUNC_IMPL(__imp__sub_82AABC18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8848
	ctx.r9.s64 = ctx.r11.s64 + -8848;
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
	// bl 0x82c07308
	ctx.lr = 0x82AABC50;
	sub_82C07308(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aabc68
	if (cr6.eq) goto loc_82AABC68;
	// bl 0x82416268
	ctx.lr = 0x82AABC64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AABC68:
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

__attribute__((alias("__imp__sub_82AABC80"))) PPC_WEAK_FUNC(sub_82AABC80);
PPC_FUNC_IMPL(__imp__sub_82AABC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aabc90
	if (cr6.lt) goto loc_82AABC90;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AABC90:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82aabba0
	sub_82AABBA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AABC98"))) PPC_WEAK_FUNC(sub_82AABC98);
PPC_FUNC_IMPL(__imp__sub_82AABC98) {
	PPC_FUNC_PROLOGUE();
	// lis r3,41
	ctx.r3.s64 = 2686976;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABCA4"))) PPC_WEAK_FUNC(sub_82AABCA4);
PPC_FUNC_IMPL(__imp__sub_82AABCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AABCA8"))) PPC_WEAK_FUNC(sub_82AABCA8);
PPC_FUNC_IMPL(__imp__sub_82AABCA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,34
	ctx.r3.s64 = 34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABCB0"))) PPC_WEAK_FUNC(sub_82AABCB0);
PPC_FUNC_IMPL(__imp__sub_82AABCB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABCB8"))) PPC_WEAK_FUNC(sub_82AABCB8);
PPC_FUNC_IMPL(__imp__sub_82AABCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r3,-18612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18612);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABCC4"))) PPC_WEAK_FUNC(sub_82AABCC4);
PPC_FUNC_IMPL(__imp__sub_82AABCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AABCC8"))) PPC_WEAK_FUNC(sub_82AABCC8);
PPC_FUNC_IMPL(__imp__sub_82AABCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// blt cr6,0x82aabcd8
	if (cr6.lt) goto loc_82AABCD8;
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
loc_82AABCD8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-8268
	ctx.r9.s64 = ctx.r11.s64 + -8268;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABCEC"))) PPC_WEAK_FUNC(sub_82AABCEC);
PPC_FUNC_IMPL(__imp__sub_82AABCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AABCF0"))) PPC_WEAK_FUNC(sub_82AABCF0);
PPC_FUNC_IMPL(__imp__sub_82AABCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AABCF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AABD1C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aabd58
	if (cr6.eq) goto loc_82AABD58;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c07980
	ctx.lr = 0x82AABD34;
	sub_82C07980(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8128
	ctx.r9.s64 = ctx.r11.s64 + -8128;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AABD58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AABD64"))) PPC_WEAK_FUNC(sub_82AABD64);
PPC_FUNC_IMPL(__imp__sub_82AABD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AABD68"))) PPC_WEAK_FUNC(sub_82AABD68);
PPC_FUNC_IMPL(__imp__sub_82AABD68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8128
	ctx.r9.s64 = ctx.r11.s64 + -8128;
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
	// bl 0x82c07820
	ctx.lr = 0x82AABDA0;
	sub_82C07820(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aabdb8
	if (cr6.eq) goto loc_82AABDB8;
	// bl 0x82416268
	ctx.lr = 0x82AABDB4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AABDB8:
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

__attribute__((alias("__imp__sub_82AABDD0"))) PPC_WEAK_FUNC(sub_82AABDD0);
PPC_FUNC_IMPL(__imp__sub_82AABDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aabde0
	if (cr6.lt) goto loc_82AABDE0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AABDE0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82aabcf0
	sub_82AABCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AABDE8"))) PPC_WEAK_FUNC(sub_82AABDE8);
PPC_FUNC_IMPL(__imp__sub_82AABDE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABDF0"))) PPC_WEAK_FUNC(sub_82AABDF0);
PPC_FUNC_IMPL(__imp__sub_82AABDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-18460
	ctx.r9.s64 = ctx.r11.s64 + -18460;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABE04"))) PPC_WEAK_FUNC(sub_82AABE04);
PPC_FUNC_IMPL(__imp__sub_82AABE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AABE08"))) PPC_WEAK_FUNC(sub_82AABE08);
PPC_FUNC_IMPL(__imp__sub_82AABE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-6964
	ctx.r9.s64 = ctx.r11.s64 + -6964;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABE1C"))) PPC_WEAK_FUNC(sub_82AABE1C);
PPC_FUNC_IMPL(__imp__sub_82AABE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AABE20"))) PPC_WEAK_FUNC(sub_82AABE20);
PPC_FUNC_IMPL(__imp__sub_82AABE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-18480
	ctx.r9.s64 = ctx.r11.s64 + -18480;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABE34"))) PPC_WEAK_FUNC(sub_82AABE34);
PPC_FUNC_IMPL(__imp__sub_82AABE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AABE38"))) PPC_WEAK_FUNC(sub_82AABE38);
PPC_FUNC_IMPL(__imp__sub_82AABE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-7476
	ctx.r9.s64 = ctx.r11.s64 + -7476;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABE4C"))) PPC_WEAK_FUNC(sub_82AABE4C);
PPC_FUNC_IMPL(__imp__sub_82AABE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AABE50"))) PPC_WEAK_FUNC(sub_82AABE50);
PPC_FUNC_IMPL(__imp__sub_82AABE50) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r8,r10,-7456
	ctx.r8.s64 = ctx.r10.s64 + -7456;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AABE70"))) PPC_WEAK_FUNC(sub_82AABE70);
PPC_FUNC_IMPL(__imp__sub_82AABE70) {
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
	// bl 0x82c09070
	ctx.lr = 0x82AABE8C;
	sub_82C09070(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-7312
	ctx.r9.s64 = ctx.r11.s64 + -7312;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x82AABEB4;
	sub_831CDCF0(ctx, base);
	// bl 0x82bda618
	ctx.lr = 0x82AABEB8;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aabf18
	if (cr6.eq) goto loc_82AABF18;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd9db8
	ctx.lr = 0x82AABECC;
	sub_82BD9DB8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdbb88
	ctx.lr = 0x82AABEE0;
	sub_82BDBB88(ctx, base);
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
	ctx.lr = 0x82AABF00;
	sub_82BD9E08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdae30
	ctx.lr = 0x82AABF0C;
	sub_82BDAE30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82AABF18;
	sub_82BD9DB8(ctx, base);
loc_82AABF18:
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

