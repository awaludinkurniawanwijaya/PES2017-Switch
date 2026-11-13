#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CAD28C"))) PPC_WEAK_FUNC(sub_83CAD28C);
PPC_FUNC_IMPL(__imp__sub_83CAD28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAD290"))) PPC_WEAK_FUNC(sub_83CAD290);
PPC_FUNC_IMPL(__imp__sub_83CAD290) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-32264
	ctx.r31.s64 = ctx.r11.s64 + -32264;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD2B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fbd08
	ctx.lr = 0x83CAD2C4;
	sub_835FBD08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD2CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAD2D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD2E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fbd08
	ctx.lr = 0x83CAD2EC;
	sub_835FBD08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD2F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAD2FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD308;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fbd08
	ctx.lr = 0x83CAD314;
	sub_835FBD08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD31C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAD324;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD330;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fbd08
	ctx.lr = 0x83CAD33C;
	sub_835FBD08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD344;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAD34C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD358;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbd08
	ctx.lr = 0x83CAD364;
	sub_835FBD08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD36C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAD374;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD380;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbd08
	ctx.lr = 0x83CAD38C;
	sub_835FBD08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD394;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAD39C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbd08
	ctx.lr = 0x83CAD3A4;
	sub_835FBD08(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25285
	ctx.r3.s64 = ctx.r10.s64 + -25285;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAD3DC;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAD3F4"))) PPC_WEAK_FUNC(sub_83CAD3F4);
PPC_FUNC_IMPL(__imp__sub_83CAD3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAD3F8"))) PPC_WEAK_FUNC(sub_83CAD3F8);
PPC_FUNC_IMPL(__imp__sub_83CAD3F8) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-32248
	ctx.r31.s64 = ctx.r11.s64 + -32248;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD420;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbd78
	ctx.lr = 0x83CAD42C;
	sub_835FBD78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD434;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAD43C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD448;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbd78
	ctx.lr = 0x83CAD454;
	sub_835FBD78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD45C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAD464;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbd78
	ctx.lr = 0x83CAD46C;
	sub_835FBD78(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25264
	ctx.r3.s64 = ctx.r10.s64 + -25264;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAD48C;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAD4A4"))) PPC_WEAK_FUNC(sub_83CAD4A4);
PPC_FUNC_IMPL(__imp__sub_83CAD4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAD4A8"))) PPC_WEAK_FUNC(sub_83CAD4A8);
PPC_FUNC_IMPL(__imp__sub_83CAD4A8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-32156
	ctx.r31.s64 = ctx.r11.s64 + -32156;
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD4D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fbde8
	ctx.lr = 0x83CAD4DC;
	sub_835FBDE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD4E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAD4EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD4F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fbde8
	ctx.lr = 0x83CAD504;
	sub_835FBDE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD50C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAD514;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD520;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fbde8
	ctx.lr = 0x83CAD52C;
	sub_835FBDE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD534;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAD53C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD548;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fbde8
	ctx.lr = 0x83CAD554;
	sub_835FBDE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD55C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAD564;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD570;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fbde8
	ctx.lr = 0x83CAD57C;
	sub_835FBDE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD584;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAD58C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD598;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fbde8
	ctx.lr = 0x83CAD5A4;
	sub_835FBDE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD5AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CAD5B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD5C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbde8
	ctx.lr = 0x83CAD5CC;
	sub_835FBDE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD5D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CAD5DC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD5E8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbde8
	ctx.lr = 0x83CAD5F4;
	sub_835FBDE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD5FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CAD604;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbde8
	ctx.lr = 0x83CAD60C;
	sub_835FBDE8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r3,r10,-25284
	ctx.r3.s64 = ctx.r10.s64 + -25284;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAD650;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAD668"))) PPC_WEAK_FUNC(sub_83CAD668);
PPC_FUNC_IMPL(__imp__sub_83CAD668) {
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
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r31,r11,-31796
	ctx.r31.s64 = ctx.r11.s64 + -31796;
	// addi r4,r31,-352
	ctx.r4.s64 = ctx.r31.s64 + -352;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD690;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD69C;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD6A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CAD6AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD6B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD6C4;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD6CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82573c50
	ctx.lr = 0x83CAD6D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-328
	ctx.r4.s64 = ctx.r31.s64 + -328;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD6E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD6EC;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD6F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573c50
	ctx.lr = 0x83CAD6FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-316
	ctx.r4.s64 = ctx.r31.s64 + -316;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD708;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD714;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD71C;
	sub_82573D70(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82573c50
	ctx.lr = 0x83CAD724;
	sub_82573C50(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD730;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD73C;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD744;
	sub_82573D70(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573c50
	ctx.lr = 0x83CAD74C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-296
	ctx.r4.s64 = ctx.r31.s64 + -296;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD758;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD764;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD76C;
	sub_82573D70(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82573c50
	ctx.lr = 0x83CAD774;
	sub_82573C50(ctx, base);
	// addi r4,r31,-284
	ctx.r4.s64 = ctx.r31.s64 + -284;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD780;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD78C;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD794;
	sub_82573D70(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573c50
	ctx.lr = 0x83CAD79C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-272
	ctx.r4.s64 = ctx.r31.s64 + -272;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD7A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD7B4;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD7BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82573c50
	ctx.lr = 0x83CAD7C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD7D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD7DC;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD7E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573c50
	ctx.lr = 0x83CAD7EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-240
	ctx.r4.s64 = ctx.r31.s64 + -240;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD7F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD804;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD80C;
	sub_82573D70(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82573c50
	ctx.lr = 0x83CAD814;
	sub_82573C50(ctx, base);
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD820;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD82C;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD834;
	sub_82573D70(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573c50
	ctx.lr = 0x83CAD83C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-208
	ctx.r4.s64 = ctx.r31.s64 + -208;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD848;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD854;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD85C;
	sub_82573D70(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82573c50
	ctx.lr = 0x83CAD864;
	sub_82573C50(ctx, base);
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD870;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD87C;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD884;
	sub_82573D70(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82573c50
	ctx.lr = 0x83CAD88C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD898;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD8A4;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD8AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82573c50
	ctx.lr = 0x83CAD8B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD8C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD8CC;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD8D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82573c50
	ctx.lr = 0x83CAD8DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD8E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD8F4;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD8FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CAD904;
	sub_82573C50(ctx, base);
	// addi r4,r31,-144
	ctx.r4.s64 = ctx.r31.s64 + -144;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD910;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD91C;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD924;
	sub_82573D70(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573c50
	ctx.lr = 0x83CAD92C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD938;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD944;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD94C;
	sub_82573D70(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573c50
	ctx.lr = 0x83CAD954;
	sub_82573C50(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD960;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD96C;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD974;
	sub_82573D70(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573c50
	ctx.lr = 0x83CAD97C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD988;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD994;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD99C;
	sub_82573D70(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573c50
	ctx.lr = 0x83CAD9A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD9B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD9BC;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD9C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573c50
	ctx.lr = 0x83CAD9CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD9D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fbe58
	ctx.lr = 0x83CAD9E4;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD9EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82573c50
	ctx.lr = 0x83CAD9F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82573ce0
	ctx.lr = 0x83CADA00;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fbe58
	ctx.lr = 0x83CADA0C;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADA14;
	sub_82573D70(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82573c50
	ctx.lr = 0x83CADA1C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82573ce0
	ctx.lr = 0x83CADA28;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fbe58
	ctx.lr = 0x83CADA34;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADA3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82573c50
	ctx.lr = 0x83CADA44;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82573ce0
	ctx.lr = 0x83CADA50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fbe58
	ctx.lr = 0x83CADA5C;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADA64;
	sub_82573D70(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82573c50
	ctx.lr = 0x83CADA6C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82573ce0
	ctx.lr = 0x83CADA78;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fbe58
	ctx.lr = 0x83CADA84;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADA8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82573c50
	ctx.lr = 0x83CADA94;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82573ce0
	ctx.lr = 0x83CADAA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fbe58
	ctx.lr = 0x83CADAAC;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADAB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82573c50
	ctx.lr = 0x83CADABC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82573ce0
	ctx.lr = 0x83CADAC8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fbe58
	ctx.lr = 0x83CADAD4;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADADC;
	sub_82573D70(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82573c50
	ctx.lr = 0x83CADAE4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82573ce0
	ctx.lr = 0x83CADAF0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fbe58
	ctx.lr = 0x83CADAFC;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADB04;
	sub_82573D70(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82573c50
	ctx.lr = 0x83CADB0C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82573ce0
	ctx.lr = 0x83CADB18;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbe58
	ctx.lr = 0x83CADB24;
	sub_835FBE58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADB2C;
	sub_82573D70(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82573c50
	ctx.lr = 0x83CADB34;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82573ce0
	ctx.lr = 0x83CADB40;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbe58
	ctx.lr = 0x83CADB4C;
	sub_835FBE58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADB54;
	sub_82573D70(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82573c50
	ctx.lr = 0x83CADB5C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbe58
	ctx.lr = 0x83CADB64;
	sub_835FBE58(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r8,r10,-25314
	ctx.r8.s64 = ctx.r10.s64 + -25314;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r4,23
	ctx.r4.s64 = 23;
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r4,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// li r7,27
	ctx.r7.s64 = 27;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// stw r6,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r31,30
	ctx.r31.s64 = 30;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// li r4,31
	ctx.r4.s64 = 31;
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CADC68;
	sub_825731E0(ctx, base);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CADC80"))) PPC_WEAK_FUNC(sub_83CADC80);
PPC_FUNC_IMPL(__imp__sub_83CADC80) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-31776
	ctx.r31.s64 = ctx.r11.s64 + -31776;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CADCA8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbec8
	ctx.lr = 0x83CADCB4;
	sub_835FBEC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADCBC;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CADCC4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CADCD0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbec8
	ctx.lr = 0x83CADCDC;
	sub_835FBEC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADCE4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CADCEC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbec8
	ctx.lr = 0x83CADCF4;
	sub_835FBEC8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25242
	ctx.r3.s64 = ctx.r10.s64 + -25242;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CADD14;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CADD2C"))) PPC_WEAK_FUNC(sub_83CADD2C);
PPC_FUNC_IMPL(__imp__sub_83CADD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CADD30"))) PPC_WEAK_FUNC(sub_83CADD30);
PPC_FUNC_IMPL(__imp__sub_83CADD30) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-31716
	ctx.r31.s64 = ctx.r11.s64 + -31716;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// bl 0x82573ce0
	ctx.lr = 0x83CADD58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fbf38
	ctx.lr = 0x83CADD64;
	sub_835FBF38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADD6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CADD74;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CADD80;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fbf38
	ctx.lr = 0x83CADD8C;
	sub_835FBF38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADD94;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CADD9C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CADDA8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbf38
	ctx.lr = 0x83CADDB4;
	sub_835FBF38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADDBC;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CADDC4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CADDD0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbf38
	ctx.lr = 0x83CADDDC;
	sub_835FBF38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADDE4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CADDEC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbf38
	ctx.lr = 0x83CADDF4;
	sub_835FBF38(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25297
	ctx.r3.s64 = ctx.r10.s64 + -25297;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CADE1C;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CADE34"))) PPC_WEAK_FUNC(sub_83CADE34);
PPC_FUNC_IMPL(__imp__sub_83CADE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CADE38"))) PPC_WEAK_FUNC(sub_83CADE38);
PPC_FUNC_IMPL(__imp__sub_83CADE38) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-31616
	ctx.r31.s64 = ctx.r11.s64 + -31616;
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// bl 0x82573ce0
	ctx.lr = 0x83CADE60;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fbfa8
	ctx.lr = 0x83CADE6C;
	sub_835FBFA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADE74;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CADE7C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CADE88;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fbfa8
	ctx.lr = 0x83CADE94;
	sub_835FBFA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADE9C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CADEA4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CADEB0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fbfa8
	ctx.lr = 0x83CADEBC;
	sub_835FBFA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADEC4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CADECC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CADED8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fbfa8
	ctx.lr = 0x83CADEE4;
	sub_835FBFA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADEEC;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CADEF4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CADF00;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbfa8
	ctx.lr = 0x83CADF0C;
	sub_835FBFA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADF14;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CADF1C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CADF28;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbfa8
	ctx.lr = 0x83CADF34;
	sub_835FBFA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADF3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CADF44;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbfa8
	ctx.lr = 0x83CADF4C;
	sub_835FBFA8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25300
	ctx.r3.s64 = ctx.r10.s64 + -25300;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CADF84;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CADF9C"))) PPC_WEAK_FUNC(sub_83CADF9C);
PPC_FUNC_IMPL(__imp__sub_83CADF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CADFA0"))) PPC_WEAK_FUNC(sub_83CADFA0);
PPC_FUNC_IMPL(__imp__sub_83CADFA0) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r31,r11,-31464
	ctx.r31.s64 = ctx.r11.s64 + -31464;
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// bl 0x82573ce0
	ctx.lr = 0x83CADFC8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fc018
	ctx.lr = 0x83CADFD4;
	sub_835FC018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CADFDC;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CADFE4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CADFF0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fc018
	ctx.lr = 0x83CADFFC;
	sub_835FC018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE004;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAE00C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE018;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fc018
	ctx.lr = 0x83CAE024;
	sub_835FC018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE02C;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CAE034;
	sub_82573C50(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE040;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fc018
	ctx.lr = 0x83CAE04C;
	sub_835FC018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE054;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CAE05C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE068;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fc018
	ctx.lr = 0x83CAE074;
	sub_835FC018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE07C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAE084;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE090;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fc018
	ctx.lr = 0x83CAE09C;
	sub_835FC018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE0A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAE0AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE0B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc018
	ctx.lr = 0x83CAE0C4;
	sub_835FC018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE0CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAE0D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE0E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc018
	ctx.lr = 0x83CAE0EC;
	sub_835FC018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE0F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CAE0FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE108;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc018
	ctx.lr = 0x83CAE114;
	sub_835FC018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE11C;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CAE124;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE130;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc018
	ctx.lr = 0x83CAE13C;
	sub_835FC018(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE144;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CAE14C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc018
	ctx.lr = 0x83CAE154;
	sub_835FC018(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25202
	ctx.r3.s64 = ctx.r10.s64 + -25202;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAE1AC;
	sub_825731E0(ctx, base);
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
}

__attribute__((alias("__imp__sub_83CAE1C4"))) PPC_WEAK_FUNC(sub_83CAE1C4);
PPC_FUNC_IMPL(__imp__sub_83CAE1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAE1C8"))) PPC_WEAK_FUNC(sub_83CAE1C8);
PPC_FUNC_IMPL(__imp__sub_83CAE1C8) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r31,r11,-31196
	ctx.r31.s64 = ctx.r11.s64 + -31196;
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE1F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835fc088
	ctx.lr = 0x83CAE1FC;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE204;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CAE20C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-236
	ctx.r4.s64 = ctx.r31.s64 + -236;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE218;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fc088
	ctx.lr = 0x83CAE224;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE22C;
	sub_82573D70(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573c50
	ctx.lr = 0x83CAE234;
	sub_82573C50(ctx, base);
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE240;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fc088
	ctx.lr = 0x83CAE24C;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE254;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CAE25C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-200
	ctx.r4.s64 = ctx.r31.s64 + -200;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE268;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fc088
	ctx.lr = 0x83CAE274;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE27C;
	sub_82573D70(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573c50
	ctx.lr = 0x83CAE284;
	sub_82573C50(ctx, base);
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE290;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fc088
	ctx.lr = 0x83CAE29C;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE2A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CAE2AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE2B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fc088
	ctx.lr = 0x83CAE2C4;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE2CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573c50
	ctx.lr = 0x83CAE2D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE2E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fc088
	ctx.lr = 0x83CAE2EC;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE2F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CAE2FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE308;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fc088
	ctx.lr = 0x83CAE314;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE31C;
	sub_82573D70(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573c50
	ctx.lr = 0x83CAE324;
	sub_82573C50(ctx, base);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE330;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fc088
	ctx.lr = 0x83CAE33C;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE344;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CAE34C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE358;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fc088
	ctx.lr = 0x83CAE364;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE36C;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CAE374;
	sub_82573C50(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE380;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fc088
	ctx.lr = 0x83CAE38C;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE394;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CAE39C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE3A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fc088
	ctx.lr = 0x83CAE3B4;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE3BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CAE3C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE3D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fc088
	ctx.lr = 0x83CAE3DC;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE3E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CAE3EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE3F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc088
	ctx.lr = 0x83CAE404;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE40C;
	sub_82573D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573c50
	ctx.lr = 0x83CAE414;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE420;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc088
	ctx.lr = 0x83CAE42C;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE434;
	sub_82573D70(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573c50
	ctx.lr = 0x83CAE43C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE448;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc088
	ctx.lr = 0x83CAE454;
	sub_835FC088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE45C;
	sub_82573D70(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573c50
	ctx.lr = 0x83CAE464;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE470;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc088
	ctx.lr = 0x83CAE47C;
	sub_835FC088(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE484;
	sub_82573D70(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573c50
	ctx.lr = 0x83CAE48C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc088
	ctx.lr = 0x83CAE494;
	sub_835FC088(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r3,r8,-25316
	ctx.r3.s64 = ctx.r8.s64 + -25316;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAE524;
	sub_825731E0(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAE53C"))) PPC_WEAK_FUNC(sub_83CAE53C);
PPC_FUNC_IMPL(__imp__sub_83CAE53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAE540"))) PPC_WEAK_FUNC(sub_83CAE540);
PPC_FUNC_IMPL(__imp__sub_83CAE540) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-31180
	ctx.r31.s64 = ctx.r11.s64 + -31180;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE568;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc0f8
	ctx.lr = 0x83CAE574;
	sub_835FC0F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE57C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAE584;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE590;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc0f8
	ctx.lr = 0x83CAE59C;
	sub_835FC0F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE5A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAE5AC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc0f8
	ctx.lr = 0x83CAE5B4;
	sub_835FC0F8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25221
	ctx.r3.s64 = ctx.r10.s64 + -25221;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAE5D4;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAE5EC"))) PPC_WEAK_FUNC(sub_83CAE5EC);
PPC_FUNC_IMPL(__imp__sub_83CAE5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAE5F0"))) PPC_WEAK_FUNC(sub_83CAE5F0);
PPC_FUNC_IMPL(__imp__sub_83CAE5F0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-31144
	ctx.r31.s64 = ctx.r11.s64 + -31144;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE618;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc168
	ctx.lr = 0x83CAE624;
	sub_835FC168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE62C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAE634;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE640;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc168
	ctx.lr = 0x83CAE64C;
	sub_835FC168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE654;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAE65C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE668;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc168
	ctx.lr = 0x83CAE674;
	sub_835FC168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE67C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAE684;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE690;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc168
	ctx.lr = 0x83CAE69C;
	sub_835FC168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE6A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAE6AC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc168
	ctx.lr = 0x83CAE6B4;
	sub_835FC168(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25253
	ctx.r3.s64 = ctx.r10.s64 + -25253;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAE6DC;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAE6F4"))) PPC_WEAK_FUNC(sub_83CAE6F4);
PPC_FUNC_IMPL(__imp__sub_83CAE6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAE6F8"))) PPC_WEAK_FUNC(sub_83CAE6F8);
PPC_FUNC_IMPL(__imp__sub_83CAE6F8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-30992
	ctx.r31.s64 = ctx.r11.s64 + -30992;
	// addi r4,r31,-144
	ctx.r4.s64 = ctx.r31.s64 + -144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE720;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fc1d8
	ctx.lr = 0x83CAE72C;
	sub_835FC1D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE734;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAE73C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE748;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fc1d8
	ctx.lr = 0x83CAE754;
	sub_835FC1D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE75C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAE764;
	sub_82573C50(ctx, base);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE770;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fc1d8
	ctx.lr = 0x83CAE77C;
	sub_835FC1D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE784;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAE78C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE798;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fc1d8
	ctx.lr = 0x83CAE7A4;
	sub_835FC1D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE7AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAE7B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE7C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc1d8
	ctx.lr = 0x83CAE7CC;
	sub_835FC1D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE7D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAE7DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE7E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc1d8
	ctx.lr = 0x83CAE7F4;
	sub_835FC1D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE7FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CAE804;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE810;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc1d8
	ctx.lr = 0x83CAE81C;
	sub_835FC1D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE824;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CAE82C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE838;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc1d8
	ctx.lr = 0x83CAE844;
	sub_835FC1D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE84C;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CAE854;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc1d8
	ctx.lr = 0x83CAE85C;
	sub_835FC1D8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r3,r10,-25211
	ctx.r3.s64 = ctx.r10.s64 + -25211;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAE8A0;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAE8B8"))) PPC_WEAK_FUNC(sub_83CAE8B8);
PPC_FUNC_IMPL(__imp__sub_83CAE8B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-30948
	ctx.r31.s64 = ctx.r11.s64 + -30948;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE8E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc248
	ctx.lr = 0x83CAE8EC;
	sub_835FC248(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE8F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAE8FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE908;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc248
	ctx.lr = 0x83CAE914;
	sub_835FC248(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE91C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAE924;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE930;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc248
	ctx.lr = 0x83CAE93C;
	sub_835FC248(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE944;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAE94C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc248
	ctx.lr = 0x83CAE954;
	sub_835FC248(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25200
	ctx.r3.s64 = ctx.r10.s64 + -25200;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAE978;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAE990"))) PPC_WEAK_FUNC(sub_83CAE990);
PPC_FUNC_IMPL(__imp__sub_83CAE990) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-30852
	ctx.r31.s64 = ctx.r11.s64 + -30852;
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE9B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fc2b8
	ctx.lr = 0x83CAE9C4;
	sub_835FC2B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE9CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAE9D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAE9E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fc2b8
	ctx.lr = 0x83CAE9EC;
	sub_835FC2B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAE9F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAE9FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEA08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc2b8
	ctx.lr = 0x83CAEA14;
	sub_835FC2B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEA1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAEA24;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEA30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc2b8
	ctx.lr = 0x83CAEA3C;
	sub_835FC2B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEA44;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAEA4C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEA58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc2b8
	ctx.lr = 0x83CAEA64;
	sub_835FC2B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEA6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAEA74;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEA80;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc2b8
	ctx.lr = 0x83CAEA8C;
	sub_835FC2B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEA94;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAEA9C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc2b8
	ctx.lr = 0x83CAEAA4;
	sub_835FC2B8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25258
	ctx.r3.s64 = ctx.r10.s64 + -25258;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAEADC;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAEAF4"))) PPC_WEAK_FUNC(sub_83CAEAF4);
PPC_FUNC_IMPL(__imp__sub_83CAEAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAEAF8"))) PPC_WEAK_FUNC(sub_83CAEAF8);
PPC_FUNC_IMPL(__imp__sub_83CAEAF8) {
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
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r31,r11,-30288
	ctx.r31.s64 = ctx.r11.s64 + -30288;
	// addi r4,r31,-548
	ctx.r4.s64 = ctx.r31.s64 + -548;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEB20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x835fc328
	ctx.lr = 0x83CAEB2C;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEB34;
	sub_82573D70(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82573c50
	ctx.lr = 0x83CAEB3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEB48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x835fc328
	ctx.lr = 0x83CAEB54;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEB5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CAEB64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-496
	ctx.r4.s64 = ctx.r31.s64 + -496;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEB70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x835fc328
	ctx.lr = 0x83CAEB7C;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEB84;
	sub_82573D70(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82573c50
	ctx.lr = 0x83CAEB8C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-472
	ctx.r4.s64 = ctx.r31.s64 + -472;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEB98;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x835fc328
	ctx.lr = 0x83CAEBA4;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEBAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573c50
	ctx.lr = 0x83CAEBB4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEBC0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x835fc328
	ctx.lr = 0x83CAEBCC;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEBD4;
	sub_82573D70(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82573c50
	ctx.lr = 0x83CAEBDC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-420
	ctx.r4.s64 = ctx.r31.s64 + -420;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEBE8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x835fc328
	ctx.lr = 0x83CAEBF4;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEBFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573c50
	ctx.lr = 0x83CAEC04;
	sub_82573C50(ctx, base);
	// addi r4,r31,-408
	ctx.r4.s64 = ctx.r31.s64 + -408;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEC10;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x835fc328
	ctx.lr = 0x83CAEC1C;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEC24;
	sub_82573D70(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82573c50
	ctx.lr = 0x83CAEC2C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-384
	ctx.r4.s64 = ctx.r31.s64 + -384;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEC38;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x835fc328
	ctx.lr = 0x83CAEC44;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEC4C;
	sub_82573D70(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573c50
	ctx.lr = 0x83CAEC54;
	sub_82573C50(ctx, base);
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEC60;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x835fc328
	ctx.lr = 0x83CAEC6C;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEC74;
	sub_82573D70(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82573c50
	ctx.lr = 0x83CAEC7C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-348
	ctx.r4.s64 = ctx.r31.s64 + -348;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEC88;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x835fc328
	ctx.lr = 0x83CAEC94;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEC9C;
	sub_82573D70(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573c50
	ctx.lr = 0x83CAECA4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-336
	ctx.r4.s64 = ctx.r31.s64 + -336;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82573ce0
	ctx.lr = 0x83CAECB0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x835fc328
	ctx.lr = 0x83CAECBC;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAECC4;
	sub_82573D70(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82573c50
	ctx.lr = 0x83CAECCC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-316
	ctx.r4.s64 = ctx.r31.s64 + -316;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573ce0
	ctx.lr = 0x83CAECD8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835fc328
	ctx.lr = 0x83CAECE4;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAECEC;
	sub_82573D70(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573c50
	ctx.lr = 0x83CAECF4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-296
	ctx.r4.s64 = ctx.r31.s64 + -296;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82573ce0
	ctx.lr = 0x83CAED00;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fc328
	ctx.lr = 0x83CAED0C;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAED14;
	sub_82573D70(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82573c50
	ctx.lr = 0x83CAED1C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-284
	ctx.r4.s64 = ctx.r31.s64 + -284;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CAED28;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fc328
	ctx.lr = 0x83CAED34;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAED3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CAED44;
	sub_82573C50(ctx, base);
	// addi r4,r31,-264
	ctx.r4.s64 = ctx.r31.s64 + -264;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CAED50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fc328
	ctx.lr = 0x83CAED5C;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAED64;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CAED6C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-240
	ctx.r4.s64 = ctx.r31.s64 + -240;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CAED78;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fc328
	ctx.lr = 0x83CAED84;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAED8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CAED94;
	sub_82573C50(ctx, base);
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEDA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fc328
	ctx.lr = 0x83CAEDAC;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEDB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573c50
	ctx.lr = 0x83CAEDBC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-212
	ctx.r4.s64 = ctx.r31.s64 + -212;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEDC8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fc328
	ctx.lr = 0x83CAEDD4;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEDDC;
	sub_82573D70(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573c50
	ctx.lr = 0x83CAEDE4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEDF0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fc328
	ctx.lr = 0x83CAEDFC;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEE04;
	sub_82573D70(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573c50
	ctx.lr = 0x83CAEE0C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-176
	ctx.r4.s64 = ctx.r31.s64 + -176;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEE18;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fc328
	ctx.lr = 0x83CAEE24;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEE2C;
	sub_82573D70(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573c50
	ctx.lr = 0x83CAEE34;
	sub_82573C50(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEE40;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fc328
	ctx.lr = 0x83CAEE4C;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEE54;
	sub_82573D70(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573c50
	ctx.lr = 0x83CAEE5C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEE68;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fc328
	ctx.lr = 0x83CAEE74;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEE7C;
	sub_82573D70(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82573c50
	ctx.lr = 0x83CAEE84;
	sub_82573C50(ctx, base);
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEE90;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fc328
	ctx.lr = 0x83CAEE9C;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEEA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82573c50
	ctx.lr = 0x83CAEEAC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEEB8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fc328
	ctx.lr = 0x83CAEEC4;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEECC;
	sub_82573D70(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82573c50
	ctx.lr = 0x83CAEED4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEEE0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc328
	ctx.lr = 0x83CAEEEC;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEEF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82573c50
	ctx.lr = 0x83CAEEFC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEF08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc328
	ctx.lr = 0x83CAEF14;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEF1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82573c50
	ctx.lr = 0x83CAEF24;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEF30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc328
	ctx.lr = 0x83CAEF3C;
	sub_835FC328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEF44;
	sub_82573D70(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82573c50
	ctx.lr = 0x83CAEF4C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82573ce0
	ctx.lr = 0x83CAEF58;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc328
	ctx.lr = 0x83CAEF64;
	sub_835FC328(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAEF6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82573c50
	ctx.lr = 0x83CAEF74;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc328
	ctx.lr = 0x83CAEF7C;
	sub_835FC328(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// addi r3,r6,-25292
	ctx.r3.s64 = ctx.r6.s64 + -25292;
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r6,23
	ctx.r6.s64 = 23;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r10,26
	ctx.r10.s64 = 26;
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// li r9,27
	ctx.r9.s64 = 27;
	// stw r6,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAF064;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAF07C"))) PPC_WEAK_FUNC(sub_83CAF07C);
PPC_FUNC_IMPL(__imp__sub_83CAF07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAF080"))) PPC_WEAK_FUNC(sub_83CAF080);
PPC_FUNC_IMPL(__imp__sub_83CAF080) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-30268
	ctx.r31.s64 = ctx.r11.s64 + -30268;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF0A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc398
	ctx.lr = 0x83CAF0B4;
	sub_835FC398(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF0BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAF0C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF0D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc398
	ctx.lr = 0x83CAF0DC;
	sub_835FC398(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF0E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAF0EC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF0F8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc398
	ctx.lr = 0x83CAF104;
	sub_835FC398(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF10C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAF114;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc398
	ctx.lr = 0x83CAF11C;
	sub_835FC398(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25236
	ctx.r3.s64 = ctx.r10.s64 + -25236;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAF140;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAF158"))) PPC_WEAK_FUNC(sub_83CAF158);
PPC_FUNC_IMPL(__imp__sub_83CAF158) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-30232
	ctx.r31.s64 = ctx.r11.s64 + -30232;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF180;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc408
	ctx.lr = 0x83CAF18C;
	sub_835FC408(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF194;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAF19C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF1A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc408
	ctx.lr = 0x83CAF1B4;
	sub_835FC408(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF1BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAF1C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF1D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc408
	ctx.lr = 0x83CAF1DC;
	sub_835FC408(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF1E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAF1EC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF1F8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc408
	ctx.lr = 0x83CAF204;
	sub_835FC408(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF20C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAF214;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc408
	ctx.lr = 0x83CAF21C;
	sub_835FC408(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25225
	ctx.r3.s64 = ctx.r10.s64 + -25225;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAF244;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAF25C"))) PPC_WEAK_FUNC(sub_83CAF25C);
PPC_FUNC_IMPL(__imp__sub_83CAF25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAF260"))) PPC_WEAK_FUNC(sub_83CAF260);
PPC_FUNC_IMPL(__imp__sub_83CAF260) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-30208
	ctx.r31.s64 = ctx.r11.s64 + -30208;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF288;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc478
	ctx.lr = 0x83CAF294;
	sub_835FC478(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF29C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAF2A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF2B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc478
	ctx.lr = 0x83CAF2BC;
	sub_835FC478(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF2C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAF2CC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF2D8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc478
	ctx.lr = 0x83CAF2E4;
	sub_835FC478(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF2EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAF2F4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc478
	ctx.lr = 0x83CAF2FC;
	sub_835FC478(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25243
	ctx.r3.s64 = ctx.r10.s64 + -25243;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAF320;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAF338"))) PPC_WEAK_FUNC(sub_83CAF338);
PPC_FUNC_IMPL(__imp__sub_83CAF338) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-30176
	ctx.r31.s64 = ctx.r11.s64 + -30176;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF360;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc4e8
	ctx.lr = 0x83CAF36C;
	sub_835FC4E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF374;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAF37C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF388;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc4e8
	ctx.lr = 0x83CAF394;
	sub_835FC4E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF39C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAF3A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF3B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc4e8
	ctx.lr = 0x83CAF3BC;
	sub_835FC4E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF3C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAF3CC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF3D8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc4e8
	ctx.lr = 0x83CAF3E4;
	sub_835FC4E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF3EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAF3F4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc4e8
	ctx.lr = 0x83CAF3FC;
	sub_835FC4E8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25291
	ctx.r3.s64 = ctx.r10.s64 + -25291;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAF424;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAF43C"))) PPC_WEAK_FUNC(sub_83CAF43C);
PPC_FUNC_IMPL(__imp__sub_83CAF43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAF440"))) PPC_WEAK_FUNC(sub_83CAF440);
PPC_FUNC_IMPL(__imp__sub_83CAF440) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-30120
	ctx.r31.s64 = ctx.r11.s64 + -30120;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF468;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fc558
	ctx.lr = 0x83CAF474;
	sub_835FC558(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF47C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAF484;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF490;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc558
	ctx.lr = 0x83CAF49C;
	sub_835FC558(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF4A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAF4AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF4B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc558
	ctx.lr = 0x83CAF4C4;
	sub_835FC558(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF4CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAF4D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF4E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc558
	ctx.lr = 0x83CAF4EC;
	sub_835FC558(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF4F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAF4FC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF508;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc558
	ctx.lr = 0x83CAF514;
	sub_835FC558(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF51C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAF524;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc558
	ctx.lr = 0x83CAF52C;
	sub_835FC558(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25235
	ctx.r3.s64 = ctx.r10.s64 + -25235;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAF55C;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAF574"))) PPC_WEAK_FUNC(sub_83CAF574);
PPC_FUNC_IMPL(__imp__sub_83CAF574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAF578"))) PPC_WEAK_FUNC(sub_83CAF578);
PPC_FUNC_IMPL(__imp__sub_83CAF578) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-30088
	ctx.r31.s64 = ctx.r11.s64 + -30088;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF5A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc5c8
	ctx.lr = 0x83CAF5AC;
	sub_835FC5C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF5B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAF5BC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF5C8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc5c8
	ctx.lr = 0x83CAF5D4;
	sub_835FC5C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF5DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAF5E4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc5c8
	ctx.lr = 0x83CAF5EC;
	sub_835FC5C8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25313
	ctx.r3.s64 = ctx.r10.s64 + -25313;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAF60C;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAF624"))) PPC_WEAK_FUNC(sub_83CAF624);
PPC_FUNC_IMPL(__imp__sub_83CAF624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAF628"))) PPC_WEAK_FUNC(sub_83CAF628);
PPC_FUNC_IMPL(__imp__sub_83CAF628) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-30052
	ctx.r31.s64 = ctx.r11.s64 + -30052;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF650;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc638
	ctx.lr = 0x83CAF65C;
	sub_835FC638(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF664;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAF66C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF678;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc638
	ctx.lr = 0x83CAF684;
	sub_835FC638(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF68C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAF694;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF6A0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc638
	ctx.lr = 0x83CAF6AC;
	sub_835FC638(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF6B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAF6BC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc638
	ctx.lr = 0x83CAF6C4;
	sub_835FC638(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25267
	ctx.r3.s64 = ctx.r10.s64 + -25267;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAF6E8;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAF700"))) PPC_WEAK_FUNC(sub_83CAF700);
PPC_FUNC_IMPL(__imp__sub_83CAF700) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-30028
	ctx.r31.s64 = ctx.r11.s64 + -30028;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF728;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc6a8
	ctx.lr = 0x83CAF734;
	sub_835FC6A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF73C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAF744;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF750;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc6a8
	ctx.lr = 0x83CAF75C;
	sub_835FC6A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF764;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAF76C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF778;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc6a8
	ctx.lr = 0x83CAF784;
	sub_835FC6A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF78C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAF794;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF7A0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc6a8
	ctx.lr = 0x83CAF7AC;
	sub_835FC6A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF7B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAF7BC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc6a8
	ctx.lr = 0x83CAF7C4;
	sub_835FC6A8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25262
	ctx.r3.s64 = ctx.r10.s64 + -25262;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAF7EC;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAF804"))) PPC_WEAK_FUNC(sub_83CAF804);
PPC_FUNC_IMPL(__imp__sub_83CAF804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAF808"))) PPC_WEAK_FUNC(sub_83CAF808);
PPC_FUNC_IMPL(__imp__sub_83CAF808) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-29984
	ctx.r31.s64 = ctx.r11.s64 + -29984;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF830;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fc718
	ctx.lr = 0x83CAF83C;
	sub_835FC718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF844;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAF84C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF858;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fc718
	ctx.lr = 0x83CAF864;
	sub_835FC718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF86C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAF874;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF880;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc718
	ctx.lr = 0x83CAF88C;
	sub_835FC718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF894;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAF89C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF8A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc718
	ctx.lr = 0x83CAF8B4;
	sub_835FC718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF8BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAF8C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF8D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc718
	ctx.lr = 0x83CAF8DC;
	sub_835FC718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF8E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAF8EC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF8F8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc718
	ctx.lr = 0x83CAF904;
	sub_835FC718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF90C;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAF914;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc718
	ctx.lr = 0x83CAF91C;
	sub_835FC718(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25321
	ctx.r3.s64 = ctx.r10.s64 + -25321;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAF954;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAF96C"))) PPC_WEAK_FUNC(sub_83CAF96C);
PPC_FUNC_IMPL(__imp__sub_83CAF96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAF970"))) PPC_WEAK_FUNC(sub_83CAF970);
PPC_FUNC_IMPL(__imp__sub_83CAF970) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29976
	ctx.r31.s64 = ctx.r11.s64 + -29976;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF998;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc788
	ctx.lr = 0x83CAF9A4;
	sub_835FC788(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF9AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAF9B4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAF9C0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc788
	ctx.lr = 0x83CAF9CC;
	sub_835FC788(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAF9D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAF9DC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc788
	ctx.lr = 0x83CAF9E4;
	sub_835FC788(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25282
	ctx.r3.s64 = ctx.r10.s64 + -25282;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAFA04;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAFA1C"))) PPC_WEAK_FUNC(sub_83CAFA1C);
PPC_FUNC_IMPL(__imp__sub_83CAFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAFA20"))) PPC_WEAK_FUNC(sub_83CAFA20);
PPC_FUNC_IMPL(__imp__sub_83CAFA20) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29956
	ctx.r31.s64 = ctx.r11.s64 + -29956;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFA48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc7f8
	ctx.lr = 0x83CAFA54;
	sub_835FC7F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFA5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAFA64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFA70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc7f8
	ctx.lr = 0x83CAFA7C;
	sub_835FC7F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFA84;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAFA8C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFA98;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc7f8
	ctx.lr = 0x83CAFAA4;
	sub_835FC7F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFAAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAFAB4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc7f8
	ctx.lr = 0x83CAFABC;
	sub_835FC7F8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25198
	ctx.r3.s64 = ctx.r10.s64 + -25198;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAFAE0;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAFAF8"))) PPC_WEAK_FUNC(sub_83CAFAF8);
PPC_FUNC_IMPL(__imp__sub_83CAFAF8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-29848
	ctx.r31.s64 = ctx.r11.s64 + -29848;
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFB20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fc868
	ctx.lr = 0x83CAFB2C;
	sub_835FC868(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFB34;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAFB3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFB48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc868
	ctx.lr = 0x83CAFB54;
	sub_835FC868(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFB5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAFB64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFB70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc868
	ctx.lr = 0x83CAFB7C;
	sub_835FC868(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFB84;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAFB8C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFB98;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc868
	ctx.lr = 0x83CAFBA4;
	sub_835FC868(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFBAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAFBB4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFBC0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc868
	ctx.lr = 0x83CAFBCC;
	sub_835FC868(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFBD4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAFBDC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc868
	ctx.lr = 0x83CAFBE4;
	sub_835FC868(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25252
	ctx.r3.s64 = ctx.r10.s64 + -25252;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAFC14;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAFC2C"))) PPC_WEAK_FUNC(sub_83CAFC2C);
PPC_FUNC_IMPL(__imp__sub_83CAFC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAFC30"))) PPC_WEAK_FUNC(sub_83CAFC30);
PPC_FUNC_IMPL(__imp__sub_83CAFC30) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29804
	ctx.r31.s64 = ctx.r11.s64 + -29804;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFC58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc8d8
	ctx.lr = 0x83CAFC64;
	sub_835FC8D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFC6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAFC74;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFC80;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc8d8
	ctx.lr = 0x83CAFC8C;
	sub_835FC8D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFC94;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAFC9C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFCA8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc8d8
	ctx.lr = 0x83CAFCB4;
	sub_835FC8D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFCBC;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAFCC4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc8d8
	ctx.lr = 0x83CAFCCC;
	sub_835FC8D8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25274
	ctx.r3.s64 = ctx.r10.s64 + -25274;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAFCF0;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAFD08"))) PPC_WEAK_FUNC(sub_83CAFD08);
PPC_FUNC_IMPL(__imp__sub_83CAFD08) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29756
	ctx.r31.s64 = ctx.r11.s64 + -29756;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFD30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc948
	ctx.lr = 0x83CAFD3C;
	sub_835FC948(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFD44;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAFD4C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFD58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc948
	ctx.lr = 0x83CAFD64;
	sub_835FC948(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFD6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAFD74;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFD80;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc948
	ctx.lr = 0x83CAFD8C;
	sub_835FC948(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFD94;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAFD9C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc948
	ctx.lr = 0x83CAFDA4;
	sub_835FC948(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25272
	ctx.r3.s64 = ctx.r10.s64 + -25272;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAFDC8;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CAFDE0"))) PPC_WEAK_FUNC(sub_83CAFDE0);
PPC_FUNC_IMPL(__imp__sub_83CAFDE0) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r31,r11,-29688
	ctx.r31.s64 = ctx.r11.s64 + -29688;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFE08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFE14;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFE1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAFE24;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFE30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFE3C;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFE44;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CAFE4C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFE58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFE64;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFE6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CAFE74;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFE80;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFE8C;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFE94;
	sub_82573D70(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573c50
	ctx.lr = 0x83CAFE9C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFEA8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFEB4;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFEBC;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CAFEC4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFED0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFEDC;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFEE4;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CAFEEC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFEF8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFF04;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFF0C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAFF14;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFF20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFF2C;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFF34;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CAFF3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFF48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFF54;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFF5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CAFF64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFF70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFF7C;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFF84;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CAFF8C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFF98;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFFA4;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFFAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CAFFB4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFFC0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFFCC;
	sub_835FC9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFFD4;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CAFFDC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573ce0
	ctx.lr = 0x83CAFFE8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc9b8
	ctx.lr = 0x83CAFFF4;
	sub_835FC9B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAFFFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573c50
	ctx.lr = 0x83CB0004;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc9b8
	ctx.lr = 0x83CB000C;
	sub_835FC9B8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,-25290
	ctx.r8.s64 = ctx.r10.s64 + -25290;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB0080;
	sub_825731E0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CB0098"))) PPC_WEAK_FUNC(sub_83CB0098);
PPC_FUNC_IMPL(__imp__sub_83CB0098) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// bl 0x82573ce0
	ctx.lr = 0x83CB00C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fca28
	ctx.lr = 0x83CB00CC;
	sub_835FCA28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB00D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB00DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB00E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fca28
	ctx.lr = 0x83CB00F4;
	sub_835FCA28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB00FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB0104;
	sub_82573C50(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0110;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fca28
	ctx.lr = 0x83CB011C;
	sub_835FCA28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0124;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CB012C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0138;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fca28
	ctx.lr = 0x83CB0144;
	sub_835FCA28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB014C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CB0154;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0160;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fca28
	ctx.lr = 0x83CB016C;
	sub_835FCA28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0174;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CB017C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0188;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fca28
	ctx.lr = 0x83CB0194;
	sub_835FCA28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB019C;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CB01A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CB01B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fca28
	ctx.lr = 0x83CB01BC;
	sub_835FCA28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB01C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CB01CC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CB01D8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fca28
	ctx.lr = 0x83CB01E4;
	sub_835FCA28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB01EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CB01F4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fca28
	ctx.lr = 0x83CB01FC;
	sub_835FCA28(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r3,r10,-25219
	ctx.r3.s64 = ctx.r10.s64 + -25219;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB0240;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB0258"))) PPC_WEAK_FUNC(sub_83CB0258);
PPC_FUNC_IMPL(__imp__sub_83CB0258) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r31,r11,-29396
	ctx.r31.s64 = ctx.r11.s64 + -29396;
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0280;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fca98
	ctx.lr = 0x83CB028C;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0294;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CB029C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CB02A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fca98
	ctx.lr = 0x83CB02B4;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB02BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CB02C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573ce0
	ctx.lr = 0x83CB02D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fca98
	ctx.lr = 0x83CB02DC;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB02E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573c50
	ctx.lr = 0x83CB02EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CB02F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fca98
	ctx.lr = 0x83CB0304;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB030C;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CB0314;
	sub_82573C50(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0320;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fca98
	ctx.lr = 0x83CB032C;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0334;
	sub_82573D70(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573c50
	ctx.lr = 0x83CB033C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0348;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fca98
	ctx.lr = 0x83CB0354;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB035C;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CB0364;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0370;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fca98
	ctx.lr = 0x83CB037C;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0384;
	sub_82573D70(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573c50
	ctx.lr = 0x83CB038C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0398;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fca98
	ctx.lr = 0x83CB03A4;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB03AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CB03B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CB03C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fca98
	ctx.lr = 0x83CB03CC;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB03D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CB03DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CB03E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fca98
	ctx.lr = 0x83CB03F4;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB03FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CB0404;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0410;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fca98
	ctx.lr = 0x83CB041C;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0424;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CB042C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0438;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fca98
	ctx.lr = 0x83CB0444;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB044C;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CB0454;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0460;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fca98
	ctx.lr = 0x83CB046C;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0474;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CB047C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0488;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fca98
	ctx.lr = 0x83CB0494;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB049C;
	sub_82573D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573c50
	ctx.lr = 0x83CB04A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573ce0
	ctx.lr = 0x83CB04B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fca98
	ctx.lr = 0x83CB04BC;
	sub_835FCA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB04C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573c50
	ctx.lr = 0x83CB04CC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573ce0
	ctx.lr = 0x83CB04D8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fca98
	ctx.lr = 0x83CB04E4;
	sub_835FCA98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB04EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573c50
	ctx.lr = 0x83CB04F4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fca98
	ctx.lr = 0x83CB04FC;
	sub_835FCA98(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r3,r9,-25251
	ctx.r3.s64 = ctx.r9.s64 + -25251;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB0584;
	sub_825731E0(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CB059C"))) PPC_WEAK_FUNC(sub_83CB059C);
PPC_FUNC_IMPL(__imp__sub_83CB059C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB05A0"))) PPC_WEAK_FUNC(sub_83CB05A0);
PPC_FUNC_IMPL(__imp__sub_83CB05A0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-29372
	ctx.r31.s64 = ctx.r11.s64 + -29372;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CB05C8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fcb08
	ctx.lr = 0x83CB05D4;
	sub_835FCB08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB05DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB05E4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB05F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fcb08
	ctx.lr = 0x83CB05FC;
	sub_835FCB08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0604;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB060C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0618;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fcb08
	ctx.lr = 0x83CB0624;
	sub_835FCB08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB062C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB0634;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0640;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcb08
	ctx.lr = 0x83CB064C;
	sub_835FCB08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0654;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CB065C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0668;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcb08
	ctx.lr = 0x83CB0674;
	sub_835FCB08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB067C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CB0684;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcb08
	ctx.lr = 0x83CB068C;
	sub_835FCB08(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25238
	ctx.r3.s64 = ctx.r10.s64 + -25238;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB06BC;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB06D4"))) PPC_WEAK_FUNC(sub_83CB06D4);
PPC_FUNC_IMPL(__imp__sub_83CB06D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB06D8"))) PPC_WEAK_FUNC(sub_83CB06D8);
PPC_FUNC_IMPL(__imp__sub_83CB06D8) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29360
	ctx.r31.s64 = ctx.r11.s64 + -29360;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0700;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcb78
	ctx.lr = 0x83CB070C;
	sub_835FCB78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0714;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB071C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0728;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcb78
	ctx.lr = 0x83CB0734;
	sub_835FCB78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB073C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB0744;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcb78
	ctx.lr = 0x83CB074C;
	sub_835FCB78(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25223
	ctx.r3.s64 = ctx.r10.s64 + -25223;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB076C;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB0784"))) PPC_WEAK_FUNC(sub_83CB0784);
PPC_FUNC_IMPL(__imp__sub_83CB0784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB0788"))) PPC_WEAK_FUNC(sub_83CB0788);
PPC_FUNC_IMPL(__imp__sub_83CB0788) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29348
	ctx.r31.s64 = ctx.r11.s64 + -29348;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x82573ce0
	ctx.lr = 0x83CB07B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x83CB07BC;
	sub_835FCBE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB07C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB07CC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB07D8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcbe8
	ctx.lr = 0x83CB07E4;
	sub_835FCBE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB07EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB07F4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcbe8
	ctx.lr = 0x83CB07FC;
	sub_835FCBE8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25286
	ctx.r3.s64 = ctx.r10.s64 + -25286;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB081C;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB0834"))) PPC_WEAK_FUNC(sub_83CB0834);
PPC_FUNC_IMPL(__imp__sub_83CB0834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB0838"))) PPC_WEAK_FUNC(sub_83CB0838);
PPC_FUNC_IMPL(__imp__sub_83CB0838) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29320
	ctx.r31.s64 = ctx.r11.s64 + -29320;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0860;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fcc58
	ctx.lr = 0x83CB086C;
	sub_835FCC58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0874;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB087C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0888;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fcc58
	ctx.lr = 0x83CB0894;
	sub_835FCC58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB089C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB08A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB08B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcc58
	ctx.lr = 0x83CB08BC;
	sub_835FCC58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB08C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB08CC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB08D8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcc58
	ctx.lr = 0x83CB08E4;
	sub_835FCC58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB08EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB08F4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcc58
	ctx.lr = 0x83CB08FC;
	sub_835FCC58(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25312
	ctx.r3.s64 = ctx.r10.s64 + -25312;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB0924;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB093C"))) PPC_WEAK_FUNC(sub_83CB093C);
PPC_FUNC_IMPL(__imp__sub_83CB093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB0940"))) PPC_WEAK_FUNC(sub_83CB0940);
PPC_FUNC_IMPL(__imp__sub_83CB0940) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-29268
	ctx.r31.s64 = ctx.r11.s64 + -29268;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0968;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fccc8
	ctx.lr = 0x83CB0974;
	sub_835FCCC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB097C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB0984;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0990;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fccc8
	ctx.lr = 0x83CB099C;
	sub_835FCCC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB09A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB09AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB09B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fccc8
	ctx.lr = 0x83CB09C4;
	sub_835FCCC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB09CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB09D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB09E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fccc8
	ctx.lr = 0x83CB09EC;
	sub_835FCCC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB09F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CB09FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0A08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fccc8
	ctx.lr = 0x83CB0A14;
	sub_835FCCC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0A1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CB0A24;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0A30;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fccc8
	ctx.lr = 0x83CB0A3C;
	sub_835FCCC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0A44;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CB0A4C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fccc8
	ctx.lr = 0x83CB0A54;
	sub_835FCCC8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25266
	ctx.r3.s64 = ctx.r10.s64 + -25266;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB0A8C;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CB0AA4"))) PPC_WEAK_FUNC(sub_83CB0AA4);
PPC_FUNC_IMPL(__imp__sub_83CB0AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB0AA8"))) PPC_WEAK_FUNC(sub_83CB0AA8);
PPC_FUNC_IMPL(__imp__sub_83CB0AA8) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29248
	ctx.r31.s64 = ctx.r11.s64 + -29248;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0AD0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcd38
	ctx.lr = 0x83CB0ADC;
	sub_835FCD38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0AE4;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB0AEC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0AF8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcd38
	ctx.lr = 0x83CB0B04;
	sub_835FCD38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0B0C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB0B14;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcd38
	ctx.lr = 0x83CB0B1C;
	sub_835FCD38(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25332
	ctx.r3.s64 = ctx.r10.s64 + -25332;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB0B3C;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB0B54"))) PPC_WEAK_FUNC(sub_83CB0B54);
PPC_FUNC_IMPL(__imp__sub_83CB0B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB0B58"))) PPC_WEAK_FUNC(sub_83CB0B58);
PPC_FUNC_IMPL(__imp__sub_83CB0B58) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29200
	ctx.r31.s64 = ctx.r11.s64 + -29200;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0B80;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fcda8
	ctx.lr = 0x83CB0B8C;
	sub_835FCDA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0B94;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB0B9C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0BA8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fcda8
	ctx.lr = 0x83CB0BB4;
	sub_835FCDA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0BBC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB0BC4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0BD0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcda8
	ctx.lr = 0x83CB0BDC;
	sub_835FCDA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0BE4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB0BEC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0BF8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcda8
	ctx.lr = 0x83CB0C04;
	sub_835FCDA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0C0C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB0C14;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcda8
	ctx.lr = 0x83CB0C1C;
	sub_835FCDA8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25208
	ctx.r3.s64 = ctx.r10.s64 + -25208;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB0C44;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB0C5C"))) PPC_WEAK_FUNC(sub_83CB0C5C);
PPC_FUNC_IMPL(__imp__sub_83CB0C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB0C60"))) PPC_WEAK_FUNC(sub_83CB0C60);
PPC_FUNC_IMPL(__imp__sub_83CB0C60) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29172
	ctx.r31.s64 = ctx.r11.s64 + -29172;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0C88;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fce18
	ctx.lr = 0x83CB0C94;
	sub_835FCE18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0C9C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB0CA4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0CB0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fce18
	ctx.lr = 0x83CB0CBC;
	sub_835FCE18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0CC4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB0CCC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fce18
	ctx.lr = 0x83CB0CD4;
	sub_835FCE18(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25229
	ctx.r3.s64 = ctx.r10.s64 + -25229;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB0CF4;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB0D0C"))) PPC_WEAK_FUNC(sub_83CB0D0C);
PPC_FUNC_IMPL(__imp__sub_83CB0D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB0D10"))) PPC_WEAK_FUNC(sub_83CB0D10);
PPC_FUNC_IMPL(__imp__sub_83CB0D10) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29152
	ctx.r31.s64 = ctx.r11.s64 + -29152;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0D38;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fce88
	ctx.lr = 0x83CB0D44;
	sub_835FCE88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0D4C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB0D54;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0D60;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fce88
	ctx.lr = 0x83CB0D6C;
	sub_835FCE88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0D74;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB0D7C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fce88
	ctx.lr = 0x83CB0D84;
	sub_835FCE88(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25263
	ctx.r3.s64 = ctx.r10.s64 + -25263;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB0DA4;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB0DBC"))) PPC_WEAK_FUNC(sub_83CB0DBC);
PPC_FUNC_IMPL(__imp__sub_83CB0DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB0DC0"))) PPC_WEAK_FUNC(sub_83CB0DC0);
PPC_FUNC_IMPL(__imp__sub_83CB0DC0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29116
	ctx.r31.s64 = ctx.r11.s64 + -29116;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0DE8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fcef8
	ctx.lr = 0x83CB0DF4;
	sub_835FCEF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0DFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB0E04;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0E10;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fcef8
	ctx.lr = 0x83CB0E1C;
	sub_835FCEF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0E24;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB0E2C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0E38;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcef8
	ctx.lr = 0x83CB0E44;
	sub_835FCEF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0E4C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB0E54;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0E60;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcef8
	ctx.lr = 0x83CB0E6C;
	sub_835FCEF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0E74;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB0E7C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcef8
	ctx.lr = 0x83CB0E84;
	sub_835FCEF8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25255
	ctx.r3.s64 = ctx.r10.s64 + -25255;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB0EAC;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB0EC4"))) PPC_WEAK_FUNC(sub_83CB0EC4);
PPC_FUNC_IMPL(__imp__sub_83CB0EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB0EC8"))) PPC_WEAK_FUNC(sub_83CB0EC8);
PPC_FUNC_IMPL(__imp__sub_83CB0EC8) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29084
	ctx.r31.s64 = ctx.r11.s64 + -29084;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0EF0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcf68
	ctx.lr = 0x83CB0EFC;
	sub_835FCF68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0F04;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB0F0C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0F18;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcf68
	ctx.lr = 0x83CB0F24;
	sub_835FCF68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0F2C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB0F34;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcf68
	ctx.lr = 0x83CB0F3C;
	sub_835FCF68(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25222
	ctx.r3.s64 = ctx.r10.s64 + -25222;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB0F5C;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB0F74"))) PPC_WEAK_FUNC(sub_83CB0F74);
PPC_FUNC_IMPL(__imp__sub_83CB0F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB0F78"))) PPC_WEAK_FUNC(sub_83CB0F78);
PPC_FUNC_IMPL(__imp__sub_83CB0F78) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-29032
	ctx.r31.s64 = ctx.r11.s64 + -29032;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0FA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fcfd8
	ctx.lr = 0x83CB0FAC;
	sub_835FCFD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0FB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB0FBC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0FC8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcfd8
	ctx.lr = 0x83CB0FD4;
	sub_835FCFD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB0FDC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB0FE4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB0FF0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcfd8
	ctx.lr = 0x83CB0FFC;
	sub_835FCFD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1004;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB100C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcfd8
	ctx.lr = 0x83CB1014;
	sub_835FCFD8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25281
	ctx.r3.s64 = ctx.r10.s64 + -25281;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB1038;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB1050"))) PPC_WEAK_FUNC(sub_83CB1050);
PPC_FUNC_IMPL(__imp__sub_83CB1050) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-28944
	ctx.r31.s64 = ctx.r11.s64 + -28944;
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1078;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fd048
	ctx.lr = 0x83CB1084;
	sub_835FD048(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB108C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB1094;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB10A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fd048
	ctx.lr = 0x83CB10AC;
	sub_835FD048(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB10B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB10BC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB10C8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fd048
	ctx.lr = 0x83CB10D4;
	sub_835FD048(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB10DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CB10E4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB10F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd048
	ctx.lr = 0x83CB10FC;
	sub_835FD048(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1104;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CB110C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1118;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd048
	ctx.lr = 0x83CB1124;
	sub_835FD048(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB112C;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CB1134;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1140;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd048
	ctx.lr = 0x83CB114C;
	sub_835FD048(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1154;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CB115C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1168;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd048
	ctx.lr = 0x83CB1174;
	sub_835FD048(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB117C;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CB1184;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd048
	ctx.lr = 0x83CB118C;
	sub_835FD048(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25195
	ctx.r3.s64 = ctx.r10.s64 + -25195;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB11CC;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB11E4"))) PPC_WEAK_FUNC(sub_83CB11E4);
PPC_FUNC_IMPL(__imp__sub_83CB11E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB11E8"))) PPC_WEAK_FUNC(sub_83CB11E8);
PPC_FUNC_IMPL(__imp__sub_83CB11E8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-28868
	ctx.r31.s64 = ctx.r11.s64 + -28868;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1210;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fd0b8
	ctx.lr = 0x83CB121C;
	sub_835FD0B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1224;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB122C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1238;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd0b8
	ctx.lr = 0x83CB1244;
	sub_835FD0B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB124C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB1254;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1260;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd0b8
	ctx.lr = 0x83CB126C;
	sub_835FD0B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1274;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB127C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1288;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd0b8
	ctx.lr = 0x83CB1294;
	sub_835FD0B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB129C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CB12A4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB12B0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd0b8
	ctx.lr = 0x83CB12BC;
	sub_835FD0B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB12C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CB12CC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd0b8
	ctx.lr = 0x83CB12D4;
	sub_835FD0B8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25196
	ctx.r3.s64 = ctx.r10.s64 + -25196;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB1304;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB131C"))) PPC_WEAK_FUNC(sub_83CB131C);
PPC_FUNC_IMPL(__imp__sub_83CB131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB1320"))) PPC_WEAK_FUNC(sub_83CB1320);
PPC_FUNC_IMPL(__imp__sub_83CB1320) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-28828
	ctx.r31.s64 = ctx.r11.s64 + -28828;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1348;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd128
	ctx.lr = 0x83CB1354;
	sub_835FD128(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB135C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB1364;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1370;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd128
	ctx.lr = 0x83CB137C;
	sub_835FD128(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1384;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB138C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1398;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd128
	ctx.lr = 0x83CB13A4;
	sub_835FD128(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB13AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB13B4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB13C0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd128
	ctx.lr = 0x83CB13CC;
	sub_835FD128(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB13D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB13DC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd128
	ctx.lr = 0x83CB13E4;
	sub_835FD128(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25278
	ctx.r3.s64 = ctx.r10.s64 + -25278;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB140C;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB1424"))) PPC_WEAK_FUNC(sub_83CB1424);
PPC_FUNC_IMPL(__imp__sub_83CB1424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB1428"))) PPC_WEAK_FUNC(sub_83CB1428);
PPC_FUNC_IMPL(__imp__sub_83CB1428) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-28796
	ctx.r31.s64 = ctx.r11.s64 + -28796;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1450;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd198
	ctx.lr = 0x83CB145C;
	sub_835FD198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1464;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB146C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1478;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd198
	ctx.lr = 0x83CB1484;
	sub_835FD198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB148C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB1494;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB14A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd198
	ctx.lr = 0x83CB14AC;
	sub_835FD198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB14B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB14BC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB14C8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd198
	ctx.lr = 0x83CB14D4;
	sub_835FD198(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB14DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB14E4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd198
	ctx.lr = 0x83CB14EC;
	sub_835FD198(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25213
	ctx.r3.s64 = ctx.r10.s64 + -25213;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB1514;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB152C"))) PPC_WEAK_FUNC(sub_83CB152C);
PPC_FUNC_IMPL(__imp__sub_83CB152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB1530"))) PPC_WEAK_FUNC(sub_83CB1530);
PPC_FUNC_IMPL(__imp__sub_83CB1530) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-28760
	ctx.r31.s64 = ctx.r11.s64 + -28760;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1558;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd208
	ctx.lr = 0x83CB1564;
	sub_835FD208(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB156C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB1574;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1580;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd208
	ctx.lr = 0x83CB158C;
	sub_835FD208(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1594;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB159C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB15A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd208
	ctx.lr = 0x83CB15B4;
	sub_835FD208(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB15BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB15C4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB15D0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd208
	ctx.lr = 0x83CB15DC;
	sub_835FD208(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB15E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB15EC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd208
	ctx.lr = 0x83CB15F4;
	sub_835FD208(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25201
	ctx.r3.s64 = ctx.r10.s64 + -25201;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB161C;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB1634"))) PPC_WEAK_FUNC(sub_83CB1634);
PPC_FUNC_IMPL(__imp__sub_83CB1634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB1638"))) PPC_WEAK_FUNC(sub_83CB1638);
PPC_FUNC_IMPL(__imp__sub_83CB1638) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-28740
	ctx.r31.s64 = ctx.r11.s64 + -28740;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1660;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd278
	ctx.lr = 0x83CB166C;
	sub_835FD278(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1674;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB167C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1688;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd278
	ctx.lr = 0x83CB1694;
	sub_835FD278(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB169C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB16A4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB16B0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd278
	ctx.lr = 0x83CB16BC;
	sub_835FD278(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB16C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB16CC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd278
	ctx.lr = 0x83CB16D4;
	sub_835FD278(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25249
	ctx.r3.s64 = ctx.r10.s64 + -25249;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB16F8;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB1710"))) PPC_WEAK_FUNC(sub_83CB1710);
PPC_FUNC_IMPL(__imp__sub_83CB1710) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-28708
	ctx.r31.s64 = ctx.r11.s64 + -28708;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1738;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd2e8
	ctx.lr = 0x83CB1744;
	sub_835FD2E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB174C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB1754;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1760;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd2e8
	ctx.lr = 0x83CB176C;
	sub_835FD2E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1774;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB177C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1788;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd2e8
	ctx.lr = 0x83CB1794;
	sub_835FD2E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB179C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB17A4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB17B0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd2e8
	ctx.lr = 0x83CB17BC;
	sub_835FD2E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB17C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB17CC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd2e8
	ctx.lr = 0x83CB17D4;
	sub_835FD2E8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25304
	ctx.r3.s64 = ctx.r10.s64 + -25304;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB17FC;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB1814"))) PPC_WEAK_FUNC(sub_83CB1814);
PPC_FUNC_IMPL(__imp__sub_83CB1814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB1818"))) PPC_WEAK_FUNC(sub_83CB1818);
PPC_FUNC_IMPL(__imp__sub_83CB1818) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-28692
	ctx.r31.s64 = ctx.r11.s64 + -28692;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1840;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd358
	ctx.lr = 0x83CB184C;
	sub_835FD358(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1854;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB185C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1868;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd358
	ctx.lr = 0x83CB1874;
	sub_835FD358(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB187C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB1884;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd358
	ctx.lr = 0x83CB188C;
	sub_835FD358(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25237
	ctx.r3.s64 = ctx.r10.s64 + -25237;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB18AC;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB18C4"))) PPC_WEAK_FUNC(sub_83CB18C4);
PPC_FUNC_IMPL(__imp__sub_83CB18C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB18C8"))) PPC_WEAK_FUNC(sub_83CB18C8);
PPC_FUNC_IMPL(__imp__sub_83CB18C8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-28672
	ctx.r31.s64 = ctx.r11.s64 + -28672;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CB18F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fd3c8
	ctx.lr = 0x83CB18FC;
	sub_835FD3C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1904;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB190C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1918;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd3c8
	ctx.lr = 0x83CB1924;
	sub_835FD3C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB192C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB1934;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1940;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd3c8
	ctx.lr = 0x83CB194C;
	sub_835FD3C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1954;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB195C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1968;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd3c8
	ctx.lr = 0x83CB1974;
	sub_835FD3C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB197C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CB1984;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1990;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd3c8
	ctx.lr = 0x83CB199C;
	sub_835FD3C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB19A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CB19AC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd3c8
	ctx.lr = 0x83CB19B4;
	sub_835FD3C8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25256
	ctx.r3.s64 = ctx.r10.s64 + -25256;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB19E4;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB19FC"))) PPC_WEAK_FUNC(sub_83CB19FC);
PPC_FUNC_IMPL(__imp__sub_83CB19FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB1A00"))) PPC_WEAK_FUNC(sub_83CB1A00);
PPC_FUNC_IMPL(__imp__sub_83CB1A00) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-28644
	ctx.r31.s64 = ctx.r11.s64 + -28644;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1A28;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd438
	ctx.lr = 0x83CB1A34;
	sub_835FD438(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1A3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB1A44;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1A50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd438
	ctx.lr = 0x83CB1A5C;
	sub_835FD438(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1A64;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB1A6C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1A78;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd438
	ctx.lr = 0x83CB1A84;
	sub_835FD438(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1A8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB1A94;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd438
	ctx.lr = 0x83CB1A9C;
	sub_835FD438(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25277
	ctx.r3.s64 = ctx.r10.s64 + -25277;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB1AC0;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB1AD8"))) PPC_WEAK_FUNC(sub_83CB1AD8);
PPC_FUNC_IMPL(__imp__sub_83CB1AD8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-28568
	ctx.r31.s64 = ctx.r11.s64 + -28568;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1B00;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fd4a8
	ctx.lr = 0x83CB1B0C;
	sub_835FD4A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1B14;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB1B1C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1B28;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd4a8
	ctx.lr = 0x83CB1B34;
	sub_835FD4A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1B3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB1B44;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1B50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd4a8
	ctx.lr = 0x83CB1B5C;
	sub_835FD4A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1B64;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB1B6C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1B78;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd4a8
	ctx.lr = 0x83CB1B84;
	sub_835FD4A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1B8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CB1B94;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1BA0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd4a8
	ctx.lr = 0x83CB1BAC;
	sub_835FD4A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1BB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CB1BBC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd4a8
	ctx.lr = 0x83CB1BC4;
	sub_835FD4A8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25276
	ctx.r3.s64 = ctx.r10.s64 + -25276;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB1BF4;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB1C0C"))) PPC_WEAK_FUNC(sub_83CB1C0C);
PPC_FUNC_IMPL(__imp__sub_83CB1C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB1C10"))) PPC_WEAK_FUNC(sub_83CB1C10);
PPC_FUNC_IMPL(__imp__sub_83CB1C10) {
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
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r31,r11,-28228
	ctx.r31.s64 = ctx.r11.s64 + -28228;
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1C38;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x835fd518
	ctx.lr = 0x83CB1C44;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1C4C;
	sub_82573D70(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82573c50
	ctx.lr = 0x83CB1C54;
	sub_82573C50(ctx, base);
	// addi r4,r31,-316
	ctx.r4.s64 = ctx.r31.s64 + -316;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1C60;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x835fd518
	ctx.lr = 0x83CB1C6C;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1C74;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CB1C7C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1C88;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x835fd518
	ctx.lr = 0x83CB1C94;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1C9C;
	sub_82573D70(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82573c50
	ctx.lr = 0x83CB1CA4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-292
	ctx.r4.s64 = ctx.r31.s64 + -292;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1CB0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x835fd518
	ctx.lr = 0x83CB1CBC;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1CC4;
	sub_82573D70(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573c50
	ctx.lr = 0x83CB1CCC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-280
	ctx.r4.s64 = ctx.r31.s64 + -280;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1CD8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x835fd518
	ctx.lr = 0x83CB1CE4;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1CEC;
	sub_82573D70(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82573c50
	ctx.lr = 0x83CB1CF4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-268
	ctx.r4.s64 = ctx.r31.s64 + -268;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1D00;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x835fd518
	ctx.lr = 0x83CB1D0C;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1D14;
	sub_82573D70(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573c50
	ctx.lr = 0x83CB1D1C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1D28;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x835fd518
	ctx.lr = 0x83CB1D34;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1D3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82573c50
	ctx.lr = 0x83CB1D44;
	sub_82573C50(ctx, base);
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1D50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x835fd518
	ctx.lr = 0x83CB1D5C;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1D64;
	sub_82573D70(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573c50
	ctx.lr = 0x83CB1D6C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-236
	ctx.r4.s64 = ctx.r31.s64 + -236;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1D78;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x835fd518
	ctx.lr = 0x83CB1D84;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1D8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82573c50
	ctx.lr = 0x83CB1D94;
	sub_82573C50(ctx, base);
	// addi r4,r31,-220
	ctx.r4.s64 = ctx.r31.s64 + -220;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1DA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x835fd518
	ctx.lr = 0x83CB1DAC;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1DB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573c50
	ctx.lr = 0x83CB1DBC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-204
	ctx.r4.s64 = ctx.r31.s64 + -204;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1DC8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x835fd518
	ctx.lr = 0x83CB1DD4;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1DDC;
	sub_82573D70(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82573c50
	ctx.lr = 0x83CB1DE4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1DF0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835fd518
	ctx.lr = 0x83CB1DFC;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1E04;
	sub_82573D70(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573c50
	ctx.lr = 0x83CB1E0C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1E18;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fd518
	ctx.lr = 0x83CB1E24;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1E2C;
	sub_82573D70(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82573c50
	ctx.lr = 0x83CB1E34;
	sub_82573C50(ctx, base);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1E40;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fd518
	ctx.lr = 0x83CB1E4C;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1E54;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CB1E5C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1E68;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fd518
	ctx.lr = 0x83CB1E74;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1E7C;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CB1E84;
	sub_82573C50(ctx, base);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1E90;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fd518
	ctx.lr = 0x83CB1E9C;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1EA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CB1EAC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-124
	ctx.r4.s64 = ctx.r31.s64 + -124;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1EB8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fd518
	ctx.lr = 0x83CB1EC4;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1ECC;
	sub_82573D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573c50
	ctx.lr = 0x83CB1ED4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1EE0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fd518
	ctx.lr = 0x83CB1EEC;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1EF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573c50
	ctx.lr = 0x83CB1EFC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1F08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fd518
	ctx.lr = 0x83CB1F14;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1F1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573c50
	ctx.lr = 0x83CB1F24;
	sub_82573C50(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1F30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fd518
	ctx.lr = 0x83CB1F3C;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1F44;
	sub_82573D70(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573c50
	ctx.lr = 0x83CB1F4C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1F58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fd518
	ctx.lr = 0x83CB1F64;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1F6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573c50
	ctx.lr = 0x83CB1F74;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1F80;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fd518
	ctx.lr = 0x83CB1F8C;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1F94;
	sub_82573D70(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82573c50
	ctx.lr = 0x83CB1F9C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1FA8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fd518
	ctx.lr = 0x83CB1FB4;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1FBC;
	sub_82573D70(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82573c50
	ctx.lr = 0x83CB1FC4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1FD0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fd518
	ctx.lr = 0x83CB1FDC;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB1FE4;
	sub_82573D70(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82573c50
	ctx.lr = 0x83CB1FEC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82573ce0
	ctx.lr = 0x83CB1FF8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd518
	ctx.lr = 0x83CB2004;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB200C;
	sub_82573D70(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82573c50
	ctx.lr = 0x83CB2014;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2020;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd518
	ctx.lr = 0x83CB202C;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2034;
	sub_82573D70(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82573c50
	ctx.lr = 0x83CB203C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2048;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd518
	ctx.lr = 0x83CB2054;
	sub_835FD518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB205C;
	sub_82573D70(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82573c50
	ctx.lr = 0x83CB2064;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2070;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd518
	ctx.lr = 0x83CB207C;
	sub_835FD518(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2084;
	sub_82573D70(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82573c50
	ctx.lr = 0x83CB208C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd518
	ctx.lr = 0x83CB2094;
	sub_835FD518(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// addi r3,r6,-25289
	ctx.r3.s64 = ctx.r6.s64 + -25289;
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r6,23
	ctx.r6.s64 = 23;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r10,26
	ctx.r10.s64 = 26;
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// li r9,27
	ctx.r9.s64 = 27;
	// stw r6,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB217C;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB2194"))) PPC_WEAK_FUNC(sub_83CB2194);
PPC_FUNC_IMPL(__imp__sub_83CB2194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB2198"))) PPC_WEAK_FUNC(sub_83CB2198);
PPC_FUNC_IMPL(__imp__sub_83CB2198) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-28208
	ctx.r31.s64 = ctx.r11.s64 + -28208;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82573ce0
	ctx.lr = 0x83CB21C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd588
	ctx.lr = 0x83CB21CC;
	sub_835FD588(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB21D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB21DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB21E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd588
	ctx.lr = 0x83CB21F4;
	sub_835FD588(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB21FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB2204;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2210;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd588
	ctx.lr = 0x83CB221C;
	sub_835FD588(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2224;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB222C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd588
	ctx.lr = 0x83CB2234;
	sub_835FD588(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25323
	ctx.r3.s64 = ctx.r10.s64 + -25323;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB2258;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB2270"))) PPC_WEAK_FUNC(sub_83CB2270);
PPC_FUNC_IMPL(__imp__sub_83CB2270) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r31,r11,-28064
	ctx.r31.s64 = ctx.r11.s64 + -28064;
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2298;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB22A4;
	sub_835FD5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB22AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CB22B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CB22C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB22CC;
	sub_835FD5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB22D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CB22DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CB22E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB22F4;
	sub_835FD5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB22FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CB2304;
	sub_82573C50(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2310;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB231C;
	sub_835FD5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2324;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CB232C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2338;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB2344;
	sub_835FD5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB234C;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CB2354;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2360;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB236C;
	sub_835FD5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2374;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CB237C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2388;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB2394;
	sub_835FD5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB239C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CB23A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CB23B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB23BC;
	sub_835FD5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB23C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CB23CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CB23D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB23E4;
	sub_835FD5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB23EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CB23F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2400;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB240C;
	sub_835FD5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2414;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CB241C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2428;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB2434;
	sub_835FD5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB243C;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CB2444;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2450;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB245C;
	sub_835FD5F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2464;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CB246C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd5f8
	ctx.lr = 0x83CB2474;
	sub_835FD5F8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r8,r10,-25327
	ctx.r8.s64 = ctx.r10.s64 + -25327;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB24E0;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB24F8"))) PPC_WEAK_FUNC(sub_83CB24F8);
PPC_FUNC_IMPL(__imp__sub_83CB24F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-28036
	ctx.r31.s64 = ctx.r11.s64 + -28036;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2520;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd668
	ctx.lr = 0x83CB252C;
	sub_835FD668(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2534;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB253C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2548;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd668
	ctx.lr = 0x83CB2554;
	sub_835FD668(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB255C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB2564;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2570;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd668
	ctx.lr = 0x83CB257C;
	sub_835FD668(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2584;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB258C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd668
	ctx.lr = 0x83CB2594;
	sub_835FD668(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25241
	ctx.r3.s64 = ctx.r10.s64 + -25241;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB25B8;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB25D0"))) PPC_WEAK_FUNC(sub_83CB25D0);
PPC_FUNC_IMPL(__imp__sub_83CB25D0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-27976
	ctx.r31.s64 = ctx.r11.s64 + -27976;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x82573ce0
	ctx.lr = 0x83CB25F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fd6d8
	ctx.lr = 0x83CB2604;
	sub_835FD6D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB260C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB2614;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2620;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd6d8
	ctx.lr = 0x83CB262C;
	sub_835FD6D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2634;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB263C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2648;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd6d8
	ctx.lr = 0x83CB2654;
	sub_835FD6D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB265C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB2664;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2670;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd6d8
	ctx.lr = 0x83CB267C;
	sub_835FD6D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2684;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CB268C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2698;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd6d8
	ctx.lr = 0x83CB26A4;
	sub_835FD6D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB26AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CB26B4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd6d8
	ctx.lr = 0x83CB26BC;
	sub_835FD6D8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25271
	ctx.r3.s64 = ctx.r10.s64 + -25271;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB26EC;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB2704"))) PPC_WEAK_FUNC(sub_83CB2704);
PPC_FUNC_IMPL(__imp__sub_83CB2704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB2708"))) PPC_WEAK_FUNC(sub_83CB2708);
PPC_FUNC_IMPL(__imp__sub_83CB2708) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-27944
	ctx.r31.s64 = ctx.r11.s64 + -27944;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2730;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd748
	ctx.lr = 0x83CB273C;
	sub_835FD748(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2744;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB274C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2758;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd748
	ctx.lr = 0x83CB2764;
	sub_835FD748(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB276C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB2774;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2780;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd748
	ctx.lr = 0x83CB278C;
	sub_835FD748(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2794;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB279C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd748
	ctx.lr = 0x83CB27A4;
	sub_835FD748(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25301
	ctx.r3.s64 = ctx.r10.s64 + -25301;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB27C8;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB27E0"))) PPC_WEAK_FUNC(sub_83CB27E0);
PPC_FUNC_IMPL(__imp__sub_83CB27E0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-27896
	ctx.r31.s64 = ctx.r11.s64 + -27896;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2808;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd7b8
	ctx.lr = 0x83CB2814;
	sub_835FD7B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB281C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CB2824;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2830;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd7b8
	ctx.lr = 0x83CB283C;
	sub_835FD7B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2844;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CB284C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2858;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd7b8
	ctx.lr = 0x83CB2864;
	sub_835FD7B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB286C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CB2874;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2880;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd7b8
	ctx.lr = 0x83CB288C;
	sub_835FD7B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2894;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CB289C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd7b8
	ctx.lr = 0x83CB28A4;
	sub_835FD7B8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25307
	ctx.r3.s64 = ctx.r10.s64 + -25307;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CB28CC;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB28E4"))) PPC_WEAK_FUNC(sub_83CB28E4);
PPC_FUNC_IMPL(__imp__sub_83CB28E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB28E8"))) PPC_WEAK_FUNC(sub_83CB28E8);
PPC_FUNC_IMPL(__imp__sub_83CB28E8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r31,r11,-27776
	ctx.r31.s64 = ctx.r11.s64 + -27776;
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2910;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fd828
	ctx.lr = 0x83CB291C;
	sub_835FD828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2924;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CB292C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2938;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fd828
	ctx.lr = 0x83CB2944;
	sub_835FD828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB294C;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CB2954;
	sub_82573C50(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2960;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fd828
	ctx.lr = 0x83CB296C;
	sub_835FD828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2974;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CB297C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2988;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fd828
	ctx.lr = 0x83CB2994;
	sub_835FD828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB299C;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CB29A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CB29B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fd828
	ctx.lr = 0x83CB29BC;
	sub_835FD828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB29C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CB29CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB29D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fd828
	ctx.lr = 0x83CB29E4;
	sub_835FD828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB29EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CB29F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2A00;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fd828
	ctx.lr = 0x83CB2A0C;
	sub_835FD828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2A14;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CB2A1C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2A28;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fd828
	ctx.lr = 0x83CB2A34;
	sub_835FD828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2A3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CB2A44;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2A50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd828
	ctx.lr = 0x83CB2A5C;
	sub_835FD828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2A64;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CB2A6C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2A78;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd828
	ctx.lr = 0x83CB2A84;
	sub_835FD828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2A8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CB2A94;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2AA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd828
	ctx.lr = 0x83CB2AAC;
	sub_835FD828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2AB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CB2ABC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2AC8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd828
	ctx.lr = 0x83CB2AD4;
	sub_835FD828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2ADC;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CB2AE4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd828
	ctx.lr = 0x83CB2AEC;
	sub_835FD828(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r8,r10,-25329
	ctx.r8.s64 = ctx.r10.s64 + -25329;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CB2B58;
	sub_825731E0(ctx, base);
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

__attribute__((alias("__imp__sub_83CB2B70"))) PPC_WEAK_FUNC(sub_83CB2B70);
PPC_FUNC_IMPL(__imp__sub_83CB2B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83CB2B78;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5696(r1)
	ea = -5696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,5184
	ctx.r3.s64 = ctx.r1.s64 + 5184;
	// addi r31,r11,-22760
	ctx.r31.s64 = ctx.r11.s64 + -22760;
	// addi r4,r31,-5004
	ctx.r4.s64 = ctx.r31.s64 + -5004;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2B94;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,233
	ctx.r3.s64 = 233;
	// bl 0x835fd898
	ctx.lr = 0x83CB2BA0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2BA8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5184
	ctx.r3.s64 = ctx.r1.s64 + 5184;
	// bl 0x82573c50
	ctx.lr = 0x83CB2BB0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4984
	ctx.r4.s64 = ctx.r31.s64 + -4984;
	// addi r3,r1,1952
	ctx.r3.s64 = ctx.r1.s64 + 1952;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2BBC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,232
	ctx.r3.s64 = 232;
	// bl 0x835fd898
	ctx.lr = 0x83CB2BC8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2BD0;
	sub_82573D70(ctx, base);
	// addi r3,r1,1952
	ctx.r3.s64 = ctx.r1.s64 + 1952;
	// bl 0x82573c50
	ctx.lr = 0x83CB2BD8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4964
	ctx.r4.s64 = ctx.r31.s64 + -4964;
	// addi r3,r1,3808
	ctx.r3.s64 = ctx.r1.s64 + 3808;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2BE4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,231
	ctx.r3.s64 = 231;
	// bl 0x835fd898
	ctx.lr = 0x83CB2BF0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2BF8;
	sub_82573D70(ctx, base);
	// addi r3,r1,3808
	ctx.r3.s64 = ctx.r1.s64 + 3808;
	// bl 0x82573c50
	ctx.lr = 0x83CB2C00;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4944
	ctx.r4.s64 = ctx.r31.s64 + -4944;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2C0C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,230
	ctx.r3.s64 = 230;
	// bl 0x835fd898
	ctx.lr = 0x83CB2C18;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2C20;
	sub_82573D70(ctx, base);
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x82573c50
	ctx.lr = 0x83CB2C28;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4924
	ctx.r4.s64 = ctx.r31.s64 + -4924;
	// addi r3,r1,4736
	ctx.r3.s64 = ctx.r1.s64 + 4736;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2C34;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,229
	ctx.r3.s64 = 229;
	// bl 0x835fd898
	ctx.lr = 0x83CB2C40;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2C48;
	sub_82573D70(ctx, base);
	// addi r3,r1,4736
	ctx.r3.s64 = ctx.r1.s64 + 4736;
	// bl 0x82573c50
	ctx.lr = 0x83CB2C50;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4900
	ctx.r4.s64 = ctx.r31.s64 + -4900;
	// addi r3,r1,2016
	ctx.r3.s64 = ctx.r1.s64 + 2016;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2C5C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,228
	ctx.r3.s64 = 228;
	// bl 0x835fd898
	ctx.lr = 0x83CB2C68;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2C70;
	sub_82573D70(ctx, base);
	// addi r3,r1,2016
	ctx.r3.s64 = ctx.r1.s64 + 2016;
	// bl 0x82573c50
	ctx.lr = 0x83CB2C78;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4876
	ctx.r4.s64 = ctx.r31.s64 + -4876;
	// addi r3,r1,3840
	ctx.r3.s64 = ctx.r1.s64 + 3840;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2C84;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,227
	ctx.r3.s64 = 227;
	// bl 0x835fd898
	ctx.lr = 0x83CB2C90;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2C98;
	sub_82573D70(ctx, base);
	// addi r3,r1,3840
	ctx.r3.s64 = ctx.r1.s64 + 3840;
	// bl 0x82573c50
	ctx.lr = 0x83CB2CA0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4856
	ctx.r4.s64 = ctx.r31.s64 + -4856;
	// addi r3,r1,2048
	ctx.r3.s64 = ctx.r1.s64 + 2048;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2CAC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,226
	ctx.r3.s64 = 226;
	// bl 0x835fd898
	ctx.lr = 0x83CB2CB8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2CC0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2048
	ctx.r3.s64 = ctx.r1.s64 + 2048;
	// bl 0x82573c50
	ctx.lr = 0x83CB2CC8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4836
	ctx.r4.s64 = ctx.r31.s64 + -4836;
	// addi r3,r1,5536
	ctx.r3.s64 = ctx.r1.s64 + 5536;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2CD4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,225
	ctx.r3.s64 = 225;
	// bl 0x835fd898
	ctx.lr = 0x83CB2CE0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2CE8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5536
	ctx.r3.s64 = ctx.r1.s64 + 5536;
	// bl 0x82573c50
	ctx.lr = 0x83CB2CF0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4812
	ctx.r4.s64 = ctx.r31.s64 + -4812;
	// addi r3,r1,2080
	ctx.r3.s64 = ctx.r1.s64 + 2080;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2CFC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x835fd898
	ctx.lr = 0x83CB2D08;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2D10;
	sub_82573D70(ctx, base);
	// addi r3,r1,2080
	ctx.r3.s64 = ctx.r1.s64 + 2080;
	// bl 0x82573c50
	ctx.lr = 0x83CB2D18;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4784
	ctx.r4.s64 = ctx.r31.s64 + -4784;
	// addi r3,r1,3872
	ctx.r3.s64 = ctx.r1.s64 + 3872;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2D24;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,223
	ctx.r3.s64 = 223;
	// bl 0x835fd898
	ctx.lr = 0x83CB2D30;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2D38;
	sub_82573D70(ctx, base);
	// addi r3,r1,3872
	ctx.r3.s64 = ctx.r1.s64 + 3872;
	// bl 0x82573c50
	ctx.lr = 0x83CB2D40;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4756
	ctx.r4.s64 = ctx.r31.s64 + -4756;
	// addi r3,r1,2112
	ctx.r3.s64 = ctx.r1.s64 + 2112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2D4C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,222
	ctx.r3.s64 = 222;
	// bl 0x835fd898
	ctx.lr = 0x83CB2D58;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2D60;
	sub_82573D70(ctx, base);
	// addi r3,r1,2112
	ctx.r3.s64 = ctx.r1.s64 + 2112;
	// bl 0x82573c50
	ctx.lr = 0x83CB2D68;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4732
	ctx.r4.s64 = ctx.r31.s64 + -4732;
	// addi r3,r1,4768
	ctx.r3.s64 = ctx.r1.s64 + 4768;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2D74;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,221
	ctx.r3.s64 = 221;
	// bl 0x835fd898
	ctx.lr = 0x83CB2D80;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2D88;
	sub_82573D70(ctx, base);
	// addi r3,r1,4768
	ctx.r3.s64 = ctx.r1.s64 + 4768;
	// bl 0x82573c50
	ctx.lr = 0x83CB2D90;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4708
	ctx.r4.s64 = ctx.r31.s64 + -4708;
	// addi r3,r1,2144
	ctx.r3.s64 = ctx.r1.s64 + 2144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2D9C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,220
	ctx.r3.s64 = 220;
	// bl 0x835fd898
	ctx.lr = 0x83CB2DA8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2DB0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2144
	ctx.r3.s64 = ctx.r1.s64 + 2144;
	// bl 0x82573c50
	ctx.lr = 0x83CB2DB8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4684
	ctx.r4.s64 = ctx.r31.s64 + -4684;
	// addi r3,r1,3904
	ctx.r3.s64 = ctx.r1.s64 + 3904;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2DC4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,219
	ctx.r3.s64 = 219;
	// bl 0x835fd898
	ctx.lr = 0x83CB2DD0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2DD8;
	sub_82573D70(ctx, base);
	// addi r3,r1,3904
	ctx.r3.s64 = ctx.r1.s64 + 3904;
	// bl 0x82573c50
	ctx.lr = 0x83CB2DE0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4664
	ctx.r4.s64 = ctx.r31.s64 + -4664;
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2DEC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,218
	ctx.r3.s64 = 218;
	// bl 0x835fd898
	ctx.lr = 0x83CB2DF8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2E00;
	sub_82573D70(ctx, base);
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x82573c50
	ctx.lr = 0x83CB2E08;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4632
	ctx.r4.s64 = ctx.r31.s64 + -4632;
	// addi r3,r1,5216
	ctx.r3.s64 = ctx.r1.s64 + 5216;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2E14;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,217
	ctx.r3.s64 = 217;
	// bl 0x835fd898
	ctx.lr = 0x83CB2E20;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2E28;
	sub_82573D70(ctx, base);
	// addi r3,r1,5216
	ctx.r3.s64 = ctx.r1.s64 + 5216;
	// bl 0x82573c50
	ctx.lr = 0x83CB2E30;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4612
	ctx.r4.s64 = ctx.r31.s64 + -4612;
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2E3C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,216
	ctx.r3.s64 = 216;
	// bl 0x835fd898
	ctx.lr = 0x83CB2E48;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2E50;
	sub_82573D70(ctx, base);
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// bl 0x82573c50
	ctx.lr = 0x83CB2E58;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4588
	ctx.r4.s64 = ctx.r31.s64 + -4588;
	// addi r3,r1,3936
	ctx.r3.s64 = ctx.r1.s64 + 3936;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2E64;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,215
	ctx.r3.s64 = 215;
	// bl 0x835fd898
	ctx.lr = 0x83CB2E70;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2E78;
	sub_82573D70(ctx, base);
	// addi r3,r1,3936
	ctx.r3.s64 = ctx.r1.s64 + 3936;
	// bl 0x82573c50
	ctx.lr = 0x83CB2E80;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4568
	ctx.r4.s64 = ctx.r31.s64 + -4568;
	// addi r3,r1,2240
	ctx.r3.s64 = ctx.r1.s64 + 2240;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2E8C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,214
	ctx.r3.s64 = 214;
	// bl 0x835fd898
	ctx.lr = 0x83CB2E98;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2EA0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2240
	ctx.r3.s64 = ctx.r1.s64 + 2240;
	// bl 0x82573c50
	ctx.lr = 0x83CB2EA8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4548
	ctx.r4.s64 = ctx.r31.s64 + -4548;
	// addi r3,r1,4800
	ctx.r3.s64 = ctx.r1.s64 + 4800;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2EB4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,213
	ctx.r3.s64 = 213;
	// bl 0x835fd898
	ctx.lr = 0x83CB2EC0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2EC8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4800
	ctx.r3.s64 = ctx.r1.s64 + 4800;
	// bl 0x82573c50
	ctx.lr = 0x83CB2ED0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4524
	ctx.r4.s64 = ctx.r31.s64 + -4524;
	// addi r3,r1,2272
	ctx.r3.s64 = ctx.r1.s64 + 2272;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2EDC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,212
	ctx.r3.s64 = 212;
	// bl 0x835fd898
	ctx.lr = 0x83CB2EE8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2EF0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2272
	ctx.r3.s64 = ctx.r1.s64 + 2272;
	// bl 0x82573c50
	ctx.lr = 0x83CB2EF8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4504
	ctx.r4.s64 = ctx.r31.s64 + -4504;
	// addi r3,r1,3968
	ctx.r3.s64 = ctx.r1.s64 + 3968;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2F04;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,211
	ctx.r3.s64 = 211;
	// bl 0x835fd898
	ctx.lr = 0x83CB2F10;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2F18;
	sub_82573D70(ctx, base);
	// addi r3,r1,3968
	ctx.r3.s64 = ctx.r1.s64 + 3968;
	// bl 0x82573c50
	ctx.lr = 0x83CB2F20;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4476
	ctx.r4.s64 = ctx.r31.s64 + -4476;
	// addi r3,r1,2304
	ctx.r3.s64 = ctx.r1.s64 + 2304;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2F2C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,210
	ctx.r3.s64 = 210;
	// bl 0x835fd898
	ctx.lr = 0x83CB2F38;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2F40;
	sub_82573D70(ctx, base);
	// addi r3,r1,2304
	ctx.r3.s64 = ctx.r1.s64 + 2304;
	// bl 0x82573c50
	ctx.lr = 0x83CB2F48;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4456
	ctx.r4.s64 = ctx.r31.s64 + -4456;
	// addi r3,r1,5440
	ctx.r3.s64 = ctx.r1.s64 + 5440;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2F54;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,209
	ctx.r3.s64 = 209;
	// bl 0x835fd898
	ctx.lr = 0x83CB2F60;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2F68;
	sub_82573D70(ctx, base);
	// addi r3,r1,5440
	ctx.r3.s64 = ctx.r1.s64 + 5440;
	// bl 0x82573c50
	ctx.lr = 0x83CB2F70;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4436
	ctx.r4.s64 = ctx.r31.s64 + -4436;
	// addi r3,r1,2336
	ctx.r3.s64 = ctx.r1.s64 + 2336;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2F7C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x835fd898
	ctx.lr = 0x83CB2F88;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2F90;
	sub_82573D70(ctx, base);
	// addi r3,r1,2336
	ctx.r3.s64 = ctx.r1.s64 + 2336;
	// bl 0x82573c50
	ctx.lr = 0x83CB2F98;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4408
	ctx.r4.s64 = ctx.r31.s64 + -4408;
	// addi r3,r1,4000
	ctx.r3.s64 = ctx.r1.s64 + 4000;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2FA4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,207
	ctx.r3.s64 = 207;
	// bl 0x835fd898
	ctx.lr = 0x83CB2FB0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2FB8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4000
	ctx.r3.s64 = ctx.r1.s64 + 4000;
	// bl 0x82573c50
	ctx.lr = 0x83CB2FC0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4388
	ctx.r4.s64 = ctx.r31.s64 + -4388;
	// addi r3,r1,2368
	ctx.r3.s64 = ctx.r1.s64 + 2368;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2FCC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x835fd898
	ctx.lr = 0x83CB2FD8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB2FE0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2368
	ctx.r3.s64 = ctx.r1.s64 + 2368;
	// bl 0x82573c50
	ctx.lr = 0x83CB2FE8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4364
	ctx.r4.s64 = ctx.r31.s64 + -4364;
	// addi r3,r1,4832
	ctx.r3.s64 = ctx.r1.s64 + 4832;
	// bl 0x82573ce0
	ctx.lr = 0x83CB2FF4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,205
	ctx.r3.s64 = 205;
	// bl 0x835fd898
	ctx.lr = 0x83CB3000;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3008;
	sub_82573D70(ctx, base);
	// addi r3,r1,4832
	ctx.r3.s64 = ctx.r1.s64 + 4832;
	// bl 0x82573c50
	ctx.lr = 0x83CB3010;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4332
	ctx.r4.s64 = ctx.r31.s64 + -4332;
	// addi r3,r1,2400
	ctx.r3.s64 = ctx.r1.s64 + 2400;
	// bl 0x82573ce0
	ctx.lr = 0x83CB301C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x835fd898
	ctx.lr = 0x83CB3028;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3030;
	sub_82573D70(ctx, base);
	// addi r3,r1,2400
	ctx.r3.s64 = ctx.r1.s64 + 2400;
	// bl 0x82573c50
	ctx.lr = 0x83CB3038;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4296
	ctx.r4.s64 = ctx.r31.s64 + -4296;
	// addi r3,r1,4032
	ctx.r3.s64 = ctx.r1.s64 + 4032;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3044;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,203
	ctx.r3.s64 = 203;
	// bl 0x835fd898
	ctx.lr = 0x83CB3050;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3058;
	sub_82573D70(ctx, base);
	// addi r3,r1,4032
	ctx.r3.s64 = ctx.r1.s64 + 4032;
	// bl 0x82573c50
	ctx.lr = 0x83CB3060;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4276
	ctx.r4.s64 = ctx.r31.s64 + -4276;
	// addi r3,r1,2432
	ctx.r3.s64 = ctx.r1.s64 + 2432;
	// bl 0x82573ce0
	ctx.lr = 0x83CB306C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,202
	ctx.r3.s64 = 202;
	// bl 0x835fd898
	ctx.lr = 0x83CB3078;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3080;
	sub_82573D70(ctx, base);
	// addi r3,r1,2432
	ctx.r3.s64 = ctx.r1.s64 + 2432;
	// bl 0x82573c50
	ctx.lr = 0x83CB3088;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4260
	ctx.r4.s64 = ctx.r31.s64 + -4260;
	// addi r3,r1,5248
	ctx.r3.s64 = ctx.r1.s64 + 5248;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3094;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,201
	ctx.r3.s64 = 201;
	// bl 0x835fd898
	ctx.lr = 0x83CB30A0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB30A8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5248
	ctx.r3.s64 = ctx.r1.s64 + 5248;
	// bl 0x82573c50
	ctx.lr = 0x83CB30B0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4236
	ctx.r4.s64 = ctx.r31.s64 + -4236;
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// bl 0x82573ce0
	ctx.lr = 0x83CB30BC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x835fd898
	ctx.lr = 0x83CB30C8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB30D0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// bl 0x82573c50
	ctx.lr = 0x83CB30D8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4212
	ctx.r4.s64 = ctx.r31.s64 + -4212;
	// addi r3,r1,4064
	ctx.r3.s64 = ctx.r1.s64 + 4064;
	// bl 0x82573ce0
	ctx.lr = 0x83CB30E4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,199
	ctx.r3.s64 = 199;
	// bl 0x835fd898
	ctx.lr = 0x83CB30F0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB30F8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4064
	ctx.r3.s64 = ctx.r1.s64 + 4064;
	// bl 0x82573c50
	ctx.lr = 0x83CB3100;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4180
	ctx.r4.s64 = ctx.r31.s64 + -4180;
	// addi r3,r1,2496
	ctx.r3.s64 = ctx.r1.s64 + 2496;
	// bl 0x82573ce0
	ctx.lr = 0x83CB310C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,198
	ctx.r3.s64 = 198;
	// bl 0x835fd898
	ctx.lr = 0x83CB3118;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3120;
	sub_82573D70(ctx, base);
	// addi r3,r1,2496
	ctx.r3.s64 = ctx.r1.s64 + 2496;
	// bl 0x82573c50
	ctx.lr = 0x83CB3128;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4148
	ctx.r4.s64 = ctx.r31.s64 + -4148;
	// addi r3,r1,4864
	ctx.r3.s64 = ctx.r1.s64 + 4864;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3134;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,197
	ctx.r3.s64 = 197;
	// bl 0x835fd898
	ctx.lr = 0x83CB3140;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3148;
	sub_82573D70(ctx, base);
	// addi r3,r1,4864
	ctx.r3.s64 = ctx.r1.s64 + 4864;
	// bl 0x82573c50
	ctx.lr = 0x83CB3150;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4120
	ctx.r4.s64 = ctx.r31.s64 + -4120;
	// addi r3,r1,2528
	ctx.r3.s64 = ctx.r1.s64 + 2528;
	// bl 0x82573ce0
	ctx.lr = 0x83CB315C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x835fd898
	ctx.lr = 0x83CB3168;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3170;
	sub_82573D70(ctx, base);
	// addi r3,r1,2528
	ctx.r3.s64 = ctx.r1.s64 + 2528;
	// bl 0x82573c50
	ctx.lr = 0x83CB3178;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4100
	ctx.r4.s64 = ctx.r31.s64 + -4100;
	// addi r3,r1,4096
	ctx.r3.s64 = ctx.r1.s64 + 4096;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3184;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,195
	ctx.r3.s64 = 195;
	// bl 0x835fd898
	ctx.lr = 0x83CB3190;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3198;
	sub_82573D70(ctx, base);
	// addi r3,r1,4096
	ctx.r3.s64 = ctx.r1.s64 + 4096;
	// bl 0x82573c50
	ctx.lr = 0x83CB31A0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4068
	ctx.r4.s64 = ctx.r31.s64 + -4068;
	// addi r3,r1,2560
	ctx.r3.s64 = ctx.r1.s64 + 2560;
	// bl 0x82573ce0
	ctx.lr = 0x83CB31AC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,194
	ctx.r3.s64 = 194;
	// bl 0x835fd898
	ctx.lr = 0x83CB31B8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB31C0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2560
	ctx.r3.s64 = ctx.r1.s64 + 2560;
	// bl 0x82573c50
	ctx.lr = 0x83CB31C8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4040
	ctx.r4.s64 = ctx.r31.s64 + -4040;
	// addi r3,r1,5600
	ctx.r3.s64 = ctx.r1.s64 + 5600;
	// bl 0x82573ce0
	ctx.lr = 0x83CB31D4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,193
	ctx.r3.s64 = 193;
	// bl 0x835fd898
	ctx.lr = 0x83CB31E0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB31E8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5600
	ctx.r3.s64 = ctx.r1.s64 + 5600;
	// bl 0x82573c50
	ctx.lr = 0x83CB31F0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4012
	ctx.r4.s64 = ctx.r31.s64 + -4012;
	// addi r3,r1,2592
	ctx.r3.s64 = ctx.r1.s64 + 2592;
	// bl 0x82573ce0
	ctx.lr = 0x83CB31FC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x835fd898
	ctx.lr = 0x83CB3208;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3210;
	sub_82573D70(ctx, base);
	// addi r3,r1,2592
	ctx.r3.s64 = ctx.r1.s64 + 2592;
	// bl 0x82573c50
	ctx.lr = 0x83CB3218;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3984
	ctx.r4.s64 = ctx.r31.s64 + -3984;
	// addi r3,r1,4128
	ctx.r3.s64 = ctx.r1.s64 + 4128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3224;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,191
	ctx.r3.s64 = 191;
	// bl 0x835fd898
	ctx.lr = 0x83CB3230;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3238;
	sub_82573D70(ctx, base);
	// addi r3,r1,4128
	ctx.r3.s64 = ctx.r1.s64 + 4128;
	// bl 0x82573c50
	ctx.lr = 0x83CB3240;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3960
	ctx.r4.s64 = ctx.r31.s64 + -3960;
	// addi r3,r1,2624
	ctx.r3.s64 = ctx.r1.s64 + 2624;
	// bl 0x82573ce0
	ctx.lr = 0x83CB324C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,190
	ctx.r3.s64 = 190;
	// bl 0x835fd898
	ctx.lr = 0x83CB3258;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3260;
	sub_82573D70(ctx, base);
	// addi r3,r1,2624
	ctx.r3.s64 = ctx.r1.s64 + 2624;
	// bl 0x82573c50
	ctx.lr = 0x83CB3268;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3936
	ctx.r4.s64 = ctx.r31.s64 + -3936;
	// addi r3,r1,4896
	ctx.r3.s64 = ctx.r1.s64 + 4896;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3274;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,189
	ctx.r3.s64 = 189;
	// bl 0x835fd898
	ctx.lr = 0x83CB3280;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3288;
	sub_82573D70(ctx, base);
	// addi r3,r1,4896
	ctx.r3.s64 = ctx.r1.s64 + 4896;
	// bl 0x82573c50
	ctx.lr = 0x83CB3290;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3908
	ctx.r4.s64 = ctx.r31.s64 + -3908;
	// addi r3,r1,2656
	ctx.r3.s64 = ctx.r1.s64 + 2656;
	// bl 0x82573ce0
	ctx.lr = 0x83CB329C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x835fd898
	ctx.lr = 0x83CB32A8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB32B0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2656
	ctx.r3.s64 = ctx.r1.s64 + 2656;
	// bl 0x82573c50
	ctx.lr = 0x83CB32B8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3880
	ctx.r4.s64 = ctx.r31.s64 + -3880;
	// addi r3,r1,4160
	ctx.r3.s64 = ctx.r1.s64 + 4160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB32C4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,187
	ctx.r3.s64 = 187;
	// bl 0x835fd898
	ctx.lr = 0x83CB32D0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB32D8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4160
	ctx.r3.s64 = ctx.r1.s64 + 4160;
	// bl 0x82573c50
	ctx.lr = 0x83CB32E0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3860
	ctx.r4.s64 = ctx.r31.s64 + -3860;
	// addi r3,r1,2688
	ctx.r3.s64 = ctx.r1.s64 + 2688;
	// bl 0x82573ce0
	ctx.lr = 0x83CB32EC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,186
	ctx.r3.s64 = 186;
	// bl 0x835fd898
	ctx.lr = 0x83CB32F8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3300;
	sub_82573D70(ctx, base);
	// addi r3,r1,2688
	ctx.r3.s64 = ctx.r1.s64 + 2688;
	// bl 0x82573c50
	ctx.lr = 0x83CB3308;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3840
	ctx.r4.s64 = ctx.r31.s64 + -3840;
	// addi r3,r1,5280
	ctx.r3.s64 = ctx.r1.s64 + 5280;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3314;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,185
	ctx.r3.s64 = 185;
	// bl 0x835fd898
	ctx.lr = 0x83CB3320;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3328;
	sub_82573D70(ctx, base);
	// addi r3,r1,5280
	ctx.r3.s64 = ctx.r1.s64 + 5280;
	// bl 0x82573c50
	ctx.lr = 0x83CB3330;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3816
	ctx.r4.s64 = ctx.r31.s64 + -3816;
	// addi r3,r1,2720
	ctx.r3.s64 = ctx.r1.s64 + 2720;
	// bl 0x82573ce0
	ctx.lr = 0x83CB333C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x835fd898
	ctx.lr = 0x83CB3348;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3350;
	sub_82573D70(ctx, base);
	// addi r3,r1,2720
	ctx.r3.s64 = ctx.r1.s64 + 2720;
	// bl 0x82573c50
	ctx.lr = 0x83CB3358;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3800
	ctx.r4.s64 = ctx.r31.s64 + -3800;
	// addi r3,r1,4192
	ctx.r3.s64 = ctx.r1.s64 + 4192;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3364;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x835fd898
	ctx.lr = 0x83CB3370;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3378;
	sub_82573D70(ctx, base);
	// addi r3,r1,4192
	ctx.r3.s64 = ctx.r1.s64 + 4192;
	// bl 0x82573c50
	ctx.lr = 0x83CB3380;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3776
	ctx.r4.s64 = ctx.r31.s64 + -3776;
	// addi r3,r1,2752
	ctx.r3.s64 = ctx.r1.s64 + 2752;
	// bl 0x82573ce0
	ctx.lr = 0x83CB338C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,182
	ctx.r3.s64 = 182;
	// bl 0x835fd898
	ctx.lr = 0x83CB3398;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB33A0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2752
	ctx.r3.s64 = ctx.r1.s64 + 2752;
	// bl 0x82573c50
	ctx.lr = 0x83CB33A8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3752
	ctx.r4.s64 = ctx.r31.s64 + -3752;
	// addi r3,r1,4928
	ctx.r3.s64 = ctx.r1.s64 + 4928;
	// bl 0x82573ce0
	ctx.lr = 0x83CB33B4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x835fd898
	ctx.lr = 0x83CB33C0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB33C8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4928
	ctx.r3.s64 = ctx.r1.s64 + 4928;
	// bl 0x82573c50
	ctx.lr = 0x83CB33D0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3740
	ctx.r4.s64 = ctx.r31.s64 + -3740;
	// addi r3,r1,2784
	ctx.r3.s64 = ctx.r1.s64 + 2784;
	// bl 0x82573ce0
	ctx.lr = 0x83CB33DC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x835fd898
	ctx.lr = 0x83CB33E8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB33F0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2784
	ctx.r3.s64 = ctx.r1.s64 + 2784;
	// bl 0x82573c50
	ctx.lr = 0x83CB33F8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3708
	ctx.r4.s64 = ctx.r31.s64 + -3708;
	// addi r3,r1,4224
	ctx.r3.s64 = ctx.r1.s64 + 4224;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3404;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x835fd898
	ctx.lr = 0x83CB3410;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3418;
	sub_82573D70(ctx, base);
	// addi r3,r1,4224
	ctx.r3.s64 = ctx.r1.s64 + 4224;
	// bl 0x82573c50
	ctx.lr = 0x83CB3420;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3688
	ctx.r4.s64 = ctx.r31.s64 + -3688;
	// addi r3,r1,2816
	ctx.r3.s64 = ctx.r1.s64 + 2816;
	// bl 0x82573ce0
	ctx.lr = 0x83CB342C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x835fd898
	ctx.lr = 0x83CB3438;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3440;
	sub_82573D70(ctx, base);
	// addi r3,r1,2816
	ctx.r3.s64 = ctx.r1.s64 + 2816;
	// bl 0x82573c50
	ctx.lr = 0x83CB3448;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3664
	ctx.r4.s64 = ctx.r31.s64 + -3664;
	// addi r3,r1,5472
	ctx.r3.s64 = ctx.r1.s64 + 5472;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3454;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x835fd898
	ctx.lr = 0x83CB3460;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3468;
	sub_82573D70(ctx, base);
	// addi r3,r1,5472
	ctx.r3.s64 = ctx.r1.s64 + 5472;
	// bl 0x82573c50
	ctx.lr = 0x83CB3470;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3640
	ctx.r4.s64 = ctx.r31.s64 + -3640;
	// addi r3,r1,2848
	ctx.r3.s64 = ctx.r1.s64 + 2848;
	// bl 0x82573ce0
	ctx.lr = 0x83CB347C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x835fd898
	ctx.lr = 0x83CB3488;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3490;
	sub_82573D70(ctx, base);
	// addi r3,r1,2848
	ctx.r3.s64 = ctx.r1.s64 + 2848;
	// bl 0x82573c50
	ctx.lr = 0x83CB3498;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3616
	ctx.r4.s64 = ctx.r31.s64 + -3616;
	// addi r3,r1,4256
	ctx.r3.s64 = ctx.r1.s64 + 4256;
	// bl 0x82573ce0
	ctx.lr = 0x83CB34A4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x835fd898
	ctx.lr = 0x83CB34B0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB34B8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4256
	ctx.r3.s64 = ctx.r1.s64 + 4256;
	// bl 0x82573c50
	ctx.lr = 0x83CB34C0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3592
	ctx.r4.s64 = ctx.r31.s64 + -3592;
	// addi r3,r1,2880
	ctx.r3.s64 = ctx.r1.s64 + 2880;
	// bl 0x82573ce0
	ctx.lr = 0x83CB34CC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,174
	ctx.r3.s64 = 174;
	// bl 0x835fd898
	ctx.lr = 0x83CB34D8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB34E0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2880
	ctx.r3.s64 = ctx.r1.s64 + 2880;
	// bl 0x82573c50
	ctx.lr = 0x83CB34E8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3568
	ctx.r4.s64 = ctx.r31.s64 + -3568;
	// addi r3,r1,4960
	ctx.r3.s64 = ctx.r1.s64 + 4960;
	// bl 0x82573ce0
	ctx.lr = 0x83CB34F4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,173
	ctx.r3.s64 = 173;
	// bl 0x835fd898
	ctx.lr = 0x83CB3500;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3508;
	sub_82573D70(ctx, base);
	// addi r3,r1,4960
	ctx.r3.s64 = ctx.r1.s64 + 4960;
	// bl 0x82573c50
	ctx.lr = 0x83CB3510;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3544
	ctx.r4.s64 = ctx.r31.s64 + -3544;
	// addi r3,r1,2912
	ctx.r3.s64 = ctx.r1.s64 + 2912;
	// bl 0x82573ce0
	ctx.lr = 0x83CB351C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x835fd898
	ctx.lr = 0x83CB3528;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3530;
	sub_82573D70(ctx, base);
	// addi r3,r1,2912
	ctx.r3.s64 = ctx.r1.s64 + 2912;
	// bl 0x82573c50
	ctx.lr = 0x83CB3538;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3524
	ctx.r4.s64 = ctx.r31.s64 + -3524;
	// addi r3,r1,4288
	ctx.r3.s64 = ctx.r1.s64 + 4288;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3544;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,171
	ctx.r3.s64 = 171;
	// bl 0x835fd898
	ctx.lr = 0x83CB3550;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3558;
	sub_82573D70(ctx, base);
	// addi r3,r1,4288
	ctx.r3.s64 = ctx.r1.s64 + 4288;
	// bl 0x82573c50
	ctx.lr = 0x83CB3560;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3508
	ctx.r4.s64 = ctx.r31.s64 + -3508;
	// addi r3,r1,2944
	ctx.r3.s64 = ctx.r1.s64 + 2944;
	// bl 0x82573ce0
	ctx.lr = 0x83CB356C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,170
	ctx.r3.s64 = 170;
	// bl 0x835fd898
	ctx.lr = 0x83CB3578;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3580;
	sub_82573D70(ctx, base);
	// addi r3,r1,2944
	ctx.r3.s64 = ctx.r1.s64 + 2944;
	// bl 0x82573c50
	ctx.lr = 0x83CB3588;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3500
	ctx.r4.s64 = ctx.r31.s64 + -3500;
	// addi r3,r1,5312
	ctx.r3.s64 = ctx.r1.s64 + 5312;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3594;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,169
	ctx.r3.s64 = 169;
	// bl 0x835fd898
	ctx.lr = 0x83CB35A0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB35A8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5312
	ctx.r3.s64 = ctx.r1.s64 + 5312;
	// bl 0x82573c50
	ctx.lr = 0x83CB35B0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3480
	ctx.r4.s64 = ctx.r31.s64 + -3480;
	// addi r3,r1,2976
	ctx.r3.s64 = ctx.r1.s64 + 2976;
	// bl 0x82573ce0
	ctx.lr = 0x83CB35BC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x835fd898
	ctx.lr = 0x83CB35C8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB35D0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2976
	ctx.r3.s64 = ctx.r1.s64 + 2976;
	// bl 0x82573c50
	ctx.lr = 0x83CB35D8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3452
	ctx.r4.s64 = ctx.r31.s64 + -3452;
	// addi r3,r1,4320
	ctx.r3.s64 = ctx.r1.s64 + 4320;
	// bl 0x82573ce0
	ctx.lr = 0x83CB35E4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,167
	ctx.r3.s64 = 167;
	// bl 0x835fd898
	ctx.lr = 0x83CB35F0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB35F8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4320
	ctx.r3.s64 = ctx.r1.s64 + 4320;
	// bl 0x82573c50
	ctx.lr = 0x83CB3600;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3436
	ctx.r4.s64 = ctx.r31.s64 + -3436;
	// addi r3,r1,3008
	ctx.r3.s64 = ctx.r1.s64 + 3008;
	// bl 0x82573ce0
	ctx.lr = 0x83CB360C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x835fd898
	ctx.lr = 0x83CB3618;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3620;
	sub_82573D70(ctx, base);
	// addi r3,r1,3008
	ctx.r3.s64 = ctx.r1.s64 + 3008;
	// bl 0x82573c50
	ctx.lr = 0x83CB3628;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3412
	ctx.r4.s64 = ctx.r31.s64 + -3412;
	// addi r3,r1,4992
	ctx.r3.s64 = ctx.r1.s64 + 4992;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3634;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x835fd898
	ctx.lr = 0x83CB3640;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3648;
	sub_82573D70(ctx, base);
	// addi r3,r1,4992
	ctx.r3.s64 = ctx.r1.s64 + 4992;
	// bl 0x82573c50
	ctx.lr = 0x83CB3650;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3392
	ctx.r4.s64 = ctx.r31.s64 + -3392;
	// addi r3,r1,3040
	ctx.r3.s64 = ctx.r1.s64 + 3040;
	// bl 0x82573ce0
	ctx.lr = 0x83CB365C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x835fd898
	ctx.lr = 0x83CB3668;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3670;
	sub_82573D70(ctx, base);
	// addi r3,r1,3040
	ctx.r3.s64 = ctx.r1.s64 + 3040;
	// bl 0x82573c50
	ctx.lr = 0x83CB3678;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3372
	ctx.r4.s64 = ctx.r31.s64 + -3372;
	// addi r3,r1,4352
	ctx.r3.s64 = ctx.r1.s64 + 4352;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3684;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x835fd898
	ctx.lr = 0x83CB3690;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3698;
	sub_82573D70(ctx, base);
	// addi r3,r1,4352
	ctx.r3.s64 = ctx.r1.s64 + 4352;
	// bl 0x82573c50
	ctx.lr = 0x83CB36A0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3356
	ctx.r4.s64 = ctx.r31.s64 + -3356;
	// addi r3,r1,3072
	ctx.r3.s64 = ctx.r1.s64 + 3072;
	// bl 0x82573ce0
	ctx.lr = 0x83CB36AC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x835fd898
	ctx.lr = 0x83CB36B8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB36C0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3072
	ctx.r3.s64 = ctx.r1.s64 + 3072;
	// bl 0x82573c50
	ctx.lr = 0x83CB36C8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3340
	ctx.r4.s64 = ctx.r31.s64 + -3340;
	// addi r3,r1,5568
	ctx.r3.s64 = ctx.r1.s64 + 5568;
	// bl 0x82573ce0
	ctx.lr = 0x83CB36D4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x835fd898
	ctx.lr = 0x83CB36E0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB36E8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5568
	ctx.r3.s64 = ctx.r1.s64 + 5568;
	// bl 0x82573c50
	ctx.lr = 0x83CB36F0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3324
	ctx.r4.s64 = ctx.r31.s64 + -3324;
	// addi r3,r1,3104
	ctx.r3.s64 = ctx.r1.s64 + 3104;
	// bl 0x82573ce0
	ctx.lr = 0x83CB36FC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x835fd898
	ctx.lr = 0x83CB3708;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3710;
	sub_82573D70(ctx, base);
	// addi r3,r1,3104
	ctx.r3.s64 = ctx.r1.s64 + 3104;
	// bl 0x82573c50
	ctx.lr = 0x83CB3718;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3300
	ctx.r4.s64 = ctx.r31.s64 + -3300;
	// addi r3,r1,4384
	ctx.r3.s64 = ctx.r1.s64 + 4384;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3724;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x835fd898
	ctx.lr = 0x83CB3730;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3738;
	sub_82573D70(ctx, base);
	// addi r3,r1,4384
	ctx.r3.s64 = ctx.r1.s64 + 4384;
	// bl 0x82573c50
	ctx.lr = 0x83CB3740;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3276
	ctx.r4.s64 = ctx.r31.s64 + -3276;
	// addi r3,r1,3136
	ctx.r3.s64 = ctx.r1.s64 + 3136;
	// bl 0x82573ce0
	ctx.lr = 0x83CB374C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x835fd898
	ctx.lr = 0x83CB3758;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3760;
	sub_82573D70(ctx, base);
	// addi r3,r1,3136
	ctx.r3.s64 = ctx.r1.s64 + 3136;
	// bl 0x82573c50
	ctx.lr = 0x83CB3768;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3256
	ctx.r4.s64 = ctx.r31.s64 + -3256;
	// addi r3,r1,5024
	ctx.r3.s64 = ctx.r1.s64 + 5024;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3774;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x835fd898
	ctx.lr = 0x83CB3780;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3788;
	sub_82573D70(ctx, base);
	// addi r3,r1,5024
	ctx.r3.s64 = ctx.r1.s64 + 5024;
	// bl 0x82573c50
	ctx.lr = 0x83CB3790;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3236
	ctx.r4.s64 = ctx.r31.s64 + -3236;
	// addi r3,r1,3168
	ctx.r3.s64 = ctx.r1.s64 + 3168;
	// bl 0x82573ce0
	ctx.lr = 0x83CB379C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x835fd898
	ctx.lr = 0x83CB37A8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB37B0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3168
	ctx.r3.s64 = ctx.r1.s64 + 3168;
	// bl 0x82573c50
	ctx.lr = 0x83CB37B8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3216
	ctx.r4.s64 = ctx.r31.s64 + -3216;
	// addi r3,r1,4416
	ctx.r3.s64 = ctx.r1.s64 + 4416;
	// bl 0x82573ce0
	ctx.lr = 0x83CB37C4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,155
	ctx.r3.s64 = 155;
	// bl 0x835fd898
	ctx.lr = 0x83CB37D0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB37D8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4416
	ctx.r3.s64 = ctx.r1.s64 + 4416;
	// bl 0x82573c50
	ctx.lr = 0x83CB37E0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3188
	ctx.r4.s64 = ctx.r31.s64 + -3188;
	// addi r3,r1,3200
	ctx.r3.s64 = ctx.r1.s64 + 3200;
	// bl 0x82573ce0
	ctx.lr = 0x83CB37EC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x835fd898
	ctx.lr = 0x83CB37F8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3800;
	sub_82573D70(ctx, base);
	// addi r3,r1,3200
	ctx.r3.s64 = ctx.r1.s64 + 3200;
	// bl 0x82573c50
	ctx.lr = 0x83CB3808;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3168
	ctx.r4.s64 = ctx.r31.s64 + -3168;
	// addi r3,r1,5344
	ctx.r3.s64 = ctx.r1.s64 + 5344;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3814;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,153
	ctx.r3.s64 = 153;
	// bl 0x835fd898
	ctx.lr = 0x83CB3820;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3828;
	sub_82573D70(ctx, base);
	// addi r3,r1,5344
	ctx.r3.s64 = ctx.r1.s64 + 5344;
	// bl 0x82573c50
	ctx.lr = 0x83CB3830;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3144
	ctx.r4.s64 = ctx.r31.s64 + -3144;
	// addi r3,r1,3232
	ctx.r3.s64 = ctx.r1.s64 + 3232;
	// bl 0x82573ce0
	ctx.lr = 0x83CB383C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x835fd898
	ctx.lr = 0x83CB3848;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3850;
	sub_82573D70(ctx, base);
	// addi r3,r1,3232
	ctx.r3.s64 = ctx.r1.s64 + 3232;
	// bl 0x82573c50
	ctx.lr = 0x83CB3858;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3116
	ctx.r4.s64 = ctx.r31.s64 + -3116;
	// addi r3,r1,4448
	ctx.r3.s64 = ctx.r1.s64 + 4448;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3864;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,151
	ctx.r3.s64 = 151;
	// bl 0x835fd898
	ctx.lr = 0x83CB3870;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3878;
	sub_82573D70(ctx, base);
	// addi r3,r1,4448
	ctx.r3.s64 = ctx.r1.s64 + 4448;
	// bl 0x82573c50
	ctx.lr = 0x83CB3880;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3092
	ctx.r4.s64 = ctx.r31.s64 + -3092;
	// addi r3,r1,3264
	ctx.r3.s64 = ctx.r1.s64 + 3264;
	// bl 0x82573ce0
	ctx.lr = 0x83CB388C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,150
	ctx.r3.s64 = 150;
	// bl 0x835fd898
	ctx.lr = 0x83CB3898;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB38A0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3264
	ctx.r3.s64 = ctx.r1.s64 + 3264;
	// bl 0x82573c50
	ctx.lr = 0x83CB38A8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3072
	ctx.r4.s64 = ctx.r31.s64 + -3072;
	// addi r3,r1,5056
	ctx.r3.s64 = ctx.r1.s64 + 5056;
	// bl 0x82573ce0
	ctx.lr = 0x83CB38B4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,149
	ctx.r3.s64 = 149;
	// bl 0x835fd898
	ctx.lr = 0x83CB38C0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB38C8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5056
	ctx.r3.s64 = ctx.r1.s64 + 5056;
	// bl 0x82573c50
	ctx.lr = 0x83CB38D0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3048
	ctx.r4.s64 = ctx.r31.s64 + -3048;
	// addi r3,r1,3296
	ctx.r3.s64 = ctx.r1.s64 + 3296;
	// bl 0x82573ce0
	ctx.lr = 0x83CB38DC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x835fd898
	ctx.lr = 0x83CB38E8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB38F0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3296
	ctx.r3.s64 = ctx.r1.s64 + 3296;
	// bl 0x82573c50
	ctx.lr = 0x83CB38F8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3028
	ctx.r4.s64 = ctx.r31.s64 + -3028;
	// addi r3,r1,4480
	ctx.r3.s64 = ctx.r1.s64 + 4480;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3904;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,147
	ctx.r3.s64 = 147;
	// bl 0x835fd898
	ctx.lr = 0x83CB3910;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3918;
	sub_82573D70(ctx, base);
	// addi r3,r1,4480
	ctx.r3.s64 = ctx.r1.s64 + 4480;
	// bl 0x82573c50
	ctx.lr = 0x83CB3920;
	sub_82573C50(ctx, base);
	// addi r4,r31,-3012
	ctx.r4.s64 = ctx.r31.s64 + -3012;
	// addi r3,r1,3328
	ctx.r3.s64 = ctx.r1.s64 + 3328;
	// bl 0x82573ce0
	ctx.lr = 0x83CB392C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,146
	ctx.r3.s64 = 146;
	// bl 0x835fd898
	ctx.lr = 0x83CB3938;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3940;
	sub_82573D70(ctx, base);
	// addi r3,r1,3328
	ctx.r3.s64 = ctx.r1.s64 + 3328;
	// bl 0x82573c50
	ctx.lr = 0x83CB3948;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2992
	ctx.r4.s64 = ctx.r31.s64 + -2992;
	// addi r3,r1,5504
	ctx.r3.s64 = ctx.r1.s64 + 5504;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3954;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,145
	ctx.r3.s64 = 145;
	// bl 0x835fd898
	ctx.lr = 0x83CB3960;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3968;
	sub_82573D70(ctx, base);
	// addi r3,r1,5504
	ctx.r3.s64 = ctx.r1.s64 + 5504;
	// bl 0x82573c50
	ctx.lr = 0x83CB3970;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2972
	ctx.r4.s64 = ctx.r31.s64 + -2972;
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// bl 0x82573ce0
	ctx.lr = 0x83CB397C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x835fd898
	ctx.lr = 0x83CB3988;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3990;
	sub_82573D70(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// bl 0x82573c50
	ctx.lr = 0x83CB3998;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2960
	ctx.r4.s64 = ctx.r31.s64 + -2960;
	// addi r3,r1,4512
	ctx.r3.s64 = ctx.r1.s64 + 4512;
	// bl 0x82573ce0
	ctx.lr = 0x83CB39A4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,143
	ctx.r3.s64 = 143;
	// bl 0x835fd898
	ctx.lr = 0x83CB39B0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB39B8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4512
	ctx.r3.s64 = ctx.r1.s64 + 4512;
	// bl 0x82573c50
	ctx.lr = 0x83CB39C0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2940
	ctx.r4.s64 = ctx.r31.s64 + -2940;
	// addi r3,r1,3392
	ctx.r3.s64 = ctx.r1.s64 + 3392;
	// bl 0x82573ce0
	ctx.lr = 0x83CB39CC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,142
	ctx.r3.s64 = 142;
	// bl 0x835fd898
	ctx.lr = 0x83CB39D8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB39E0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3392
	ctx.r3.s64 = ctx.r1.s64 + 3392;
	// bl 0x82573c50
	ctx.lr = 0x83CB39E8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2920
	ctx.r4.s64 = ctx.r31.s64 + -2920;
	// addi r3,r1,5088
	ctx.r3.s64 = ctx.r1.s64 + 5088;
	// bl 0x82573ce0
	ctx.lr = 0x83CB39F4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,141
	ctx.r3.s64 = 141;
	// bl 0x835fd898
	ctx.lr = 0x83CB3A00;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3A08;
	sub_82573D70(ctx, base);
	// addi r3,r1,5088
	ctx.r3.s64 = ctx.r1.s64 + 5088;
	// bl 0x82573c50
	ctx.lr = 0x83CB3A10;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2900
	ctx.r4.s64 = ctx.r31.s64 + -2900;
	// addi r3,r1,3424
	ctx.r3.s64 = ctx.r1.s64 + 3424;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3A1C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x835fd898
	ctx.lr = 0x83CB3A28;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3A30;
	sub_82573D70(ctx, base);
	// addi r3,r1,3424
	ctx.r3.s64 = ctx.r1.s64 + 3424;
	// bl 0x82573c50
	ctx.lr = 0x83CB3A38;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2872
	ctx.r4.s64 = ctx.r31.s64 + -2872;
	// addi r3,r1,4544
	ctx.r3.s64 = ctx.r1.s64 + 4544;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3A44;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x835fd898
	ctx.lr = 0x83CB3A50;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3A58;
	sub_82573D70(ctx, base);
	// addi r3,r1,4544
	ctx.r3.s64 = ctx.r1.s64 + 4544;
	// bl 0x82573c50
	ctx.lr = 0x83CB3A60;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2848
	ctx.r4.s64 = ctx.r31.s64 + -2848;
	// addi r3,r1,3456
	ctx.r3.s64 = ctx.r1.s64 + 3456;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3A6C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x835fd898
	ctx.lr = 0x83CB3A78;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3A80;
	sub_82573D70(ctx, base);
	// addi r3,r1,3456
	ctx.r3.s64 = ctx.r1.s64 + 3456;
	// bl 0x82573c50
	ctx.lr = 0x83CB3A88;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2828
	ctx.r4.s64 = ctx.r31.s64 + -2828;
	// addi r3,r1,5376
	ctx.r3.s64 = ctx.r1.s64 + 5376;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3A94;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x835fd898
	ctx.lr = 0x83CB3AA0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3AA8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5376
	ctx.r3.s64 = ctx.r1.s64 + 5376;
	// bl 0x82573c50
	ctx.lr = 0x83CB3AB0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2800
	ctx.r4.s64 = ctx.r31.s64 + -2800;
	// addi r3,r1,3488
	ctx.r3.s64 = ctx.r1.s64 + 3488;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3ABC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x835fd898
	ctx.lr = 0x83CB3AC8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3AD0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3488
	ctx.r3.s64 = ctx.r1.s64 + 3488;
	// bl 0x82573c50
	ctx.lr = 0x83CB3AD8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2772
	ctx.r4.s64 = ctx.r31.s64 + -2772;
	// addi r3,r1,4576
	ctx.r3.s64 = ctx.r1.s64 + 4576;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3AE4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x835fd898
	ctx.lr = 0x83CB3AF0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3AF8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4576
	ctx.r3.s64 = ctx.r1.s64 + 4576;
	// bl 0x82573c50
	ctx.lr = 0x83CB3B00;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2744
	ctx.r4.s64 = ctx.r31.s64 + -2744;
	// addi r3,r1,3520
	ctx.r3.s64 = ctx.r1.s64 + 3520;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3B0C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x835fd898
	ctx.lr = 0x83CB3B18;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3B20;
	sub_82573D70(ctx, base);
	// addi r3,r1,3520
	ctx.r3.s64 = ctx.r1.s64 + 3520;
	// bl 0x82573c50
	ctx.lr = 0x83CB3B28;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2716
	ctx.r4.s64 = ctx.r31.s64 + -2716;
	// addi r3,r1,5120
	ctx.r3.s64 = ctx.r1.s64 + 5120;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3B34;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x835fd898
	ctx.lr = 0x83CB3B40;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3B48;
	sub_82573D70(ctx, base);
	// addi r3,r1,5120
	ctx.r3.s64 = ctx.r1.s64 + 5120;
	// bl 0x82573c50
	ctx.lr = 0x83CB3B50;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2688
	ctx.r4.s64 = ctx.r31.s64 + -2688;
	// addi r3,r1,3552
	ctx.r3.s64 = ctx.r1.s64 + 3552;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3B5C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x835fd898
	ctx.lr = 0x83CB3B68;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3B70;
	sub_82573D70(ctx, base);
	// addi r3,r1,3552
	ctx.r3.s64 = ctx.r1.s64 + 3552;
	// bl 0x82573c50
	ctx.lr = 0x83CB3B78;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2660
	ctx.r4.s64 = ctx.r31.s64 + -2660;
	// addi r3,r1,4608
	ctx.r3.s64 = ctx.r1.s64 + 4608;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3B84;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x835fd898
	ctx.lr = 0x83CB3B90;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3B98;
	sub_82573D70(ctx, base);
	// addi r3,r1,4608
	ctx.r3.s64 = ctx.r1.s64 + 4608;
	// bl 0x82573c50
	ctx.lr = 0x83CB3BA0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2640
	ctx.r4.s64 = ctx.r31.s64 + -2640;
	// addi r3,r1,3584
	ctx.r3.s64 = ctx.r1.s64 + 3584;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3BAC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x835fd898
	ctx.lr = 0x83CB3BB8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3BC0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3584
	ctx.r3.s64 = ctx.r1.s64 + 3584;
	// bl 0x82573c50
	ctx.lr = 0x83CB3BC8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2620
	ctx.r4.s64 = ctx.r31.s64 + -2620;
	// addi r3,r1,5632
	ctx.r3.s64 = ctx.r1.s64 + 5632;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3BD4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x835fd898
	ctx.lr = 0x83CB3BE0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3BE8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5632
	ctx.r3.s64 = ctx.r1.s64 + 5632;
	// bl 0x82573c50
	ctx.lr = 0x83CB3BF0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2604
	ctx.r4.s64 = ctx.r31.s64 + -2604;
	// addi r3,r1,3616
	ctx.r3.s64 = ctx.r1.s64 + 3616;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3BFC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x835fd898
	ctx.lr = 0x83CB3C08;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3C10;
	sub_82573D70(ctx, base);
	// addi r3,r1,3616
	ctx.r3.s64 = ctx.r1.s64 + 3616;
	// bl 0x82573c50
	ctx.lr = 0x83CB3C18;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2572
	ctx.r4.s64 = ctx.r31.s64 + -2572;
	// addi r3,r1,4640
	ctx.r3.s64 = ctx.r1.s64 + 4640;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3C24;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x835fd898
	ctx.lr = 0x83CB3C30;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3C38;
	sub_82573D70(ctx, base);
	// addi r3,r1,4640
	ctx.r3.s64 = ctx.r1.s64 + 4640;
	// bl 0x82573c50
	ctx.lr = 0x83CB3C40;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2536
	ctx.r4.s64 = ctx.r31.s64 + -2536;
	// addi r3,r1,3648
	ctx.r3.s64 = ctx.r1.s64 + 3648;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3C4C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x835fd898
	ctx.lr = 0x83CB3C58;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3C60;
	sub_82573D70(ctx, base);
	// addi r3,r1,3648
	ctx.r3.s64 = ctx.r1.s64 + 3648;
	// bl 0x82573c50
	ctx.lr = 0x83CB3C68;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2508
	ctx.r4.s64 = ctx.r31.s64 + -2508;
	// addi r3,r1,5152
	ctx.r3.s64 = ctx.r1.s64 + 5152;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3C74;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x835fd898
	ctx.lr = 0x83CB3C80;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3C88;
	sub_82573D70(ctx, base);
	// addi r3,r1,5152
	ctx.r3.s64 = ctx.r1.s64 + 5152;
	// bl 0x82573c50
	ctx.lr = 0x83CB3C90;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2480
	ctx.r4.s64 = ctx.r31.s64 + -2480;
	// addi r3,r1,3680
	ctx.r3.s64 = ctx.r1.s64 + 3680;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3C9C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x835fd898
	ctx.lr = 0x83CB3CA8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3CB0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3680
	ctx.r3.s64 = ctx.r1.s64 + 3680;
	// bl 0x82573c50
	ctx.lr = 0x83CB3CB8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2456
	ctx.r4.s64 = ctx.r31.s64 + -2456;
	// addi r3,r1,4672
	ctx.r3.s64 = ctx.r1.s64 + 4672;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3CC4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x835fd898
	ctx.lr = 0x83CB3CD0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3CD8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4672
	ctx.r3.s64 = ctx.r1.s64 + 4672;
	// bl 0x82573c50
	ctx.lr = 0x83CB3CE0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2440
	ctx.r4.s64 = ctx.r31.s64 + -2440;
	// addi r3,r1,3712
	ctx.r3.s64 = ctx.r1.s64 + 3712;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3CEC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x835fd898
	ctx.lr = 0x83CB3CF8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3D00;
	sub_82573D70(ctx, base);
	// addi r3,r1,3712
	ctx.r3.s64 = ctx.r1.s64 + 3712;
	// bl 0x82573c50
	ctx.lr = 0x83CB3D08;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2404
	ctx.r4.s64 = ctx.r31.s64 + -2404;
	// addi r3,r1,5408
	ctx.r3.s64 = ctx.r1.s64 + 5408;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3D14;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x835fd898
	ctx.lr = 0x83CB3D20;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3D28;
	sub_82573D70(ctx, base);
	// addi r3,r1,5408
	ctx.r3.s64 = ctx.r1.s64 + 5408;
	// bl 0x82573c50
	ctx.lr = 0x83CB3D30;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2384
	ctx.r4.s64 = ctx.r31.s64 + -2384;
	// addi r3,r1,3744
	ctx.r3.s64 = ctx.r1.s64 + 3744;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3D3C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x835fd898
	ctx.lr = 0x83CB3D48;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3D50;
	sub_82573D70(ctx, base);
	// addi r3,r1,3744
	ctx.r3.s64 = ctx.r1.s64 + 3744;
	// bl 0x82573c50
	ctx.lr = 0x83CB3D58;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2364
	ctx.r4.s64 = ctx.r31.s64 + -2364;
	// addi r3,r1,4704
	ctx.r3.s64 = ctx.r1.s64 + 4704;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3D64;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,119
	ctx.r3.s64 = 119;
	// bl 0x835fd898
	ctx.lr = 0x83CB3D70;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3D78;
	sub_82573D70(ctx, base);
	// addi r3,r1,4704
	ctx.r3.s64 = ctx.r1.s64 + 4704;
	// bl 0x82573c50
	ctx.lr = 0x83CB3D80;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2344
	ctx.r4.s64 = ctx.r31.s64 + -2344;
	// addi r3,r1,3776
	ctx.r3.s64 = ctx.r1.s64 + 3776;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3D8C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,118
	ctx.r3.s64 = 118;
	// bl 0x835fd898
	ctx.lr = 0x83CB3D98;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3DA0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3776
	ctx.r3.s64 = ctx.r1.s64 + 3776;
	// bl 0x82573c50
	ctx.lr = 0x83CB3DA8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2320
	ctx.r4.s64 = ctx.r31.s64 + -2320;
	// addi r3,r1,1920
	ctx.r3.s64 = ctx.r1.s64 + 1920;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3DB4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,117
	ctx.r3.s64 = 117;
	// bl 0x835fd898
	ctx.lr = 0x83CB3DC0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3DC8;
	sub_82573D70(ctx, base);
	// addi r3,r1,1920
	ctx.r3.s64 = ctx.r1.s64 + 1920;
	// bl 0x82573c50
	ctx.lr = 0x83CB3DD0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2296
	ctx.r4.s64 = ctx.r31.s64 + -2296;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3DDC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x835fd898
	ctx.lr = 0x83CB3DE8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3DF0;
	sub_82573D70(ctx, base);
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x82573c50
	ctx.lr = 0x83CB3DF8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2280
	ctx.r4.s64 = ctx.r31.s64 + -2280;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3E04;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,115
	ctx.r3.s64 = 115;
	// bl 0x835fd898
	ctx.lr = 0x83CB3E10;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3E18;
	sub_82573D70(ctx, base);
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x82573c50
	ctx.lr = 0x83CB3E20;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2264
	ctx.r4.s64 = ctx.r31.s64 + -2264;
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3E2C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,114
	ctx.r3.s64 = 114;
	// bl 0x835fd898
	ctx.lr = 0x83CB3E38;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3E40;
	sub_82573D70(ctx, base);
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x82573c50
	ctx.lr = 0x83CB3E48;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2240
	ctx.r4.s64 = ctx.r31.s64 + -2240;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3E54;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,113
	ctx.r3.s64 = 113;
	// bl 0x835fd898
	ctx.lr = 0x83CB3E60;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3E68;
	sub_82573D70(ctx, base);
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82573c50
	ctx.lr = 0x83CB3E70;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2216
	ctx.r4.s64 = ctx.r31.s64 + -2216;
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3E7C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x835fd898
	ctx.lr = 0x83CB3E88;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3E90;
	sub_82573D70(ctx, base);
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// bl 0x82573c50
	ctx.lr = 0x83CB3E98;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2192
	ctx.r4.s64 = ctx.r31.s64 + -2192;
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3EA4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,111
	ctx.r3.s64 = 111;
	// bl 0x835fd898
	ctx.lr = 0x83CB3EB0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3EB8;
	sub_82573D70(ctx, base);
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x82573c50
	ctx.lr = 0x83CB3EC0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2172
	ctx.r4.s64 = ctx.r31.s64 + -2172;
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3ECC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,110
	ctx.r3.s64 = 110;
	// bl 0x835fd898
	ctx.lr = 0x83CB3ED8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3EE0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// bl 0x82573c50
	ctx.lr = 0x83CB3EE8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2152
	ctx.r4.s64 = ctx.r31.s64 + -2152;
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3EF4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,109
	ctx.r3.s64 = 109;
	// bl 0x835fd898
	ctx.lr = 0x83CB3F00;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3F08;
	sub_82573D70(ctx, base);
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
	// bl 0x82573c50
	ctx.lr = 0x83CB3F10;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2132
	ctx.r4.s64 = ctx.r31.s64 + -2132;
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3F1C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x835fd898
	ctx.lr = 0x83CB3F28;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3F30;
	sub_82573D70(ctx, base);
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// bl 0x82573c50
	ctx.lr = 0x83CB3F38;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2108
	ctx.r4.s64 = ctx.r31.s64 + -2108;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3F44;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,107
	ctx.r3.s64 = 107;
	// bl 0x835fd898
	ctx.lr = 0x83CB3F50;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3F58;
	sub_82573D70(ctx, base);
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x82573c50
	ctx.lr = 0x83CB3F60;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2088
	ctx.r4.s64 = ctx.r31.s64 + -2088;
	// addi r3,r1,2256
	ctx.r3.s64 = ctx.r1.s64 + 2256;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3F6C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,106
	ctx.r3.s64 = 106;
	// bl 0x835fd898
	ctx.lr = 0x83CB3F78;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3F80;
	sub_82573D70(ctx, base);
	// addi r3,r1,2256
	ctx.r3.s64 = ctx.r1.s64 + 2256;
	// bl 0x82573c50
	ctx.lr = 0x83CB3F88;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2068
	ctx.r4.s64 = ctx.r31.s64 + -2068;
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3F94;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,105
	ctx.r3.s64 = 105;
	// bl 0x835fd898
	ctx.lr = 0x83CB3FA0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3FA8;
	sub_82573D70(ctx, base);
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// bl 0x82573c50
	ctx.lr = 0x83CB3FB0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2048
	ctx.r4.s64 = ctx.r31.s64 + -2048;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3FBC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x835fd898
	ctx.lr = 0x83CB3FC8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3FD0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82573c50
	ctx.lr = 0x83CB3FD8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2028
	ctx.r4.s64 = ctx.r31.s64 + -2028;
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// bl 0x82573ce0
	ctx.lr = 0x83CB3FE4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,103
	ctx.r3.s64 = 103;
	// bl 0x835fd898
	ctx.lr = 0x83CB3FF0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB3FF8;
	sub_82573D70(ctx, base);
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// bl 0x82573c50
	ctx.lr = 0x83CB4000;
	sub_82573C50(ctx, base);
	// addi r4,r31,-2008
	ctx.r4.s64 = ctx.r31.s64 + -2008;
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// bl 0x82573ce0
	ctx.lr = 0x83CB400C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,102
	ctx.r3.s64 = 102;
	// bl 0x835fd898
	ctx.lr = 0x83CB4018;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4020;
	sub_82573D70(ctx, base);
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// bl 0x82573c50
	ctx.lr = 0x83CB4028;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1984
	ctx.r4.s64 = ctx.r31.s64 + -1984;
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4034;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,101
	ctx.r3.s64 = 101;
	// bl 0x835fd898
	ctx.lr = 0x83CB4040;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4048;
	sub_82573D70(ctx, base);
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// bl 0x82573c50
	ctx.lr = 0x83CB4050;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1956
	ctx.r4.s64 = ctx.r31.s64 + -1956;
	// addi r3,r1,2448
	ctx.r3.s64 = ctx.r1.s64 + 2448;
	// bl 0x82573ce0
	ctx.lr = 0x83CB405C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x835fd898
	ctx.lr = 0x83CB4068;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4070;
	sub_82573D70(ctx, base);
	// addi r3,r1,2448
	ctx.r3.s64 = ctx.r1.s64 + 2448;
	// bl 0x82573c50
	ctx.lr = 0x83CB4078;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1936
	ctx.r4.s64 = ctx.r31.s64 + -1936;
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4084;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,99
	ctx.r3.s64 = 99;
	// bl 0x835fd898
	ctx.lr = 0x83CB4090;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4098;
	sub_82573D70(ctx, base);
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// bl 0x82573c50
	ctx.lr = 0x83CB40A0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1916
	ctx.r4.s64 = ctx.r31.s64 + -1916;
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// bl 0x82573ce0
	ctx.lr = 0x83CB40AC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,98
	ctx.r3.s64 = 98;
	// bl 0x835fd898
	ctx.lr = 0x83CB40B8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB40C0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// bl 0x82573c50
	ctx.lr = 0x83CB40C8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1896
	ctx.r4.s64 = ctx.r31.s64 + -1896;
	// addi r3,r1,2544
	ctx.r3.s64 = ctx.r1.s64 + 2544;
	// bl 0x82573ce0
	ctx.lr = 0x83CB40D4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,97
	ctx.r3.s64 = 97;
	// bl 0x835fd898
	ctx.lr = 0x83CB40E0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB40E8;
	sub_82573D70(ctx, base);
	// addi r3,r1,2544
	ctx.r3.s64 = ctx.r1.s64 + 2544;
	// bl 0x82573c50
	ctx.lr = 0x83CB40F0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1876
	ctx.r4.s64 = ctx.r31.s64 + -1876;
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// bl 0x82573ce0
	ctx.lr = 0x83CB40FC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x835fd898
	ctx.lr = 0x83CB4108;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4110;
	sub_82573D70(ctx, base);
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// bl 0x82573c50
	ctx.lr = 0x83CB4118;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1856
	ctx.r4.s64 = ctx.r31.s64 + -1856;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4124;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,95
	ctx.r3.s64 = 95;
	// bl 0x835fd898
	ctx.lr = 0x83CB4130;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4138;
	sub_82573D70(ctx, base);
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82573c50
	ctx.lr = 0x83CB4140;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1836
	ctx.r4.s64 = ctx.r31.s64 + -1836;
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// bl 0x82573ce0
	ctx.lr = 0x83CB414C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,94
	ctx.r3.s64 = 94;
	// bl 0x835fd898
	ctx.lr = 0x83CB4158;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4160;
	sub_82573D70(ctx, base);
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// bl 0x82573c50
	ctx.lr = 0x83CB4168;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1820
	ctx.r4.s64 = ctx.r31.s64 + -1820;
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4174;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,93
	ctx.r3.s64 = 93;
	// bl 0x835fd898
	ctx.lr = 0x83CB4180;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4188;
	sub_82573D70(ctx, base);
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// bl 0x82573c50
	ctx.lr = 0x83CB4190;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1800
	ctx.r4.s64 = ctx.r31.s64 + -1800;
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// bl 0x82573ce0
	ctx.lr = 0x83CB419C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x835fd898
	ctx.lr = 0x83CB41A8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB41B0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// bl 0x82573c50
	ctx.lr = 0x83CB41B8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1780
	ctx.r4.s64 = ctx.r31.s64 + -1780;
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82573ce0
	ctx.lr = 0x83CB41C4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,91
	ctx.r3.s64 = 91;
	// bl 0x835fd898
	ctx.lr = 0x83CB41D0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB41D8;
	sub_82573D70(ctx, base);
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82573c50
	ctx.lr = 0x83CB41E0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1760
	ctx.r4.s64 = ctx.r31.s64 + -1760;
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// bl 0x82573ce0
	ctx.lr = 0x83CB41EC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,90
	ctx.r3.s64 = 90;
	// bl 0x835fd898
	ctx.lr = 0x83CB41F8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4200;
	sub_82573D70(ctx, base);
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// bl 0x82573c50
	ctx.lr = 0x83CB4208;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1748
	ctx.r4.s64 = ctx.r31.s64 + -1748;
	// addi r3,r1,2800
	ctx.r3.s64 = ctx.r1.s64 + 2800;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4214;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,89
	ctx.r3.s64 = 89;
	// bl 0x835fd898
	ctx.lr = 0x83CB4220;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4228;
	sub_82573D70(ctx, base);
	// addi r3,r1,2800
	ctx.r3.s64 = ctx.r1.s64 + 2800;
	// bl 0x82573c50
	ctx.lr = 0x83CB4230;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1724
	ctx.r4.s64 = ctx.r31.s64 + -1724;
	// addi r3,r1,2832
	ctx.r3.s64 = ctx.r1.s64 + 2832;
	// bl 0x82573ce0
	ctx.lr = 0x83CB423C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x835fd898
	ctx.lr = 0x83CB4248;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4250;
	sub_82573D70(ctx, base);
	// addi r3,r1,2832
	ctx.r3.s64 = ctx.r1.s64 + 2832;
	// bl 0x82573c50
	ctx.lr = 0x83CB4258;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1704
	ctx.r4.s64 = ctx.r31.s64 + -1704;
	// addi r3,r1,2864
	ctx.r3.s64 = ctx.r1.s64 + 2864;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4264;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,87
	ctx.r3.s64 = 87;
	// bl 0x835fd898
	ctx.lr = 0x83CB4270;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4278;
	sub_82573D70(ctx, base);
	// addi r3,r1,2864
	ctx.r3.s64 = ctx.r1.s64 + 2864;
	// bl 0x82573c50
	ctx.lr = 0x83CB4280;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1684
	ctx.r4.s64 = ctx.r31.s64 + -1684;
	// addi r3,r1,2896
	ctx.r3.s64 = ctx.r1.s64 + 2896;
	// bl 0x82573ce0
	ctx.lr = 0x83CB428C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,86
	ctx.r3.s64 = 86;
	// bl 0x835fd898
	ctx.lr = 0x83CB4298;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB42A0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2896
	ctx.r3.s64 = ctx.r1.s64 + 2896;
	// bl 0x82573c50
	ctx.lr = 0x83CB42A8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1668
	ctx.r4.s64 = ctx.r31.s64 + -1668;
	// addi r3,r1,2928
	ctx.r3.s64 = ctx.r1.s64 + 2928;
	// bl 0x82573ce0
	ctx.lr = 0x83CB42B4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,85
	ctx.r3.s64 = 85;
	// bl 0x835fd898
	ctx.lr = 0x83CB42C0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB42C8;
	sub_82573D70(ctx, base);
	// addi r3,r1,2928
	ctx.r3.s64 = ctx.r1.s64 + 2928;
	// bl 0x82573c50
	ctx.lr = 0x83CB42D0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1648
	ctx.r4.s64 = ctx.r31.s64 + -1648;
	// addi r3,r1,2960
	ctx.r3.s64 = ctx.r1.s64 + 2960;
	// bl 0x82573ce0
	ctx.lr = 0x83CB42DC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x835fd898
	ctx.lr = 0x83CB42E8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB42F0;
	sub_82573D70(ctx, base);
	// addi r3,r1,2960
	ctx.r3.s64 = ctx.r1.s64 + 2960;
	// bl 0x82573c50
	ctx.lr = 0x83CB42F8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1628
	ctx.r4.s64 = ctx.r31.s64 + -1628;
	// addi r3,r1,2992
	ctx.r3.s64 = ctx.r1.s64 + 2992;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4304;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x835fd898
	ctx.lr = 0x83CB4310;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4318;
	sub_82573D70(ctx, base);
	// addi r3,r1,2992
	ctx.r3.s64 = ctx.r1.s64 + 2992;
	// bl 0x82573c50
	ctx.lr = 0x83CB4320;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1608
	ctx.r4.s64 = ctx.r31.s64 + -1608;
	// addi r3,r1,3024
	ctx.r3.s64 = ctx.r1.s64 + 3024;
	// bl 0x82573ce0
	ctx.lr = 0x83CB432C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,82
	ctx.r3.s64 = 82;
	// bl 0x835fd898
	ctx.lr = 0x83CB4338;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4340;
	sub_82573D70(ctx, base);
	// addi r3,r1,3024
	ctx.r3.s64 = ctx.r1.s64 + 3024;
	// bl 0x82573c50
	ctx.lr = 0x83CB4348;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1584
	ctx.r4.s64 = ctx.r31.s64 + -1584;
	// addi r3,r1,3056
	ctx.r3.s64 = ctx.r1.s64 + 3056;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4354;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,81
	ctx.r3.s64 = 81;
	// bl 0x835fd898
	ctx.lr = 0x83CB4360;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4368;
	sub_82573D70(ctx, base);
	// addi r3,r1,3056
	ctx.r3.s64 = ctx.r1.s64 + 3056;
	// bl 0x82573c50
	ctx.lr = 0x83CB4370;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1560
	ctx.r4.s64 = ctx.r31.s64 + -1560;
	// addi r3,r1,3088
	ctx.r3.s64 = ctx.r1.s64 + 3088;
	// bl 0x82573ce0
	ctx.lr = 0x83CB437C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x835fd898
	ctx.lr = 0x83CB4388;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4390;
	sub_82573D70(ctx, base);
	// addi r3,r1,3088
	ctx.r3.s64 = ctx.r1.s64 + 3088;
	// bl 0x82573c50
	ctx.lr = 0x83CB4398;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1532
	ctx.r4.s64 = ctx.r31.s64 + -1532;
	// addi r3,r1,3120
	ctx.r3.s64 = ctx.r1.s64 + 3120;
	// bl 0x82573ce0
	ctx.lr = 0x83CB43A4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,79
	ctx.r3.s64 = 79;
	// bl 0x835fd898
	ctx.lr = 0x83CB43B0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB43B8;
	sub_82573D70(ctx, base);
	// addi r3,r1,3120
	ctx.r3.s64 = ctx.r1.s64 + 3120;
	// bl 0x82573c50
	ctx.lr = 0x83CB43C0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1512
	ctx.r4.s64 = ctx.r31.s64 + -1512;
	// addi r3,r1,3152
	ctx.r3.s64 = ctx.r1.s64 + 3152;
	// bl 0x82573ce0
	ctx.lr = 0x83CB43CC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x835fd898
	ctx.lr = 0x83CB43D8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB43E0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3152
	ctx.r3.s64 = ctx.r1.s64 + 3152;
	// bl 0x82573c50
	ctx.lr = 0x83CB43E8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1492
	ctx.r4.s64 = ctx.r31.s64 + -1492;
	// addi r3,r1,3184
	ctx.r3.s64 = ctx.r1.s64 + 3184;
	// bl 0x82573ce0
	ctx.lr = 0x83CB43F4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,77
	ctx.r3.s64 = 77;
	// bl 0x835fd898
	ctx.lr = 0x83CB4400;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4408;
	sub_82573D70(ctx, base);
	// addi r3,r1,3184
	ctx.r3.s64 = ctx.r1.s64 + 3184;
	// bl 0x82573c50
	ctx.lr = 0x83CB4410;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1476
	ctx.r4.s64 = ctx.r31.s64 + -1476;
	// addi r3,r1,3216
	ctx.r3.s64 = ctx.r1.s64 + 3216;
	// bl 0x82573ce0
	ctx.lr = 0x83CB441C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x835fd898
	ctx.lr = 0x83CB4428;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4430;
	sub_82573D70(ctx, base);
	// addi r3,r1,3216
	ctx.r3.s64 = ctx.r1.s64 + 3216;
	// bl 0x82573c50
	ctx.lr = 0x83CB4438;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1440
	ctx.r4.s64 = ctx.r31.s64 + -1440;
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4444;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,75
	ctx.r3.s64 = 75;
	// bl 0x835fd898
	ctx.lr = 0x83CB4450;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4458;
	sub_82573D70(ctx, base);
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// bl 0x82573c50
	ctx.lr = 0x83CB4460;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1420
	ctx.r4.s64 = ctx.r31.s64 + -1420;
	// addi r3,r1,3280
	ctx.r3.s64 = ctx.r1.s64 + 3280;
	// bl 0x82573ce0
	ctx.lr = 0x83CB446C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,74
	ctx.r3.s64 = 74;
	// bl 0x835fd898
	ctx.lr = 0x83CB4478;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4480;
	sub_82573D70(ctx, base);
	// addi r3,r1,3280
	ctx.r3.s64 = ctx.r1.s64 + 3280;
	// bl 0x82573c50
	ctx.lr = 0x83CB4488;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1408
	ctx.r4.s64 = ctx.r31.s64 + -1408;
	// addi r3,r1,3312
	ctx.r3.s64 = ctx.r1.s64 + 3312;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4494;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x835fd898
	ctx.lr = 0x83CB44A0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB44A8;
	sub_82573D70(ctx, base);
	// addi r3,r1,3312
	ctx.r3.s64 = ctx.r1.s64 + 3312;
	// bl 0x82573c50
	ctx.lr = 0x83CB44B0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1388
	ctx.r4.s64 = ctx.r31.s64 + -1388;
	// addi r3,r1,3344
	ctx.r3.s64 = ctx.r1.s64 + 3344;
	// bl 0x82573ce0
	ctx.lr = 0x83CB44BC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x835fd898
	ctx.lr = 0x83CB44C8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB44D0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3344
	ctx.r3.s64 = ctx.r1.s64 + 3344;
	// bl 0x82573c50
	ctx.lr = 0x83CB44D8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1372
	ctx.r4.s64 = ctx.r31.s64 + -1372;
	// addi r3,r1,3376
	ctx.r3.s64 = ctx.r1.s64 + 3376;
	// bl 0x82573ce0
	ctx.lr = 0x83CB44E4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,71
	ctx.r3.s64 = 71;
	// bl 0x835fd898
	ctx.lr = 0x83CB44F0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB44F8;
	sub_82573D70(ctx, base);
	// addi r3,r1,3376
	ctx.r3.s64 = ctx.r1.s64 + 3376;
	// bl 0x82573c50
	ctx.lr = 0x83CB4500;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1360
	ctx.r4.s64 = ctx.r31.s64 + -1360;
	// addi r3,r1,3408
	ctx.r3.s64 = ctx.r1.s64 + 3408;
	// bl 0x82573ce0
	ctx.lr = 0x83CB450C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x835fd898
	ctx.lr = 0x83CB4518;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4520;
	sub_82573D70(ctx, base);
	// addi r3,r1,3408
	ctx.r3.s64 = ctx.r1.s64 + 3408;
	// bl 0x82573c50
	ctx.lr = 0x83CB4528;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1344
	ctx.r4.s64 = ctx.r31.s64 + -1344;
	// addi r3,r1,3440
	ctx.r3.s64 = ctx.r1.s64 + 3440;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4534;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x835fd898
	ctx.lr = 0x83CB4540;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4548;
	sub_82573D70(ctx, base);
	// addi r3,r1,3440
	ctx.r3.s64 = ctx.r1.s64 + 3440;
	// bl 0x82573c50
	ctx.lr = 0x83CB4550;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1328
	ctx.r4.s64 = ctx.r31.s64 + -1328;
	// addi r3,r1,3472
	ctx.r3.s64 = ctx.r1.s64 + 3472;
	// bl 0x82573ce0
	ctx.lr = 0x83CB455C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x835fd898
	ctx.lr = 0x83CB4568;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4570;
	sub_82573D70(ctx, base);
	// addi r3,r1,3472
	ctx.r3.s64 = ctx.r1.s64 + 3472;
	// bl 0x82573c50
	ctx.lr = 0x83CB4578;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1308
	ctx.r4.s64 = ctx.r31.s64 + -1308;
	// addi r3,r1,3504
	ctx.r3.s64 = ctx.r1.s64 + 3504;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4584;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,67
	ctx.r3.s64 = 67;
	// bl 0x835fd898
	ctx.lr = 0x83CB4590;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4598;
	sub_82573D70(ctx, base);
	// addi r3,r1,3504
	ctx.r3.s64 = ctx.r1.s64 + 3504;
	// bl 0x82573c50
	ctx.lr = 0x83CB45A0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1284
	ctx.r4.s64 = ctx.r31.s64 + -1284;
	// addi r3,r1,3536
	ctx.r3.s64 = ctx.r1.s64 + 3536;
	// bl 0x82573ce0
	ctx.lr = 0x83CB45AC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x835fd898
	ctx.lr = 0x83CB45B8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB45C0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3536
	ctx.r3.s64 = ctx.r1.s64 + 3536;
	// bl 0x82573c50
	ctx.lr = 0x83CB45C8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1268
	ctx.r4.s64 = ctx.r31.s64 + -1268;
	// addi r3,r1,3568
	ctx.r3.s64 = ctx.r1.s64 + 3568;
	// bl 0x82573ce0
	ctx.lr = 0x83CB45D4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,65
	ctx.r3.s64 = 65;
	// bl 0x835fd898
	ctx.lr = 0x83CB45E0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB45E8;
	sub_82573D70(ctx, base);
	// addi r3,r1,3568
	ctx.r3.s64 = ctx.r1.s64 + 3568;
	// bl 0x82573c50
	ctx.lr = 0x83CB45F0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1248
	ctx.r4.s64 = ctx.r31.s64 + -1248;
	// addi r3,r1,3600
	ctx.r3.s64 = ctx.r1.s64 + 3600;
	// bl 0x82573ce0
	ctx.lr = 0x83CB45FC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x835fd898
	ctx.lr = 0x83CB4608;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4610;
	sub_82573D70(ctx, base);
	// addi r3,r1,3600
	ctx.r3.s64 = ctx.r1.s64 + 3600;
	// bl 0x82573c50
	ctx.lr = 0x83CB4618;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1228
	ctx.r4.s64 = ctx.r31.s64 + -1228;
	// addi r3,r1,3632
	ctx.r3.s64 = ctx.r1.s64 + 3632;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4624;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x835fd898
	ctx.lr = 0x83CB4630;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4638;
	sub_82573D70(ctx, base);
	// addi r3,r1,3632
	ctx.r3.s64 = ctx.r1.s64 + 3632;
	// bl 0x82573c50
	ctx.lr = 0x83CB4640;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1208
	ctx.r4.s64 = ctx.r31.s64 + -1208;
	// addi r3,r1,3664
	ctx.r3.s64 = ctx.r1.s64 + 3664;
	// bl 0x82573ce0
	ctx.lr = 0x83CB464C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x835fd898
	ctx.lr = 0x83CB4658;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4660;
	sub_82573D70(ctx, base);
	// addi r3,r1,3664
	ctx.r3.s64 = ctx.r1.s64 + 3664;
	// bl 0x82573c50
	ctx.lr = 0x83CB4668;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1192
	ctx.r4.s64 = ctx.r31.s64 + -1192;
	// addi r3,r1,3696
	ctx.r3.s64 = ctx.r1.s64 + 3696;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4674;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,61
	ctx.r3.s64 = 61;
	// bl 0x835fd898
	ctx.lr = 0x83CB4680;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4688;
	sub_82573D70(ctx, base);
	// addi r3,r1,3696
	ctx.r3.s64 = ctx.r1.s64 + 3696;
	// bl 0x82573c50
	ctx.lr = 0x83CB4690;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1176
	ctx.r4.s64 = ctx.r31.s64 + -1176;
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// bl 0x82573ce0
	ctx.lr = 0x83CB469C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x835fd898
	ctx.lr = 0x83CB46A8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB46B0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// bl 0x82573c50
	ctx.lr = 0x83CB46B8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1156
	ctx.r4.s64 = ctx.r31.s64 + -1156;
	// addi r3,r1,3760
	ctx.r3.s64 = ctx.r1.s64 + 3760;
	// bl 0x82573ce0
	ctx.lr = 0x83CB46C4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,59
	ctx.r3.s64 = 59;
	// bl 0x835fd898
	ctx.lr = 0x83CB46D0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB46D8;
	sub_82573D70(ctx, base);
	// addi r3,r1,3760
	ctx.r3.s64 = ctx.r1.s64 + 3760;
	// bl 0x82573c50
	ctx.lr = 0x83CB46E0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1136
	ctx.r4.s64 = ctx.r31.s64 + -1136;
	// addi r3,r1,3792
	ctx.r3.s64 = ctx.r1.s64 + 3792;
	// bl 0x82573ce0
	ctx.lr = 0x83CB46EC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x835fd898
	ctx.lr = 0x83CB46F8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4700;
	sub_82573D70(ctx, base);
	// addi r3,r1,3792
	ctx.r3.s64 = ctx.r1.s64 + 3792;
	// bl 0x82573c50
	ctx.lr = 0x83CB4708;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1116
	ctx.r4.s64 = ctx.r31.s64 + -1116;
	// addi r3,r1,3824
	ctx.r3.s64 = ctx.r1.s64 + 3824;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4714;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x835fd898
	ctx.lr = 0x83CB4720;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4728;
	sub_82573D70(ctx, base);
	// addi r3,r1,3824
	ctx.r3.s64 = ctx.r1.s64 + 3824;
	// bl 0x82573c50
	ctx.lr = 0x83CB4730;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1100
	ctx.r4.s64 = ctx.r31.s64 + -1100;
	// addi r3,r1,3856
	ctx.r3.s64 = ctx.r1.s64 + 3856;
	// bl 0x82573ce0
	ctx.lr = 0x83CB473C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x835fd898
	ctx.lr = 0x83CB4748;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4750;
	sub_82573D70(ctx, base);
	// addi r3,r1,3856
	ctx.r3.s64 = ctx.r1.s64 + 3856;
	// bl 0x82573c50
	ctx.lr = 0x83CB4758;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1080
	ctx.r4.s64 = ctx.r31.s64 + -1080;
	// addi r3,r1,3888
	ctx.r3.s64 = ctx.r1.s64 + 3888;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4764;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x835fd898
	ctx.lr = 0x83CB4770;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4778;
	sub_82573D70(ctx, base);
	// addi r3,r1,3888
	ctx.r3.s64 = ctx.r1.s64 + 3888;
	// bl 0x82573c50
	ctx.lr = 0x83CB4780;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1068
	ctx.r4.s64 = ctx.r31.s64 + -1068;
	// addi r3,r1,3920
	ctx.r3.s64 = ctx.r1.s64 + 3920;
	// bl 0x82573ce0
	ctx.lr = 0x83CB478C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,54
	ctx.r3.s64 = 54;
	// bl 0x835fd898
	ctx.lr = 0x83CB4798;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB47A0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3920
	ctx.r3.s64 = ctx.r1.s64 + 3920;
	// bl 0x82573c50
	ctx.lr = 0x83CB47A8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1052
	ctx.r4.s64 = ctx.r31.s64 + -1052;
	// addi r3,r1,3952
	ctx.r3.s64 = ctx.r1.s64 + 3952;
	// bl 0x82573ce0
	ctx.lr = 0x83CB47B4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,53
	ctx.r3.s64 = 53;
	// bl 0x835fd898
	ctx.lr = 0x83CB47C0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB47C8;
	sub_82573D70(ctx, base);
	// addi r3,r1,3952
	ctx.r3.s64 = ctx.r1.s64 + 3952;
	// bl 0x82573c50
	ctx.lr = 0x83CB47D0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1032
	ctx.r4.s64 = ctx.r31.s64 + -1032;
	// addi r3,r1,3984
	ctx.r3.s64 = ctx.r1.s64 + 3984;
	// bl 0x82573ce0
	ctx.lr = 0x83CB47DC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x835fd898
	ctx.lr = 0x83CB47E8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB47F0;
	sub_82573D70(ctx, base);
	// addi r3,r1,3984
	ctx.r3.s64 = ctx.r1.s64 + 3984;
	// bl 0x82573c50
	ctx.lr = 0x83CB47F8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1008
	ctx.r4.s64 = ctx.r31.s64 + -1008;
	// addi r3,r1,4016
	ctx.r3.s64 = ctx.r1.s64 + 4016;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4804;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x835fd898
	ctx.lr = 0x83CB4810;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4818;
	sub_82573D70(ctx, base);
	// addi r3,r1,4016
	ctx.r3.s64 = ctx.r1.s64 + 4016;
	// bl 0x82573c50
	ctx.lr = 0x83CB4820;
	sub_82573C50(ctx, base);
	// addi r4,r31,-988
	ctx.r4.s64 = ctx.r31.s64 + -988;
	// addi r3,r1,4048
	ctx.r3.s64 = ctx.r1.s64 + 4048;
	// bl 0x82573ce0
	ctx.lr = 0x83CB482C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x835fd898
	ctx.lr = 0x83CB4838;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4840;
	sub_82573D70(ctx, base);
	// addi r3,r1,4048
	ctx.r3.s64 = ctx.r1.s64 + 4048;
	// bl 0x82573c50
	ctx.lr = 0x83CB4848;
	sub_82573C50(ctx, base);
	// addi r4,r31,-968
	ctx.r4.s64 = ctx.r31.s64 + -968;
	// addi r3,r1,4080
	ctx.r3.s64 = ctx.r1.s64 + 4080;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4854;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x835fd898
	ctx.lr = 0x83CB4860;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4868;
	sub_82573D70(ctx, base);
	// addi r3,r1,4080
	ctx.r3.s64 = ctx.r1.s64 + 4080;
	// bl 0x82573c50
	ctx.lr = 0x83CB4870;
	sub_82573C50(ctx, base);
	// addi r4,r31,-948
	ctx.r4.s64 = ctx.r31.s64 + -948;
	// addi r3,r1,4112
	ctx.r3.s64 = ctx.r1.s64 + 4112;
	// bl 0x82573ce0
	ctx.lr = 0x83CB487C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x835fd898
	ctx.lr = 0x83CB4888;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4890;
	sub_82573D70(ctx, base);
	// addi r3,r1,4112
	ctx.r3.s64 = ctx.r1.s64 + 4112;
	// bl 0x82573c50
	ctx.lr = 0x83CB4898;
	sub_82573C50(ctx, base);
	// addi r4,r31,-924
	ctx.r4.s64 = ctx.r31.s64 + -924;
	// addi r3,r1,4144
	ctx.r3.s64 = ctx.r1.s64 + 4144;
	// bl 0x82573ce0
	ctx.lr = 0x83CB48A4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x835fd898
	ctx.lr = 0x83CB48B0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB48B8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4144
	ctx.r3.s64 = ctx.r1.s64 + 4144;
	// bl 0x82573c50
	ctx.lr = 0x83CB48C0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-904
	ctx.r4.s64 = ctx.r31.s64 + -904;
	// addi r3,r1,4176
	ctx.r3.s64 = ctx.r1.s64 + 4176;
	// bl 0x82573ce0
	ctx.lr = 0x83CB48CC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x835fd898
	ctx.lr = 0x83CB48D8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB48E0;
	sub_82573D70(ctx, base);
	// addi r3,r1,4176
	ctx.r3.s64 = ctx.r1.s64 + 4176;
	// bl 0x82573c50
	ctx.lr = 0x83CB48E8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-884
	ctx.r4.s64 = ctx.r31.s64 + -884;
	// addi r3,r1,4208
	ctx.r3.s64 = ctx.r1.s64 + 4208;
	// bl 0x82573ce0
	ctx.lr = 0x83CB48F4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x835fd898
	ctx.lr = 0x83CB4900;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4908;
	sub_82573D70(ctx, base);
	// addi r3,r1,4208
	ctx.r3.s64 = ctx.r1.s64 + 4208;
	// bl 0x82573c50
	ctx.lr = 0x83CB4910;
	sub_82573C50(ctx, base);
	// addi r4,r31,-864
	ctx.r4.s64 = ctx.r31.s64 + -864;
	// addi r3,r1,4240
	ctx.r3.s64 = ctx.r1.s64 + 4240;
	// bl 0x82573ce0
	ctx.lr = 0x83CB491C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x835fd898
	ctx.lr = 0x83CB4928;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4930;
	sub_82573D70(ctx, base);
	// addi r3,r1,4240
	ctx.r3.s64 = ctx.r1.s64 + 4240;
	// bl 0x82573c50
	ctx.lr = 0x83CB4938;
	sub_82573C50(ctx, base);
	// addi r4,r31,-836
	ctx.r4.s64 = ctx.r31.s64 + -836;
	// addi r3,r1,4272
	ctx.r3.s64 = ctx.r1.s64 + 4272;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4944;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x835fd898
	ctx.lr = 0x83CB4950;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4958;
	sub_82573D70(ctx, base);
	// addi r3,r1,4272
	ctx.r3.s64 = ctx.r1.s64 + 4272;
	// bl 0x82573c50
	ctx.lr = 0x83CB4960;
	sub_82573C50(ctx, base);
	// addi r4,r31,-820
	ctx.r4.s64 = ctx.r31.s64 + -820;
	// addi r3,r1,4304
	ctx.r3.s64 = ctx.r1.s64 + 4304;
	// bl 0x82573ce0
	ctx.lr = 0x83CB496C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x835fd898
	ctx.lr = 0x83CB4978;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4980;
	sub_82573D70(ctx, base);
	// addi r3,r1,4304
	ctx.r3.s64 = ctx.r1.s64 + 4304;
	// bl 0x82573c50
	ctx.lr = 0x83CB4988;
	sub_82573C50(ctx, base);
	// addi r4,r31,-804
	ctx.r4.s64 = ctx.r31.s64 + -804;
	// addi r3,r1,4336
	ctx.r3.s64 = ctx.r1.s64 + 4336;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4994;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x835fd898
	ctx.lr = 0x83CB49A0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB49A8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4336
	ctx.r3.s64 = ctx.r1.s64 + 4336;
	// bl 0x82573c50
	ctx.lr = 0x83CB49B0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-784
	ctx.r4.s64 = ctx.r31.s64 + -784;
	// addi r3,r1,4368
	ctx.r3.s64 = ctx.r1.s64 + 4368;
	// bl 0x82573ce0
	ctx.lr = 0x83CB49BC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x835fd898
	ctx.lr = 0x83CB49C8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB49D0;
	sub_82573D70(ctx, base);
	// addi r3,r1,4368
	ctx.r3.s64 = ctx.r1.s64 + 4368;
	// bl 0x82573c50
	ctx.lr = 0x83CB49D8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-764
	ctx.r4.s64 = ctx.r31.s64 + -764;
	// addi r3,r1,4400
	ctx.r3.s64 = ctx.r1.s64 + 4400;
	// bl 0x82573ce0
	ctx.lr = 0x83CB49E4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x835fd898
	ctx.lr = 0x83CB49F0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB49F8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4400
	ctx.r3.s64 = ctx.r1.s64 + 4400;
	// bl 0x82573c50
	ctx.lr = 0x83CB4A00;
	sub_82573C50(ctx, base);
	// addi r4,r31,-748
	ctx.r4.s64 = ctx.r31.s64 + -748;
	// addi r3,r1,4432
	ctx.r3.s64 = ctx.r1.s64 + 4432;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4A0C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x835fd898
	ctx.lr = 0x83CB4A18;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4A20;
	sub_82573D70(ctx, base);
	// addi r3,r1,4432
	ctx.r3.s64 = ctx.r1.s64 + 4432;
	// bl 0x82573c50
	ctx.lr = 0x83CB4A28;
	sub_82573C50(ctx, base);
	// addi r4,r31,-724
	ctx.r4.s64 = ctx.r31.s64 + -724;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4A34;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x835fd898
	ctx.lr = 0x83CB4A40;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4A48;
	sub_82573D70(ctx, base);
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x82573c50
	ctx.lr = 0x83CB4A50;
	sub_82573C50(ctx, base);
	// addi r4,r31,-704
	ctx.r4.s64 = ctx.r31.s64 + -704;
	// addi r3,r1,4496
	ctx.r3.s64 = ctx.r1.s64 + 4496;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4A5C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x835fd898
	ctx.lr = 0x83CB4A68;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4A70;
	sub_82573D70(ctx, base);
	// addi r3,r1,4496
	ctx.r3.s64 = ctx.r1.s64 + 4496;
	// bl 0x82573c50
	ctx.lr = 0x83CB4A78;
	sub_82573C50(ctx, base);
	// addi r4,r31,-684
	ctx.r4.s64 = ctx.r31.s64 + -684;
	// addi r3,r1,4528
	ctx.r3.s64 = ctx.r1.s64 + 4528;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4A84;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x835fd898
	ctx.lr = 0x83CB4A90;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4A98;
	sub_82573D70(ctx, base);
	// addi r3,r1,4528
	ctx.r3.s64 = ctx.r1.s64 + 4528;
	// bl 0x82573c50
	ctx.lr = 0x83CB4AA0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-664
	ctx.r4.s64 = ctx.r31.s64 + -664;
	// addi r3,r1,4560
	ctx.r3.s64 = ctx.r1.s64 + 4560;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4AAC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x835fd898
	ctx.lr = 0x83CB4AB8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4AC0;
	sub_82573D70(ctx, base);
	// addi r3,r1,4560
	ctx.r3.s64 = ctx.r1.s64 + 4560;
	// bl 0x82573c50
	ctx.lr = 0x83CB4AC8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-644
	ctx.r4.s64 = ctx.r31.s64 + -644;
	// addi r3,r1,4592
	ctx.r3.s64 = ctx.r1.s64 + 4592;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4AD4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x835fd898
	ctx.lr = 0x83CB4AE0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4AE8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4592
	ctx.r3.s64 = ctx.r1.s64 + 4592;
	// bl 0x82573c50
	ctx.lr = 0x83CB4AF0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-624
	ctx.r4.s64 = ctx.r31.s64 + -624;
	// addi r3,r1,4624
	ctx.r3.s64 = ctx.r1.s64 + 4624;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4AFC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x835fd898
	ctx.lr = 0x83CB4B08;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4B10;
	sub_82573D70(ctx, base);
	// addi r3,r1,4624
	ctx.r3.s64 = ctx.r1.s64 + 4624;
	// bl 0x82573c50
	ctx.lr = 0x83CB4B18;
	sub_82573C50(ctx, base);
	// addi r4,r31,-600
	ctx.r4.s64 = ctx.r31.s64 + -600;
	// addi r3,r1,4656
	ctx.r3.s64 = ctx.r1.s64 + 4656;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4B24;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x835fd898
	ctx.lr = 0x83CB4B30;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4B38;
	sub_82573D70(ctx, base);
	// addi r3,r1,4656
	ctx.r3.s64 = ctx.r1.s64 + 4656;
	// bl 0x82573c50
	ctx.lr = 0x83CB4B40;
	sub_82573C50(ctx, base);
	// addi r4,r31,-576
	ctx.r4.s64 = ctx.r31.s64 + -576;
	// addi r3,r1,4688
	ctx.r3.s64 = ctx.r1.s64 + 4688;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4B4C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x835fd898
	ctx.lr = 0x83CB4B58;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4B60;
	sub_82573D70(ctx, base);
	// addi r3,r1,4688
	ctx.r3.s64 = ctx.r1.s64 + 4688;
	// bl 0x82573c50
	ctx.lr = 0x83CB4B68;
	sub_82573C50(ctx, base);
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// addi r3,r1,4720
	ctx.r3.s64 = ctx.r1.s64 + 4720;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4B74;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x835fd898
	ctx.lr = 0x83CB4B80;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4B88;
	sub_82573D70(ctx, base);
	// addi r3,r1,4720
	ctx.r3.s64 = ctx.r1.s64 + 4720;
	// bl 0x82573c50
	ctx.lr = 0x83CB4B90;
	sub_82573C50(ctx, base);
	// addi r4,r31,-536
	ctx.r4.s64 = ctx.r31.s64 + -536;
	// addi r3,r1,4752
	ctx.r3.s64 = ctx.r1.s64 + 4752;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4B9C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x835fd898
	ctx.lr = 0x83CB4BA8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4BB0;
	sub_82573D70(ctx, base);
	// addi r3,r1,4752
	ctx.r3.s64 = ctx.r1.s64 + 4752;
	// bl 0x82573c50
	ctx.lr = 0x83CB4BB8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-524
	ctx.r4.s64 = ctx.r31.s64 + -524;
	// addi r3,r1,4784
	ctx.r3.s64 = ctx.r1.s64 + 4784;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4BC4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x835fd898
	ctx.lr = 0x83CB4BD0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4BD8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4784
	ctx.r3.s64 = ctx.r1.s64 + 4784;
	// bl 0x82573c50
	ctx.lr = 0x83CB4BE0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-508
	ctx.r4.s64 = ctx.r31.s64 + -508;
	// addi r3,r1,4816
	ctx.r3.s64 = ctx.r1.s64 + 4816;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4BEC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x835fd898
	ctx.lr = 0x83CB4BF8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4C00;
	sub_82573D70(ctx, base);
	// addi r3,r1,4816
	ctx.r3.s64 = ctx.r1.s64 + 4816;
	// bl 0x82573c50
	ctx.lr = 0x83CB4C08;
	sub_82573C50(ctx, base);
	// addi r4,r31,-488
	ctx.r4.s64 = ctx.r31.s64 + -488;
	// addi r3,r1,4848
	ctx.r3.s64 = ctx.r1.s64 + 4848;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4C14;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x835fd898
	ctx.lr = 0x83CB4C20;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4C28;
	sub_82573D70(ctx, base);
	// addi r3,r1,4848
	ctx.r3.s64 = ctx.r1.s64 + 4848;
	// bl 0x82573c50
	ctx.lr = 0x83CB4C30;
	sub_82573C50(ctx, base);
	// addi r4,r31,-464
	ctx.r4.s64 = ctx.r31.s64 + -464;
	// addi r3,r1,4880
	ctx.r3.s64 = ctx.r1.s64 + 4880;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4C3C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x835fd898
	ctx.lr = 0x83CB4C48;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4C50;
	sub_82573D70(ctx, base);
	// addi r3,r1,4880
	ctx.r3.s64 = ctx.r1.s64 + 4880;
	// bl 0x82573c50
	ctx.lr = 0x83CB4C58;
	sub_82573C50(ctx, base);
	// addi r4,r31,-444
	ctx.r4.s64 = ctx.r31.s64 + -444;
	// addi r3,r1,4912
	ctx.r3.s64 = ctx.r1.s64 + 4912;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4C64;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x835fd898
	ctx.lr = 0x83CB4C70;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4C78;
	sub_82573D70(ctx, base);
	// addi r3,r1,4912
	ctx.r3.s64 = ctx.r1.s64 + 4912;
	// bl 0x82573c50
	ctx.lr = 0x83CB4C80;
	sub_82573C50(ctx, base);
	// addi r4,r31,-428
	ctx.r4.s64 = ctx.r31.s64 + -428;
	// addi r3,r1,4944
	ctx.r3.s64 = ctx.r1.s64 + 4944;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4C8C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x835fd898
	ctx.lr = 0x83CB4C98;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4CA0;
	sub_82573D70(ctx, base);
	// addi r3,r1,4944
	ctx.r3.s64 = ctx.r1.s64 + 4944;
	// bl 0x82573c50
	ctx.lr = 0x83CB4CA8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// addi r3,r1,4976
	ctx.r3.s64 = ctx.r1.s64 + 4976;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4CB4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x835fd898
	ctx.lr = 0x83CB4CC0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4CC8;
	sub_82573D70(ctx, base);
	// addi r3,r1,4976
	ctx.r3.s64 = ctx.r1.s64 + 4976;
	// bl 0x82573c50
	ctx.lr = 0x83CB4CD0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-396
	ctx.r4.s64 = ctx.r31.s64 + -396;
	// addi r3,r1,5008
	ctx.r3.s64 = ctx.r1.s64 + 5008;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4CDC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x835fd898
	ctx.lr = 0x83CB4CE8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4CF0;
	sub_82573D70(ctx, base);
	// addi r3,r1,5008
	ctx.r3.s64 = ctx.r1.s64 + 5008;
	// bl 0x82573c50
	ctx.lr = 0x83CB4CF8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-376
	ctx.r4.s64 = ctx.r31.s64 + -376;
	// addi r3,r1,5040
	ctx.r3.s64 = ctx.r1.s64 + 5040;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4D04;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x835fd898
	ctx.lr = 0x83CB4D10;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4D18;
	sub_82573D70(ctx, base);
	// addi r3,r1,5040
	ctx.r3.s64 = ctx.r1.s64 + 5040;
	// bl 0x82573c50
	ctx.lr = 0x83CB4D20;
	sub_82573C50(ctx, base);
	// addi r4,r31,-360
	ctx.r4.s64 = ctx.r31.s64 + -360;
	// addi r3,r1,5072
	ctx.r3.s64 = ctx.r1.s64 + 5072;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4D2C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x835fd898
	ctx.lr = 0x83CB4D38;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4D40;
	sub_82573D70(ctx, base);
	// addi r3,r1,5072
	ctx.r3.s64 = ctx.r1.s64 + 5072;
	// bl 0x82573c50
	ctx.lr = 0x83CB4D48;
	sub_82573C50(ctx, base);
	// addi r4,r31,-348
	ctx.r4.s64 = ctx.r31.s64 + -348;
	// addi r3,r1,5104
	ctx.r3.s64 = ctx.r1.s64 + 5104;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4D54;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x835fd898
	ctx.lr = 0x83CB4D60;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4D68;
	sub_82573D70(ctx, base);
	// addi r3,r1,5104
	ctx.r3.s64 = ctx.r1.s64 + 5104;
	// bl 0x82573c50
	ctx.lr = 0x83CB4D70;
	sub_82573C50(ctx, base);
	// addi r4,r31,-332
	ctx.r4.s64 = ctx.r31.s64 + -332;
	// addi r3,r1,5136
	ctx.r3.s64 = ctx.r1.s64 + 5136;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4D7C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835fd898
	ctx.lr = 0x83CB4D88;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4D90;
	sub_82573D70(ctx, base);
	// addi r3,r1,5136
	ctx.r3.s64 = ctx.r1.s64 + 5136;
	// bl 0x82573c50
	ctx.lr = 0x83CB4D98;
	sub_82573C50(ctx, base);
	// addi r4,r31,-316
	ctx.r4.s64 = ctx.r31.s64 + -316;
	// addi r3,r1,5168
	ctx.r3.s64 = ctx.r1.s64 + 5168;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4DA4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fd898
	ctx.lr = 0x83CB4DB0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4DB8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5168
	ctx.r3.s64 = ctx.r1.s64 + 5168;
	// bl 0x82573c50
	ctx.lr = 0x83CB4DC0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-300
	ctx.r4.s64 = ctx.r31.s64 + -300;
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4DCC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fd898
	ctx.lr = 0x83CB4DD8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4DE0;
	sub_82573D70(ctx, base);
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// bl 0x82573c50
	ctx.lr = 0x83CB4DE8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-284
	ctx.r4.s64 = ctx.r31.s64 + -284;
	// addi r3,r1,5232
	ctx.r3.s64 = ctx.r1.s64 + 5232;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4DF4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fd898
	ctx.lr = 0x83CB4E00;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4E08;
	sub_82573D70(ctx, base);
	// addi r3,r1,5232
	ctx.r3.s64 = ctx.r1.s64 + 5232;
	// bl 0x82573c50
	ctx.lr = 0x83CB4E10;
	sub_82573C50(ctx, base);
	// addi r4,r31,-268
	ctx.r4.s64 = ctx.r31.s64 + -268;
	// addi r3,r1,5264
	ctx.r3.s64 = ctx.r1.s64 + 5264;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4E1C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fd898
	ctx.lr = 0x83CB4E28;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4E30;
	sub_82573D70(ctx, base);
	// addi r3,r1,5264
	ctx.r3.s64 = ctx.r1.s64 + 5264;
	// bl 0x82573c50
	ctx.lr = 0x83CB4E38;
	sub_82573C50(ctx, base);
	// addi r4,r31,-252
	ctx.r4.s64 = ctx.r31.s64 + -252;
	// addi r3,r1,5296
	ctx.r3.s64 = ctx.r1.s64 + 5296;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4E44;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fd898
	ctx.lr = 0x83CB4E50;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4E58;
	sub_82573D70(ctx, base);
	// addi r3,r1,5296
	ctx.r3.s64 = ctx.r1.s64 + 5296;
	// bl 0x82573c50
	ctx.lr = 0x83CB4E60;
	sub_82573C50(ctx, base);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// addi r3,r1,5328
	ctx.r3.s64 = ctx.r1.s64 + 5328;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4E6C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fd898
	ctx.lr = 0x83CB4E78;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4E80;
	sub_82573D70(ctx, base);
	// addi r3,r1,5328
	ctx.r3.s64 = ctx.r1.s64 + 5328;
	// bl 0x82573c50
	ctx.lr = 0x83CB4E88;
	sub_82573C50(ctx, base);
	// addi r4,r31,-204
	ctx.r4.s64 = ctx.r31.s64 + -204;
	// addi r3,r1,5360
	ctx.r3.s64 = ctx.r1.s64 + 5360;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4E94;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fd898
	ctx.lr = 0x83CB4EA0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4EA8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5360
	ctx.r3.s64 = ctx.r1.s64 + 5360;
	// bl 0x82573c50
	ctx.lr = 0x83CB4EB0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// addi r3,r1,5392
	ctx.r3.s64 = ctx.r1.s64 + 5392;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4EBC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fd898
	ctx.lr = 0x83CB4EC8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4ED0;
	sub_82573D70(ctx, base);
	// addi r3,r1,5392
	ctx.r3.s64 = ctx.r1.s64 + 5392;
	// bl 0x82573c50
	ctx.lr = 0x83CB4ED8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// addi r3,r1,5424
	ctx.r3.s64 = ctx.r1.s64 + 5424;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4EE4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fd898
	ctx.lr = 0x83CB4EF0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4EF8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5424
	ctx.r3.s64 = ctx.r1.s64 + 5424;
	// bl 0x82573c50
	ctx.lr = 0x83CB4F00;
	sub_82573C50(ctx, base);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// addi r3,r1,5456
	ctx.r3.s64 = ctx.r1.s64 + 5456;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4F0C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fd898
	ctx.lr = 0x83CB4F18;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4F20;
	sub_82573D70(ctx, base);
	// addi r3,r1,5456
	ctx.r3.s64 = ctx.r1.s64 + 5456;
	// bl 0x82573c50
	ctx.lr = 0x83CB4F28;
	sub_82573C50(ctx, base);
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// addi r3,r1,5488
	ctx.r3.s64 = ctx.r1.s64 + 5488;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4F34;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fd898
	ctx.lr = 0x83CB4F40;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4F48;
	sub_82573D70(ctx, base);
	// addi r3,r1,5488
	ctx.r3.s64 = ctx.r1.s64 + 5488;
	// bl 0x82573c50
	ctx.lr = 0x83CB4F50;
	sub_82573C50(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// addi r3,r1,5520
	ctx.r3.s64 = ctx.r1.s64 + 5520;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4F5C;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fd898
	ctx.lr = 0x83CB4F68;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4F70;
	sub_82573D70(ctx, base);
	// addi r3,r1,5520
	ctx.r3.s64 = ctx.r1.s64 + 5520;
	// bl 0x82573c50
	ctx.lr = 0x83CB4F78;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,5552
	ctx.r3.s64 = ctx.r1.s64 + 5552;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4F84;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd898
	ctx.lr = 0x83CB4F90;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4F98;
	sub_82573D70(ctx, base);
	// addi r3,r1,5552
	ctx.r3.s64 = ctx.r1.s64 + 5552;
	// bl 0x82573c50
	ctx.lr = 0x83CB4FA0;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,5584
	ctx.r3.s64 = ctx.r1.s64 + 5584;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4FAC;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd898
	ctx.lr = 0x83CB4FB8;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4FC0;
	sub_82573D70(ctx, base);
	// addi r3,r1,5584
	ctx.r3.s64 = ctx.r1.s64 + 5584;
	// bl 0x82573c50
	ctx.lr = 0x83CB4FC8;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,5616
	ctx.r3.s64 = ctx.r1.s64 + 5616;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4FD4;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd898
	ctx.lr = 0x83CB4FE0;
	sub_835FD898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB4FE8;
	sub_82573D70(ctx, base);
	// addi r3,r1,5616
	ctx.r3.s64 = ctx.r1.s64 + 5616;
	// bl 0x82573c50
	ctx.lr = 0x83CB4FF0;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,5648
	ctx.r3.s64 = ctx.r1.s64 + 5648;
	// bl 0x82573ce0
	ctx.lr = 0x83CB4FFC;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd898
	ctx.lr = 0x83CB5008;
	sub_835FD898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CB5010;
	sub_82573D70(ctx, base);
	// addi r3,r1,5648
	ctx.r3.s64 = ctx.r1.s64 + 5648;
	// bl 0x82573c50
	ctx.lr = 0x83CB5018;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd898
	ctx.lr = 0x83CB5020;
	sub_835FD898(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r11,r10,-25218
	ctx.r11.s64 = ctx.r10.s64 + -25218;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// li r4,23
	ctx.r4.s64 = 23;
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r4,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// li r6,21
	ctx.r6.s64 = 21;
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// li r7,27
	ctx.r7.s64 = 27;
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// stw r6,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// li r4,37
	ctx.r4.s64 = 37;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r5,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r5.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stw r4,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r4.u32);
	// li r7,34
	ctx.r7.s64 = 34;
	// stw r9,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r9.u32);
	// li r6,35
	ctx.r6.s64 = 35;
	// stw r8,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r8.u32);
	// li r10,38
	ctx.r10.s64 = 38;
	// stw r7,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r7.u32);
	// li r5,43
	ctx.r5.s64 = 43;
	// stw r6,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r6.u32);
	// li r4,44
	ctx.r4.s64 = 44;
	// stw r10,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// li r9,39
	ctx.r9.s64 = 39;
	// stw r5,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r4,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// li r7,41
	ctx.r7.s64 = 41;
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// li r6,42
	ctx.r6.s64 = 42;
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r7,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// stw r6,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r6.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,234
	ctx.r4.s64 = 234;
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,46
	ctx.r11.s64 = 46;
	// li r31,47
	ctx.r31.s64 = 47;
	// li r30,48
	ctx.r30.s64 = 48;
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// li r29,49
	ctx.r29.s64 = 49;
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r29,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r29.u32);
	// li r31,51
	ctx.r31.s64 = 51;
	// li r30,52
	ctx.r30.s64 = 52;
	// stw r11,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r11.u32);
	// li r29,53
	ctx.r29.s64 = 53;
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// stw r30,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r30.u32);
	// li r11,54
	ctx.r11.s64 = 54;
	// stw r29,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r29.u32);
	// li r31,55
	ctx.r31.s64 = 55;
	// li r30,56
	ctx.r30.s64 = 56;
	// stw r11,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r11.u32);
	// li r29,57
	ctx.r29.s64 = 57;
	// stw r31,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r31.u32);
	// stw r30,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r30.u32);
	// li r11,58
	ctx.r11.s64 = 58;
	// stw r29,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r29.u32);
	// li r31,59
	ctx.r31.s64 = 59;
	// li r30,60
	ctx.r30.s64 = 60;
	// stw r11,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
	// li r29,61
	ctx.r29.s64 = 61;
	// stw r31,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r31.u32);
	// stw r30,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r30.u32);
	// li r11,62
	ctx.r11.s64 = 62;
	// stw r29,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r29.u32);
	// li r31,63
	ctx.r31.s64 = 63;
	// li r30,64
	ctx.r30.s64 = 64;
	// stw r11,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r11.u32);
	// li r29,65
	ctx.r29.s64 = 65;
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// stw r30,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r30.u32);
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r29,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r29.u32);
	// li r31,67
	ctx.r31.s64 = 67;
	// li r30,68
	ctx.r30.s64 = 68;
	// stw r11,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
	// li r29,69
	ctx.r29.s64 = 69;
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// stw r30,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r30.u32);
	// li r11,70
	ctx.r11.s64 = 70;
	// stw r29,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r29.u32);
	// li r31,71
	ctx.r31.s64 = 71;
	// li r30,72
	ctx.r30.s64 = 72;
	// stw r11,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r11.u32);
	// li r29,73
	ctx.r29.s64 = 73;
	// stw r31,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r31.u32);
	// stw r30,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r30.u32);
	// li r11,74
	ctx.r11.s64 = 74;
	// li r31,75
	ctx.r31.s64 = 75;
	// stw r29,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r29.u32);
	// li r30,76
	ctx.r30.s64 = 76;
	// stw r11,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r11.u32);
	// li r29,77
	ctx.r29.s64 = 77;
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// stw r30,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r30.u32);
	// li r11,78
	ctx.r11.s64 = 78;
	// li r31,79
	ctx.r31.s64 = 79;
	// stw r29,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r29.u32);
	// li r30,80
	ctx.r30.s64 = 80;
	// stw r11,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r11.u32);
	// li r29,81
	ctx.r29.s64 = 81;
	// stw r31,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r31.u32);
	// stw r30,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r29.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,82
	ctx.r11.s64 = 82;
	// li r31,83
	ctx.r31.s64 = 83;
	// li r30,84
	ctx.r30.s64 = 84;
	// stw r11,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r11.u32);
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r31,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r31.u32);
	// li r31,87
	ctx.r31.s64 = 87;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// li r30,88
	ctx.r30.s64 = 88;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// li r11,89
	ctx.r11.s64 = 89;
	// stw r31,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r31.u32);
	// li r31,90
	ctx.r31.s64 = 90;
	// stw r30,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r30.u32);
	// li r30,91
	ctx.r30.s64 = 91;
	// stw r11,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r11.u32);
	// li r11,92
	ctx.r11.s64 = 92;
	// stw r31,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r31.u32);
	// li r31,93
	ctx.r31.s64 = 93;
	// stw r30,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r30.u32);
	// li r30,94
	ctx.r30.s64 = 94;
	// stw r11,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r11.u32);
	// li r11,95
	ctx.r11.s64 = 95;
	// stw r31,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r31.u32);
	// li r31,96
	ctx.r31.s64 = 96;
	// stw r30,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r30.u32);
	// li r30,97
	ctx.r30.s64 = 97;
	// stw r11,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r11.u32);
	// li r11,98
	ctx.r11.s64 = 98;
	// stw r31,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r31.u32);
	// li r31,99
	ctx.r31.s64 = 99;
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// li r30,100
	ctx.r30.s64 = 100;
	// stw r11,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r11.u32);
	// li r11,101
	ctx.r11.s64 = 101;
	// stw r31,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r31.u32);
	// li r31,102
	ctx.r31.s64 = 102;
	// stw r30,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r30.u32);
	// li r30,103
	ctx.r30.s64 = 103;
	// stw r11,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r11.u32);
	// li r11,104
	ctx.r11.s64 = 104;
	// stw r31,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r31.u32);
	// li r31,105
	ctx.r31.s64 = 105;
	// stw r30,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r30.u32);
	// li r30,106
	ctx.r30.s64 = 106;
	// stw r11,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r11.u32);
	// li r11,107
	ctx.r11.s64 = 107;
	// stw r31,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r31.u32);
	// li r31,108
	ctx.r31.s64 = 108;
	// stw r30,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r30.u32);
	// li r30,109
	ctx.r30.s64 = 109;
	// stw r11,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r11.u32);
	// li r11,110
	ctx.r11.s64 = 110;
	// stw r31,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r31.u32);
	// li r31,111
	ctx.r31.s64 = 111;
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// li r30,112
	ctx.r30.s64 = 112;
	// stw r11,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, ctx.r11.u32);
	// li r11,113
	ctx.r11.s64 = 113;
	// stw r31,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r31.u32);
	// li r31,114
	ctx.r31.s64 = 114;
	// stw r30,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r30.u32);
	// li r30,115
	ctx.r30.s64 = 115;
	// stw r11,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r11.u32);
	// li r11,116
	ctx.r11.s64 = 116;
	// stw r31,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r31.u32);
	// li r31,117
	ctx.r31.s64 = 117;
	// stw r30,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r30.u32);
	// li r30,118
	ctx.r30.s64 = 118;
	// stw r11,972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 972, ctx.r11.u32);
	// li r11,119
	ctx.r11.s64 = 119;
	// stw r31,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r31.u32);
	// li r31,120
	ctx.r31.s64 = 120;
	// stw r30,988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 988, ctx.r30.u32);
	// li r30,121
	ctx.r30.s64 = 121;
	// stw r11,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r11.u32);
	// li r29,85
	ctx.r29.s64 = 85;
	// li r11,122
	ctx.r11.s64 = 122;
	// stw r31,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, ctx.r31.u32);
	// stw r30,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r30.u32);
	// li r31,123
	ctx.r31.s64 = 123;
	// stw r29,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r29.u32);
	// li r30,124
	ctx.r30.s64 = 124;
	// stw r11,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, ctx.r11.u32);
	// stw r31,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r31.u32);
	// li r11,125
	ctx.r11.s64 = 125;
	// li r31,126
	ctx.r31.s64 = 126;
	// stw r30,1036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1036, ctx.r30.u32);
	// stw r11,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r11.u32);
	// li r30,127
	ctx.r30.s64 = 127;
	// stw r31,1052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1052, ctx.r31.u32);
	// li r11,128
	ctx.r11.s64 = 128;
	// li r31,129
	ctx.r31.s64 = 129;
	// stw r30,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r30.u32);
	// li r29,130
	ctx.r29.s64 = 130;
	// stw r11,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, ctx.r11.u32);
	// stw r31,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r31.u32);
	// li r30,131
	ctx.r30.s64 = 131;
	// stw r29,1084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1084, ctx.r29.u32);
	// li r11,132
	ctx.r11.s64 = 132;
	// li r31,133
	ctx.r31.s64 = 133;
	// stw r30,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r30.u32);
	// li r29,134
	ctx.r29.s64 = 134;
	// stw r11,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r11.u32);
	// stw r31,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r31.u32);
	// li r30,135
	ctx.r30.s64 = 135;
	// stw r29,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, ctx.r29.u32);
	// li r11,136
	ctx.r11.s64 = 136;
	// li r31,137
	ctx.r31.s64 = 137;
	// stw r30,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r30.u32);
	// li r29,138
	ctx.r29.s64 = 138;
	// stw r11,1132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1132, ctx.r11.u32);
	// stw r31,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r31.u32);
	// li r30,139
	ctx.r30.s64 = 139;
	// stw r29,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, ctx.r29.u32);
	// li r11,140
	ctx.r11.s64 = 140;
	// li r31,141
	ctx.r31.s64 = 141;
	// stw r30,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r30.u32);
	// li r29,142
	ctx.r29.s64 = 142;
	// stw r11,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, ctx.r11.u32);
	// stw r31,1172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1172, ctx.r31.u32);
	// li r30,143
	ctx.r30.s64 = 143;
	// stw r29,1180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1180, ctx.r29.u32);
	// li r11,144
	ctx.r11.s64 = 144;
	// li r31,145
	ctx.r31.s64 = 145;
	// stw r30,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r30.u32);
	// li r29,146
	ctx.r29.s64 = 146;
	// stw r11,1196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1196, ctx.r11.u32);
	// stw r31,1204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1204, ctx.r31.u32);
	// li r30,147
	ctx.r30.s64 = 147;
	// stw r29,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, ctx.r29.u32);
	// li r11,148
	ctx.r11.s64 = 148;
	// li r31,149
	ctx.r31.s64 = 149;
	// stw r30,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, ctx.r30.u32);
	// li r29,150
	ctx.r29.s64 = 150;
	// stw r11,1228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1228, ctx.r11.u32);
	// stw r31,1236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1236, ctx.r31.u32);
	// li r30,151
	ctx.r30.s64 = 151;
	// stw r29,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, ctx.r29.u32);
	// li r11,152
	ctx.r11.s64 = 152;
	// li r31,153
	ctx.r31.s64 = 153;
	// stw r30,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r30.u32);
	// li r29,154
	ctx.r29.s64 = 154;
	// stw r11,1260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1260, ctx.r11.u32);
	// stw r31,1268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1268, ctx.r31.u32);
	// li r30,155
	ctx.r30.s64 = 155;
	// li r11,156
	ctx.r11.s64 = 156;
	// stw r29,1276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1276, ctx.r29.u32);
	// li r31,157
	ctx.r31.s64 = 157;
	// stw r30,1284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1284, ctx.r30.u32);
	// li r29,158
	ctx.r29.s64 = 158;
	// stw r11,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, ctx.r11.u32);
	// stw r31,1300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1300, ctx.r31.u32);
	// li r30,159
	ctx.r30.s64 = 159;
	// li r11,160
	ctx.r11.s64 = 160;
	// stw r29,1308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1308, ctx.r29.u32);
	// li r31,161
	ctx.r31.s64 = 161;
	// stw r30,1316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1316, ctx.r30.u32);
	// li r29,162
	ctx.r29.s64 = 162;
	// stw r11,1324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1324, ctx.r11.u32);
	// stw r31,1332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1332, ctx.r31.u32);
	// li r30,163
	ctx.r30.s64 = 163;
	// li r11,164
	ctx.r11.s64 = 164;
	// stw r29,1340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1340, ctx.r29.u32);
	// li r31,165
	ctx.r31.s64 = 165;
	// stw r30,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r30.u32);
	// li r30,167
	ctx.r30.s64 = 167;
	// stw r11,1356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1356, ctx.r11.u32);
	// li r11,168
	ctx.r11.s64 = 168;
	// stw r31,1364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1364, ctx.r31.u32);
	// li r31,169
	ctx.r31.s64 = 169;
	// stw r30,1380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1380, ctx.r30.u32);
	// li r30,170
	ctx.r30.s64 = 170;
	// stw r11,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, ctx.r11.u32);
	// li r11,171
	ctx.r11.s64 = 171;
	// stw r31,1396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1396, ctx.r31.u32);
	// li r31,172
	ctx.r31.s64 = 172;
	// stw r30,1404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1404, ctx.r30.u32);
	// li r30,173
	ctx.r30.s64 = 173;
	// stw r11,1412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1412, ctx.r11.u32);
	// li r11,174
	ctx.r11.s64 = 174;
	// stw r31,1420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1420, ctx.r31.u32);
	// li r31,175
	ctx.r31.s64 = 175;
	// stw r30,1428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1428, ctx.r30.u32);
	// li r30,176
	ctx.r30.s64 = 176;
	// stw r11,1436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1436, ctx.r11.u32);
	// li r11,177
	ctx.r11.s64 = 177;
	// stw r31,1444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1444, ctx.r31.u32);
	// li r31,178
	ctx.r31.s64 = 178;
	// stw r30,1452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1452, ctx.r30.u32);
	// li r30,179
	ctx.r30.s64 = 179;
	// stw r11,1460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1460, ctx.r11.u32);
	// li r11,180
	ctx.r11.s64 = 180;
	// stw r31,1468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1468, ctx.r31.u32);
	// li r31,181
	ctx.r31.s64 = 181;
	// stw r30,1476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1476, ctx.r30.u32);
	// li r30,182
	ctx.r30.s64 = 182;
	// stw r11,1484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1484, ctx.r11.u32);
	// li r11,183
	ctx.r11.s64 = 183;
	// stw r31,1492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1492, ctx.r31.u32);
	// li r31,184
	ctx.r31.s64 = 184;
	// stw r30,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, ctx.r30.u32);
	// li r30,185
	ctx.r30.s64 = 185;
	// stw r11,1508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1508, ctx.r11.u32);
	// li r11,186
	ctx.r11.s64 = 186;
	// stw r31,1516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1516, ctx.r31.u32);
	// li r31,187
	ctx.r31.s64 = 187;
	// stw r30,1524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1524, ctx.r30.u32);
	// li r30,188
	ctx.r30.s64 = 188;
	// stw r11,1532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1532, ctx.r11.u32);
	// li r11,189
	ctx.r11.s64 = 189;
	// stw r31,1540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1540, ctx.r31.u32);
	// li r31,190
	ctx.r31.s64 = 190;
	// stw r30,1548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1548, ctx.r30.u32);
	// li r30,191
	ctx.r30.s64 = 191;
	// stw r11,1556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1556, ctx.r11.u32);
	// li r11,192
	ctx.r11.s64 = 192;
	// stw r31,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r31.u32);
	// li r31,193
	ctx.r31.s64 = 193;
	// stw r30,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r30.u32);
	// li r30,194
	ctx.r30.s64 = 194;
	// stw r11,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r11.u32);
	// li r11,195
	ctx.r11.s64 = 195;
	// stw r31,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, ctx.r31.u32);
	// li r31,196
	ctx.r31.s64 = 196;
	// stw r30,1596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1596, ctx.r30.u32);
	// li r30,197
	ctx.r30.s64 = 197;
	// stw r11,1604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1604, ctx.r11.u32);
	// li r11,198
	ctx.r11.s64 = 198;
	// stw r31,1612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1612, ctx.r31.u32);
	// li r31,199
	ctx.r31.s64 = 199;
	// stw r30,1620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1620, ctx.r30.u32);
	// li r30,200
	ctx.r30.s64 = 200;
	// stw r11,1628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1628, ctx.r11.u32);
	// li r11,201
	ctx.r11.s64 = 201;
	// stw r31,1636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1636, ctx.r31.u32);
	// li r31,202
	ctx.r31.s64 = 202;
	// stw r30,1644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1644, ctx.r30.u32);
	// li r29,166
	ctx.r29.s64 = 166;
	// li r30,203
	ctx.r30.s64 = 203;
	// stw r11,1652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1652, ctx.r11.u32);
	// stw r31,1660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1660, ctx.r31.u32);
	// li r11,204
	ctx.r11.s64 = 204;
	// stw r29,1372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1372, ctx.r29.u32);
	// li r31,205
	ctx.r31.s64 = 205;
	// stw r30,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r30.u32);
	// stw r11,1676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1676, ctx.r11.u32);
	// li r30,206
	ctx.r30.s64 = 206;
	// li r11,207
	ctx.r11.s64 = 207;
	// stw r31,1684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1684, ctx.r31.u32);
	// stw r30,1692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1692, ctx.r30.u32);
	// li r31,208
	ctx.r31.s64 = 208;
	// stw r11,1700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1700, ctx.r11.u32);
	// li r30,209
	ctx.r30.s64 = 209;
	// li r11,210
	ctx.r11.s64 = 210;
	// stw r31,1708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1708, ctx.r31.u32);
	// li r29,211
	ctx.r29.s64 = 211;
	// stw r30,1716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1716, ctx.r30.u32);
	// stw r11,1724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1724, ctx.r11.u32);
	// li r31,212
	ctx.r31.s64 = 212;
	// stw r29,1732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1732, ctx.r29.u32);
	// li r30,213
	ctx.r30.s64 = 213;
	// li r11,214
	ctx.r11.s64 = 214;
	// stw r31,1740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1740, ctx.r31.u32);
	// li r29,215
	ctx.r29.s64 = 215;
	// stw r30,1748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1748, ctx.r30.u32);
	// stw r11,1756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1756, ctx.r11.u32);
	// li r31,216
	ctx.r31.s64 = 216;
	// stw r29,1764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1764, ctx.r29.u32);
	// li r11,217
	ctx.r11.s64 = 217;
	// li r30,218
	ctx.r30.s64 = 218;
	// stw r31,1772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1772, ctx.r31.u32);
	// stw r11,1780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1780, ctx.r11.u32);
	// li r29,219
	ctx.r29.s64 = 219;
	// stw r30,1788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1788, ctx.r30.u32);
	// li r31,220
	ctx.r31.s64 = 220;
	// li r11,221
	ctx.r11.s64 = 221;
	// stw r29,1796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1796, ctx.r29.u32);
	// li r30,222
	ctx.r30.s64 = 222;
	// stw r31,1804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1804, ctx.r31.u32);
	// stw r11,1812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1812, ctx.r11.u32);
	// li r29,223
	ctx.r29.s64 = 223;
	// stw r30,1820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1820, ctx.r30.u32);
	// li r31,224
	ctx.r31.s64 = 224;
	// li r11,225
	ctx.r11.s64 = 225;
	// stw r29,1828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1828, ctx.r29.u32);
	// li r30,226
	ctx.r30.s64 = 226;
	// stw r31,1836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1836, ctx.r31.u32);
	// stw r11,1844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1844, ctx.r11.u32);
	// li r29,227
	ctx.r29.s64 = 227;
	// stw r30,1852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1852, ctx.r30.u32);
	// li r31,228
	ctx.r31.s64 = 228;
	// li r11,229
	ctx.r11.s64 = 229;
	// stw r29,1860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1860, ctx.r29.u32);
	// li r30,230
	ctx.r30.s64 = 230;
	// stw r31,1868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1868, ctx.r31.u32);
	// stw r11,1876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1876, ctx.r11.u32);
	// li r11,233
	ctx.r11.s64 = 233;
	// stw r30,1884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1884, ctx.r30.u32);
	// li r29,231
	ctx.r29.s64 = 231;
	// li r31,232
	ctx.r31.s64 = 232;
	// stw r11,1908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1908, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,1892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1892, ctx.r29.u32);
	// stw r31,1900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1900, ctx.r31.u32);
	// stw r30,1916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1916, ctx.r30.u32);
	// bl 0x825731e0
	ctx.lr = 0x83CB577C;
	sub_825731E0(ctx, base);
	// addi r1,r1,5696
	ctx.r1.s64 = ctx.r1.s64 + 5696;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5784"))) PPC_WEAK_FUNC(sub_83CB5784);
PPC_FUNC_IMPL(__imp__sub_83CB5784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5788"))) PPC_WEAK_FUNC(sub_83CB5788);
PPC_FUNC_IMPL(__imp__sub_83CB5788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6856
	ctx.r3.s64 = ctx.r11.s64 + -6856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5794"))) PPC_WEAK_FUNC(sub_83CB5794);
PPC_FUNC_IMPL(__imp__sub_83CB5794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5798"))) PPC_WEAK_FUNC(sub_83CB5798);
PPC_FUNC_IMPL(__imp__sub_83CB5798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6848
	ctx.r3.s64 = ctx.r11.s64 + -6848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB57A4"))) PPC_WEAK_FUNC(sub_83CB57A4);
PPC_FUNC_IMPL(__imp__sub_83CB57A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB57A8"))) PPC_WEAK_FUNC(sub_83CB57A8);
PPC_FUNC_IMPL(__imp__sub_83CB57A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6840
	ctx.r3.s64 = ctx.r11.s64 + -6840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB57B4"))) PPC_WEAK_FUNC(sub_83CB57B4);
PPC_FUNC_IMPL(__imp__sub_83CB57B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB57B8"))) PPC_WEAK_FUNC(sub_83CB57B8);
PPC_FUNC_IMPL(__imp__sub_83CB57B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6832
	ctx.r3.s64 = ctx.r11.s64 + -6832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB57C4"))) PPC_WEAK_FUNC(sub_83CB57C4);
PPC_FUNC_IMPL(__imp__sub_83CB57C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB57C8"))) PPC_WEAK_FUNC(sub_83CB57C8);
PPC_FUNC_IMPL(__imp__sub_83CB57C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6824
	ctx.r3.s64 = ctx.r11.s64 + -6824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB57D4"))) PPC_WEAK_FUNC(sub_83CB57D4);
PPC_FUNC_IMPL(__imp__sub_83CB57D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB57D8"))) PPC_WEAK_FUNC(sub_83CB57D8);
PPC_FUNC_IMPL(__imp__sub_83CB57D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6816
	ctx.r3.s64 = ctx.r11.s64 + -6816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB57E4"))) PPC_WEAK_FUNC(sub_83CB57E4);
PPC_FUNC_IMPL(__imp__sub_83CB57E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB57E8"))) PPC_WEAK_FUNC(sub_83CB57E8);
PPC_FUNC_IMPL(__imp__sub_83CB57E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6808
	ctx.r3.s64 = ctx.r11.s64 + -6808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB57F4"))) PPC_WEAK_FUNC(sub_83CB57F4);
PPC_FUNC_IMPL(__imp__sub_83CB57F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB57F8"))) PPC_WEAK_FUNC(sub_83CB57F8);
PPC_FUNC_IMPL(__imp__sub_83CB57F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6800
	ctx.r3.s64 = ctx.r11.s64 + -6800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5804"))) PPC_WEAK_FUNC(sub_83CB5804);
PPC_FUNC_IMPL(__imp__sub_83CB5804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5808"))) PPC_WEAK_FUNC(sub_83CB5808);
PPC_FUNC_IMPL(__imp__sub_83CB5808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5814"))) PPC_WEAK_FUNC(sub_83CB5814);
PPC_FUNC_IMPL(__imp__sub_83CB5814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5818"))) PPC_WEAK_FUNC(sub_83CB5818);
PPC_FUNC_IMPL(__imp__sub_83CB5818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6784
	ctx.r3.s64 = ctx.r11.s64 + -6784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5824"))) PPC_WEAK_FUNC(sub_83CB5824);
PPC_FUNC_IMPL(__imp__sub_83CB5824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5828"))) PPC_WEAK_FUNC(sub_83CB5828);
PPC_FUNC_IMPL(__imp__sub_83CB5828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6776
	ctx.r3.s64 = ctx.r11.s64 + -6776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5834"))) PPC_WEAK_FUNC(sub_83CB5834);
PPC_FUNC_IMPL(__imp__sub_83CB5834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5838"))) PPC_WEAK_FUNC(sub_83CB5838);
PPC_FUNC_IMPL(__imp__sub_83CB5838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6768
	ctx.r3.s64 = ctx.r11.s64 + -6768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5844"))) PPC_WEAK_FUNC(sub_83CB5844);
PPC_FUNC_IMPL(__imp__sub_83CB5844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5848"))) PPC_WEAK_FUNC(sub_83CB5848);
PPC_FUNC_IMPL(__imp__sub_83CB5848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6760
	ctx.r3.s64 = ctx.r11.s64 + -6760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5854"))) PPC_WEAK_FUNC(sub_83CB5854);
PPC_FUNC_IMPL(__imp__sub_83CB5854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5858"))) PPC_WEAK_FUNC(sub_83CB5858);
PPC_FUNC_IMPL(__imp__sub_83CB5858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6752
	ctx.r3.s64 = ctx.r11.s64 + -6752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5864"))) PPC_WEAK_FUNC(sub_83CB5864);
PPC_FUNC_IMPL(__imp__sub_83CB5864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5868"))) PPC_WEAK_FUNC(sub_83CB5868);
PPC_FUNC_IMPL(__imp__sub_83CB5868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6744
	ctx.r3.s64 = ctx.r11.s64 + -6744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5874"))) PPC_WEAK_FUNC(sub_83CB5874);
PPC_FUNC_IMPL(__imp__sub_83CB5874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5878"))) PPC_WEAK_FUNC(sub_83CB5878);
PPC_FUNC_IMPL(__imp__sub_83CB5878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6736
	ctx.r3.s64 = ctx.r11.s64 + -6736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5884"))) PPC_WEAK_FUNC(sub_83CB5884);
PPC_FUNC_IMPL(__imp__sub_83CB5884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5888"))) PPC_WEAK_FUNC(sub_83CB5888);
PPC_FUNC_IMPL(__imp__sub_83CB5888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6728
	ctx.r3.s64 = ctx.r11.s64 + -6728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5894"))) PPC_WEAK_FUNC(sub_83CB5894);
PPC_FUNC_IMPL(__imp__sub_83CB5894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5898"))) PPC_WEAK_FUNC(sub_83CB5898);
PPC_FUNC_IMPL(__imp__sub_83CB5898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6720
	ctx.r3.s64 = ctx.r11.s64 + -6720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB58A4"))) PPC_WEAK_FUNC(sub_83CB58A4);
PPC_FUNC_IMPL(__imp__sub_83CB58A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB58A8"))) PPC_WEAK_FUNC(sub_83CB58A8);
PPC_FUNC_IMPL(__imp__sub_83CB58A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6712
	ctx.r3.s64 = ctx.r11.s64 + -6712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB58B4"))) PPC_WEAK_FUNC(sub_83CB58B4);
PPC_FUNC_IMPL(__imp__sub_83CB58B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB58B8"))) PPC_WEAK_FUNC(sub_83CB58B8);
PPC_FUNC_IMPL(__imp__sub_83CB58B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6704
	ctx.r3.s64 = ctx.r11.s64 + -6704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB58C4"))) PPC_WEAK_FUNC(sub_83CB58C4);
PPC_FUNC_IMPL(__imp__sub_83CB58C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB58C8"))) PPC_WEAK_FUNC(sub_83CB58C8);
PPC_FUNC_IMPL(__imp__sub_83CB58C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6696
	ctx.r3.s64 = ctx.r11.s64 + -6696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB58D4"))) PPC_WEAK_FUNC(sub_83CB58D4);
PPC_FUNC_IMPL(__imp__sub_83CB58D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB58D8"))) PPC_WEAK_FUNC(sub_83CB58D8);
PPC_FUNC_IMPL(__imp__sub_83CB58D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6688
	ctx.r3.s64 = ctx.r11.s64 + -6688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB58E4"))) PPC_WEAK_FUNC(sub_83CB58E4);
PPC_FUNC_IMPL(__imp__sub_83CB58E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB58E8"))) PPC_WEAK_FUNC(sub_83CB58E8);
PPC_FUNC_IMPL(__imp__sub_83CB58E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6680
	ctx.r3.s64 = ctx.r11.s64 + -6680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB58F4"))) PPC_WEAK_FUNC(sub_83CB58F4);
PPC_FUNC_IMPL(__imp__sub_83CB58F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB58F8"))) PPC_WEAK_FUNC(sub_83CB58F8);
PPC_FUNC_IMPL(__imp__sub_83CB58F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6672
	ctx.r3.s64 = ctx.r11.s64 + -6672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5904"))) PPC_WEAK_FUNC(sub_83CB5904);
PPC_FUNC_IMPL(__imp__sub_83CB5904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5908"))) PPC_WEAK_FUNC(sub_83CB5908);
PPC_FUNC_IMPL(__imp__sub_83CB5908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6664
	ctx.r3.s64 = ctx.r11.s64 + -6664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5914"))) PPC_WEAK_FUNC(sub_83CB5914);
PPC_FUNC_IMPL(__imp__sub_83CB5914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5918"))) PPC_WEAK_FUNC(sub_83CB5918);
PPC_FUNC_IMPL(__imp__sub_83CB5918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6656
	ctx.r3.s64 = ctx.r11.s64 + -6656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5924"))) PPC_WEAK_FUNC(sub_83CB5924);
PPC_FUNC_IMPL(__imp__sub_83CB5924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5928"))) PPC_WEAK_FUNC(sub_83CB5928);
PPC_FUNC_IMPL(__imp__sub_83CB5928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5934"))) PPC_WEAK_FUNC(sub_83CB5934);
PPC_FUNC_IMPL(__imp__sub_83CB5934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5938"))) PPC_WEAK_FUNC(sub_83CB5938);
PPC_FUNC_IMPL(__imp__sub_83CB5938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6640
	ctx.r3.s64 = ctx.r11.s64 + -6640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5944"))) PPC_WEAK_FUNC(sub_83CB5944);
PPC_FUNC_IMPL(__imp__sub_83CB5944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5948"))) PPC_WEAK_FUNC(sub_83CB5948);
PPC_FUNC_IMPL(__imp__sub_83CB5948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6632
	ctx.r3.s64 = ctx.r11.s64 + -6632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5954"))) PPC_WEAK_FUNC(sub_83CB5954);
PPC_FUNC_IMPL(__imp__sub_83CB5954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5958"))) PPC_WEAK_FUNC(sub_83CB5958);
PPC_FUNC_IMPL(__imp__sub_83CB5958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6624
	ctx.r3.s64 = ctx.r11.s64 + -6624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5964"))) PPC_WEAK_FUNC(sub_83CB5964);
PPC_FUNC_IMPL(__imp__sub_83CB5964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5968"))) PPC_WEAK_FUNC(sub_83CB5968);
PPC_FUNC_IMPL(__imp__sub_83CB5968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6616
	ctx.r3.s64 = ctx.r11.s64 + -6616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5974"))) PPC_WEAK_FUNC(sub_83CB5974);
PPC_FUNC_IMPL(__imp__sub_83CB5974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5978"))) PPC_WEAK_FUNC(sub_83CB5978);
PPC_FUNC_IMPL(__imp__sub_83CB5978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6608
	ctx.r3.s64 = ctx.r11.s64 + -6608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5984"))) PPC_WEAK_FUNC(sub_83CB5984);
PPC_FUNC_IMPL(__imp__sub_83CB5984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5988"))) PPC_WEAK_FUNC(sub_83CB5988);
PPC_FUNC_IMPL(__imp__sub_83CB5988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6600
	ctx.r3.s64 = ctx.r11.s64 + -6600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5994"))) PPC_WEAK_FUNC(sub_83CB5994);
PPC_FUNC_IMPL(__imp__sub_83CB5994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5998"))) PPC_WEAK_FUNC(sub_83CB5998);
PPC_FUNC_IMPL(__imp__sub_83CB5998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6592
	ctx.r3.s64 = ctx.r11.s64 + -6592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB59A4"))) PPC_WEAK_FUNC(sub_83CB59A4);
PPC_FUNC_IMPL(__imp__sub_83CB59A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB59A8"))) PPC_WEAK_FUNC(sub_83CB59A8);
PPC_FUNC_IMPL(__imp__sub_83CB59A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6584
	ctx.r3.s64 = ctx.r11.s64 + -6584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB59B4"))) PPC_WEAK_FUNC(sub_83CB59B4);
PPC_FUNC_IMPL(__imp__sub_83CB59B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB59B8"))) PPC_WEAK_FUNC(sub_83CB59B8);
PPC_FUNC_IMPL(__imp__sub_83CB59B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6576
	ctx.r3.s64 = ctx.r11.s64 + -6576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB59C4"))) PPC_WEAK_FUNC(sub_83CB59C4);
PPC_FUNC_IMPL(__imp__sub_83CB59C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB59C8"))) PPC_WEAK_FUNC(sub_83CB59C8);
PPC_FUNC_IMPL(__imp__sub_83CB59C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB59D4"))) PPC_WEAK_FUNC(sub_83CB59D4);
PPC_FUNC_IMPL(__imp__sub_83CB59D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB59D8"))) PPC_WEAK_FUNC(sub_83CB59D8);
PPC_FUNC_IMPL(__imp__sub_83CB59D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6560
	ctx.r3.s64 = ctx.r11.s64 + -6560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB59E4"))) PPC_WEAK_FUNC(sub_83CB59E4);
PPC_FUNC_IMPL(__imp__sub_83CB59E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB59E8"))) PPC_WEAK_FUNC(sub_83CB59E8);
PPC_FUNC_IMPL(__imp__sub_83CB59E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6552
	ctx.r3.s64 = ctx.r11.s64 + -6552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB59F4"))) PPC_WEAK_FUNC(sub_83CB59F4);
PPC_FUNC_IMPL(__imp__sub_83CB59F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB59F8"))) PPC_WEAK_FUNC(sub_83CB59F8);
PPC_FUNC_IMPL(__imp__sub_83CB59F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6544
	ctx.r3.s64 = ctx.r11.s64 + -6544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5A04"))) PPC_WEAK_FUNC(sub_83CB5A04);
PPC_FUNC_IMPL(__imp__sub_83CB5A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5A08"))) PPC_WEAK_FUNC(sub_83CB5A08);
PPC_FUNC_IMPL(__imp__sub_83CB5A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6536
	ctx.r3.s64 = ctx.r11.s64 + -6536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5A14"))) PPC_WEAK_FUNC(sub_83CB5A14);
PPC_FUNC_IMPL(__imp__sub_83CB5A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5A18"))) PPC_WEAK_FUNC(sub_83CB5A18);
PPC_FUNC_IMPL(__imp__sub_83CB5A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6528
	ctx.r3.s64 = ctx.r11.s64 + -6528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5A24"))) PPC_WEAK_FUNC(sub_83CB5A24);
PPC_FUNC_IMPL(__imp__sub_83CB5A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5A28"))) PPC_WEAK_FUNC(sub_83CB5A28);
PPC_FUNC_IMPL(__imp__sub_83CB5A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6520
	ctx.r3.s64 = ctx.r11.s64 + -6520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5A34"))) PPC_WEAK_FUNC(sub_83CB5A34);
PPC_FUNC_IMPL(__imp__sub_83CB5A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5A38"))) PPC_WEAK_FUNC(sub_83CB5A38);
PPC_FUNC_IMPL(__imp__sub_83CB5A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6512
	ctx.r3.s64 = ctx.r11.s64 + -6512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5A44"))) PPC_WEAK_FUNC(sub_83CB5A44);
PPC_FUNC_IMPL(__imp__sub_83CB5A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5A48"))) PPC_WEAK_FUNC(sub_83CB5A48);
PPC_FUNC_IMPL(__imp__sub_83CB5A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6504
	ctx.r3.s64 = ctx.r11.s64 + -6504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5A54"))) PPC_WEAK_FUNC(sub_83CB5A54);
PPC_FUNC_IMPL(__imp__sub_83CB5A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5A58"))) PPC_WEAK_FUNC(sub_83CB5A58);
PPC_FUNC_IMPL(__imp__sub_83CB5A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6496
	ctx.r3.s64 = ctx.r11.s64 + -6496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5A64"))) PPC_WEAK_FUNC(sub_83CB5A64);
PPC_FUNC_IMPL(__imp__sub_83CB5A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5A68"))) PPC_WEAK_FUNC(sub_83CB5A68);
PPC_FUNC_IMPL(__imp__sub_83CB5A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6488
	ctx.r3.s64 = ctx.r11.s64 + -6488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5A74"))) PPC_WEAK_FUNC(sub_83CB5A74);
PPC_FUNC_IMPL(__imp__sub_83CB5A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5A78"))) PPC_WEAK_FUNC(sub_83CB5A78);
PPC_FUNC_IMPL(__imp__sub_83CB5A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6480
	ctx.r3.s64 = ctx.r11.s64 + -6480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5A84"))) PPC_WEAK_FUNC(sub_83CB5A84);
PPC_FUNC_IMPL(__imp__sub_83CB5A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5A88"))) PPC_WEAK_FUNC(sub_83CB5A88);
PPC_FUNC_IMPL(__imp__sub_83CB5A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6472
	ctx.r3.s64 = ctx.r11.s64 + -6472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5A94"))) PPC_WEAK_FUNC(sub_83CB5A94);
PPC_FUNC_IMPL(__imp__sub_83CB5A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5A98"))) PPC_WEAK_FUNC(sub_83CB5A98);
PPC_FUNC_IMPL(__imp__sub_83CB5A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6464
	ctx.r3.s64 = ctx.r11.s64 + -6464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5AA4"))) PPC_WEAK_FUNC(sub_83CB5AA4);
PPC_FUNC_IMPL(__imp__sub_83CB5AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5AA8"))) PPC_WEAK_FUNC(sub_83CB5AA8);
PPC_FUNC_IMPL(__imp__sub_83CB5AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6456
	ctx.r3.s64 = ctx.r11.s64 + -6456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5AB4"))) PPC_WEAK_FUNC(sub_83CB5AB4);
PPC_FUNC_IMPL(__imp__sub_83CB5AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5AB8"))) PPC_WEAK_FUNC(sub_83CB5AB8);
PPC_FUNC_IMPL(__imp__sub_83CB5AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6448
	ctx.r3.s64 = ctx.r11.s64 + -6448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5AC4"))) PPC_WEAK_FUNC(sub_83CB5AC4);
PPC_FUNC_IMPL(__imp__sub_83CB5AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5AC8"))) PPC_WEAK_FUNC(sub_83CB5AC8);
PPC_FUNC_IMPL(__imp__sub_83CB5AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6440
	ctx.r3.s64 = ctx.r11.s64 + -6440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5AD4"))) PPC_WEAK_FUNC(sub_83CB5AD4);
PPC_FUNC_IMPL(__imp__sub_83CB5AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5AD8"))) PPC_WEAK_FUNC(sub_83CB5AD8);
PPC_FUNC_IMPL(__imp__sub_83CB5AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6432
	ctx.r3.s64 = ctx.r11.s64 + -6432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5AE4"))) PPC_WEAK_FUNC(sub_83CB5AE4);
PPC_FUNC_IMPL(__imp__sub_83CB5AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5AE8"))) PPC_WEAK_FUNC(sub_83CB5AE8);
PPC_FUNC_IMPL(__imp__sub_83CB5AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6424
	ctx.r3.s64 = ctx.r11.s64 + -6424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5AF4"))) PPC_WEAK_FUNC(sub_83CB5AF4);
PPC_FUNC_IMPL(__imp__sub_83CB5AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5AF8"))) PPC_WEAK_FUNC(sub_83CB5AF8);
PPC_FUNC_IMPL(__imp__sub_83CB5AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6416
	ctx.r3.s64 = ctx.r11.s64 + -6416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5B04"))) PPC_WEAK_FUNC(sub_83CB5B04);
PPC_FUNC_IMPL(__imp__sub_83CB5B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5B08"))) PPC_WEAK_FUNC(sub_83CB5B08);
PPC_FUNC_IMPL(__imp__sub_83CB5B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6408
	ctx.r3.s64 = ctx.r11.s64 + -6408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5B14"))) PPC_WEAK_FUNC(sub_83CB5B14);
PPC_FUNC_IMPL(__imp__sub_83CB5B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5B18"))) PPC_WEAK_FUNC(sub_83CB5B18);
PPC_FUNC_IMPL(__imp__sub_83CB5B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6400
	ctx.r3.s64 = ctx.r11.s64 + -6400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5B24"))) PPC_WEAK_FUNC(sub_83CB5B24);
PPC_FUNC_IMPL(__imp__sub_83CB5B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5B28"))) PPC_WEAK_FUNC(sub_83CB5B28);
PPC_FUNC_IMPL(__imp__sub_83CB5B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6392
	ctx.r3.s64 = ctx.r11.s64 + -6392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5B34"))) PPC_WEAK_FUNC(sub_83CB5B34);
PPC_FUNC_IMPL(__imp__sub_83CB5B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5B38"))) PPC_WEAK_FUNC(sub_83CB5B38);
PPC_FUNC_IMPL(__imp__sub_83CB5B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6384
	ctx.r3.s64 = ctx.r11.s64 + -6384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5B44"))) PPC_WEAK_FUNC(sub_83CB5B44);
PPC_FUNC_IMPL(__imp__sub_83CB5B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5B48"))) PPC_WEAK_FUNC(sub_83CB5B48);
PPC_FUNC_IMPL(__imp__sub_83CB5B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6376
	ctx.r3.s64 = ctx.r11.s64 + -6376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5B54"))) PPC_WEAK_FUNC(sub_83CB5B54);
PPC_FUNC_IMPL(__imp__sub_83CB5B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5B58"))) PPC_WEAK_FUNC(sub_83CB5B58);
PPC_FUNC_IMPL(__imp__sub_83CB5B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6368
	ctx.r3.s64 = ctx.r11.s64 + -6368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5B64"))) PPC_WEAK_FUNC(sub_83CB5B64);
PPC_FUNC_IMPL(__imp__sub_83CB5B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5B68"))) PPC_WEAK_FUNC(sub_83CB5B68);
PPC_FUNC_IMPL(__imp__sub_83CB5B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6360
	ctx.r3.s64 = ctx.r11.s64 + -6360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5B74"))) PPC_WEAK_FUNC(sub_83CB5B74);
PPC_FUNC_IMPL(__imp__sub_83CB5B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5B78"))) PPC_WEAK_FUNC(sub_83CB5B78);
PPC_FUNC_IMPL(__imp__sub_83CB5B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6352
	ctx.r3.s64 = ctx.r11.s64 + -6352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5B84"))) PPC_WEAK_FUNC(sub_83CB5B84);
PPC_FUNC_IMPL(__imp__sub_83CB5B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5B88"))) PPC_WEAK_FUNC(sub_83CB5B88);
PPC_FUNC_IMPL(__imp__sub_83CB5B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6344
	ctx.r3.s64 = ctx.r11.s64 + -6344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5B94"))) PPC_WEAK_FUNC(sub_83CB5B94);
PPC_FUNC_IMPL(__imp__sub_83CB5B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5B98"))) PPC_WEAK_FUNC(sub_83CB5B98);
PPC_FUNC_IMPL(__imp__sub_83CB5B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6336
	ctx.r3.s64 = ctx.r11.s64 + -6336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5BA4"))) PPC_WEAK_FUNC(sub_83CB5BA4);
PPC_FUNC_IMPL(__imp__sub_83CB5BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5BA8"))) PPC_WEAK_FUNC(sub_83CB5BA8);
PPC_FUNC_IMPL(__imp__sub_83CB5BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6328
	ctx.r3.s64 = ctx.r11.s64 + -6328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5BB4"))) PPC_WEAK_FUNC(sub_83CB5BB4);
PPC_FUNC_IMPL(__imp__sub_83CB5BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5BB8"))) PPC_WEAK_FUNC(sub_83CB5BB8);
PPC_FUNC_IMPL(__imp__sub_83CB5BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6320
	ctx.r3.s64 = ctx.r11.s64 + -6320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5BC4"))) PPC_WEAK_FUNC(sub_83CB5BC4);
PPC_FUNC_IMPL(__imp__sub_83CB5BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5BC8"))) PPC_WEAK_FUNC(sub_83CB5BC8);
PPC_FUNC_IMPL(__imp__sub_83CB5BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6312
	ctx.r3.s64 = ctx.r11.s64 + -6312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5BD4"))) PPC_WEAK_FUNC(sub_83CB5BD4);
PPC_FUNC_IMPL(__imp__sub_83CB5BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5BD8"))) PPC_WEAK_FUNC(sub_83CB5BD8);
PPC_FUNC_IMPL(__imp__sub_83CB5BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6304
	ctx.r3.s64 = ctx.r11.s64 + -6304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5BE4"))) PPC_WEAK_FUNC(sub_83CB5BE4);
PPC_FUNC_IMPL(__imp__sub_83CB5BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5BE8"))) PPC_WEAK_FUNC(sub_83CB5BE8);
PPC_FUNC_IMPL(__imp__sub_83CB5BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6296
	ctx.r3.s64 = ctx.r11.s64 + -6296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5BF4"))) PPC_WEAK_FUNC(sub_83CB5BF4);
PPC_FUNC_IMPL(__imp__sub_83CB5BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5BF8"))) PPC_WEAK_FUNC(sub_83CB5BF8);
PPC_FUNC_IMPL(__imp__sub_83CB5BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6288
	ctx.r3.s64 = ctx.r11.s64 + -6288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5C04"))) PPC_WEAK_FUNC(sub_83CB5C04);
PPC_FUNC_IMPL(__imp__sub_83CB5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5C08"))) PPC_WEAK_FUNC(sub_83CB5C08);
PPC_FUNC_IMPL(__imp__sub_83CB5C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6280
	ctx.r3.s64 = ctx.r11.s64 + -6280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CB5C14"))) PPC_WEAK_FUNC(sub_83CB5C14);
PPC_FUNC_IMPL(__imp__sub_83CB5C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CB5C18"))) PPC_WEAK_FUNC(sub_83CB5C18);
PPC_FUNC_IMPL(__imp__sub_83CB5C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-6272
	ctx.r3.s64 = ctx.r11.s64 + -6272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

