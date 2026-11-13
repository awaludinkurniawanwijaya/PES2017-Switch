#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83109CD4"))) PPC_WEAK_FUNC(sub_83109CD4);
PPC_FUNC_IMPL(__imp__sub_83109CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83109CD8"))) PPC_WEAK_FUNC(sub_83109CD8);
PPC_FUNC_IMPL(__imp__sub_83109CD8) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-19612
	ctx.r31.s64 = ctx.r11.s64 + -19612;
	// addi r4,r31,-176
	ctx.r4.s64 = ctx.r31.s64 + -176;
	// bl 0x83109ac8
	ctx.lr = 0x83109D00;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D0C;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D18;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D24;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-144
	ctx.r4.s64 = ctx.r31.s64 + -144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D30;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D3C;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D48;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D54;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D60;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D6C;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D78;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D84;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D90;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109D9C;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109DA8;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109DB4;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109DC0;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109DCC;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109DD8;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109DE4;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109DF0;
	sub_83109AC8(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109DFC;
	sub_83109AC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109E08;
	sub_83109AC8(ctx, base);
	// bl 0x8310d7e8
	ctx.lr = 0x83109E0C;
	sub_8310D7E8(ctx, base);
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

__attribute__((alias("__imp__sub_83109E24"))) PPC_WEAK_FUNC(sub_83109E24);
PPC_FUNC_IMPL(__imp__sub_83109E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83109E28"))) PPC_WEAK_FUNC(sub_83109E28);
PPC_FUNC_IMPL(__imp__sub_83109E28) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-19604
	ctx.r4.s64 = ctx.r11.s64 + -19604;
	// bl 0x83109ac8
	ctx.lr = 0x83109E40;
	sub_83109AC8(ctx, base);
	// bl 0x8310d7e8
	ctx.lr = 0x83109E44;
	sub_8310D7E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109E54"))) PPC_WEAK_FUNC(sub_83109E54);
PPC_FUNC_IMPL(__imp__sub_83109E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83109E58"))) PPC_WEAK_FUNC(sub_83109E58);
PPC_FUNC_IMPL(__imp__sub_83109E58) {
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
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r30,r11,-19588
	ctx.r30.s64 = ctx.r11.s64 + -19588;
	// beq cr6,0x83109e8c
	if (cr6.eq) goto loc_83109E8C;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x83109ac8
	ctx.lr = 0x83109E8C;
	sub_83109AC8(ctx, base);
loc_83109E8C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83109ac8
	ctx.lr = 0x83109E98;
	sub_83109AC8(ctx, base);
	// bl 0x8310d7e8
	ctx.lr = 0x83109E9C;
	sub_8310D7E8(ctx, base);
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

__attribute__((alias("__imp__sub_83109EB4"))) PPC_WEAK_FUNC(sub_83109EB4);
PPC_FUNC_IMPL(__imp__sub_83109EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83109EB8"))) PPC_WEAK_FUNC(sub_83109EB8);
PPC_FUNC_IMPL(__imp__sub_83109EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83109EC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r24,2
	ctx.r24.s64 = 2;
	// addi r28,r11,-19548
	ctx.r28.s64 = ctx.r11.s64 + -19548;
loc_83109EE8:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8310dd48
	ctx.lr = 0x83109F04;
	sub_8310DD48(ctx, base);
	// addi r6,r28,-8
	ctx.r6.s64 = ctx.r28.s64 + -8;
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83109F1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83109f28
	if (cr6.eq) goto loc_83109F28;
	// or r25,r27,r25
	ctx.r25.u64 = ctx.r27.u64 | ctx.r25.u64;
loc_83109F28:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310de80
	ctx.lr = 0x83109F44;
	sub_8310DE80(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83109F5C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83109f68
	if (cr6.eq) goto loc_83109F68;
	// or r25,r27,r25
	ctx.r25.u64 = ctx.r27.u64 | ctx.r25.u64;
loc_83109F68:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83109f84
	if (cr6.lt) goto loc_83109F84;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83109F84;
	sub_825952B8(ctx, base);
loc_83109F84:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x83109fac
	if (cr6.lt) goto loc_83109FAC;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83109FAC;
	sub_825952B8(ctx, base);
loc_83109FAC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// blt cr6,0x83109ee8
	if (cr6.lt) goto loc_83109EE8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83109FD4"))) PPC_WEAK_FUNC(sub_83109FD4);
PPC_FUNC_IMPL(__imp__sub_83109FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83109FD8"))) PPC_WEAK_FUNC(sub_83109FD8);
PPC_FUNC_IMPL(__imp__sub_83109FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83109FE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19564
	ctx.r31.s64 = ctx.r11.s64 + -19564;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x83109eb8
	ctx.lr = 0x83109FF8;
	sub_83109EB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83109eb8
	ctx.lr = 0x8310A008;
	sub_83109EB8(ctx, base);
	// and r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 & ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83109eb8
	ctx.lr = 0x8310A018;
	sub_83109EB8(ctx, base);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// stw r30,25896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25896, ctx.r30.u32);
	// stw r3,25892(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25892, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310A030"))) PPC_WEAK_FUNC(sub_8310A030);
PPC_FUNC_IMPL(__imp__sub_8310A030) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_8310A064:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310a064
	if (!cr6.eq) goto loc_8310A064;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8310A088;
	sub_8259CC28(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8310A08C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310a08c
	if (!cr6.eq) goto loc_8310A08C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8310A0B4;
	sub_825A1EB8(ctx, base);
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

__attribute__((alias("__imp__sub_8310A0D0"))) PPC_WEAK_FUNC(sub_8310A0D0);
PPC_FUNC_IMPL(__imp__sub_8310A0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8310A0D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,0(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x8310a164
	if (cr6.eq) goto loc_8310A164;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r31,r5,12
	ctx.r31.s64 = ctx.r5.s64 + 12;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,32(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8310a134
	if (cr6.lt) goto loc_8310A134;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8310A134;
	sub_825952B8(ctx, base);
loc_8310A134:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310A158;
	sub_825952B8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
loc_8310A164:
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310A174"))) PPC_WEAK_FUNC(sub_8310A174);
PPC_FUNC_IMPL(__imp__sub_8310A174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A178"))) PPC_WEAK_FUNC(sub_8310A178);
PPC_FUNC_IMPL(__imp__sub_8310A178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8310A180;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// beq cr6,0x8310a208
	if (cr6.eq) goto loc_8310A208;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r25,15
	ctx.r25.s64 = 15;
loc_8310A1B8:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310a1dc
	if (cr6.lt) goto loc_8310A1DC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310A1DC;
	sub_825952B8(ctx, base);
loc_8310A1DC:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310A1F8;
	sub_825952B8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x8310a1b8
	if (!cr6.eq) goto loc_8310A1B8;
loc_8310A208:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310A210"))) PPC_WEAK_FUNC(sub_8310A210);
PPC_FUNC_IMPL(__imp__sub_8310A210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310A218;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,376
	ctx.r27.s64 = ctx.r3.s64 + 376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8310A230;
	sub_82596FE8(ctx, base);
	// addi r28,r31,408
	ctx.r28.s64 = ctx.r31.s64 + 408;
	// lwz r29,408(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x8310a2bc
	if (cr6.eq) goto loc_8310A2BC;
loc_8310A244:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8310A24C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310a24c
	if (!cr6.eq) goto loc_8310A24C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x8310A278;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8310a29c
	if (cr6.eq) goto loc_8310A29C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x8310a244
	if (!cr6.eq) goto loc_8310A244;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x8310A294;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8310A29C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x8310a2bc
	if (cr6.eq) goto loc_8310A2BC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831ed860
	ctx.lr = 0x8310A2AC;
	sub_831ED860(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8310a0d0
	ctx.lr = 0x8310A2BC;
	sub_8310A0D0(ctx, base);
loc_8310A2BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x8310A2C4;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310A2CC"))) PPC_WEAK_FUNC(sub_8310A2CC);
PPC_FUNC_IMPL(__imp__sub_8310A2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A2D0"))) PPC_WEAK_FUNC(sub_8310A2D0);
PPC_FUNC_IMPL(__imp__sub_8310A2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310A2D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x8310A300;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// beq 0x8310a344
	if (cr0.eq) goto loc_8310A344;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// bl 0x8259cb28
	ctx.lr = 0x8310A344;
	sub_8259CB28(ctx, base);
loc_8310A344:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310A350"))) PPC_WEAK_FUNC(sub_8310A350);
PPC_FUNC_IMPL(__imp__sub_8310A350) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8310a2d0
	ctx.lr = 0x8310A378;
	sub_8310A2D0(ctx, base);
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x8310a39c
	if (!cr6.lt) goto loc_8310A39C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x8310A39C;
	sub_831CC150(ctx, base);
loc_8310A39C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8310A3C8"))) PPC_WEAK_FUNC(sub_8310A3C8);
PPC_FUNC_IMPL(__imp__sub_8310A3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8310A3D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,28
	ctx.r29.s64 = 28;
loc_8310A3E0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310a3f0
	if (cr6.eq) goto loc_8310A3F0;
	// bl 0x831ed860
	ctx.lr = 0x8310A3F0;
	sub_831ED860(ctx, base);
loc_8310A3F0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8310a3e0
	if (!cr0.eq) goto loc_8310A3E0;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8310a434
	if (!cr6.gt) goto loc_8310A434;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
loc_8310A410:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310a420
	if (cr6.eq) goto loc_8310A420;
	// bl 0x831ed860
	ctx.lr = 0x8310A420;
	sub_831ED860(ctx, base);
loc_8310A420:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x8310a410
	if (cr6.lt) goto loc_8310A410;
loc_8310A434:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// bl 0x831eddb8
	ctx.lr = 0x8310A444;
	sub_831EDDB8(ctx, base);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// stw r11,25680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25680, ctx.r11.u32);
	// bl 0x8310a178
	ctx.lr = 0x8310A458;
	sub_8310A178(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310A46C;
	sub_825952B8(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82596f90
	ctx.lr = 0x8310A474;
	sub_82596F90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310A47C"))) PPC_WEAK_FUNC(sub_8310A47C);
PPC_FUNC_IMPL(__imp__sub_8310A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A480"))) PPC_WEAK_FUNC(sub_8310A480);
PPC_FUNC_IMPL(__imp__sub_8310A480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310A488;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,376
	ctx.r28.s64 = ctx.r3.s64 + 376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8310A4A0;
	sub_82596FE8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// bl 0x8310db80
	ctx.lr = 0x8310A4C0;
	sub_8310DB80(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8310a4d4
	if (!cr6.lt) goto loc_8310A4D4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_8310A4D4:
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x831ee278
	ctx.lr = 0x8310A4EC;
	sub_831EE278(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831ecb48
	ctx.lr = 0x8310A4F8;
	sub_831ECB48(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stb r29,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r29.u8);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_8310A510:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310a510
	if (!cr6.eq) goto loc_8310A510;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8310A538;
	sub_8259CC28(ctx, base);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// bl 0x8310a350
	ctx.lr = 0x8310A548;
	sub_8310A350(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x8310A550;
	sub_82597088(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8310a570
	if (cr6.lt) goto loc_8310A570;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x8310A570;
	sub_825952B8(ctx, base);
loc_8310A570:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r29.u8);
	// blt cr6,0x8310a598
	if (cr6.lt) goto loc_8310A598;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8310A598;
	sub_825952B8(ctx, base);
loc_8310A598:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310A5A0"))) PPC_WEAK_FUNC(sub_8310A5A0);
PPC_FUNC_IMPL(__imp__sub_8310A5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310A5A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8310a5ec
	if (!cr6.gt) goto loc_8310A5EC;
	// addi r31,r3,112
	ctx.r31.s64 = ctx.r3.s64 + 112;
loc_8310A5C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310a5d8
	if (cr6.eq) goto loc_8310A5D8;
	// bl 0x831ed860
	ctx.lr = 0x8310A5D8;
	sub_831ED860(ctx, base);
loc_8310A5D8:
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x8310a5c8
	if (cr6.lt) goto loc_8310A5C8;
loc_8310A5EC:
	// stw r28,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83114468
	ctx.lr = 0x8310A5F8;
	sub_83114468(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// bl 0x8310a820
	ctx.lr = 0x8310A608;
	sub_8310A820(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8310b578
	ctx.lr = 0x8310A610;
	sub_8310B578(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// beq cr6,0x8310a690
	if (cr6.eq) goto loc_8310A690;
loc_8310A628:
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8310a654
	if (cr6.lt) goto loc_8310A654;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8310a658
	goto loc_8310A658;
loc_8310A654:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8310A658:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r3,368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ee278
	ctx.lr = 0x8310A670;
	sub_831EE278(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x831ecb48
	ctx.lr = 0x8310A67C;
	sub_831ECB48(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x8310a628
	if (!cr6.eq) goto loc_8310A628;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8310A690:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310a6b8
	if (cr6.eq) goto loc_8310A6B8;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x838adab0
	ctx.lr = 0x8310A6A4;
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
	ctx.lr = 0x8310A6B8;
	sub_825952B8(ctx, base);
loc_8310A6B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310A6C4"))) PPC_WEAK_FUNC(sub_8310A6C4);
PPC_FUNC_IMPL(__imp__sub_8310A6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A6C8"))) PPC_WEAK_FUNC(sub_8310A6C8);
PPC_FUNC_IMPL(__imp__sub_8310A6C8) {
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
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// bl 0x82596fa8
	ctx.lr = 0x8310A6E8;
	sub_82596FA8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8310A708;
	sub_82595718(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// stw r3,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r3.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,408(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r31,25680(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25680, ctx.r31.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8310A734;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8310A744;
	sub_831CDCF0(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x831ed550
	ctx.lr = 0x8310A750;
	sub_831ED550(ctx, base);
	// bl 0x83114b20
	ctx.lr = 0x8310A754;
	sub_83114B20(ctx, base);
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

__attribute__((alias("__imp__sub_8310A770"))) PPC_WEAK_FUNC(sub_8310A770);
PPC_FUNC_IMPL(__imp__sub_8310A770) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,420
	ctx.r4.s64 = 420;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8310A794;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310a7a0
	if (cr6.eq) goto loc_8310A7A0;
	// bl 0x8310a6c8
	ctx.lr = 0x8310A7A0;
	sub_8310A6C8(ctx, base);
loc_8310A7A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A7B0"))) PPC_WEAK_FUNC(sub_8310A7B0);
PPC_FUNC_IMPL(__imp__sub_8310A7B0) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r11,25680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25680);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310a808
	if (cr6.eq) goto loc_8310A808;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8310A7E4;
	sub_82595150(ctx, base);
	// lwz r31,25680(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25680);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8310a800
	if (cr6.eq) goto loc_8310A800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310a3c8
	ctx.lr = 0x8310A7F8;
	sub_8310A3C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8310A800;
	sub_82416268(ctx, base);
loc_8310A800:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8310A808;
	sub_82595170(ctx, base);
loc_8310A808:
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

__attribute__((alias("__imp__sub_8310A81C"))) PPC_WEAK_FUNC(sub_8310A81C);
PPC_FUNC_IMPL(__imp__sub_8310A81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A820"))) PPC_WEAK_FUNC(sub_8310A820);
PPC_FUNC_IMPL(__imp__sub_8310A820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,25688(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25688);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A82C"))) PPC_WEAK_FUNC(sub_8310A82C);
PPC_FUNC_IMPL(__imp__sub_8310A82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A830"))) PPC_WEAK_FUNC(sub_8310A830);
PPC_FUNC_IMPL(__imp__sub_8310A830) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310a864
	if (cr6.eq) goto loc_8310A864;
loc_8310A850:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x832d22b8
	ctx.lr = 0x8310A858;
	sub_832D22B8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310a850
	if (!cr6.eq) goto loc_8310A850;
loc_8310A864:
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

__attribute__((alias("__imp__sub_8310A878"))) PPC_WEAK_FUNC(sub_8310A878);
PPC_FUNC_IMPL(__imp__sub_8310A878) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// b 0x83525460
	sub_83525460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310A894"))) PPC_WEAK_FUNC(sub_8310A894);
PPC_FUNC_IMPL(__imp__sub_8310A894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A898"))) PPC_WEAK_FUNC(sub_8310A898);
PPC_FUNC_IMPL(__imp__sub_8310A898) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// b 0x83525460
	sub_83525460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310A8BC"))) PPC_WEAK_FUNC(sub_8310A8BC);
PPC_FUNC_IMPL(__imp__sub_8310A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A8C0"))) PPC_WEAK_FUNC(sub_8310A8C0);
PPC_FUNC_IMPL(__imp__sub_8310A8C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A8D0"))) PPC_WEAK_FUNC(sub_8310A8D0);
PPC_FUNC_IMPL(__imp__sub_8310A8D0) {
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
	// bl 0x8310a830
	ctx.lr = 0x8310A8E8;
	sub_8310A830(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
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

__attribute__((alias("__imp__sub_8310A900"))) PPC_WEAK_FUNC(sub_8310A900);
PPC_FUNC_IMPL(__imp__sub_8310A900) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,25688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25688);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// lwz r11,25688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25688);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x83525460
	ctx.lr = 0x8310A930;
	sub_83525460(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25688);
	// bl 0x835242e8
	ctx.lr = 0x8310A93C;
	sub_835242E8(ctx, base);
	// lwz r11,25688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25688);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310a984
	if (cr6.eq) goto loc_8310A984;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8310A95C;
	sub_82595150(ctx, base);
	// lwz r3,25688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25688);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310a97c
	if (cr6.eq) goto loc_8310A97C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8310A97C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310A97C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8310A984;
	sub_82595170(ctx, base);
loc_8310A984:
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

__attribute__((alias("__imp__sub_8310A998"))) PPC_WEAK_FUNC(sub_8310A998);
PPC_FUNC_IMPL(__imp__sub_8310A998) {
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
	// bl 0x8310a830
	ctx.lr = 0x8310A9B8;
	sub_8310A830(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8310A9DC"))) PPC_WEAK_FUNC(sub_8310A9DC);
PPC_FUNC_IMPL(__imp__sub_8310A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310A9E0"))) PPC_WEAK_FUNC(sub_8310A9E0);
PPC_FUNC_IMPL(__imp__sub_8310A9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310A9E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8310aa3c
	if (!cr6.gt) goto loc_8310AA3C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r29,r11,-19368
	ctx.r29.s64 = ctx.r11.s64 + -19368;
loc_8310AA0C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x8310AA20;
	sub_831D0B08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832d1980
	ctx.lr = 0x8310AA2C;
	sub_832D1980(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x8310aa0c
	if (cr6.lt) goto loc_8310AA0C;
loc_8310AA3C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// beq cr6,0x8310aa84
	if (cr6.eq) goto loc_8310AA84;
	// li r29,2
	ctx.r29.s64 = 2;
loc_8310AA64:
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310AA74;
	sub_825952B8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x8310aa64
	if (!cr6.eq) goto loc_8310AA64;
loc_8310AA84:
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310AA90"))) PPC_WEAK_FUNC(sub_8310AA90);
PPC_FUNC_IMPL(__imp__sub_8310AA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310AA98;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8310aaec
	if (!cr6.gt) goto loc_8310AAEC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r29,r11,-19328
	ctx.r29.s64 = ctx.r11.s64 + -19328;
loc_8310AABC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x8310AAD0;
	sub_831D0B08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832d1980
	ctx.lr = 0x8310AADC;
	sub_832D1980(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x8310aabc
	if (cr6.lt) goto loc_8310AABC;
loc_8310AAEC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// beq cr6,0x8310ab34
	if (cr6.eq) goto loc_8310AB34;
	// li r29,2
	ctx.r29.s64 = 2;
loc_8310AB14:
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310AB24;
	sub_825952B8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x8310ab14
	if (!cr6.eq) goto loc_8310AB14;
loc_8310AB34:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310AB40"))) PPC_WEAK_FUNC(sub_8310AB40);
PPC_FUNC_IMPL(__imp__sub_8310AB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310AB48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,264
	ctx.r4.s64 = 264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8310AB74;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r3,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r3.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// beq 0x8310ab94
	if (cr0.eq) goto loc_8310AB94;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x8310AB94;
	sub_831CE980(ctx, base);
loc_8310AB94:
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x8310abb8
	if (!cr6.lt) goto loc_8310ABB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x8310ABB8;
	sub_831CC150(ctx, base);
loc_8310ABB8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310ABD4"))) PPC_WEAK_FUNC(sub_8310ABD4);
PPC_FUNC_IMPL(__imp__sub_8310ABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310ABD8"))) PPC_WEAK_FUNC(sub_8310ABD8);
PPC_FUNC_IMPL(__imp__sub_8310ABD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// beq cr6,0x8310ac18
	if (cr6.eq) goto loc_8310AC18;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x8310ac04
	if (!cr6.lt) goto loc_8310AC04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8310AC04:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
loc_8310AC18:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AC4C"))) PPC_WEAK_FUNC(sub_8310AC4C);
PPC_FUNC_IMPL(__imp__sub_8310AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310AC50"))) PPC_WEAK_FUNC(sub_8310AC50);
PPC_FUNC_IMPL(__imp__sub_8310AC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8310AC58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-19180
	ctx.r10.s64 = ctx.r11.s64 + -19180;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8310a830
	ctx.lr = 0x8310AC70;
	sub_8310A830(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310a9e0
	ctx.lr = 0x8310AC78;
	sub_8310A9E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310aa90
	ctx.lr = 0x8310AC80;
	sub_8310AA90(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,25688(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25688, ctx.r29.u32);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8310acac
	if (cr6.eq) goto loc_8310ACAC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8310ACAC;
	sub_825952B8(ctx, base);
loc_8310ACAC:
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x82e62630
	ctx.lr = 0x8310ACC0;
	sub_82E62630(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x825952b8
	ctx.lr = 0x8310ACD0;
	sub_825952B8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82e62630
	ctx.lr = 0x8310ACD8;
	sub_82E62630(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825952b8
	ctx.lr = 0x8310ACE8;
	sub_825952B8(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82e62630
	ctx.lr = 0x8310ACF0;
	sub_82E62630(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825952b8
	ctx.lr = 0x8310AD00;
	sub_825952B8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x83525340
	ctx.lr = 0x8310AD08;
	sub_83525340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83524210
	ctx.lr = 0x8310AD10;
	sub_83524210(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310AD18"))) PPC_WEAK_FUNC(sub_8310AD18);
PPC_FUNC_IMPL(__imp__sub_8310AD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310AD20;
	__savegprlr_28(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8310aa90
	ctx.lr = 0x8310AD2C;
	sub_8310AA90(ctx, base);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d1990
	ctx.lr = 0x8310AD4C;
	sub_832D1990(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310ae78
	if (!cr6.eq) goto loc_8310AE78;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r29,r11,-19344
	ctx.r29.s64 = ctx.r11.s64 + -19344;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r29,-12
	ctx.r5.s64 = ctx.r29.s64 + -12;
	// bl 0x831d0b08
	ctx.lr = 0x8310AD70;
	sub_831D0B08(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x832d31b8
	ctx.lr = 0x8310AD90;
	sub_832D31B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310ae70
	if (!cr6.eq) goto loc_8310AE70;
loc_8310AD98:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x832d1a28
	ctx.lr = 0x8310ADBC;
	sub_832D1A28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310adf0
	if (!cr6.eq) goto loc_8310ADF0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831d0b08
	ctx.lr = 0x8310ADD8;
	sub_831D0B08(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x832d4520
	ctx.lr = 0x8310ADE0;
	sub_832D4520(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8310ae10
	if (cr6.eq) goto loc_8310AE10;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8310ae10
	goto loc_8310AE10;
loc_8310ADF0:
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x831ce980
	ctx.lr = 0x8310AE00;
	sub_831CE980(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8310ab40
	ctx.lr = 0x8310AE10;
	sub_8310AB40(ctx, base);
loc_8310AE10:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8310ae2c
	if (!cr6.eq) goto loc_8310AE2C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x8310ae38
	goto loc_8310AE38;
loc_8310AE2C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832d1980
	ctx.lr = 0x8310AE38;
	sub_832D1980(ctx, base);
loc_8310AE38:
	// addi r5,r29,-12
	ctx.r5.s64 = ctx.r29.s64 + -12;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x8310AE4C;
	sub_831D0B08(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x832d31b8
	ctx.lr = 0x8310AE68;
	sub_832D31B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310ad98
	if (cr6.eq) goto loc_8310AD98;
loc_8310AE70:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x832d1a68
	ctx.lr = 0x8310AE78;
	sub_832D1A68(ctx, base);
loc_8310AE78:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310AE80"))) PPC_WEAK_FUNC(sub_8310AE80);
PPC_FUNC_IMPL(__imp__sub_8310AE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310AE88;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x835242a0
	ctx.lr = 0x8310AE94;
	sub_835242A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r10,r11,-19180
	ctx.r10.s64 = ctx.r11.s64 + -19180;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x83525360
	ctx.lr = 0x8310AEB0;
	sub_83525360(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,264
	ctx.r4.s64 = 264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8310AED0;
	sub_82595718(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,264
	ctx.r4.s64 = 264;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x82595718
	ctx.lr = 0x8310AEF8;
	sub_82595718(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,264
	ctx.r4.s64 = 264;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x82595718
	ctx.lr = 0x8310AF20;
	sub_82595718(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r31,25688(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25688, ctx.r31.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x8310af8c
	if (cr6.eq) goto loc_8310AF8C;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x8310AF84;
	sub_831CE420(ctx, base);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_8310AF8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310AF98"))) PPC_WEAK_FUNC(sub_8310AF98);
PPC_FUNC_IMPL(__imp__sub_8310AF98) {
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
	// bl 0x8310ac50
	ctx.lr = 0x8310AFB8;
	sub_8310AC50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310afd8
	if (cr6.eq) goto loc_8310AFD8;
	// bl 0x82595188
	ctx.lr = 0x8310AFC8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8310AFD8;
	sub_825952B8(ctx, base);
loc_8310AFD8:
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

__attribute__((alias("__imp__sub_8310AFF4"))) PPC_WEAK_FUNC(sub_8310AFF4);
PPC_FUNC_IMPL(__imp__sub_8310AFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310AFF8"))) PPC_WEAK_FUNC(sub_8310AFF8);
PPC_FUNC_IMPL(__imp__sub_8310AFF8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8310B024;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310b030
	if (cr6.eq) goto loc_8310B030;
	// bl 0x8310ae80
	ctx.lr = 0x8310B030;
	sub_8310AE80(ctx, base);
loc_8310B030:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r30,3
	ctx.r30.s64 = 3;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r4,r10,-19408
	ctx.r4.s64 = ctx.r10.s64 + -19408;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// bl 0x8259cc28
	ctx.lr = 0x8310B068;
	sub_8259CC28(ctx, base);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,25688(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25688);
	// bl 0x835249e8
	ctx.lr = 0x8310B084;
	sub_835249E8(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8310b0a4
	if (cr6.lt) goto loc_8310B0A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310B0A4;
	sub_825952B8(ctx, base);
loc_8310B0A4:
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

__attribute__((alias("__imp__sub_8310B0BC"))) PPC_WEAK_FUNC(sub_8310B0BC);
PPC_FUNC_IMPL(__imp__sub_8310B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310B0C0"))) PPC_WEAK_FUNC(sub_8310B0C0);
PPC_FUNC_IMPL(__imp__sub_8310B0C0) {
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
	// bl 0x8310a830
	ctx.lr = 0x8310B0DC;
	sub_8310A830(ctx, base);
	// addi r31,r30,60
	ctx.r31.s64 = ctx.r30.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e62630
	ctx.lr = 0x8310B0E8;
	sub_82E62630(ctx, base);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// beq cr6,0x8310b114
	if (cr6.eq) goto loc_8310B114;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8310b114
	if (cr6.eq) goto loc_8310B114;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8310abd8
	ctx.lr = 0x8310B114;
	sub_8310ABD8(ctx, base);
loc_8310B114:
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// beq cr6,0x8310b144
	if (cr6.eq) goto loc_8310B144;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8310b144
	if (cr6.eq) goto loc_8310B144;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8310abd8
	ctx.lr = 0x8310B140;
	sub_8310ABD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8310B144:
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

__attribute__((alias("__imp__sub_8310B15C"))) PPC_WEAK_FUNC(sub_8310B15C);
PPC_FUNC_IMPL(__imp__sub_8310B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310B160"))) PPC_WEAK_FUNC(sub_8310B160);
PPC_FUNC_IMPL(__imp__sub_8310B160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310B168;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8310b1cc
	if (!cr6.gt) goto loc_8310B1CC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r30,r11,-19316
	ctx.r30.s64 = ctx.r11.s64 + -19316;
loc_8310B190:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x8310B1A8;
	sub_831D0B08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d3c50
	ctx.lr = 0x8310B1B4;
	sub_832D3C50(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8310b1d8
	if (!cr6.eq) goto loc_8310B1D8;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8310b190
	if (cr6.lt) goto loc_8310B190;
loc_8310B1CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8310B1D8:
	// bl 0x832d1a68
	ctx.lr = 0x8310B1DC;
	sub_832D1A68(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8310b214
	if (cr6.eq) goto loc_8310B214;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8310B1EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8310b1ec
	if (!cr6.eq) goto loc_8310B1EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8310B214;
	sub_8259CC28(ctx, base);
loc_8310B214:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310B220"))) PPC_WEAK_FUNC(sub_8310B220);
PPC_FUNC_IMPL(__imp__sub_8310B220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310B228;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8310b28c
	if (!cr6.gt) goto loc_8310B28C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r30,r11,-19300
	ctx.r30.s64 = ctx.r11.s64 + -19300;
loc_8310B250:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x8310B268;
	sub_831D0B08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d3c50
	ctx.lr = 0x8310B274;
	sub_832D3C50(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8310b298
	if (!cr6.eq) goto loc_8310B298;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8310b250
	if (cr6.lt) goto loc_8310B250;
loc_8310B28C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8310B298:
	// bl 0x832d1a68
	ctx.lr = 0x8310B29C;
	sub_832D1A68(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8310B2A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8310b2a4
	if (!cr6.eq) goto loc_8310B2A4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8310B2CC;
	sub_8259CC28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310B2D8"))) PPC_WEAK_FUNC(sub_8310B2D8);
PPC_FUNC_IMPL(__imp__sub_8310B2D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8310B2E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8310a9e0
	ctx.lr = 0x8310B2EC;
	sub_8310A9E0(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x832d1990
	ctx.lr = 0x8310B30C;
	sub_832D1990(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310b4c8
	if (!cr6.eq) goto loc_8310B4C8;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r28,r11,-19376
	ctx.r28.s64 = ctx.r11.s64 + -19376;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// bl 0x831d0b08
	ctx.lr = 0x8310B330;
	sub_831D0B08(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x832d31b8
	ctx.lr = 0x8310B350;
	sub_832D31B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310b4c0
	if (!cr6.eq) goto loc_8310B4C0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r26,2
	ctx.r26.s64 = 2;
loc_8310B360:
	// addi r11,r1,440
	ctx.r11.s64 = ctx.r1.s64 + 440;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_8310B374:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8310b374
	if (!cr6.eq) goto loc_8310B374;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,440
	ctx.r4.s64 = ctx.r1.s64 + 440;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8310B39C;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x8310B3B0;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8310b3d0
	if (cr6.eq) goto loc_8310B3D0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310b47c
	if (cr6.lt) goto loc_8310B47C;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// b 0x8310b474
	goto loc_8310B474;
loc_8310B3D0:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,254
	ctx.r3.s64 = 254;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x832d1a28
	ctx.lr = 0x8310B3F4;
	sub_832D1A28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310b404
	if (!cr6.eq) goto loc_8310B404;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8310b424
	goto loc_8310B424;
loc_8310B404:
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x831ce980
	ctx.lr = 0x8310B414;
	sub_831CE980(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x8310ab40
	ctx.lr = 0x8310B424;
	sub_8310AB40(ctx, base);
loc_8310B424:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8310b454
	if (!cr6.eq) goto loc_8310B454;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r29,72
	ctx.r3.s64 = ctx.r29.s64 + 72;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x8310B444;
	sub_835977D8(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// b 0x8310b460
	goto loc_8310B460;
loc_8310B454:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x832d1980
	ctx.lr = 0x8310B460;
	sub_832D1980(ctx, base);
loc_8310B460:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310b47c
	if (cr6.lt) goto loc_8310B47C;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
loc_8310B474:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8310B47C;
	sub_825952B8(ctx, base);
loc_8310B47C:
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x831d0b08
	ctx.lr = 0x8310B49C;
	sub_831D0B08(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x832d31b8
	ctx.lr = 0x8310B4B8;
	sub_832D31B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310b360
	if (cr6.eq) goto loc_8310B360;
loc_8310B4C0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832d1a68
	ctx.lr = 0x8310B4C8;
	sub_832D1A68(ctx, base);
loc_8310B4C8:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310B4D0"))) PPC_WEAK_FUNC(sub_8310B4D0);
PPC_FUNC_IMPL(__imp__sub_8310B4D0) {
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
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b4a318
	ctx.lr = 0x8310B4F4;
	sub_83B4A318(ctx, base);
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8310b55c
	if (cr6.eq) goto loc_8310B55C;
loc_8310B500:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8310b524
	if (cr6.eq) goto loc_8310B524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310b2d8
	ctx.lr = 0x8310B518;
	sub_8310B2D8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8310B524:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8310b548
	if (cr6.eq) goto loc_8310B548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310ad18
	ctx.lr = 0x8310B53C;
	sub_8310AD18(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8310B548:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b4a318
	ctx.lr = 0x8310B550;
	sub_83B4A318(ctx, base);
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8310b500
	if (!cr6.eq) goto loc_8310B500;
loc_8310B55C:
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

__attribute__((alias("__imp__sub_8310B578"))) PPC_WEAK_FUNC(sub_8310B578);
PPC_FUNC_IMPL(__imp__sub_8310B578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8310B580;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x8310a830
	ctx.lr = 0x8310B590;
	sub_8310A830(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// addi r4,r11,-19284
	ctx.r4.s64 = ctx.r11.s64 + -19284;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310b220
	ctx.lr = 0x8310B5B8;
	sub_8310B220(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8310b5d0
	if (!cr6.eq) goto loc_8310B5D0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x8310B5D0;
	sub_8291FDC8(ctx, base);
loc_8310B5D0:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x8310fba0
	ctx.lr = 0x8310B5E0;
	sub_8310FBA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8310b160
	ctx.lr = 0x8310B5F0;
	sub_8310B160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310b64c
	if (!cr6.eq) goto loc_8310B64C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310b61c
	if (cr6.lt) goto loc_8310B61C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8310B61C;
	sub_825952B8(ctx, base);
loc_8310B61C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x8310b804
	if (cr6.lt) goto loc_8310B804;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8310B644;
	sub_825952B8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8310B64C:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3080
	ctx.r4.s64 = 3080;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x8310B660;
	sub_82595718(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8310b678
	if (!cr6.lt) goto loc_8310B678;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_8310B678:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3080
	ctx.r5.s64 = 3080;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8310e198
	ctx.lr = 0x8310B688;
	sub_8310E198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310b6bc
	if (!cr6.eq) goto loc_8310B6BC;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x8310B6A4;
	sub_825952B8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8310B6AC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8310B6B4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8310B6BC:
	// li r4,3080
	ctx.r4.s64 = 3080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fd08
	ctx.lr = 0x8310B6C8;
	sub_8310FD08(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x8310B6D8;
	sub_825952B8(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x8310fbf0
	ctx.lr = 0x8310B6E0;
	sub_8310FBF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310b724
	if (cr6.eq) goto loc_8310B724;
loc_8310B6E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fcb8
	ctx.lr = 0x8310B6F0;
	sub_8310FCB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310b714
	if (cr6.eq) goto loc_8310B714;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310b160
	ctx.lr = 0x8310B708;
	sub_8310B160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fc10
	ctx.lr = 0x8310B714;
	sub_8310FC10(ctx, base);
loc_8310B714:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8310fbf0
	ctx.lr = 0x8310B71C;
	sub_8310FBF0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x8310b6e8
	if (cr6.lt) goto loc_8310B6E8;
loc_8310B724:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x8310fbf0
	ctx.lr = 0x8310B72C;
	sub_8310FBF0(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310b7c0
	if (cr6.eq) goto loc_8310B7C0;
loc_8310B738:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fd28
	ctx.lr = 0x8310B740;
	sub_8310FD28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8310b7b0
	if (!cr6.eq) goto loc_8310B7B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310fcb8
	ctx.lr = 0x8310B754;
	sub_8310FCB8(ctx, base);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310b160
	ctx.lr = 0x8310B770;
	sub_8310B160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8310b788
	if (!cr6.eq) goto loc_8310B788;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x8310B788;
	sub_8291FDC8(ctx, base);
loc_8310B788:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310b7a4
	if (cr6.lt) goto loc_8310B7A4;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8310B7A4;
	sub_825952B8(ctx, base);
loc_8310B7A4:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_8310B7B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8310fbf0
	ctx.lr = 0x8310B7B8;
	sub_8310FBF0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x8310b738
	if (cr6.lt) goto loc_8310B738;
loc_8310B7C0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310b7dc
	if (cr6.lt) goto loc_8310B7DC;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8310B7DC;
	sub_825952B8(ctx, base);
loc_8310B7DC:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x8310b804
	if (cr6.lt) goto loc_8310B804;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8310B804;
	sub_825952B8(ctx, base);
loc_8310B804:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310B80C"))) PPC_WEAK_FUNC(sub_8310B80C);
PPC_FUNC_IMPL(__imp__sub_8310B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310B810"))) PPC_WEAK_FUNC(sub_8310B810);
PPC_FUNC_IMPL(__imp__sub_8310B810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310B818;
	__savegprlr_28(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r11,r11,-16088
	ctx.r11.s64 = ctx.r11.s64 + -16088;
	// lis r4,-31751
	ctx.r4.s64 = -2080833536;
	// lis r6,-31751
	ctx.r6.s64 = -2080833536;
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// lwz r29,25892(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25892);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lwz r28,25896(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 25896);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, xer);
	// bne cr6,0x8310b87c
	if (!cr6.eq) goto loc_8310B87C;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// bne cr6,0x8310b87c
	if (!cr6.eq) goto loc_8310B87C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r30,-15948(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15948, ctx.r30.u32);
	// stw r5,-15944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15944, ctx.r5.u32);
	// stw r4,25696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25696, ctx.r4.u32);
	// stw r3,25700(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25700, ctx.r3.u32);
	// stw r31,25704(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25704, ctx.r31.u32);
loc_8310B87C:
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x8310b8b4
	if (!cr6.eq) goto loc_8310B8B4;
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, xer);
	// bne cr6,0x8310b8b4
	if (!cr6.eq) goto loc_8310B8B4;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r31,-15948(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15948, ctx.r31.u32);
	// stw r30,-15944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15944, ctx.r30.u32);
	// stw r5,25696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25696, ctx.r5.u32);
	// stw r4,25700(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25700, ctx.r4.u32);
	// stw r3,25704(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25704, ctx.r3.u32);
loc_8310B8B4:
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x8310b8ec
	if (!cr6.eq) goto loc_8310B8EC;
	// lwz r31,44(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, xer);
	// bne cr6,0x8310b8ec
	if (!cr6.eq) goto loc_8310B8EC;
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r31,-15948(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15948, ctx.r31.u32);
	// stw r30,-15944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15944, ctx.r30.u32);
	// stw r5,25696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25696, ctx.r5.u32);
	// stw r4,25700(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25700, ctx.r4.u32);
	// stw r3,25704(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25704, ctx.r3.u32);
loc_8310B8EC:
	// lwz r30,68(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x8310b924
	if (!cr6.eq) goto loc_8310B924;
	// lwz r31,64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, xer);
	// bne cr6,0x8310b924
	if (!cr6.eq) goto loc_8310B924;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,-15948(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15948, ctx.r31.u32);
	// stw r30,-15944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15944, ctx.r30.u32);
	// stw r5,25696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25696, ctx.r5.u32);
	// stw r4,25700(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25700, ctx.r4.u32);
	// stw r3,25704(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25704, ctx.r3.u32);
loc_8310B924:
	// lwz r30,88(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x8310b95c
	if (!cr6.eq) goto loc_8310B95C;
	// lwz r31,84(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, xer);
	// bne cr6,0x8310b95c
	if (!cr6.eq) goto loc_8310B95C;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r31,-15948(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15948, ctx.r31.u32);
	// stw r30,-15944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15944, ctx.r30.u32);
	// stw r5,25696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25696, ctx.r5.u32);
	// stw r4,25700(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25700, ctx.r4.u32);
	// stw r3,25704(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25704, ctx.r3.u32);
loc_8310B95C:
	// lwz r30,108(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x8310b994
	if (!cr6.eq) goto loc_8310B994;
	// lwz r31,104(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, xer);
	// bne cr6,0x8310b994
	if (!cr6.eq) goto loc_8310B994;
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r31,-15948(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15948, ctx.r31.u32);
	// stw r30,-15944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15944, ctx.r30.u32);
	// stw r5,25696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25696, ctx.r5.u32);
	// stw r4,25700(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25700, ctx.r4.u32);
	// stw r3,25704(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25704, ctx.r3.u32);
loc_8310B994:
	// lwz r31,128(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bne cr6,0x8310b9cc
	if (!cr6.eq) goto loc_8310B9CC;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// bne cr6,0x8310b9cc
	if (!cr6.eq) goto loc_8310B9CC;
	// lwz r5,120(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// stw r3,-15948(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15948, ctx.r3.u32);
	// stw r31,-15944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15944, ctx.r31.u32);
	// stw r5,25696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25696, ctx.r5.u32);
	// stw r4,25700(r7)
	PPC_STORE_U32(ctx.r7.u32 + 25700, ctx.r4.u32);
	// stw r11,25704(r6)
	PPC_STORE_U32(ctx.r6.u32 + 25704, ctx.r11.u32);
loc_8310B9CC:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310B9D0"))) PPC_WEAK_FUNC(sub_8310B9D0);
PPC_FUNC_IMPL(__imp__sub_8310B9D0) {
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
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d4588
	ctx.lr = 0x8310B9F0;
	sub_832D4588(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310ba08
	if (!cr6.eq) goto loc_8310BA08;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8310ba0c
	if (cr6.eq) goto loc_8310BA0C;
loc_8310BA08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310BA0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BA1C"))) PPC_WEAK_FUNC(sub_8310BA1C);
PPC_FUNC_IMPL(__imp__sub_8310BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310BA20"))) PPC_WEAK_FUNC(sub_8310BA20);
PPC_FUNC_IMPL(__imp__sub_8310BA20) {
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
	// bl 0x830ff290
	ctx.lr = 0x8310BA30;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310c04c
	if (cr6.eq) goto loc_8310C04C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,69
	cr6.compare<uint32_t>(ctx.r11.u32, 69, xer);
	// bgt cr6,0x8310c04c
	if (cr6.gt) goto loc_8310C04C;
	// lis r12,-31983
	ctx.r12.s64 = -2096037888;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17828
	ctx.r12.s64 = ctx.r12.s64 + -17828;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8310C04C;
	case 1:
		goto loc_8310BB74;
	case 2:
		goto loc_8310BFE8;
	case 3:
		goto loc_8310BFFC;
	case 4:
		goto loc_8310BB88;
	case 5:
		goto loc_8310BB9C;
	case 6:
		goto loc_8310BBB0;
	case 7:
		goto loc_8310BBC4;
	case 8:
		goto loc_8310BBD8;
	case 9:
		goto loc_8310BBEC;
	case 10:
		goto loc_8310BC00;
	case 11:
		goto loc_8310C024;
	case 12:
		goto loc_8310C038;
	case 13:
		goto loc_8310C010;
	case 14:
		goto loc_8310C010;
	case 15:
		goto loc_8310BC14;
	case 16:
		goto loc_8310BC28;
	case 17:
		goto loc_8310BC3C;
	case 18:
		goto loc_8310BC50;
	case 19:
		goto loc_8310BC64;
	case 20:
		goto loc_8310BC78;
	case 21:
		goto loc_8310BC8C;
	case 22:
		goto loc_8310BC8C;
	case 23:
		goto loc_8310BC8C;
	case 24:
		goto loc_8310BCA0;
	case 25:
		goto loc_8310BCA0;
	case 26:
		goto loc_8310BCA0;
	case 27:
		goto loc_8310BCB4;
	case 28:
		goto loc_8310BCC8;
	case 29:
		goto loc_8310BCDC;
	case 30:
		goto loc_8310BCF0;
	case 31:
		goto loc_8310BD04;
	case 32:
		goto loc_8310BD18;
	case 33:
		goto loc_8310BD2C;
	case 34:
		goto loc_8310BD40;
	case 35:
		goto loc_8310BD54;
	case 36:
		goto loc_8310BD68;
	case 37:
		goto loc_8310BD7C;
	case 38:
		goto loc_8310BD90;
	case 39:
		goto loc_8310BDA4;
	case 40:
		goto loc_8310BDB8;
	case 41:
		goto loc_8310BDCC;
	case 42:
		goto loc_8310BDE0;
	case 43:
		goto loc_8310BDF4;
	case 44:
		goto loc_8310BE08;
	case 45:
		goto loc_8310BE1C;
	case 46:
		goto loc_8310BE30;
	case 47:
		goto loc_8310BE44;
	case 48:
		goto loc_8310BE58;
	case 49:
		goto loc_8310BE6C;
	case 50:
		goto loc_8310BE80;
	case 51:
		goto loc_8310BE94;
	case 52:
		goto loc_8310BEA8;
	case 53:
		goto loc_8310BEBC;
	case 54:
		goto loc_8310BED0;
	case 55:
		goto loc_8310BEE4;
	case 56:
		goto loc_8310BEF8;
	case 57:
		goto loc_8310BF0C;
	case 58:
		goto loc_8310BF0C;
	case 59:
		goto loc_8310BF20;
	case 60:
		goto loc_8310BF34;
	case 61:
		goto loc_8310BF48;
	case 62:
		goto loc_8310BF84;
	case 63:
		goto loc_8310BF98;
	case 64:
		goto loc_8310BFAC;
	case 65:
		goto loc_8310BFAC;
	case 66:
		goto loc_8310BFC0;
	case 67:
		goto loc_8310BF5C;
	case 68:
		goto loc_8310BF70;
	case 69:
		goto loc_8310BFD4;
	default:
		return;
	}
	// lwz r24,-16308(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16308);
	// lwz r24,-17548(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17548);
	// lwz r24,-16408(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16408);
	// lwz r24,-16388(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16388);
	// lwz r24,-17528(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17528);
	// lwz r24,-17508(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17508);
	// lwz r24,-17488(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17488);
	// lwz r24,-17468(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17468);
	// lwz r24,-17448(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17448);
	// lwz r24,-17428(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17428);
	// lwz r24,-17408(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17408);
	// lwz r24,-16348(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16348);
	// lwz r24,-16328(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16328);
	// lwz r24,-16368(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16368);
	// lwz r24,-16368(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16368);
	// lwz r24,-17388(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17388);
	// lwz r24,-17368(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17368);
	// lwz r24,-17348(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17348);
	// lwz r24,-17328(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17328);
	// lwz r24,-17308(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17308);
	// lwz r24,-17288(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17288);
	// lwz r24,-17268(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17268);
	// lwz r24,-17268(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17268);
	// lwz r24,-17268(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17268);
	// lwz r24,-17248(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17248);
	// lwz r24,-17248(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17248);
	// lwz r24,-17248(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17248);
	// lwz r24,-17228(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17228);
	// lwz r24,-17208(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17208);
	// lwz r24,-17188(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17188);
	// lwz r24,-17168(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17168);
	// lwz r24,-17148(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17148);
	// lwz r24,-17128(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17128);
	// lwz r24,-17108(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17108);
	// lwz r24,-17088(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17088);
	// lwz r24,-17068(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17068);
	// lwz r24,-17048(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17048);
	// lwz r24,-17028(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17028);
	// lwz r24,-17008(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17008);
	// lwz r24,-16988(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16988);
	// lwz r24,-16968(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16968);
	// lwz r24,-16948(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16948);
	// lwz r24,-16928(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16928);
	// lwz r24,-16908(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16908);
	// lwz r24,-16888(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16888);
	// lwz r24,-16868(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16868);
	// lwz r24,-16848(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16848);
	// lwz r24,-16828(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16828);
	// lwz r24,-16808(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16808);
	// lwz r24,-16788(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16788);
	// lwz r24,-16768(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16768);
	// lwz r24,-16748(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16748);
	// lwz r24,-16728(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16728);
	// lwz r24,-16708(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16708);
	// lwz r24,-16688(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16688);
	// lwz r24,-16668(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16668);
	// lwz r24,-16648(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16648);
	// lwz r24,-16628(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16628);
	// lwz r24,-16628(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16628);
	// lwz r24,-16608(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16608);
	// lwz r24,-16588(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16588);
	// lwz r24,-16568(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16568);
	// lwz r24,-16508(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16508);
	// lwz r24,-16488(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16488);
	// lwz r24,-16468(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16468);
	// lwz r24,-16468(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16468);
	// lwz r24,-16448(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16448);
	// lwz r24,-16548(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16548);
	// lwz r24,-16528(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16528);
	// lwz r24,-16428(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16428);
loc_8310BB74:
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
loc_8310BB88:
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
loc_8310BB9C:
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
loc_8310BBB0:
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
loc_8310BBC4:
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
loc_8310BBD8:
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
loc_8310BBEC:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BC00:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BC14:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BC28:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BC3C:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BC50:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BC64:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BC78:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BC8C:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BCA0:
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BCB4:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BCC8:
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BCDC:
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BCF0:
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BD04:
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BD18:
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BD2C:
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BD40:
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BD54:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BD68:
	// li r3,26
	ctx.r3.s64 = 26;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BD7C:
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BD90:
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BDA4:
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BDB8:
	// li r3,30
	ctx.r3.s64 = 30;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BDCC:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BDE0:
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BDF4:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BE08:
	// li r3,34
	ctx.r3.s64 = 34;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BE1C:
	// li r3,35
	ctx.r3.s64 = 35;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BE30:
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BE44:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BE58:
	// li r3,38
	ctx.r3.s64 = 38;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BE6C:
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BE80:
	// li r3,40
	ctx.r3.s64 = 40;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BE94:
	// li r3,41
	ctx.r3.s64 = 41;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BEA8:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BEBC:
	// li r3,43
	ctx.r3.s64 = 43;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BED0:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BEE4:
	// li r3,45
	ctx.r3.s64 = 45;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BEF8:
	// li r3,46
	ctx.r3.s64 = 46;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BF0C:
	// li r3,47
	ctx.r3.s64 = 47;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BF20:
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BF34:
	// li r3,49
	ctx.r3.s64 = 49;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BF48:
	// li r3,50
	ctx.r3.s64 = 50;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BF5C:
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BF70:
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BF84:
	// li r3,53
	ctx.r3.s64 = 53;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BF98:
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BFAC:
	// li r3,55
	ctx.r3.s64 = 55;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BFC0:
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BFD4:
	// li r3,57
	ctx.r3.s64 = 57;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BFE8:
	// li r3,58
	ctx.r3.s64 = 58;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310BFFC:
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310C010:
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310C024:
	// li r3,61
	ctx.r3.s64 = 61;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310C038:
	// li r3,62
	ctx.r3.s64 = 62;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310C04C:
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

__attribute__((alias("__imp__sub_8310C060"))) PPC_WEAK_FUNC(sub_8310C060);
PPC_FUNC_IMPL(__imp__sub_8310C060) {
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
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// beq cr6,0x8310c0b0
	if (cr6.eq) goto loc_8310C0B0;
	// bl 0x832d3188
	ctx.lr = 0x8310C080;
	sub_832D3188(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8310c09c
	if (cr6.lt) goto loc_8310C09C;
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
loc_8310C09C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310C0B0:
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

__attribute__((alias("__imp__sub_8310C0C4"))) PPC_WEAK_FUNC(sub_8310C0C4);
PPC_FUNC_IMPL(__imp__sub_8310C0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310C0C8"))) PPC_WEAK_FUNC(sub_8310C0C8);
PPC_FUNC_IMPL(__imp__sub_8310C0C8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x832d33c0
	ctx.lr = 0x8310C0E4;
	sub_832D33C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8310c120
	if (!cr6.eq) goto loc_8310C120;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r9,28(r7)
	PPC_STORE_U8(ctx.r7.u32 + 28, ctx.r9.u8);
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
loc_8310C120:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r6,r31,132
	ctx.r6.s64 = ctx.r31.s64 + 132;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8310C134:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8310c134
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8310C134;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x832d3328
	ctx.lr = 0x8310C15C;
	sub_832D3328(ctx, base);
	// cmpwi cr6,r3,997
	cr6.compare<int32_t>(ctx.r3.s32, 997, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x8310c16c
	if (!cr6.eq) goto loc_8310C16C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8310C16C:
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

__attribute__((alias("__imp__sub_8310C180"))) PPC_WEAK_FUNC(sub_8310C180);
PPC_FUNC_IMPL(__imp__sub_8310C180) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x832d33c0
	ctx.lr = 0x8310C19C;
	sub_832D33C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8310c1d8
	if (!cr6.eq) goto loc_8310C1D8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r9,28(r7)
	PPC_STORE_U8(ctx.r7.u32 + 28, ctx.r9.u8);
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
loc_8310C1D8:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r6,r31,132
	ctx.r6.s64 = ctx.r31.s64 + 132;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8310C1EC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8310c1ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8310C1EC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x832d3328
	ctx.lr = 0x8310C218;
	sub_832D3328(ctx, base);
	// cmpwi cr6,r3,997
	cr6.compare<int32_t>(ctx.r3.s32, 997, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x8310c228
	if (!cr6.eq) goto loc_8310C228;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8310C228:
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

__attribute__((alias("__imp__sub_8310C23C"))) PPC_WEAK_FUNC(sub_8310C23C);
PPC_FUNC_IMPL(__imp__sub_8310C23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310C240"))) PPC_WEAK_FUNC(sub_8310C240);
PPC_FUNC_IMPL(__imp__sub_8310C240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8310C248;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8310ba20
	ctx.lr = 0x8310C254;
	sub_8310BA20(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,-15832
	ctx.r26.s64 = ctx.r11.s64 + -15832;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r26,1008
	ctx.r25.s64 = ctx.r26.s64 + 1008;
	// addi r31,r24,12
	ctx.r31.s64 = ctx.r24.s64 + 12;
	// addi r27,r24,116
	ctx.r27.s64 = ctx.r24.s64 + 116;
loc_8310C270:
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8310cc00
	ctx.lr = 0x8310C278;
	sub_8310CC00(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bne cr6,0x8310c298
	if (!cr6.eq) goto loc_8310C298;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x8310c2a8
	goto loc_8310C2A8;
loc_8310C298:
	// addi r10,r26,8
	ctx.r10.s64 = ctx.r26.s64 + 8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_8310C2A8:
	// lwzx r11,r29,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// stwu r11,12(r31)
	ea = 12 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// blt cr6,0x8310c270
	if (cr6.lt) goto loc_8310C270;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r24,76
	ctx.r31.s64 = ctx.r24.s64 + 76;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_8310C2CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d33c0
	ctx.lr = 0x8310C2D4;
	sub_832D33C0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r11.u8);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8310c2fc
	if (!cr6.eq) goto loc_8310C2FC;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310c2fc
	if (!cr6.eq) goto loc_8310C2FC;
	// stw r29,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r29.u32);
loc_8310C2FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// blt cr6,0x8310c2cc
	if (cr6.lt) goto loc_8310C2CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r24,68
	ctx.r11.s64 = ctx.r24.s64 + 68;
loc_8310C314:
	// lbz r8,-40(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -40);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8310c340
	if (cr6.eq) goto loc_8310C340;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,-48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -48);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x8310c35c
	if (!cr6.eq) goto loc_8310C35C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x8310c35c
	if (!cr6.eq) goto loc_8310C35C;
loc_8310C340:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8310c314
	if (cr6.lt) goto loc_8310C314;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8310C35C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310C368"))) PPC_WEAK_FUNC(sub_8310C368);
PPC_FUNC_IMPL(__imp__sub_8310C368) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8310c4c0
	if (cr6.gt) goto loc_8310C4C0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8310c3d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8310C3D4;
	// bdzf 4*cr6+eq,0x8310c404
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8310C404;
	// bdzf 4*cr6+eq,0x8310c428
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8310C428;
	// bdzf 4*cr6+eq,0x8310c444
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8310C444;
	// bdzf 4*cr6+eq,0x8310c468
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8310C468;
	// bne cr6,0x8310c4a0
	if (!cr6.eq) goto loc_8310C4A0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8310c3f8
	if (!cr6.eq) goto loc_8310C3F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8310c4c0
	goto loc_8310C4C0;
loc_8310C3D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310c0c8
	ctx.lr = 0x8310C3DC;
	sub_8310C0C8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8310c3f0
	if (!cr6.eq) goto loc_8310C3F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8310c4c0
	goto loc_8310C4C0;
loc_8310C3F0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8310c4c0
	if (!cr6.eq) goto loc_8310C4C0;
loc_8310C3F8:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8310c4c0
	goto loc_8310C4C0;
loc_8310C404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310c060
	ctx.lr = 0x8310C40C;
	sub_8310C060(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8310c4c0
	if (cr6.eq) goto loc_8310C4C0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8310c3f0
	if (!cr6.eq) goto loc_8310C3F0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8310c4c0
	goto loc_8310C4C0;
loc_8310C428:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310c180
	ctx.lr = 0x8310C430;
	sub_8310C180(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8310c3f0
	if (!cr6.eq) goto loc_8310C3F0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8310c4c0
	goto loc_8310C4C0;
loc_8310C444:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310c060
	ctx.lr = 0x8310C44C;
	sub_8310C060(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8310c4c0
	if (cr6.eq) goto loc_8310C4C0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8310c3f0
	if (!cr6.eq) goto loc_8310C3F0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8310c4c0
	goto loc_8310C4C0;
loc_8310C468:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,6
	ctx.r9.s64 = 6;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r6,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r6.u32);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r5,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r5.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x8310c4c0
	goto loc_8310C4C0;
loc_8310C4A0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x8310c4c4
	if (!cr6.lt) goto loc_8310C4C4;
loc_8310C4C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310C4C4:
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

__attribute__((alias("__imp__sub_8310C4D8"))) PPC_WEAK_FUNC(sub_8310C4D8);
PPC_FUNC_IMPL(__imp__sub_8310C4D8) {
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
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8310c518
	if (cr6.lt) goto loc_8310C518;
	// bne cr6,0x8310c55c
	if (!cr6.eq) goto loc_8310C55C;
	// bl 0x8310c368
	ctx.lr = 0x8310C500;
	sub_8310C368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8310c55c
	if (!cr6.eq) goto loc_8310C55C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8310c554
	goto loc_8310C554;
loc_8310C518:
	// bl 0x832d30f8
	ctx.lr = 0x8310C51C;
	sub_832D30F8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,5000
	cr6.compare<uint32_t>(ctx.r10.u32, 5000, xer);
	// blt cr6,0x8310c55c
	if (cr6.lt) goto loc_8310C55C;
	// bl 0x832d30f8
	ctx.lr = 0x8310C530;
	sub_832D30F8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310c240
	ctx.lr = 0x8310C53C;
	sub_8310C240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8310c55c
	if (!cr6.eq) goto loc_8310C55C;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8310C554:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8310C55C:
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

__attribute__((alias("__imp__sub_8310C570"))) PPC_WEAK_FUNC(sub_8310C570);
PPC_FUNC_IMPL(__imp__sub_8310C570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,29
	ctx.r11.s64 = ctx.r4.s64 + 29;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C58C"))) PPC_WEAK_FUNC(sub_8310C58C);
PPC_FUNC_IMPL(__imp__sub_8310C58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310C590"))) PPC_WEAK_FUNC(sub_8310C590);
PPC_FUNC_IMPL(__imp__sub_8310C590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,25712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25712);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C59C"))) PPC_WEAK_FUNC(sub_8310C59C);
PPC_FUNC_IMPL(__imp__sub_8310C59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310C5A0"))) PPC_WEAK_FUNC(sub_8310C5A0);
PPC_FUNC_IMPL(__imp__sub_8310C5A0) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,-18852
	ctx.r8.s64 = ctx.r11.s64 + -18852;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_8310C5E8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8310c5e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8310C5E8;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x831cdcf0
	ctx.lr = 0x8310C600;
	sub_831CDCF0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x831cdcf0
	ctx.lr = 0x8310C610;
	sub_831CDCF0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r31,112
	ctx.r9.s64 = ctx.r31.s64 + 112;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8310C624:
	// stw r10,-44(r11)
	PPC_STORE_U32(ctx.r11.u32 + -44, ctx.r10.u32);
	// stw r10,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r10.u32);
	// stb r30,-36(r11)
	PPC_STORE_U8(ctx.r11.u32 + -36, ctx.r30.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stbu r30,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// stwu r30,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8310c624
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8310C624;
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

__attribute__((alias("__imp__sub_8310C660"))) PPC_WEAK_FUNC(sub_8310C660);
PPC_FUNC_IMPL(__imp__sub_8310C660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8310C668;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-18852
	ctx.r9.s64 = ctx.r11.s64 + -18852;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8310c704
	if (cr6.eq) goto loc_8310C704;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8310C690:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8310c6bc
	if (cr6.lt) goto loc_8310C6BC;
	// bne cr6,0x8310c6f8
	if (!cr6.eq) goto loc_8310C6F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310c368
	ctx.lr = 0x8310C6A8;
	sub_8310C368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8310c6f8
	if (!cr6.eq) goto loc_8310C6F8;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x8310c6f0
	goto loc_8310C6F0;
loc_8310C6BC:
	// bl 0x832d30f8
	ctx.lr = 0x8310C6C0;
	sub_832D30F8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,5000
	cr6.compare<uint32_t>(ctx.r10.u32, 5000, xer);
	// blt cr6,0x8310c6f8
	if (cr6.lt) goto loc_8310C6F8;
	// bl 0x832d30f8
	ctx.lr = 0x8310C6D4;
	sub_832D30F8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310c240
	ctx.lr = 0x8310C6E0;
	sub_8310C240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8310c6f8
	if (!cr6.eq) goto loc_8310C6F8;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8310C6F0:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8310C6F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8310c690
	if (!cr6.eq) goto loc_8310C690;
loc_8310C704:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,1764
	ctx.r10.s64 = ctx.r11.s64 + 1764;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310C718"))) PPC_WEAK_FUNC(sub_8310C718);
PPC_FUNC_IMPL(__imp__sub_8310C718) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r11,25712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310c768
	if (!cr6.eq) goto loc_8310C768;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8310C750;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310c760
	if (cr6.eq) goto loc_8310C760;
	// bl 0x8310c5a0
	ctx.lr = 0x8310C75C;
	sub_8310C5A0(ctx, base);
	// b 0x8310c764
	goto loc_8310C764;
loc_8310C760:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310C764:
	// stw r3,25712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25712, ctx.r3.u32);
loc_8310C768:
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

__attribute__((alias("__imp__sub_8310C77C"))) PPC_WEAK_FUNC(sub_8310C77C);
PPC_FUNC_IMPL(__imp__sub_8310C77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310C780"))) PPC_WEAK_FUNC(sub_8310C780);
PPC_FUNC_IMPL(__imp__sub_8310C780) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r11,25712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310c7e4
	if (cr6.eq) goto loc_8310C7E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8310C7B4;
	sub_82595150(ctx, base);
	// lwz r3,25712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310c7d4
	if (cr6.eq) goto loc_8310C7D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8310C7D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310C7D4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8310C7DC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,25712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25712, ctx.r11.u32);
loc_8310C7E4:
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

__attribute__((alias("__imp__sub_8310C7F8"))) PPC_WEAK_FUNC(sub_8310C7F8);
PPC_FUNC_IMPL(__imp__sub_8310C7F8) {
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
	// bl 0x8310c660
	ctx.lr = 0x8310C818;
	sub_8310C660(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310c830
	if (cr6.eq) goto loc_8310C830;
	// bl 0x82416268
	ctx.lr = 0x8310C82C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8310C830:
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

__attribute__((alias("__imp__sub_8310C848"))) PPC_WEAK_FUNC(sub_8310C848);
PPC_FUNC_IMPL(__imp__sub_8310C848) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// stb r30,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r30.u8);
	// stb r30,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r30.u8);
	// stb r30,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r30.u8);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// stb r30,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r30.u8);
	// stb r30,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r30.u8);
	// stb r30,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r30.u8);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82596fa8
	ctx.lr = 0x8310C8C8;
	sub_82596FA8(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8310C8EC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8310c8ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8310C8EC;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8310C918"))) PPC_WEAK_FUNC(sub_8310C918);
PPC_FUNC_IMPL(__imp__sub_8310C918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8310C934"))) PPC_WEAK_FUNC(sub_8310C934);
PPC_FUNC_IMPL(__imp__sub_8310C934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310C938"))) PPC_WEAK_FUNC(sub_8310C938);
PPC_FUNC_IMPL(__imp__sub_8310C938) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x832d33d0
	ctx.lr = 0x8310C95C;
	sub_832D33D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310c974
	if (!cr6.eq) goto loc_8310C974;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8310c978
	if (!cr6.eq) goto loc_8310C978;
loc_8310C974:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8310C978:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C98C"))) PPC_WEAK_FUNC(sub_8310C98C);
PPC_FUNC_IMPL(__imp__sub_8310C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310C990"))) PPC_WEAK_FUNC(sub_8310C990);
PPC_FUNC_IMPL(__imp__sub_8310C990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310C998;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_8310C9BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d33c0
	ctx.lr = 0x8310C9C4;
	sub_832D33C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d3118
	ctx.lr = 0x8310C9D8;
	sub_832D3118(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310ca50
	if (!cr6.eq) goto loc_8310CA50;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310ca50
	if (!cr6.eq) goto loc_8310CA50;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x8310ca50
	if (cr6.eq) goto loc_8310CA50;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// slw r7,r11,r30
	ctx.r7.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// beq cr6,0x8310ca28
	if (cr6.eq) goto loc_8310CA28;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310ca50
	if (cr6.eq) goto loc_8310CA50;
loc_8310CA28:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// or r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bne cr6,0x8310ca44
	if (!cr6.eq) goto loc_8310CA44;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_8310CA44:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8310CA50:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x8310c9bc
	if (cr6.lt) goto loc_8310C9BC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310CA68"))) PPC_WEAK_FUNC(sub_8310CA68);
PPC_FUNC_IMPL(__imp__sub_8310CA68) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831d8598
	ctx.lr = 0x8310CAAC;
	sub_831D8598(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CABC"))) PPC_WEAK_FUNC(sub_8310CABC);
PPC_FUNC_IMPL(__imp__sub_8310CABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310CAC0"))) PPC_WEAK_FUNC(sub_8310CAC0);
PPC_FUNC_IMPL(__imp__sub_8310CAC0) {
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
	// bl 0x83108010
	ctx.lr = 0x8310CAE0;
	sub_83108010(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310cb00
	if (cr6.eq) goto loc_8310CB00;
	// bl 0x82595188
	ctx.lr = 0x8310CAF0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8310CB00;
	sub_825952B8(ctx, base);
loc_8310CB00:
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

__attribute__((alias("__imp__sub_8310CB1C"))) PPC_WEAK_FUNC(sub_8310CB1C);
PPC_FUNC_IMPL(__imp__sub_8310CB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310CB20"))) PPC_WEAK_FUNC(sub_8310CB20);
PPC_FUNC_IMPL(__imp__sub_8310CB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310CB28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8310cbec
	if (cr6.lt) goto loc_8310CBEC;
	// beq cr6,0x8310cbb0
	if (cr6.eq) goto loc_8310CBB0;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x8310cbf4
	if (!cr6.lt) goto loc_8310CBF4;
	// bl 0x8310a820
	ctx.lr = 0x8310CB48;
	sub_8310A820(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310cbf4
	if (cr6.eq) goto loc_8310CBF4;
	// bl 0x8310a8d0
	ctx.lr = 0x8310CB58;
	sub_8310A8D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310cbf4
	if (cr6.eq) goto loc_8310CBF4;
loc_8310CB68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310a998
	ctx.lr = 0x8310CB74;
	sub_8310A998(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310cb8c
	if (cr6.eq) goto loc_8310CB8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d1998
	ctx.lr = 0x8310CB84;
	sub_832D1998(ctx, base);
	// cmplwi cr6,r3,1167
	cr6.compare<uint32_t>(ctx.r3.u32, 1167, xer);
	// beq cr6,0x8310cba0
	if (cr6.eq) goto loc_8310CBA0;
loc_8310CB8C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x8310cb68
	if (cr6.lt) goto loc_8310CB68;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8310CBA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,51(r28)
	PPC_STORE_U8(ctx.r28.u32 + 51, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8310CBB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8310c990
	ctx.lr = 0x8310CBB8;
	sub_8310C990(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310cbd4
	if (!cr6.eq) goto loc_8310CBD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,52(r28)
	PPC_STORE_U8(ctx.r28.u32 + 52, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8310CBD4:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,25720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25720, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8310CBEC:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// stb r11,45(r28)
	PPC_STORE_U8(ctx.r28.u32 + 45, ctx.r11.u8);
loc_8310CBF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310CBFC"))) PPC_WEAK_FUNC(sub_8310CBFC);
PPC_FUNC_IMPL(__imp__sub_8310CBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310CC00"))) PPC_WEAK_FUNC(sub_8310CC00);
PPC_FUNC_IMPL(__imp__sub_8310CC00) {
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
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,25880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25880);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8310cc60
	if (!cr6.eq) goto loc_8310CC60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// stw r11,25880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25880, ctx.r11.u32);
	// addi r31,r9,25728
	ctx.r31.s64 = ctx.r9.s64 + 25728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310c848
	ctx.lr = 0x8310CC3C;
	sub_8310C848(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,12240
	ctx.r3.s64 = ctx.r8.s64 + 12240;
	// bl 0x831cdcc8
	ctx.lr = 0x8310CC48;
	sub_831CDCC8(ctx, base);
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
loc_8310CC60:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,25728
	ctx.r3.s64 = ctx.r11.s64 + 25728;
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

__attribute__((alias("__imp__sub_8310CC7C"))) PPC_WEAK_FUNC(sub_8310CC7C);
PPC_FUNC_IMPL(__imp__sub_8310CC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310CC80"))) PPC_WEAK_FUNC(sub_8310CC80);
PPC_FUNC_IMPL(__imp__sub_8310CC80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8310cb20
	sub_8310CB20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310CC94"))) PPC_WEAK_FUNC(sub_8310CC94);
PPC_FUNC_IMPL(__imp__sub_8310CC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310CC98"))) PPC_WEAK_FUNC(sub_8310CC98);
PPC_FUNC_IMPL(__imp__sub_8310CC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8310CCA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,120
	ctx.r29.s64 = ctx.r3.s64 + 120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8310CCC4;
	sub_82596FE8(ctx, base);
	// bl 0x83108810
	ctx.lr = 0x8310CCC8;
	sub_83108810(ctx, base);
	// bl 0x83107528
	ctx.lr = 0x8310CCCC;
	sub_83107528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r27,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r27.u8);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// bl 0x82595718
	ctx.lr = 0x8310CCF4;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310cd24
	if (cr6.eq) goto loc_8310CD24;
	// bl 0x83108020
	ctx.lr = 0x8310CD04;
	sub_83108020(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r9,r11,-10408
	ctx.r9.s64 = ctx.r11.s64 + -10408;
	// addi r8,r10,-13184
	ctx.r8.s64 = ctx.r10.s64 + -13184;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// b 0x8310cd28
	goto loc_8310CD28;
loc_8310CD24:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8310CD28:
	// bl 0x83108060
	ctx.lr = 0x8310CD2C;
	sub_83108060(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83105b70
	ctx.lr = 0x8310CD38;
	sub_83105B70(ctx, base);
	// bl 0x83108060
	ctx.lr = 0x8310CD3C;
	sub_83108060(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83105b70
	ctx.lr = 0x8310CD48;
	sub_83105B70(ctx, base);
	// bl 0x83108060
	ctx.lr = 0x8310CD4C;
	sub_83108060(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83105b70
	ctx.lr = 0x8310CD58;
	sub_83105B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310c990
	ctx.lr = 0x8310CD60;
	sub_8310C990(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x83105d48
	ctx.lr = 0x8310CD6C;
	sub_83105D48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8310CD80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bl 0x82597088
	ctx.lr = 0x8310CD90;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310CD9C"))) PPC_WEAK_FUNC(sub_8310CD9C);
PPC_FUNC_IMPL(__imp__sub_8310CD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310CDA0"))) PPC_WEAK_FUNC(sub_8310CDA0);
PPC_FUNC_IMPL(__imp__sub_8310CDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8310CDA8;
	__savegprlr_23(ctx, base);
	// stwu r1,-2400(r1)
	ea = -2400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,120
	ctx.r24.s64 = ctx.r3.s64 + 120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8310CDBC;
	sub_82596FE8(ctx, base);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r29,-31751
	ctx.r29.s64 = -2080833536;
	// lwz r11,25888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25888);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8310cde4
	if (!cr6.eq) goto loc_8310CDE4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,25888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25888, ctx.r11.u32);
	// bl 0x832d30f8
	ctx.lr = 0x8310CDE0;
	sub_832D30F8(ctx, base);
	// stw r3,25884(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25884, ctx.r3.u32);
loc_8310CDE4:
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310ce4c
	if (cr6.eq) goto loc_8310CE4C;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lwz r11,25720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,25720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25720, ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8310ce18
	if (!cr6.eq) goto loc_8310CE18;
	// bl 0x832d30f8
	ctx.lr = 0x8310CE10;
	sub_832D30F8(ctx, base);
	// stw r3,25884(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25884, ctx.r3.u32);
	// b 0x8310ce4c
	goto loc_8310CE4C;
loc_8310CE18:
	// ble cr6,0x8310ce4c
	if (!cr6.gt) goto loc_8310CE4C;
	// bl 0x832d30f8
	ctx.lr = 0x8310CE20;
	sub_832D30F8(ctx, base);
	// lwz r11,25884(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25884);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,1000
	cr6.compare<uint32_t>(ctx.r11.u32, 1000, xer);
	// blt cr6,0x8310ce4c
	if (cr6.lt) goto loc_8310CE4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310c990
	ctx.lr = 0x8310CE38;
	sub_8310C990(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stb r26,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r26.u8);
	// stw r26,25720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25720, ctx.r26.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8310CE4C:
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8310CE54:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310ce74
	if (cr6.eq) goto loc_8310CE74;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x832d19a0
	ctx.lr = 0x8310CE68;
	sub_832D19A0(ctx, base);
	// cmplwi cr6,r3,1167
	cr6.compare<uint32_t>(ctx.r3.u32, 1167, xer);
	// bne cr6,0x8310ce74
	if (!cr6.eq) goto loc_8310CE74;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_8310CE74:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8310ce54
	if (!cr0.eq) goto loc_8310CE54;
	// lbz r10,49(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r27,r11,-18794
	ctx.r27.s64 = ctx.r11.s64 + -18794;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310cf44
	if (!cr6.eq) goto loc_8310CF44;
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310cf44
	if (!cr6.eq) goto loc_8310CF44;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310cf44
	if (cr6.eq) goto loc_8310CF44;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8310ced0
	if (cr6.lt) goto loc_8310CED0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// ble cr6,0x8310ced4
	if (!cr6.gt) goto loc_8310CED4;
loc_8310CED0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8310CED4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310cf44
	if (!cr6.eq) goto loc_8310CF44;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8310CEF4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8310cef4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8310CEF4;
	// addi r4,r27,7978
	ctx.r4.s64 = ctx.r27.s64 + 7978;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8310ca68
	ctx.lr = 0x8310CF14;
	sub_8310CA68(ctx, base);
	// addi r4,r27,8254
	ctx.r4.s64 = ctx.r27.s64 + 8254;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x832d3770
	ctx.lr = 0x8310CF3C;
	sub_832D3770(ctx, base);
	// stb r25,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r25.u8);
	// stb r25,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r25.u8);
loc_8310CF44:
	// lbz r11,51(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310d090
	if (cr6.eq) goto loc_8310D090;
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310d090
	if (!cr6.eq) goto loc_8310D090;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8310CF70:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8310cf70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8310CF70;
	// li r5,1022
	ctx.r5.s64 = 1022;
	// sth r26,272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 272, ctx.r26.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,274
	ctx.r3.s64 = ctx.r1.s64 + 274;
	// bl 0x831cdcf0
	ctx.lr = 0x8310CF8C;
	sub_831CDCF0(ctx, base);
	// li r5,1022
	ctx.r5.s64 = 1022;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r26,1296(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1296, ctx.r26.u16);
	// addi r3,r1,1298
	ctx.r3.s64 = ctx.r1.s64 + 1298;
	// bl 0x831cdcf0
	ctx.lr = 0x8310CFA0;
	sub_831CDCF0(ctx, base);
	// bl 0x8310d3b8
	ctx.lr = 0x8310CFA4;
	sub_8310D3B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8310e010
	ctx.lr = 0x8310CFAC;
	sub_8310E010(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x831cdcf0
	ctx.lr = 0x8310CFC0;
	sub_831CDCF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x831cdcf0
	ctx.lr = 0x8310CFD0;
	sub_831CDCF0(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-14464
	ctx.r30.s64 = ctx.r11.s64 + -14464;
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,512
	ctx.r8.s64 = 512;
	// addi r7,r1,1296
	ctx.r7.s64 = ctx.r1.s64 + 1296;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// li r6,512
	ctx.r6.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832d2e80
	ctx.lr = 0x8310D008;
	sub_832D2E80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8310d01c
	if (cr6.eq) goto loc_8310D01C;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,1296
	ctx.r10.s64 = ctx.r1.s64 + 1296;
	// sthx r26,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u16);
loc_8310D01C:
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,512
	ctx.r8.s64 = 512;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,512
	ctx.r6.s64 = 512;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x832d2e80
	ctx.lr = 0x8310D044;
	sub_832D2E80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8310d058
	if (cr6.eq) goto loc_8310D058;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// sthx r26,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u16);
loc_8310D058:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r11,r27,8282
	ctx.r11.s64 = ctx.r27.s64 + 8282;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,1296
	ctx.r5.s64 = ctx.r1.s64 + 1296;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x832d3770
	ctx.lr = 0x8310D088;
	sub_832D3770(ctx, base);
	// stb r25,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r25.u8);
	// stb r25,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r25.u8);
loc_8310D090:
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310d110
	if (cr6.eq) goto loc_8310D110;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// beq cr6,0x8310d110
	if (cr6.eq) goto loc_8310D110;
	// stb r26,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r26.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824168e8
	ctx.lr = 0x8310D0BC;
	sub_824168E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310d110
	if (!cr6.eq) goto loc_8310D110;
	// lbz r11,51(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310d0f8
	if (cr6.eq) goto loc_8310D0F8;
	// addi r4,r27,8290
	ctx.r4.s64 = ctx.r27.s64 + 8290;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82475d40
	ctx.lr = 0x8310D0DC;
	sub_82475D40(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8310d0f0
	if (!cr6.lt) goto loc_8310D0F0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_8310D0F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d4620
	ctx.lr = 0x8310D0F8;
	sub_832D4620(ctx, base);
loc_8310D0F8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8310d1b0
	if (cr6.lt) goto loc_8310D1B0;
	// bne cr6,0x8310d110
	if (!cr6.eq) goto loc_8310D110;
	// stb r25,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r25.u8);
	// stb r26,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r26.u8);
loc_8310D110:
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310d228
	if (!cr6.eq) goto loc_8310D228;
	// lbz r11,47(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310d228
	if (cr6.eq) goto loc_8310D228;
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310d228
	if (!cr6.eq) goto loc_8310D228;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310d228
	if (!cr6.eq) goto loc_8310D228;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310d1bc
	if (!cr6.eq) goto loc_8310D1BC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x83107f98
	ctx.lr = 0x8310D154;
	sub_83107F98(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310d1a0
	if (cr6.eq) goto loc_8310D1A0;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8310D190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310d1a0
	if (cr6.eq) goto loc_8310D1A0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8310D1A0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310d228
	if (!cr6.eq) goto loc_8310D228;
	// b 0x8310d224
	goto loc_8310D224;
loc_8310D1B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d4620
	ctx.lr = 0x8310D1BC;
	sub_832D4620(ctx, base);
loc_8310D1BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8310D1CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8310d228
	if (cr6.eq) goto loc_8310D228;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310d21c
	if (cr6.eq) goto loc_8310D21C;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x8310D1F4;
	sub_82595150(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310d214
	if (cr6.eq) goto loc_8310D214;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8310D214;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310D214:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595170
	ctx.lr = 0x8310D21C;
	sub_82595170(ctx, base);
loc_8310D21C:
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// stb r25,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r25.u8);
loc_8310D224:
	// stb r26,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r26.u8);
loc_8310D228:
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310d380
	if (!cr6.eq) goto loc_8310D380;
	// lbz r11,47(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310d380
	if (!cr6.eq) goto loc_8310D380;
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310d380
	if (!cr6.eq) goto loc_8310D380;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310d380
	if (cr6.eq) goto loc_8310D380;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310d2f0
	if (!cr6.eq) goto loc_8310D2F0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r26.u32);
	// bl 0x83107f98
	ctx.lr = 0x8310D27C;
	sub_83107F98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310d2e0
	if (cr6.eq) goto loc_8310D2E0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310d2a4
	if (cr6.eq) goto loc_8310D2A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// clrldi r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x832d19a8
	ctx.lr = 0x8310D2A4;
	sub_832D19A8(ctx, base);
loc_8310D2A4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// std r3,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8310D2D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310d2e0
	if (cr6.eq) goto loc_8310D2E0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8310D2E0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310d380
	if (!cr6.eq) goto loc_8310D380;
	// b 0x8310d37c
	goto loc_8310D37C;
loc_8310D2F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8310D300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8310d380
	if (cr6.eq) goto loc_8310D380;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8310D320;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,25
	ctx.r8.s64 = ctx.r11.s64 + 25;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8310d378
	if (cr6.eq) goto loc_8310D378;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x8310D350;
	sub_82595150(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310d370
	if (cr6.eq) goto loc_8310D370;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8310D370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310D370:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595170
	ctx.lr = 0x8310D378;
	sub_82595170(ctx, base);
loc_8310D378:
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
loc_8310D37C:
	// stb r26,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r26.u8);
loc_8310D380:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82597088
	ctx.lr = 0x8310D388;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2400
	ctx.r1.s64 = ctx.r1.s64 + 2400;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310D394"))) PPC_WEAK_FUNC(sub_8310D394);
PPC_FUNC_IMPL(__imp__sub_8310D394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310D398"))) PPC_WEAK_FUNC(sub_8310D398);
PPC_FUNC_IMPL(__imp__sub_8310D398) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r10,-14184
	ctx.r8.s64 = ctx.r10.s64 + -14184;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D3B4"))) PPC_WEAK_FUNC(sub_8310D3B4);
PPC_FUNC_IMPL(__imp__sub_8310D3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310D3B8"))) PPC_WEAK_FUNC(sub_8310D3B8);
PPC_FUNC_IMPL(__imp__sub_8310D3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// lwz r11,-13656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13656);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,25892(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25892);
	// lwz r5,25896(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25896);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// lwz r6,-15944(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15944);
	// lwz r4,-15948(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -15948);
	// bge cr6,0x8310d434
	if (!cr6.lt) goto loc_8310D434;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-14184
	ctx.r9.s64 = ctx.r9.s64 + -14184;
loc_8310D408:
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// slw r31,r7,r3
	ctx.r31.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r3.u8 & 0x3F));
	// and r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 & ctx.r8.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8310d494
	if (!cr6.eq) goto loc_8310D494;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x8310d408
	if (cr6.lt) goto loc_8310D408;
loc_8310D434:
	// and r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310d45c
	if (cr6.eq) goto loc_8310D45C;
	// and r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310d45c
	if (cr6.eq) goto loc_8310D45C;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,25704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25704);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8310D45C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-10256
	ctx.r11.s64 = ctx.r11.s64 + -10256;
loc_8310D468:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8310d490
	if (!cr6.eq) goto loc_8310D490;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,88
	cr6.compare<uint32_t>(ctx.r9.u32, 88, xer);
	// blt cr6,0x8310d468
	if (cr6.lt) goto loc_8310D468;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8310D490:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8310D494:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D49C"))) PPC_WEAK_FUNC(sub_8310D49C);
PPC_FUNC_IMPL(__imp__sub_8310D49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310D4A0"))) PPC_WEAK_FUNC(sub_8310D4A0);
PPC_FUNC_IMPL(__imp__sub_8310D4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// lwz r11,-13656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13656);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,25892(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25892);
	// lwz r8,25896(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25896);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// lwz r5,-15944(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15944);
	// lwz r4,-15948(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -15948);
	// bge cr6,0x8310d51c
	if (!cr6.lt) goto loc_8310D51C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-14184
	ctx.r9.s64 = ctx.r9.s64 + -14184;
loc_8310D4F0:
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// slw r31,r7,r3
	ctx.r31.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r3.u8 & 0x3F));
	// and r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 & ctx.r8.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8310d57c
	if (!cr6.eq) goto loc_8310D57C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x8310d4f0
	if (cr6.lt) goto loc_8310D4F0;
loc_8310D51C:
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310d544
	if (cr6.eq) goto loc_8310D544;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310d544
	if (cr6.eq) goto loc_8310D544;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,25700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25700);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8310D544:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-10256
	ctx.r11.s64 = ctx.r11.s64 + -10256;
loc_8310D550:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8310d578
	if (!cr6.eq) goto loc_8310D578;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,88
	cr6.compare<uint32_t>(ctx.r9.u32, 88, xer);
	// blt cr6,0x8310d550
	if (cr6.lt) goto loc_8310D550;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8310D578:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8310D57C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D584"))) PPC_WEAK_FUNC(sub_8310D584);
PPC_FUNC_IMPL(__imp__sub_8310D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310D588"))) PPC_WEAK_FUNC(sub_8310D588);
PPC_FUNC_IMPL(__imp__sub_8310D588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,-13652(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// cmpwi cr6,r3,19
	cr6.compare<int32_t>(ctx.r3.s32, 19, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,25892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25892);
	// lwz r10,-13656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13656);
	// rlwinm r8,r11,0,13,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// bge cr6,0x8310d5fc
	if (!cr6.lt) goto loc_8310D5FC;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-14184
	ctx.r9.s64 = ctx.r9.s64 + -14184;
loc_8310D5D0:
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// slw r6,r7,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r3.u8 & 0x3F));
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x8310d5d0
	if (cr6.lt) goto loc_8310D5D0;
loc_8310D5FC:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-10256
	ctx.r11.s64 = ctx.r11.s64 + -10256;
loc_8310D608:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8310d630
	if (!cr6.eq) goto loc_8310D630;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,88
	cr6.compare<uint32_t>(ctx.r9.u32, 88, xer);
	// blt cr6,0x8310d608
	if (cr6.lt) goto loc_8310D608;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8310D630:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D638"))) PPC_WEAK_FUNC(sub_8310D638);
PPC_FUNC_IMPL(__imp__sub_8310D638) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310d670
	if (!cr6.eq) goto loc_8310D670;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// lwz r11,25892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25892);
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8310d670
	if (!cr6.eq) goto loc_8310D670;
	// bl 0x8310d3b8
	ctx.lr = 0x8310D670;
	sub_8310D3B8(ctx, base);
loc_8310D670:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r9,-14184
	ctx.r11.s64 = ctx.r9.s64 + -14184;
	// stw r3,-13652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13652, ctx.r3.u32);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// bl 0x8310e020
	ctx.lr = 0x8310D698;
	sub_8310E020(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D6A8"))) PPC_WEAK_FUNC(sub_8310D6A8);
PPC_FUNC_IMPL(__imp__sub_8310D6A8) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310d6e0
	if (!cr6.eq) goto loc_8310D6E0;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// lwz r11,25896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25896);
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8310d6e0
	if (!cr6.eq) goto loc_8310D6E0;
	// bl 0x8310d4a0
	ctx.lr = 0x8310D6E0;
	sub_8310D4A0(ctx, base);
loc_8310D6E0:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// stw r3,-13648(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D6F8"))) PPC_WEAK_FUNC(sub_8310D6F8);
PPC_FUNC_IMPL(__imp__sub_8310D6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,-13536
	ctx.r8.s64 = ctx.r11.s64 + -13536;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8310D70C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8310D714:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x8310d738
	if (cr6.eq) goto loc_8310D738;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8310d714
	if (cr6.eq) goto loc_8310D714;
loc_8310D738:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r7,336
	cr6.compare<uint32_t>(ctx.r7.u32, 336, xer);
	// blt cr6,0x8310d70c
	if (cr6.lt) goto loc_8310D70C;
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D75C"))) PPC_WEAK_FUNC(sub_8310D75C);
PPC_FUNC_IMPL(__imp__sub_8310D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310D760"))) PPC_WEAK_FUNC(sub_8310D760);
PPC_FUNC_IMPL(__imp__sub_8310D760) {
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
	// bl 0x8310d6f8
	ctx.lr = 0x8310D770;
	sub_8310D6F8(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-13536
	ctx.r11.s64 = ctx.r11.s64 + -13536;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8310d7ac
	if (cr6.eq) goto loc_8310D7AC;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,-13652(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310D7AC:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8310d7d4
	if (cr6.eq) goto loc_8310D7D4;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,-13648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13648);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8310D7D4:
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D7E8"))) PPC_WEAK_FUNC(sub_8310D7E8);
PPC_FUNC_IMPL(__imp__sub_8310D7E8) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r3,-13652(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// lwz r31,-13648(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13648);
	// bl 0x8310d398
	ctx.lr = 0x8310D810;
	sub_8310D398(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310d398
	ctx.lr = 0x8310D81C;
	sub_8310D398(ctx, base);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r11,r9,-13192
	ctx.r11.s64 = ctx.r9.s64 + -13192;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// stb r8,-8(r11)
	PPC_STORE_U8(ctx.r11.u32 + -8, ctx.r8.u8);
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r5,-7(r11)
	PPC_STORE_U8(ctx.r11.u32 + -7, ctx.r5.u8);
	// lbz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stb r4,-6(r11)
	PPC_STORE_U8(ctx.r11.u32 + -6, ctx.r4.u8);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r10,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// stb r9,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_8310D874"))) PPC_WEAK_FUNC(sub_8310D874);
PPC_FUNC_IMPL(__imp__sub_8310D874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310D878"))) PPC_WEAK_FUNC(sub_8310D878);
PPC_FUNC_IMPL(__imp__sub_8310D878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,-13016
	ctx.r3.s64 = ctx.r11.s64 + -13016;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D894"))) PPC_WEAK_FUNC(sub_8310D894);
PPC_FUNC_IMPL(__imp__sub_8310D894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310D898"))) PPC_WEAK_FUNC(sub_8310D898);
PPC_FUNC_IMPL(__imp__sub_8310D898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,-12988
	ctx.r3.s64 = ctx.r11.s64 + -12988;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D8B4"))) PPC_WEAK_FUNC(sub_8310D8B4);
PPC_FUNC_IMPL(__imp__sub_8310D8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310D8B8"))) PPC_WEAK_FUNC(sub_8310D8B8);
PPC_FUNC_IMPL(__imp__sub_8310D8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8310D8C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8310D8D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310d8d4
	if (!cr6.eq) goto loc_8310D8D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8310D8F8;
	sub_825A1EB8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8310D8FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310d8fc
	if (!cr6.eq) goto loc_8310D8FC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8310D924;
	sub_825A1EB8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8310D928:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310d928
	if (!cr6.eq) goto loc_8310D928;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8310D950;
	sub_825A1EB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310D958"))) PPC_WEAK_FUNC(sub_8310D958);
PPC_FUNC_IMPL(__imp__sub_8310D958) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8310D970:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310d970
	if (!cr6.eq) goto loc_8310D970;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,-13016
	ctx.r3.s64 = ctx.r10.s64 + -13016;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8310D99C;
	sub_8259CC28(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8310D9A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310d9a0
	if (!cr6.eq) goto loc_8310D9A0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,-12988
	ctx.r3.s64 = ctx.r10.s64 + -12988;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8310D9CC;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_8310D9E0"))) PPC_WEAK_FUNC(sub_8310D9E0);
PPC_FUNC_IMPL(__imp__sub_8310D9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8310D9E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310d9e8
	if (!cr6.eq) goto loc_8310D9E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,-12960
	ctx.r3.s64 = ctx.r10.s64 + -12960;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x8259cc28
	sub_8259CC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310DA10"))) PPC_WEAK_FUNC(sub_8310DA10);
PPC_FUNC_IMPL(__imp__sub_8310DA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8310DA18;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310db18
	if (!cr6.eq) goto loc_8310DB18;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,-13536
	ctx.r31.s64 = ctx.r11.s64 + -13536;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r30,r11,-9472
	ctx.r30.s64 = ctx.r11.s64 + -9472;
loc_8310DA48:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r30,-36
	ctx.r10.s64 = ctx.r30.s64 + -36;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8310DA54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8310da78
	if (cr6.eq) goto loc_8310DA78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8310da54
	if (cr6.eq) goto loc_8310DA54;
loc_8310DA78:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8310dad8
	if (cr6.eq) goto loc_8310DAD8;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310a030
	ctx.lr = 0x8310DA8C;
	sub_8310A030(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8310daa0
	if (!cr6.lt) goto loc_8310DAA0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8310DAA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x8310DAA8;
	sub_83523FD8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8310daf4
	if (cr6.eq) goto loc_8310DAF4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310dacc
	if (cr6.lt) goto loc_8310DACC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8310DACC;
	sub_825952B8(ctx, base);
loc_8310DACC:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
loc_8310DAD8:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r29,336
	cr6.compare<uint32_t>(ctx.r29.u32, 336, xer);
	// blt cr6,0x8310da48
	if (cr6.lt) goto loc_8310DA48;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8310DAF4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310db0c
	if (cr6.lt) goto loc_8310DB0C;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8310DB0C;
	sub_825952B8(ctx, base);
loc_8310DB0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8310DB18:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-9472
	ctx.r4.s64 = ctx.r11.s64 + -9472;
	// bl 0x8310a030
	ctx.lr = 0x8310DB28;
	sub_8310A030(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8310db3c
	if (!cr6.lt) goto loc_8310DB3C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_8310DB3C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x8310DB44;
	sub_83523FD8(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// subfe r31,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x8310db70
	if (cr6.lt) goto loc_8310DB70;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310DB70;
	sub_825952B8(ctx, base);
loc_8310DB70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310DB7C"))) PPC_WEAK_FUNC(sub_8310DB7C);
PPC_FUNC_IMPL(__imp__sub_8310DB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310DB80"))) PPC_WEAK_FUNC(sub_8310DB80);
PPC_FUNC_IMPL(__imp__sub_8310DB80) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r11,-13184
	ctx.r6.s64 = ctx.r11.s64 + -13184;
	// li r8,0
	ctx.r8.s64 = 0;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8310DBB0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bne cr6,0x8310dbf0
	if (!cr6.eq) goto loc_8310DBF0;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
loc_8310DBCC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8310dc44
	if (cr6.eq) goto loc_8310DC44;
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x8310dbcc
	if (cr6.eq) goto loc_8310DBCC;
loc_8310DBF0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r8,8
	cr6.compare<uint32_t>(ctx.r8.u32, 8, xer);
	// blt cr6,0x8310dbb0
	if (cr6.lt) goto loc_8310DBB0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8310DC04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310dc04
	if (!cr6.eq) goto loc_8310DC04;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8310DC2C;
	sub_8259CC28(ctx, base);
loc_8310DC2C:
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
loc_8310DC44:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8310DC54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310dc54
	if (!cr6.eq) goto loc_8310DC54;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8310DC78;
	sub_8259CC28(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8310DC7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310dc7c
	if (!cr6.eq) goto loc_8310DC7C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8310DCA4;
	sub_825A1EB8(ctx, base);
	// b 0x8310dc2c
	goto loc_8310DC2C;
}

__attribute__((alias("__imp__sub_8310DCA8"))) PPC_WEAK_FUNC(sub_8310DCA8);
PPC_FUNC_IMPL(__imp__sub_8310DCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310DCB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8310a030
	ctx.lr = 0x8310DCC0;
	sub_8310A030(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8310d6f8
	ctx.lr = 0x8310DCC8;
	sub_8310D6F8(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,-13536
	ctx.r30.s64 = ctx.r11.s64 + -13536;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r28,r11,-9640
	ctx.r28.s64 = ctx.r11.s64 + -9640;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8310dd04
	if (cr6.eq) goto loc_8310DD04;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x8310DD04;
	sub_825A1EB8(ctx, base);
loc_8310DD04:
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8310dd24
	if (cr6.eq) goto loc_8310DD24;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x8310DD24;
	sub_825A1EB8(ctx, base);
loc_8310DD24:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r6,r28,-24
	ctx.r6.s64 = ctx.r28.s64 + -24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8310d8b8
	ctx.lr = 0x8310DD3C;
	sub_8310D8B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310DD48"))) PPC_WEAK_FUNC(sub_8310DD48);
PPC_FUNC_IMPL(__imp__sub_8310DD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310DD50;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-9428
	ctx.r30.s64 = ctx.r11.s64 + -9428;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8310DD74;
	sub_8259CC28(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
	// addi r31,r11,-12988
	ctx.r31.s64 = ctx.r11.s64 + -12988;
	// li r7,6
	ctx.r7.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x8310DD94;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8310de74
	if (cr6.eq) goto loc_8310DE74;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310ddb0
	if (cr6.lt) goto loc_8310DDB0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8310ddb4
	goto loc_8310DDB4;
loc_8310DDB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8310DDB4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310dca8
	ctx.lr = 0x8310DDC0;
	sub_8310DCA8(ctx, base);
	// cmplwi cr6,r29,22
	cr6.compare<uint32_t>(ctx.r29.u32, 22, xer);
	// beq cr6,0x8310de1c
	if (cr6.eq) goto loc_8310DE1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310d398
	ctx.lr = 0x8310DDD0;
	sub_8310D398(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x8310DDE8;
	sub_82574D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8310DDF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310ddf0
	if (!cr6.eq) goto loc_8310DDF0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,3
	ctx.r5.s64 = 3;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a84c0
	ctx.lr = 0x8310DE1C;
	sub_827A84C0(ctx, base);
loc_8310DE1C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8310de30
	if (!cr6.lt) goto loc_8310DE30;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8310DE30:
	// bl 0x8310e0c0
	ctx.lr = 0x8310DE34;
	sub_8310E0C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310de54
	if (cr6.eq) goto loc_8310DE54;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8310DE54;
	sub_8259CB28(ctx, base);
loc_8310DE54:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310de74
	if (cr6.lt) goto loc_8310DE74;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310DE74;
	sub_825952B8(ctx, base);
loc_8310DE74:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310DE7C"))) PPC_WEAK_FUNC(sub_8310DE7C);
PPC_FUNC_IMPL(__imp__sub_8310DE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310DE80"))) PPC_WEAK_FUNC(sub_8310DE80);
PPC_FUNC_IMPL(__imp__sub_8310DE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310DE88;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-9408
	ctx.r30.s64 = ctx.r11.s64 + -9408;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8310DEAC;
	sub_8259CC28(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
	// addi r31,r11,-12932
	ctx.r31.s64 = ctx.r11.s64 + -12932;
	// li r7,6
	ctx.r7.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x8310DECC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8310dfac
	if (cr6.eq) goto loc_8310DFAC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310dee8
	if (cr6.lt) goto loc_8310DEE8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8310deec
	goto loc_8310DEEC;
loc_8310DEE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8310DEEC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310dca8
	ctx.lr = 0x8310DEF8;
	sub_8310DCA8(ctx, base);
	// cmplwi cr6,r29,22
	cr6.compare<uint32_t>(ctx.r29.u32, 22, xer);
	// beq cr6,0x8310df54
	if (cr6.eq) goto loc_8310DF54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310d398
	ctx.lr = 0x8310DF08;
	sub_8310D398(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x8310DF20;
	sub_82574D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8310DF28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310df28
	if (!cr6.eq) goto loc_8310DF28;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,3
	ctx.r5.s64 = 3;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a84c0
	ctx.lr = 0x8310DF54;
	sub_827A84C0(ctx, base);
loc_8310DF54:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8310df68
	if (!cr6.lt) goto loc_8310DF68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8310DF68:
	// bl 0x8310e0c0
	ctx.lr = 0x8310DF6C;
	sub_8310E0C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310df8c
	if (cr6.eq) goto loc_8310DF8C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8310DF8C;
	sub_8259CB28(ctx, base);
loc_8310DF8C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310dfac
	if (cr6.lt) goto loc_8310DFAC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310DFAC;
	sub_825952B8(ctx, base);
loc_8310DFAC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310DFB4"))) PPC_WEAK_FUNC(sub_8310DFB4);
PPC_FUNC_IMPL(__imp__sub_8310DFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310DFB8"))) PPC_WEAK_FUNC(sub_8310DFB8);
PPC_FUNC_IMPL(__imp__sub_8310DFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// stw r3,-12904(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12904, ctx.r3.u32);
	// bgt cr6,0x8310dfec
	if (cr6.gt) goto loc_8310DFEC;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8310dfec
	if (cr6.eq) goto loc_8310DFEC;
	// bdz 0x8310dfec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8310DFEC;
	// bdnz 0x8310dfec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8310DFEC;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-12900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12900, ctx.r11.u32);
	// blr 
	return;
loc_8310DFEC:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12900, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DFFC"))) PPC_WEAK_FUNC(sub_8310DFFC);
PPC_FUNC_IMPL(__imp__sub_8310DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E000"))) PPC_WEAK_FUNC(sub_8310E000);
PPC_FUNC_IMPL(__imp__sub_8310E000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,-12904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12904);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E00C"))) PPC_WEAK_FUNC(sub_8310E00C);
PPC_FUNC_IMPL(__imp__sub_8310E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E010"))) PPC_WEAK_FUNC(sub_8310E010);
PPC_FUNC_IMPL(__imp__sub_8310E010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,-12900(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12900);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E01C"))) PPC_WEAK_FUNC(sub_8310E01C);
PPC_FUNC_IMPL(__imp__sub_8310E01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E020"))) PPC_WEAK_FUNC(sub_8310E020);
PPC_FUNC_IMPL(__imp__sub_8310E020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// stw r3,-12896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12896, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E02C"))) PPC_WEAK_FUNC(sub_8310E02C);
PPC_FUNC_IMPL(__imp__sub_8310E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E030"))) PPC_WEAK_FUNC(sub_8310E030);
PPC_FUNC_IMPL(__imp__sub_8310E030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,-12896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12896);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E03C"))) PPC_WEAK_FUNC(sub_8310E03C);
PPC_FUNC_IMPL(__imp__sub_8310E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E040"))) PPC_WEAK_FUNC(sub_8310E040);
PPC_FUNC_IMPL(__imp__sub_8310E040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-12904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12904);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E058"))) PPC_WEAK_FUNC(sub_8310E058);
PPC_FUNC_IMPL(__imp__sub_8310E058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r8,92
	ctx.r8.s64 = 92;
loc_8310E06C:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8310e080
	if (cr6.lt) goto loc_8310E080;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8310e084
	goto loc_8310E084;
loc_8310E080:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8310E084:
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8310e0a8
	if (!cr6.eq) goto loc_8310E0A8;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8310e0a0
	if (cr6.lt) goto loc_8310E0A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8310e0a4
	goto loc_8310E0A4;
loc_8310E0A0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8310E0A4:
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_8310E0A8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x8310e06c
	if (cr6.lt) goto loc_8310E06C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E0BC"))) PPC_WEAK_FUNC(sub_8310E0BC);
PPC_FUNC_IMPL(__imp__sub_8310E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E0C0"))) PPC_WEAK_FUNC(sub_8310E0C0);
PPC_FUNC_IMPL(__imp__sub_8310E0C0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
loc_8310E0E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310e0e8
	if (!cr6.eq) goto loc_8310E0E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8310E10C;
	sub_8259CC28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310e058
	ctx.lr = 0x8310E114;
	sub_8310E058(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x8310e128
	if (!cr6.lt) goto loc_8310E128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8310E128:
	// bl 0x832d4520
	ctx.lr = 0x8310E12C;
	sub_832D4520(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8310e168
	if (!cr6.eq) goto loc_8310E168;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310e154
	if (cr6.lt) goto loc_8310E154;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310E154;
	sub_825952B8(ctx, base);
loc_8310E154:
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
loc_8310E168:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310e184
	if (cr6.lt) goto loc_8310E184;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310E184;
	sub_825952B8(ctx, base);
loc_8310E184:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E198"))) PPC_WEAK_FUNC(sub_8310E198);
PPC_FUNC_IMPL(__imp__sub_8310E198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310E1A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8310E1C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310e1c8
	if (!cr6.eq) goto loc_8310E1C8;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8310E1F0;
	sub_8259CC28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8310e058
	ctx.lr = 0x8310E1F8;
	sub_8310E058(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x8310e20c
	if (!cr6.lt) goto loc_8310E20C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8310E20C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-8768
	ctx.r5.s64 = ctx.r11.s64 + -8768;
	// bl 0x831d78c0
	ctx.lr = 0x8310E21C;
	sub_831D78C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8310e280
	if (!cr6.eq) goto loc_8310E280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d7270
	ctx.lr = 0x8310E238;
	sub_831D7270(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831d0920
	ctx.lr = 0x8310E244;
	sub_831D0920(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8310e254
	if (cr6.eq) goto loc_8310E254;
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_8310E254:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x8310e270
	if (!cr6.eq) goto loc_8310E270;
	// bl 0x8387e8e0
	ctx.lr = 0x8310E264;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8310E270:
	// bl 0x8387e8e0
	ctx.lr = 0x8310E274;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8310E280:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8310e28c
	if (cr6.eq) goto loc_8310E28C;
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
loc_8310E28C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310e2ac
	if (cr6.lt) goto loc_8310E2AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310E2AC;
	sub_825952B8(ctx, base);
loc_8310E2AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310E2B8"))) PPC_WEAK_FUNC(sub_8310E2B8);
PPC_FUNC_IMPL(__imp__sub_8310E2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,25928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25928);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E2C4"))) PPC_WEAK_FUNC(sub_8310E2C4);
PPC_FUNC_IMPL(__imp__sub_8310E2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E2C8"))) PPC_WEAK_FUNC(sub_8310E2C8);
PPC_FUNC_IMPL(__imp__sub_8310E2C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,101
	ctx.r3.s64 = 101;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E2D0"))) PPC_WEAK_FUNC(sub_8310E2D0);
PPC_FUNC_IMPL(__imp__sub_8310E2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8310E2D8;
	__savegprlr_29(ctx, base);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8310e2f4
	if (!cr6.eq) goto loc_8310E2F4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8310e2f4
	if (cr6.gt) goto loc_8310E2F4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8310E2F4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bge cr6,0x8310e360
	if (!cr6.lt) goto loc_8310E360;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8310e360
	if (cr6.gt) goto loc_8310E360;
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x8310e328
	if (cr6.lt) goto loc_8310E328;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8310e32c
	goto loc_8310E32C;
loc_8310E328:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8310E32C:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8310E334:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8310e360
	if (cr6.eq) goto loc_8310E360;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
loc_8310E348:
	// lhz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8310e368
	if (cr6.eq) goto loc_8310E368;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bne 0x8310e348
	if (!cr0.eq) goto loc_8310E348;
loc_8310E360:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8310E368:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8310e39c
	if (cr6.eq) goto loc_8310E39C;
loc_8310E37C:
	// lhz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x8310e3b4
	if (!cr6.eq) goto loc_8310E3B4;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8310e37c
	if (!cr0.eq) goto loc_8310E37C;
loc_8310E39C:
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x8310e3cc
	if (cr6.lt) goto loc_8310E3CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r3,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8310E3B4:
	// subf r11,r5,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r5.s64;
	// addi r5,r8,2
	ctx.r5.s64 = ctx.r8.s64 + 2;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// subf r11,r10,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// b 0x8310e334
	goto loc_8310E334;
loc_8310E3CC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r3,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310E3DC"))) PPC_WEAK_FUNC(sub_8310E3DC);
PPC_FUNC_IMPL(__imp__sub_8310E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E3E0"))) PPC_WEAK_FUNC(sub_8310E3E0);
PPC_FUNC_IMPL(__imp__sub_8310E3E0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8310e440
	if (cr6.eq) goto loc_8310E440;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r9,644
	ctx.r9.s64 = 644;
	// divw r8,r10,r9
	ctx.r8.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// ble cr6,0x8310e440
	if (!cr6.gt) goto loc_8310E440;
	// mulli r10,r4,644
	ctx.r10.s64 = ctx.r4.s64 * 644;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,572
	ctx.r4.s64 = ctx.r11.s64 + 572;
	// bl 0x831ce980
	ctx.lr = 0x8310E42C;
	sub_831CE980(ctx, base);
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
loc_8310E440:
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

__attribute__((alias("__imp__sub_8310E454"))) PPC_WEAK_FUNC(sub_8310E454);
PPC_FUNC_IMPL(__imp__sub_8310E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E458"))) PPC_WEAK_FUNC(sub_8310E458);
PPC_FUNC_IMPL(__imp__sub_8310E458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8310e470
	if (cr6.gt) goto loc_8310E470;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8310E470:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8310E478:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8310e478
	if (!cr0.eq) goto loc_8310E478;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E498"))) PPC_WEAK_FUNC(sub_8310E498);
PPC_FUNC_IMPL(__imp__sub_8310E498) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8310e514
	if (cr6.eq) goto loc_8310E514;
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x8310e514
	if (cr6.eq) goto loc_8310E514;
loc_8310E4CC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,572
	ctx.r10.s64 = ctx.r9.s64 + 572;
loc_8310E4D8:
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r5,r11,r4
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x8310e4f8
	if (!cr6.eq) goto loc_8310E4F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310e4d8
	if (cr6.lt) goto loc_8310E4D8;
	// b 0x8310e4fc
	goto loc_8310E4FC;
loc_8310E4F8:
	// li r8,1
	ctx.r8.s64 = 1;
loc_8310E4FC:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310e528
	if (cr6.eq) goto loc_8310E528;
	// addi r9,r9,644
	ctx.r9.s64 = ctx.r9.s64 + 644;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x8310e4cc
	if (!cr6.eq) goto loc_8310E4CC;
loc_8310E514:
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
loc_8310E528:
	// li r5,572
	ctx.r5.s64 = 572;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x831ce980
	ctx.lr = 0x8310E534;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_8310E548"))) PPC_WEAK_FUNC(sub_8310E548);
PPC_FUNC_IMPL(__imp__sub_8310E548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8310E550;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310e578
	if (cr6.eq) goto loc_8310E578;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8310E578:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r5,572
	ctx.r5.s64 = 572;
	// bl 0x831ce980
	ctx.lr = 0x8310E584;
	sub_831CE980(ctx, base);
	// stw r29,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r29.u32);
	// li r9,4
	ctx.r9.s64 = 4;
loc_8310E58C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8310e58c
	if (!cr0.eq) goto loc_8310E58C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310E5B0"))) PPC_WEAK_FUNC(sub_8310E5B0);
PPC_FUNC_IMPL(__imp__sub_8310E5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8310E5B8;
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
	// beq cr6,0x8310e5f8
	if (cr6.eq) goto loc_8310E5F8;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_8310E5D0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8310e5e8
	if (cr6.eq) goto loc_8310E5E8;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8310E5E8;
	sub_831CE980(ctx, base);
loc_8310E5E8:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8310e5d0
	if (!cr6.eq) goto loc_8310E5D0;
loc_8310E5F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310E604"))) PPC_WEAK_FUNC(sub_8310E604);
PPC_FUNC_IMPL(__imp__sub_8310E604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E608"))) PPC_WEAK_FUNC(sub_8310E608);
PPC_FUNC_IMPL(__imp__sub_8310E608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310E610;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,616
	ctx.r31.s64 = ctx.r3.s64 + 616;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310e63c
	if (cr6.lt) goto loc_8310E63C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8310E63C;
	sub_825952B8(ctx, base);
loc_8310E63C:
	// addi r30,r30,588
	ctx.r30.s64 = ctx.r30.s64 + 588;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310e670
	if (cr6.lt) goto loc_8310E670;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8310E670;
	sub_825952B8(ctx, base);
loc_8310E670:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310E684"))) PPC_WEAK_FUNC(sub_8310E684);
PPC_FUNC_IMPL(__imp__sub_8310E684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E688"))) PPC_WEAK_FUNC(sub_8310E688);
PPC_FUNC_IMPL(__imp__sub_8310E688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310E690;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8310e6b4
	if (!cr6.gt) goto loc_8310E6B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8310E6B4;
	sub_831CC150(ctx, base);
loc_8310E6B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8310e73c
	if (!cr6.lt) goto loc_8310E73C;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r29,r4,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8310E6E8;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8310e5b0
	ctx.lr = 0x8310E700;
	sub_8310E5B0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r28,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 4;
	// beq cr6,0x8310e724
	if (cr6.eq) goto loc_8310E724;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8310E724;
	sub_825952B8(ctx, base);
loc_8310E724:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8310E73C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310E744"))) PPC_WEAK_FUNC(sub_8310E744);
PPC_FUNC_IMPL(__imp__sub_8310E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E748"))) PPC_WEAK_FUNC(sub_8310E748);
PPC_FUNC_IMPL(__imp__sub_8310E748) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831d2800
	ctx.lr = 0x8310E76C;
	sub_831D2800(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be33d0
	ctx.lr = 0x8310E77C;
	sub_82BE33D0(ctx, base);
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

__attribute__((alias("__imp__sub_8310E794"))) PPC_WEAK_FUNC(sub_8310E794);
PPC_FUNC_IMPL(__imp__sub_8310E794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E798"))) PPC_WEAK_FUNC(sub_8310E798);
PPC_FUNC_IMPL(__imp__sub_8310E798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x8310e7c8
	if (!cr6.lt) goto loc_8310E7C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8310E7C8:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x8310e7f8
	if (cr6.lt) goto loc_8310E7F8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8310E7F8:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x8310e804
	if (!cr6.lt) goto loc_8310E804;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8310E804:
	// b 0x8310e688
	sub_8310E688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310E808"))) PPC_WEAK_FUNC(sub_8310E808);
PPC_FUNC_IMPL(__imp__sub_8310E808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E80C"))) PPC_WEAK_FUNC(sub_8310E80C);
PPC_FUNC_IMPL(__imp__sub_8310E80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310E810"))) PPC_WEAK_FUNC(sub_8310E810);
PPC_FUNC_IMPL(__imp__sub_8310E810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310E818;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,572
	ctx.r5.s64 = 572;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831ce980
	ctx.lr = 0x8310E82C;
	sub_831CE980(ctx, base);
	// addi r11,r31,572
	ctx.r11.s64 = ctx.r31.s64 + 572;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r30,588
	ctx.r4.s64 = ctx.r30.s64 + 588;
	// lwz r11,572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// lwz r10,576(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// lwz r9,580(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// stw r9,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r9.u32);
	// lwz r8,584(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r27,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r27.u32);
	// stw r29,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r29.u32);
	// stb r29,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x8310E87C;
	sub_8259CB28(ctx, base);
	// stw r27,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r27.u32);
	// stw r29,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r29.u32);
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// stb r29,616(r31)
	PPC_STORE_U8(ctx.r31.u32 + 616, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,616
	ctx.r4.s64 = ctx.r30.s64 + 616;
	// bl 0x8259cb28
	ctx.lr = 0x8310E89C;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310E8A8"))) PPC_WEAK_FUNC(sub_8310E8A8);
PPC_FUNC_IMPL(__imp__sub_8310E8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310E8B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 604, ctx.r11.u32);
	// li r5,644
	ctx.r5.s64 = 644;
	// stw r10,608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 608, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,588(r3)
	PPC_STORE_U8(ctx.r3.u32 + 588, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 636, ctx.r10.u32);
	// addi r30,r3,588
	ctx.r30.s64 = ctx.r3.s64 + 588;
	// stw r11,632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 632, ctx.r11.u32);
	// addi r29,r3,616
	ctx.r29.s64 = ctx.r3.s64 + 616;
	// stb r11,616(r3)
	PPC_STORE_U8(ctx.r3.u32 + 616, ctx.r11.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x8310E8EC;
	sub_831CDCF0(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r11,-22544
	ctx.r28.s64 = ctx.r11.s64 + -22544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8310E904;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8310E914;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310E920"))) PPC_WEAK_FUNC(sub_8310E920);
PPC_FUNC_IMPL(__imp__sub_8310E920) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x8310e958
	if (!cr6.lt) goto loc_8310E958;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8310e95c
	if (!cr6.gt) goto loc_8310E95C;
loc_8310E958:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8310E95C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8310e9a8
	if (cr6.eq) goto loc_8310E9A8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 4;
	// bne cr6,0x8310e98c
	if (!cr6.eq) goto loc_8310E98C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310e798
	ctx.lr = 0x8310E98C;
	sub_8310E798(ctx, base);
loc_8310E98C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310e9d8
	if (cr6.eq) goto loc_8310E9D8;
	// b 0x8310e9d0
	goto loc_8310E9D0;
loc_8310E9A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8310e9c0
	if (!cr6.eq) goto loc_8310E9C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310e798
	ctx.lr = 0x8310E9C0;
	sub_8310E798(ctx, base);
loc_8310E9C0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310e9d8
	if (cr6.eq) goto loc_8310E9D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8310E9D0:
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x831ce980
	ctx.lr = 0x8310E9D8;
	sub_831CE980(ctx, base);
loc_8310E9D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8310E9FC"))) PPC_WEAK_FUNC(sub_8310E9FC);
PPC_FUNC_IMPL(__imp__sub_8310E9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310EA00"))) PPC_WEAK_FUNC(sub_8310EA00);
PPC_FUNC_IMPL(__imp__sub_8310EA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310EA08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8310ea88
	if (cr6.eq) goto loc_8310EA88;
	// addi r31,r3,636
	ctx.r31.s64 = ctx.r3.s64 + 636;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8310EA28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310ea44
	if (cr6.lt) goto loc_8310EA44;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x825952b8
	ctx.lr = 0x8310EA44;
	sub_825952B8(ctx, base);
loc_8310EA44:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310ea6c
	if (cr6.lt) goto loc_8310EA6C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// bl 0x825952b8
	ctx.lr = 0x8310EA6C;
	sub_825952B8(ctx, base);
loc_8310EA6C:
	// stw r29,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r29.u32);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// addi r31,r31,644
	ctx.r31.s64 = ctx.r31.s64 + 644;
	// addi r11,r31,-636
	ctx.r11.s64 = ctx.r31.s64 + -636;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x8310ea28
	if (!cr6.eq) goto loc_8310EA28;
loc_8310EA88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310EA90"))) PPC_WEAK_FUNC(sub_8310EA90);
PPC_FUNC_IMPL(__imp__sub_8310EA90) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8310eaf4
	if (cr6.eq) goto loc_8310EAF4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r9,644
	ctx.r9.s64 = 644;
	// divw r8,r10,r9
	ctx.r8.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// ble cr6,0x8310eaf4
	if (!cr6.gt) goto loc_8310EAF4;
	// mulli r10,r4,644
	ctx.r10.s64 = ctx.r4.s64 * 644;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,588
	ctx.r4.s64 = ctx.r11.s64 + 588;
	// bl 0x8259cb28
	ctx.lr = 0x8310EAE0;
	sub_8259CB28(ctx, base);
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
loc_8310EAF4:
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

__attribute__((alias("__imp__sub_8310EB08"))) PPC_WEAK_FUNC(sub_8310EB08);
PPC_FUNC_IMPL(__imp__sub_8310EB08) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8310eb6c
	if (cr6.eq) goto loc_8310EB6C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r9,644
	ctx.r9.s64 = 644;
	// divw r8,r10,r9
	ctx.r8.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// ble cr6,0x8310eb6c
	if (!cr6.gt) goto loc_8310EB6C;
	// mulli r10,r4,644
	ctx.r10.s64 = ctx.r4.s64 * 644;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,616
	ctx.r4.s64 = ctx.r11.s64 + 616;
	// bl 0x8259cb28
	ctx.lr = 0x8310EB58;
	sub_8259CB28(ctx, base);
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
loc_8310EB6C:
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

__attribute__((alias("__imp__sub_8310EB80"))) PPC_WEAK_FUNC(sub_8310EB80);
PPC_FUNC_IMPL(__imp__sub_8310EB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310EB88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8310ec28
	if (cr6.eq) goto loc_8310EC28;
	// addi r30,r3,588
	ctx.r30.s64 = ctx.r3.s64 + 588;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_8310EBA4:
	// li r10,572
	ctx.r10.s64 = 572;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r9,-588
	ctx.r9.s64 = ctx.r9.s64 + -588;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8310EBB8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8310ebb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8310EBB8;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,-16
	ctx.r9.s64 = ctx.r30.s64 + -16;
	// addi r8,r31,572
	ctx.r8.s64 = ctx.r31.s64 + 572;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8310EBDC:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8310ebdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8310EBDC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// bl 0x8259cb28
	ctx.lr = 0x8310EC00;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x8259cb28
	ctx.lr = 0x8310EC14;
	sub_8259CB28(ctx, base);
	// addi r30,r30,644
	ctx.r30.s64 = ctx.r30.s64 + 644;
	// addi r31,r31,644
	ctx.r31.s64 = ctx.r31.s64 + 644;
	// addi r11,r30,-588
	ctx.r11.s64 = ctx.r30.s64 + -588;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x8310eba4
	if (!cr6.eq) goto loc_8310EBA4;
loc_8310EC28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310EC34"))) PPC_WEAK_FUNC(sub_8310EC34);
PPC_FUNC_IMPL(__imp__sub_8310EC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310EC38"))) PPC_WEAK_FUNC(sub_8310EC38);
PPC_FUNC_IMPL(__imp__sub_8310EC38) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x8310ec84
	if (cr6.eq) goto loc_8310EC84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8310eb80
	ctx.lr = 0x8310EC6C;
	sub_8310EB80(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8310ea00
	ctx.lr = 0x8310EC80;
	sub_8310EA00(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8310EC84:
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

__attribute__((alias("__imp__sub_8310EC9C"))) PPC_WEAK_FUNC(sub_8310EC9C);
PPC_FUNC_IMPL(__imp__sub_8310EC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310ECA0"))) PPC_WEAK_FUNC(sub_8310ECA0);
PPC_FUNC_IMPL(__imp__sub_8310ECA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8310ECA8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,101
	ctx.r11.s64 = 6619136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,50067
	ctx.r10.u64 = ctx.r11.u64 | 50067;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8310eccc
	if (!cr6.gt) goto loc_8310ECCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8310ECCC;
	sub_831CC150(ctx, base);
loc_8310ECCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,644
	ctx.r24.s64 = 644;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8310ed8c
	if (!cr6.lt) goto loc_8310ED8C;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,644
	ctx.r26.s64 = ctx.r4.s64 * 644;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8310ED04;
	sub_82595718(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x8310ed40
	if (cr6.eq) goto loc_8310ED40;
loc_8310ED1C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8310ed30
	if (cr6.eq) goto loc_8310ED30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310e810
	ctx.lr = 0x8310ED30;
	sub_8310E810(ctx, base);
loc_8310ED30:
	// addi r30,r30,644
	ctx.r30.s64 = ctx.r30.s64 + 644;
	// addi r29,r29,644
	ctx.r29.s64 = ctx.r29.s64 + 644;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x8310ed1c
	if (!cr6.eq) goto loc_8310ED1C;
loc_8310ED40:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// beq cr6,0x8310ed74
	if (cr6.eq) goto loc_8310ED74;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8310ea00
	ctx.lr = 0x8310ED64;
	sub_8310EA00(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8310ED74;
	sub_825952B8(ctx, base);
loc_8310ED74:
	// mulli r11,r30,644
	ctx.r11.s64 = ctx.r30.s64 * 644;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8310ED8C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310ED94"))) PPC_WEAK_FUNC(sub_8310ED94);
PPC_FUNC_IMPL(__imp__sub_8310ED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310ED98"))) PPC_WEAK_FUNC(sub_8310ED98);
PPC_FUNC_IMPL(__imp__sub_8310ED98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8310EDA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310eee0
	if (cr6.eq) goto loc_8310EEE0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,5
	ctx.r28.s64 = 5;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8310EDC4:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x8310edec
	if (cr6.lt) goto loc_8310EDEC;
	// beq cr6,0x8310edd8
	if (cr6.eq) goto loc_8310EDD8;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8310ee18
	goto loc_8310EE18;
loc_8310EDD8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310ee18
	if (cr6.eq) goto loc_8310EE18;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x8310ee18
	goto loc_8310EE18;
loc_8310EDEC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8310ee18
	if (!cr6.eq) goto loc_8310EE18;
loc_8310EDFC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r28,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8310edfc
	if (!cr0.eq) goto loc_8310EDFC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8310EE18:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832d22b8
	ctx.lr = 0x8310EE20;
	sub_832D22B8(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310edc4
	if (cr6.eq) goto loc_8310EDC4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,24
	ctx.r30.s64 = 24;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r29,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r29.u8);
	// stb r29,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r29.u8);
	// beq cr6,0x8310ee70
	if (cr6.eq) goto loc_8310EE70;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8310EE5C;
	sub_82595150(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82416268
	ctx.lr = 0x8310EE64;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8310EE6C;
	sub_82595170(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_8310EE70:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8310ee8c
	if (cr6.eq) goto loc_8310EE8C;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x8310EE88;
	sub_825952B8(ctx, base);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_8310EE8C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310eebc
	if (cr6.eq) goto loc_8310EEBC;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8310EEA8;
	sub_82595150(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82416268
	ctx.lr = 0x8310EEB0;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8310EEB8;
	sub_82595170(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_8310EEBC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d1a68
	ctx.lr = 0x8310EEC4;
	sub_832D1A68(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832d1a68
	ctx.lr = 0x8310EECC;
	sub_832D1A68(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bl 0x8310ec38
	ctx.lr = 0x8310EEE0;
	sub_8310EC38(ctx, base);
loc_8310EEE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310EEE8"))) PPC_WEAK_FUNC(sub_8310EEE8);
PPC_FUNC_IMPL(__imp__sub_8310EEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,101
	ctx.r10.s64 = 6619136;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,644
	ctx.r9.s64 = 644;
	// ori r8,r10,50067
	ctx.r8.u64 = ctx.r10.u64 | 50067;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x8310ef1c
	if (!cr6.lt) goto loc_8310EF1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8310EF1C:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x8310ef4c
	if (cr6.lt) goto loc_8310EF4C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8310EF4C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8310ef58
	if (!cr6.lt) goto loc_8310EF58;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8310EF58:
	// b 0x8310eca0
	sub_8310ECA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310EF5C"))) PPC_WEAK_FUNC(sub_8310EF5C);
PPC_FUNC_IMPL(__imp__sub_8310EF5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EF60"))) PPC_WEAK_FUNC(sub_8310EF60);
PPC_FUNC_IMPL(__imp__sub_8310EF60) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,572
	ctx.r5.s64 = 572;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// stb r11,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8310EFDC;
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

__attribute__((alias("__imp__sub_8310EFF4"))) PPC_WEAK_FUNC(sub_8310EFF4);
PPC_FUNC_IMPL(__imp__sub_8310EFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310EFF8"))) PPC_WEAK_FUNC(sub_8310EFF8);
PPC_FUNC_IMPL(__imp__sub_8310EFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8310F000;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8310ed98
	ctx.lr = 0x8310F00C;
	sub_8310ED98(ctx, base);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f040
	if (cr6.eq) goto loc_8310F040;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8310ea00
	ctx.lr = 0x8310F030;
	sub_8310EA00(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8310F040;
	sub_825952B8(ctx, base);
loc_8310F040:
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310f070
	if (cr6.lt) goto loc_8310F070;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8310F070;
	sub_825952B8(ctx, base);
loc_8310F070:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310F088"))) PPC_WEAK_FUNC(sub_8310F088);
PPC_FUNC_IMPL(__imp__sub_8310F088) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x8310f0c0
	if (!cr6.lt) goto loc_8310F0C0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8310f0c4
	if (!cr6.gt) goto loc_8310F0C4;
loc_8310F0C0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8310F0C4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8310f114
	if (cr6.eq) goto loc_8310F114;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,644
	ctx.r9.s64 = 644;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x8310f0f8
	if (!cr6.eq) goto loc_8310F0F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310eee8
	ctx.lr = 0x8310F0F8;
	sub_8310EEE8(ctx, base);
loc_8310F0F8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f140
	if (cr6.eq) goto loc_8310F140;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,644
	ctx.r11.s64 = ctx.r30.s64 * 644;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8310f13c
	goto loc_8310F13C;
loc_8310F114:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8310f12c
	if (!cr6.eq) goto loc_8310F12C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310eee8
	ctx.lr = 0x8310F12C;
	sub_8310EEE8(ctx, base);
loc_8310F12C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f140
	if (cr6.eq) goto loc_8310F140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8310F13C:
	// bl 0x8310e810
	ctx.lr = 0x8310F140;
	sub_8310E810(ctx, base);
loc_8310F140:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,644
	ctx.r11.s64 = ctx.r11.s64 + 644;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8310F164"))) PPC_WEAK_FUNC(sub_8310F164);
PPC_FUNC_IMPL(__imp__sub_8310F164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310F168"))) PPC_WEAK_FUNC(sub_8310F168);
PPC_FUNC_IMPL(__imp__sub_8310F168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8310F170;
	__savegprlr_14(ctx, base);
	// stwu r1,-3984(r1)
	ea = -3984 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310f9d0
	if (!cr6.eq) goto loc_8310F9D0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r25,r11,-7464
	ctx.r25.s64 = ctx.r11.s64 + -7464;
	// addi r16,r3,4
	ctx.r16.s64 = ctx.r3.s64 + 4;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r20,24
	ctx.r20.s64 = 24;
	// ori r15,r8,65535
	ctx.r15.u64 = ctx.r8.u64 | 65535;
	// li r17,7
	ctx.r17.s64 = 7;
	// ori r18,r7,65001
	ctx.r18.u64 = ctx.r7.u64 | 65001;
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r14,r10,32068
	ctx.r14.s64 = ctx.r10.s64 + 32068;
	// addi r19,r9,32128
	ctx.r19.s64 = ctx.r9.s64 + 32128;
loc_8310F1C8:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8310f9c4
	if (cr6.gt) goto loc_8310F9C4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8310f1fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8310F1FC;
	// bdzf 4*cr6+eq,0x8310f308
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8310F308;
	// bdzf 4*cr6+eq,0x8310f448
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8310F448;
	// bdzf 4*cr6+eq,0x8310f980
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8310F980;
	// bne cr6,0x8310f9c0
	if (!cr6.eq) goto loc_8310F9C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832d22b8
	ctx.lr = 0x8310F1F8;
	sub_832D22B8(ctx, base);
	// b 0x8310f9c4
	goto loc_8310F9C4;
loc_8310F1FC:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310f308
	if (!cr6.eq) goto loc_8310F308;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x832e2d68
	ctx.lr = 0x8310F21C;
	sub_832E2D68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f244
	if (cr6.eq) goto loc_8310F244;
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
loc_8310F228:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r16
	ea = ctx.r16.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r16
	ea = ctx.r16.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8310f228
	if (!cr0.eq) goto loc_8310F228;
	// b 0x8310f9c4
	goto loc_8310F9C4;
loc_8310F244:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// ori r8,r10,26214
	ctx.r8.u64 = ctx.r10.u64 | 26214;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// stb r11,21(r27)
	PPC_STORE_U8(ctx.r27.u32 + 21, ctx.r11.u8);
	// bgt cr6,0x8310f26c
	if (cr6.gt) goto loc_8310F26C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8310f270
	goto loc_8310F270;
loc_8310F26C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8310F270:
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82595718
	ctx.lr = 0x8310F280;
	sub_82595718(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r3.u32);
	// cmplw cr6,r11,r15
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, xer);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8310f298
	if (!cr6.gt) goto loc_8310F298;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8310F298:
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82595718
	ctx.lr = 0x8310F2A8;
	sub_82595718(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r3.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310f308
	if (cr6.eq) goto loc_8310F308;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r31,r1,2072
	ctx.r31.s64 = ctx.r1.s64 + 2072;
loc_8310F2C8:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// li r5,40
	ctx.r5.s64 = 40;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x8310F2DC;
	sub_831CE980(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,180
	ctx.r31.s64 = ctx.r31.s64 + 180;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// blt cr6,0x8310f2c8
	if (cr6.lt) goto loc_8310F2C8;
loc_8310F308:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r31,r27,16
	ctx.r31.s64 = ctx.r27.s64 + 16;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f320
	if (cr6.eq) goto loc_8310F320;
	// bl 0x832d1a68
	ctx.lr = 0x8310F31C;
	sub_832D1A68(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_8310F320:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310f350
	if (cr6.eq) goto loc_8310F350;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82595150
	ctx.lr = 0x8310F33C;
	sub_82595150(ctx, base);
	// lwz r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// bl 0x82416268
	ctx.lr = 0x8310F344;
	sub_82416268(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82595170
	ctx.lr = 0x8310F34C;
	sub_82595170(ctx, base);
	// stw r26,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r26.u32);
loc_8310F350:
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// beq cr6,0x8310f370
	if (cr6.eq) goto loc_8310F370;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,20(r27)
	PPC_STORE_U8(ctx.r27.u32 + 20, ctx.r11.u8);
loc_8310F370:
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// lbz r10,21(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 21);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8310f3b8
	if (cr6.gt) goto loc_8310F3B8;
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8310f39c
	if (cr6.eq) goto loc_8310F39C;
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x825952b8
	ctx.lr = 0x8310F398;
	sub_825952B8(ctx, base);
	// stw r26,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r26.u32);
loc_8310F39C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r16
	ea = ctx.r16.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r16
	ea = ctx.r16.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8310f39c
	if (!cr0.eq) goto loc_8310F39C;
	// b 0x8310f9c4
	goto loc_8310F9C4;
loc_8310F3B8:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832e2f60
	ctx.lr = 0x8310F3E4;
	sub_832E2F60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f400
	if (cr6.eq) goto loc_8310F400;
loc_8310F3EC:
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,20(r27)
	PPC_STORE_U8(ctx.r27.u32 + 20, ctx.r10.u8);
	// b 0x8310f9c4
	goto loc_8310F9C4;
loc_8310F400:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8310f3ec
	if (cr6.eq) goto loc_8310F3EC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82595718
	ctx.lr = 0x8310F420;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x832d31b8
	ctx.lr = 0x8310F440;
	sub_832D31B8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r10,23(r27)
	PPC_STORE_U8(ctx.r27.u32 + 23, ctx.r10.u8);
loc_8310F448:
	// addi r22,r27,64
	ctx.r22.s64 = ctx.r27.s64 + 64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8310ec38
	ctx.lr = 0x8310F454;
	sub_8310EC38(ctx, base);
	// lbz r10,22(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 22);
	// lbz r11,23(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 23);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8310f494
	if (cr6.gt) goto loc_8310F494;
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,20(r27)
	PPC_STORE_U8(ctx.r27.u32 + 20, ctx.r6.u8);
loc_8310F478:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r16
	ea = ctx.r16.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r8,0,r16
	ea = ctx.r16.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8310f478
	if (!cr0.eq) goto loc_8310F478;
	// b 0x8310f9c4
	goto loc_8310F9C4;
loc_8310F494:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r26,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r26.u16);
	// beq cr6,0x8310f4c0
	if (cr6.eq) goto loc_8310F4C0;
	// mulli r10,r10,820
	ctx.r10.s64 = ctx.r10.s64 * 820;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,572
	ctx.r4.s64 = ctx.r11.s64 + 572;
	// bl 0x8310e748
	ctx.lr = 0x8310F4C0;
	sub_8310E748(ctx, base);
loc_8310F4C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831d2800
	ctx.lr = 0x8310F4C8;
	sub_831D2800(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8310e2d0
	ctx.lr = 0x8310F4DC;
	sub_8310E2D0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8310f968
	if (cr6.eq) goto loc_8310F968;
	// lwz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8310f508
	if (!cr6.eq) goto loc_8310F508;
	// lbz r11,22(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 22);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,22(r27)
	PPC_STORE_U8(ctx.r27.u32 + 22, ctx.r11.u8);
	// bl 0x82be3090
	ctx.lr = 0x8310F504;
	sub_82BE3090(ctx, base);
	// b 0x8310f9c4
	goto loc_8310F9C4;
loc_8310F508:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// lbz r9,22(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 22);
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mulli r9,r9,820
	ctx.r9.s64 = ctx.r9.s64 * 820;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832e2be8
	ctx.lr = 0x8310F54C;
	sub_832E2BE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f56c
	if (cr6.eq) goto loc_8310F56C;
	// lbz r11,22(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 22);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,22(r27)
	PPC_STORE_U8(ctx.r27.u32 + 22, ctx.r11.u8);
	// bl 0x82be3090
	ctx.lr = 0x8310F568;
	sub_82BE3090(ctx, base);
	// b 0x8310f9c4
	goto loc_8310F9C4;
loc_8310F56C:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8310f590
	if (!cr6.eq) goto loc_8310F590;
	// lbz r11,22(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 22);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,22(r27)
	PPC_STORE_U8(ctx.r27.u32 + 22, ctx.r11.u8);
	// bl 0x82be3090
	ctx.lr = 0x8310F58C;
	sub_82BE3090(ctx, base);
	// b 0x8310f9c4
	goto loc_8310F9C4;
loc_8310F590:
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82595718
	ctx.lr = 0x8310F5A0;
	sub_82595718(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x832d31b8
	ctx.lr = 0x8310F5BC;
	sub_832D31B8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x8310f5d0
	if (!cr6.lt) goto loc_8310F5D0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_8310F5D0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,520
	ctx.r8.s64 = 520;
	// addi r7,r1,1504
	ctx.r7.s64 = ctx.r1.s64 + 1504;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x832d2dc0
	ctx.lr = 0x8310F5F0;
	sub_832D2DC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f600
	if (cr6.eq) goto loc_8310F600;
	// addi r11,r1,1504
	ctx.r11.s64 = ctx.r1.s64 + 1504;
	// stbx r26,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r26.u8);
loc_8310F600:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// addi r3,r27,36
	ctx.r3.s64 = ctx.r27.s64 + 36;
	// stw r26,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310f61c
	if (cr6.lt) goto loc_8310F61C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8310f620
	goto loc_8310F620;
loc_8310F61C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8310F620:
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// addi r4,r1,1504
	ctx.r4.s64 = ctx.r1.s64 + 1504;
	// bl 0x8259d6c0
	ctx.lr = 0x8310F62C;
	sub_8259D6C0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310f910
	if (cr6.eq) goto loc_8310F910;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_8310F654:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,2032
	ctx.r4.s64 = ctx.r1.s64 + 2032;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832e30f0
	ctx.lr = 0x8310F664;
	sub_832E30F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8310f8fc
	if (!cr6.eq) goto loc_8310F8FC;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8310e8a8
	ctx.lr = 0x8310F674;
	sub_8310E8A8(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// li r5,572
	ctx.r5.s64 = 572;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x8310F684;
	sub_831CE980(ctx, base);
	// li r5,572
	ctx.r5.s64 = 572;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8310F694;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,1504
	ctx.r4.s64 = ctx.r1.s64 + 1504;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82475d40
	ctx.lr = 0x8310F6A0;
	sub_82475D40(ctx, base);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r30,r11,984
	ctx.r30.s64 = ctx.r11.s64 + 984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82595718
	ctx.lr = 0x8310F6BC;
	sub_82595718(ctx, base);
	// li r5,984
	ctx.r5.s64 = 984;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x8310F6CC;
	sub_831CE980(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8310f6e0
	if (!cr6.lt) goto loc_8310F6E0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_8310F6E0:
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x831ce980
	ctx.lr = 0x8310F6EC;
	sub_831CE980(ctx, base);
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,892
	ctx.r6.s64 = ctx.r1.s64 + 892;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x83355940
	ctx.lr = 0x8310F70C;
	sub_83355940(ctx, base);
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x825952b8
	ctx.lr = 0x8310F71C;
	sub_825952B8(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// beq cr6,0x8310f784
	if (cr6.eq) goto loc_8310F784;
	// addi r11,r1,892
	ctx.r11.s64 = ctx.r1.s64 + 892;
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_8310F734:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8310F73C:
	// addi r11,r1,892
	ctx.r11.s64 = ctx.r1.s64 + 892;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x8310f764
	if (!cr6.eq) goto loc_8310F764;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8310f73c
	if (cr6.lt) goto loc_8310F73C;
	// b 0x8310f768
	goto loc_8310F768;
loc_8310F764:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_8310F768:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310f784
	if (!cr6.eq) goto loc_8310F784;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, xer);
	// bne cr6,0x8310f734
	if (!cr6.eq) goto loc_8310F734;
loc_8310F784:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310f8cc
	if (!cr6.eq) goto loc_8310F8CC;
	// addi r31,r25,652
	ctx.r31.s64 = ctx.r25.s64 + 652;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82be3508
	ctx.lr = 0x8310F7A0;
	sub_82BE3508(ctx, base);
	// lwz r6,256(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8310f7f8
	if (cr6.eq) goto loc_8310F7F8;
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x8310f7c0
	if (!cr6.lt) goto loc_8310F7C0;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
loc_8310F7C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,520
	ctx.r8.s64 = 520;
	// addi r7,r1,976
	ctx.r7.s64 = ctx.r1.s64 + 976;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x832d2dc0
	ctx.lr = 0x8310F7DC;
	sub_832D2DC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f7ec
	if (cr6.eq) goto loc_8310F7EC;
	// addi r11,r1,976
	ctx.r11.s64 = ctx.r1.s64 + 976;
	// stbx r26,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r26.u8);
loc_8310F7EC:
	// addi r4,r1,976
	ctx.r4.s64 = ctx.r1.s64 + 976;
	// addi r3,r1,908
	ctx.r3.s64 = ctx.r1.s64 + 908;
	// bl 0x8259d6c0
	ctx.lr = 0x8310F7F8;
	sub_8259D6C0(ctx, base);
loc_8310F7F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82be3508
	ctx.lr = 0x8310F804;
	sub_82BE3508(ctx, base);
	// lwz r6,288(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8310f85c
	if (cr6.eq) goto loc_8310F85C;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x8310f824
	if (!cr6.lt) goto loc_8310F824;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
loc_8310F824:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,520
	ctx.r8.s64 = 520;
	// addi r7,r1,976
	ctx.r7.s64 = ctx.r1.s64 + 976;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x832d2dc0
	ctx.lr = 0x8310F840;
	sub_832D2DC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f850
	if (cr6.eq) goto loc_8310F850;
	// addi r11,r1,976
	ctx.r11.s64 = ctx.r1.s64 + 976;
	// stbx r26,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r26.u8);
loc_8310F850:
	// addi r4,r1,976
	ctx.r4.s64 = ctx.r1.s64 + 976;
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// bl 0x8259d6c0
	ctx.lr = 0x8310F85C;
	sub_8259D6C0(ctx, base);
loc_8310F85C:
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8310f088
	ctx.lr = 0x8310F868;
	sub_8310F088(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,892
	ctx.r4.s64 = ctx.r1.s64 + 892;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x831ce980
	ctx.lr = 0x8310F878;
	sub_831CE980(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8310e920
	ctx.lr = 0x8310F884;
	sub_8310E920(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x8310f898
	if (cr6.lt) goto loc_8310F898;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x8310F898;
	sub_82416268(ctx, base);
loc_8310F898:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r17,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r17.u32);
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r26.u32);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// sth r26,272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 272, ctx.r26.u16);
	// blt cr6,0x8310f8b8
	if (cr6.lt) goto loc_8310F8B8;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x8310F8B8;
	sub_82416268(ctx, base);
loc_8310F8B8:
	// lwz r28,196(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r17,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r17.u32);
	// stw r26,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r26.u32);
	// sth r26,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r26.u16);
loc_8310F8CC:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310f8e4
	if (cr6.lt) goto loc_8310F8E4;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x8310F8E4;
	sub_82416268(ctx, base);
loc_8310F8E4:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r26.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// bl 0x8310e608
	ctx.lr = 0x8310F8FC;
	sub_8310E608(ctx, base);
loc_8310F8FC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,984
	ctx.r25.s64 = ctx.r25.s64 + 984;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// blt cr6,0x8310f654
	if (cr6.lt) goto loc_8310F654;
loc_8310F910:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x832d1a68
	ctx.lr = 0x8310F918;
	sub_832D1A68(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x8310f940
	if (cr6.eq) goto loc_8310F940;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595150
	ctx.lr = 0x8310F930;
	sub_82595150(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82416268
	ctx.lr = 0x8310F938;
	sub_82416268(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595170
	ctx.lr = 0x8310F940;
	sub_82595170(ctx, base);
loc_8310F940:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r16
	ea = ctx.r16.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r16
	ea = ctx.r16.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8310f940
	if (!cr0.eq) goto loc_8310F940;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f73d60
	ctx.lr = 0x8310F960;
	sub_82F73D60(ctx, base);
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r24,-1
	ctx.r24.s64 = -1;
loc_8310F968:
	// lbz r11,22(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 22);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,22(r27)
	PPC_STORE_U8(ctx.r27.u32 + 22, ctx.r11.u8);
	// bl 0x82be3090
	ctx.lr = 0x8310F97C;
	sub_82BE3090(ctx, base);
	// b 0x8310f9c4
	goto loc_8310F9C4;
loc_8310F980:
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r27,80
	ctx.r3.s64 = ctx.r27.s64 + 80;
	// lwz r4,652(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 652);
	// bl 0x832e30f0
	ctx.lr = 0x8310F994;
	sub_832E30F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310f9a4
	if (cr6.eq) goto loc_8310F9A4;
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// stw r26,652(r27)
	PPC_STORE_U32(ctx.r27.u32 + 652, ctx.r26.u32);
loc_8310F9A4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r16
	ea = ctx.r16.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r16
	ea = ctx.r16.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8310f9a4
	if (!cr0.eq) goto loc_8310F9A4;
	// b 0x8310f9c4
	goto loc_8310F9C4;
loc_8310F9C0:
	// stb r21,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r21.u8);
loc_8310F9C4:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310f1c8
	if (cr6.eq) goto loc_8310F1C8;
loc_8310F9D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3984
	ctx.r1.s64 = ctx.r1.s64 + 3984;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310F9DC"))) PPC_WEAK_FUNC(sub_8310F9DC);
PPC_FUNC_IMPL(__imp__sub_8310F9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310F9E0"))) PPC_WEAK_FUNC(sub_8310F9E0);
PPC_FUNC_IMPL(__imp__sub_8310F9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310fa58
	if (!cr6.eq) goto loc_8310FA58;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-3736
	ctx.r5.s64 = ctx.r10.s64 + -3736;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d86c8
	ctx.lr = 0x8310FA30;
	sub_831D86C8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310fa58
	if (cr6.eq) goto loc_8310FA58;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8310FA40:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8310fa40
	if (!cr0.eq) goto loc_8310FA40;
loc_8310FA58:
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

__attribute__((alias("__imp__sub_8310FA70"))) PPC_WEAK_FUNC(sub_8310FA70);
PPC_FUNC_IMPL(__imp__sub_8310FA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-7136
	ctx.r5.s64 = ctx.r11.s64 + -7136;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573118
	ctx.lr = 0x8310FA94;
	sub_82573118(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83104018
	ctx.lr = 0x8310FA9C;
	sub_83104018(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FAAC"))) PPC_WEAK_FUNC(sub_8310FAAC);
PPC_FUNC_IMPL(__imp__sub_8310FAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310FAB0"))) PPC_WEAK_FUNC(sub_8310FAB0);
PPC_FUNC_IMPL(__imp__sub_8310FAB0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// addi r30,r11,-7156
	ctx.r30.s64 = ctx.r11.s64 + -7156;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,-30
	ctx.r4.s64 = ctx.r30.s64 + -30;
	// bl 0x8259cc28
	ctx.lr = 0x8310FAF4;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x8310fb0c
	if (cr6.lt) goto loc_8310FB0C;
	// bne cr6,0x8310fb1c
	if (!cr6.eq) goto loc_8310FB1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,19
	ctx.r5.s64 = 19;
	// b 0x8310fb14
	goto loc_8310FB14;
loc_8310FB0C:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// li r5,26
	ctx.r5.s64 = 26;
loc_8310FB14:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8310FB1C;
	sub_8259CC28(ctx, base);
loc_8310FB1C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8310fb30
	if (!cr6.lt) goto loc_8310FB30;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8310FB30:
	// bl 0x83104018
	ctx.lr = 0x8310FB34;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bne cr6,0x8310fb68
	if (!cr6.eq) goto loc_8310FB68;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310fb60
	if (cr6.lt) goto loc_8310FB60;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310FB60;
	sub_825952B8(ctx, base);
loc_8310FB60:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8310fb88
	goto loc_8310FB88;
loc_8310FB68:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310fb84
	if (cr6.lt) goto loc_8310FB84;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8310FB84;
	sub_825952B8(ctx, base);
loc_8310FB84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310FB88:
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

__attribute__((alias("__imp__sub_8310FBA0"))) PPC_WEAK_FUNC(sub_8310FBA0);
PPC_FUNC_IMPL(__imp__sub_8310FBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-6840
	ctx.r3.s64 = ctx.r11.s64 + -6840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FBAC"))) PPC_WEAK_FUNC(sub_8310FBAC);
PPC_FUNC_IMPL(__imp__sub_8310FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310FBB0"))) PPC_WEAK_FUNC(sub_8310FBB0);
PPC_FUNC_IMPL(__imp__sub_8310FBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,64
	cr6.compare<uint32_t>(ctx.r3.u32, 64, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,26320
	ctx.r10.s64 = ctx.r10.s64 + 26320;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// li r5,48
	ctx.r5.s64 = 48;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310FBDC"))) PPC_WEAK_FUNC(sub_8310FBDC);
PPC_FUNC_IMPL(__imp__sub_8310FBDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FBE0"))) PPC_WEAK_FUNC(sub_8310FBE0);
PPC_FUNC_IMPL(__imp__sub_8310FBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r10,r11,26320
	ctx.r10.s64 = ctx.r11.s64 + 26320;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FBF0"))) PPC_WEAK_FUNC(sub_8310FBF0);
PPC_FUNC_IMPL(__imp__sub_8310FBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r10,r11,26320
	ctx.r10.s64 = ctx.r11.s64 + 26320;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FC00"))) PPC_WEAK_FUNC(sub_8310FC00);
PPC_FUNC_IMPL(__imp__sub_8310FC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// stw r3,26320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26320, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FC0C"))) PPC_WEAK_FUNC(sub_8310FC0C);
PPC_FUNC_IMPL(__imp__sub_8310FC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310FC10"))) PPC_WEAK_FUNC(sub_8310FC10);
PPC_FUNC_IMPL(__imp__sub_8310FC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,64
	cr6.compare<uint32_t>(ctx.r3.u32, 64, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// addi r10,r10,26320
	ctx.r10.s64 = ctx.r10.s64 + 26320;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r10,52
	ctx.r5.s64 = ctx.r10.s64 + 52;
	// subfe r4,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stwx r4,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FC44"))) PPC_WEAK_FUNC(sub_8310FC44);
PPC_FUNC_IMPL(__imp__sub_8310FC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310FC48"))) PPC_WEAK_FUNC(sub_8310FC48);
PPC_FUNC_IMPL(__imp__sub_8310FC48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,64
	cr6.compare<uint32_t>(ctx.r3.u32, 64, xer);
	// blt cr6,0x8310fc58
	if (cr6.lt) goto loc_8310FC58;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8310FC58:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,26320
	ctx.r11.s64 = ctx.r10.s64 + 26320;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FC84"))) PPC_WEAK_FUNC(sub_8310FC84);
PPC_FUNC_IMPL(__imp__sub_8310FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310FC88"))) PPC_WEAK_FUNC(sub_8310FC88);
PPC_FUNC_IMPL(__imp__sub_8310FC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,64
	cr6.compare<uint32_t>(ctx.r3.u32, 64, xer);
	// blt cr6,0x8310fc98
	if (cr6.lt) goto loc_8310FC98;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8310FC98:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,26320
	ctx.r11.s64 = ctx.r10.s64 + 26320;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCB8"))) PPC_WEAK_FUNC(sub_8310FCB8);
PPC_FUNC_IMPL(__imp__sub_8310FCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,64
	cr6.compare<uint32_t>(ctx.r3.u32, 64, xer);
	// blt cr6,0x8310fcc8
	if (cr6.lt) goto loc_8310FCC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8310FCC8:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,26320
	ctx.r10.s64 = ctx.r10.s64 + 26320;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCE8"))) PPC_WEAK_FUNC(sub_8310FCE8);
PPC_FUNC_IMPL(__imp__sub_8310FCE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3080
	cr6.compare<uint32_t>(ctx.r4.u32, 3080, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r5,3080
	ctx.r5.s64 = 3080;
	// addi r4,r11,26320
	ctx.r4.s64 = ctx.r11.s64 + 26320;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310FD00"))) PPC_WEAK_FUNC(sub_8310FD00);
PPC_FUNC_IMPL(__imp__sub_8310FD00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FD04"))) PPC_WEAK_FUNC(sub_8310FD04);
PPC_FUNC_IMPL(__imp__sub_8310FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310FD08"))) PPC_WEAK_FUNC(sub_8310FD08);
PPC_FUNC_IMPL(__imp__sub_8310FD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3080
	cr6.compare<uint32_t>(ctx.r4.u32, 3080, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26320
	ctx.r3.s64 = ctx.r11.s64 + 26320;
	// li r5,3080
	ctx.r5.s64 = 3080;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310FD24"))) PPC_WEAK_FUNC(sub_8310FD24);
PPC_FUNC_IMPL(__imp__sub_8310FD24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FD28"))) PPC_WEAK_FUNC(sub_8310FD28);
PPC_FUNC_IMPL(__imp__sub_8310FD28) {
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
	// cmplwi cr6,r3,64
	cr6.compare<uint32_t>(ctx.r3.u32, 64, xer);
	// blt cr6,0x8310fd4c
	if (cr6.lt) goto loc_8310FD4C;
loc_8310FD44:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8310fdd4
	goto loc_8310FDD4;
loc_8310FD4C:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r31,r11,26320
	ctx.r31.s64 = ctx.r11.s64 + 26320;
	// rlwinm r30,r10,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8310fd44
	if (cr6.eq) goto loc_8310FD44;
	// bl 0x83108968
	ctx.lr = 0x8310FD74;
	sub_83108968(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83108978
	ctx.lr = 0x8310FD7C;
	sub_83108978(ctx, base);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x8310fd44
	if (cr6.gt) goto loc_8310FD44;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8310fdd0
	if (cr6.eq) goto loc_8310FDD0;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
loc_8310FDA0:
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bge cr6,0x8310fdb4
	if (!cr6.lt) goto loc_8310FDB4;
	// lwz r7,-40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8310fdc0
	if (cr6.gt) goto loc_8310FDC0;
loc_8310FDB4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x8310fd44
	if (cr6.eq) goto loc_8310FD44;
loc_8310FDC0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8310fda0
	if (cr6.lt) goto loc_8310FDA0;
loc_8310FDD0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8310FDD4:
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

__attribute__((alias("__imp__sub_8310FDEC"))) PPC_WEAK_FUNC(sub_8310FDEC);
PPC_FUNC_IMPL(__imp__sub_8310FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310FDF0"))) PPC_WEAK_FUNC(sub_8310FDF0);
PPC_FUNC_IMPL(__imp__sub_8310FDF0) {
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
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8310fe44
	if (!cr6.eq) goto loc_8310FE44;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8310FE28;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310fe3c
	if (cr6.eq) goto loc_8310FE3C;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// bl 0x83114c20
	ctx.lr = 0x8310FE38;
	sub_83114C20(ctx, base);
	// b 0x8310fe40
	goto loc_8310FE40;
loc_8310FE3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8310FE40:
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
loc_8310FE44:
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

__attribute__((alias("__imp__sub_8310FE58"))) PPC_WEAK_FUNC(sub_8310FE58);
PPC_FUNC_IMPL(__imp__sub_8310FE58) {
	PPC_FUNC_PROLOGUE();
	// b 0x83103260
	sub_83103260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8310FE5C"))) PPC_WEAK_FUNC(sub_8310FE5C);
PPC_FUNC_IMPL(__imp__sub_8310FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8310FE60"))) PPC_WEAK_FUNC(sub_8310FE60);
PPC_FUNC_IMPL(__imp__sub_8310FE60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FE68"))) PPC_WEAK_FUNC(sub_8310FE68);
PPC_FUNC_IMPL(__imp__sub_8310FE68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FE70"))) PPC_WEAK_FUNC(sub_8310FE70);
PPC_FUNC_IMPL(__imp__sub_8310FE70) {
	PPC_FUNC_PROLOGUE();
	// stw r4,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FE78"))) PPC_WEAK_FUNC(sub_8310FE78);
PPC_FUNC_IMPL(__imp__sub_8310FE78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FE80"))) PPC_WEAK_FUNC(sub_8310FE80);
PPC_FUNC_IMPL(__imp__sub_8310FE80) {
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
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310ff24
	if (cr6.eq) goto loc_8310FF24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8310FEB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8310fed4
	if (!cr6.eq) goto loc_8310FED4;
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
loc_8310FED4:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8310ff24
	if (cr6.eq) goto loc_8310FF24;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8310FEF4;
	sub_82595150(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8310ff14
	if (cr6.eq) goto loc_8310FF14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8310FF14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8310FF14:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8310FF1C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_8310FF24:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,29404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29404, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8310FF48"))) PPC_WEAK_FUNC(sub_8310FF48);
PPC_FUNC_IMPL(__imp__sub_8310FF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8310ff5c
	if (cr6.lt) goto loc_8310FF5C;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8310FF5C:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8310ff90
	if (cr6.eq) goto loc_8310FF90;
loc_8310FF6C:
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// beq cr6,0x8310ff80
	if (cr6.eq) goto loc_8310FF80;
	// cmpwi cr6,r10,17
	cr6.compare<int32_t>(ctx.r10.s32, 17, xer);
	// beq cr6,0x8310ff98
	if (cr6.eq) goto loc_8310FF98;
loc_8310FF80:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8310ff6c
	if (!cr6.eq) goto loc_8310FF6C;
loc_8310FF90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8310FF98:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FFA0"))) PPC_WEAK_FUNC(sub_8310FFA0);
PPC_FUNC_IMPL(__imp__sub_8310FFA0) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-6584
	ctx.r9.s64 = ctx.r11.s64 + -6584;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83110010
	if (cr6.eq) goto loc_83110010;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8310FFE0;
	sub_82595150(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83110000
	if (cr6.eq) goto loc_83110000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83110000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83110000:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83110008;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_83110010:
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82c16c98
	ctx.lr = 0x83110018;
	sub_82C16C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x83110020;
	sub_831032A0(ctx, base);
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

__attribute__((alias("__imp__sub_83110034"))) PPC_WEAK_FUNC(sub_83110034);
PPC_FUNC_IMPL(__imp__sub_83110034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110038"))) PPC_WEAK_FUNC(sub_83110038);
PPC_FUNC_IMPL(__imp__sub_83110038) {
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
	// bl 0x8310ffa0
	ctx.lr = 0x83110058;
	sub_8310FFA0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83110070
	if (cr6.eq) goto loc_83110070;
	// bl 0x82416268
	ctx.lr = 0x8311006C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83110070:
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

__attribute__((alias("__imp__sub_83110088"))) PPC_WEAK_FUNC(sub_83110088);
PPC_FUNC_IMPL(__imp__sub_83110088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83110090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r28,r11,-22544
	ctx.r28.s64 = ctx.r11.s64 + -22544;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259cc28
	ctx.lr = 0x831100C8;
	sub_8259CC28(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cc28
	ctx.lr = 0x831100E4;
	sub_8259CC28(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cc28
	ctx.lr = 0x83110100;
	sub_8259CC28(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83110124"))) PPC_WEAK_FUNC(sub_83110124);
PPC_FUNC_IMPL(__imp__sub_83110124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110128"))) PPC_WEAK_FUNC(sub_83110128);
PPC_FUNC_IMPL(__imp__sub_83110128) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-6688
	ctx.r4.s64 = ctx.r11.s64 + -6688;
	// bl 0x83103328
	ctx.lr = 0x83110148;
	sub_83103328(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r9,r10,-6584
	ctx.r9.s64 = ctx.r10.s64 + -6584;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x83110088
	ctx.lr = 0x8311015C;
	sub_83110088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,184
	ctx.r10.s64 = ctx.r31.s64 + 184;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8311018C"))) PPC_WEAK_FUNC(sub_8311018C);
PPC_FUNC_IMPL(__imp__sub_8311018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110190"))) PPC_WEAK_FUNC(sub_83110190);
PPC_FUNC_IMPL(__imp__sub_83110190) {
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
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831103b8
	if (cr6.eq) goto loc_831103B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831101C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83110244
	if (!cr6.eq) goto loc_83110244;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83110220
	if (cr6.eq) goto loc_83110220;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x831101F4;
	sub_82595150(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83110214
	if (cr6.eq) goto loc_83110214;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83110214;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83110214:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8311021C;
	sub_82595170(ctx, base);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
loc_83110220:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r9,r10,21716
	ctx.r9.s64 = ctx.r10.s64 + 21716;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x831103b0
	goto loc_831103B0;
loc_83110244:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x831102fc
	if (!cr6.eq) goto loc_831102FC;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83110260
	if (cr6.lt) goto loc_83110260;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83110260:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83110264:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83110264
	if (!cr6.eq) goto loc_83110264;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83110288;
	sub_8259CC28(ctx, base);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831102d8
	if (cr6.eq) goto loc_831102D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x831102AC;
	sub_82595150(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831102cc
	if (cr6.eq) goto loc_831102CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831102CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831102CC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x831102D4;
	sub_82595170(ctx, base);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
loc_831102D8:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r30,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r30.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r9,r10,21716
	ctx.r9.s64 = ctx.r10.s64 + 21716;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x831103b0
	goto loc_831103B0;
loc_831102FC:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x831103b8
	if (!cr6.eq) goto loc_831103B8;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83110318
	if (cr6.lt) goto loc_83110318;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83110318:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8311031C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8311031c
	if (!cr6.eq) goto loc_8311031C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83110340;
	sub_8259CC28(ctx, base);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83110390
	if (cr6.eq) goto loc_83110390;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83110364;
	sub_82595150(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83110384
	if (cr6.eq) goto loc_83110384;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83110384;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83110384:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8311038C;
	sub_82595170(ctx, base);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
loc_83110390:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r30,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r30.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r9,r10,21716
	ctx.r9.s64 = ctx.r10.s64 + 21716;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
loc_831103B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x831103B8;
	sub_83103068(ctx, base);
loc_831103B8:
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

__attribute__((alias("__imp__sub_831103D0"))) PPC_WEAK_FUNC(sub_831103D0);
PPC_FUNC_IMPL(__imp__sub_831103D0) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r11,29404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83110408
	if (cr6.eq) goto loc_83110408;
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
loc_83110408:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,196
	ctx.r4.s64 = 196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83110420;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83110430
	if (cr6.eq) goto loc_83110430;
	// bl 0x83110128
	ctx.lr = 0x8311042C;
	sub_83110128(ctx, base);
	// b 0x83110434
	goto loc_83110434;
loc_83110430:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83110434:
	// stw r3,29404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29404, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8311044C"))) PPC_WEAK_FUNC(sub_8311044C);
PPC_FUNC_IMPL(__imp__sub_8311044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110450"))) PPC_WEAK_FUNC(sub_83110450);
PPC_FUNC_IMPL(__imp__sub_83110450) {
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
	// bl 0x8310ff48
	ctx.lr = 0x83110470;
	sub_8310FF48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83110490
	if (cr6.eq) goto loc_83110490;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-6690
	ctx.r4.s64 = ctx.r11.s64 + -6690;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x83110490;
	sub_8259CC28(ctx, base);
loc_83110490:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// bl 0x8259cb28
	ctx.lr = 0x831104A4;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_831104BC"))) PPC_WEAK_FUNC(sub_831104BC);
PPC_FUNC_IMPL(__imp__sub_831104BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831104C0"))) PPC_WEAK_FUNC(sub_831104C0);
PPC_FUNC_IMPL(__imp__sub_831104C0) {
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
	// bl 0x8310ff48
	ctx.lr = 0x831104E0;
	sub_8310FF48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83110500
	if (cr6.eq) goto loc_83110500;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-6689
	ctx.r4.s64 = ctx.r11.s64 + -6689;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x83110500;
	sub_8259CC28(ctx, base);
loc_83110500:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// bl 0x8259cb28
	ctx.lr = 0x83110514;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_8311052C"))) PPC_WEAK_FUNC(sub_8311052C);
PPC_FUNC_IMPL(__imp__sub_8311052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110530"))) PPC_WEAK_FUNC(sub_83110530);
PPC_FUNC_IMPL(__imp__sub_83110530) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8353b168
	ctx.lr = 0x83110550;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831107bc
	if (cr6.eq) goto loc_831107BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8311056C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831107bc
	if (cr6.eq) goto loc_831107BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83110590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831105b4
	if (cr6.eq) goto loc_831105B4;
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
loc_831105B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831105CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831105f0
	if (cr6.eq) goto loc_831105F0;
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_831105F0:
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
	ctx.lr = 0x83110608;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8311062c
	if (cr6.eq) goto loc_8311062C;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_8311062C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83110644;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83110668
	if (cr6.eq) goto loc_83110668;
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_83110668:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83110680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831106a4
	if (cr6.eq) goto loc_831106A4;
	// li r3,5
	ctx.r3.s64 = 5;
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
loc_831106A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831106BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831106e0
	if (cr6.eq) goto loc_831106E0;
	// li r3,6
	ctx.r3.s64 = 6;
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
loc_831106E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831106F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8311071c
	if (cr6.eq) goto loc_8311071C;
	// li r3,7
	ctx.r3.s64 = 7;
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
loc_8311071C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83110734;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83110758
	if (cr6.eq) goto loc_83110758;
	// li r3,8
	ctx.r3.s64 = 8;
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
loc_83110758:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83110770;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83110794
	if (cr6.eq) goto loc_83110794;
	// li r3,9
	ctx.r3.s64 = 9;
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
loc_83110794:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831107AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r3,10
	ctx.r3.s64 = 10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831107c0
	if (!cr6.eq) goto loc_831107C0;
loc_831107BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831107C0:
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

__attribute__((alias("__imp__sub_831107D4"))) PPC_WEAK_FUNC(sub_831107D4);
PPC_FUNC_IMPL(__imp__sub_831107D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831107D8"))) PPC_WEAK_FUNC(sub_831107D8);
PPC_FUNC_IMPL(__imp__sub_831107D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8311081c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8311081C;
	// bdzf 4*cr6+eq,0x83110854
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83110854;
	// bdzf 4*cr6+eq,0x83110854
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83110854;
	// bdzf 4*cr6+eq,0x83110828
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83110828;
	// bne cr6,0x83110840
	if (!cr6.eq) goto loc_83110840;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_8311081C:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_83110828:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_83110840:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_83110854:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110858"))) PPC_WEAK_FUNC(sub_83110858);
PPC_FUNC_IMPL(__imp__sub_83110858) {
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
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x830ffea0
	ctx.lr = 0x83110880;
	sub_830FFEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831108e0
	if (cr6.eq) goto loc_831108E0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x831108ac
	if (cr6.eq) goto loc_831108AC;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x83110924
	if (!cr6.eq) goto loc_83110924;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x831015e0
	ctx.lr = 0x831108A8;
	sub_831015E0(ctx, base);
	// b 0x83110924
	goto loc_83110924;
loc_831108AC:
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831108d0
	if (cr6.eq) goto loc_831108D0;
	// bl 0x830ffdf8
	ctx.lr = 0x831108C4;
	sub_830FFDF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// b 0x83110924
	goto loc_83110924;
loc_831108D0:
	// bl 0x830ffd50
	ctx.lr = 0x831108D4;
	sub_830FFD50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// b 0x83110924
	goto loc_83110924;
loc_831108E0:
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83100028
	ctx.lr = 0x831108EC;
	sub_83100028(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83110924
	if (cr6.eq) goto loc_83110924;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83100880
	ctx.lr = 0x83110904;
	sub_83100880(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8311091c
	if (cr6.eq) goto loc_8311091C;
	// bl 0x83103e98
	ctx.lr = 0x83110914;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_8311091C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83110924:
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

__attribute__((alias("__imp__sub_8311093C"))) PPC_WEAK_FUNC(sub_8311093C);
PPC_FUNC_IMPL(__imp__sub_8311093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110940"))) PPC_WEAK_FUNC(sub_83110940);
PPC_FUNC_IMPL(__imp__sub_83110940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83110948;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r5,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r5.u64);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// std r6,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r6.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833cb2c8
	ctx.lr = 0x8311096C;
	sub_833CB2C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x833cb348
	ctx.lr = 0x83110978;
	sub_833CB348(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cb518
	ctx.lr = 0x83110988;
	sub_833CB518(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x83110990;
	sub_830FF290(ctx, base);
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x830ff290
	ctx.lr = 0x83110998;
	sub_830FF290(ctx, base);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,304(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fdivs f3,f9,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 / ctx.f5.f64));
	// frsp f31,f6
	ctx.f31.f64 = double(float(ctx.f6.f64));
	// fmuls f30,f3,f4
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// bl 0x830ff290
	ctx.lr = 0x831109F4;
	sub_830FF290(ctx, base);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// lfs f12,-24912(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f13,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r10,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r10.u8);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r10,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r10.u8);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r11,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r11.u8);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r10,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r10.u8);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r10,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r10.u8);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r11,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r11.u8);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stb r10,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r10.u8);
	// fmsubs f9,f10,f12,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f11.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,140(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fadds f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f30.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r10,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r10.u8);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stb r11,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stfs f8,180(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stb r11,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stb r10,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r10.u8);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stb r10,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r10.u8);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r31,r9,-28
	ctx.r31.s64 = ctx.r9.s64 + -28;
	// stfs f8,200(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stb r11,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r11.u8);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stb r11,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r11.u8);
	// stb r10,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r10.u8);
	// stb r11,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r11.u8);
	// stb r10,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r10.u8);
	// stb r11,187(r1)
	PPC_STORE_U8(ctx.r1.u32 + 187, ctx.r11.u8);
	// stb r11,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r11.u8);
	// stb r11,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r11.u8);
	// stb r11,206(r1)
	PPC_STORE_U8(ctx.r1.u32 + 206, ctx.r11.u8);
	// stb r11,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r11.u8);
loc_83110B00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x833cb580
	ctx.lr = 0x83110B10;
	sub_833CB580(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfsu f2,20(r31)
	ea = 20 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r31.u32 = ea;
	// bl 0x833cb570
	ctx.lr = 0x83110B20;
	sub_833CB570(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83110b00
	if (!cr0.eq) goto loc_83110B00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d28578
	ctx.lr = 0x83110B30;
	sub_82D28578(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cb2f8
	ctx.lr = 0x83110B3C;
	sub_833CB2F8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83110B4C"))) PPC_WEAK_FUNC(sub_83110B4C);
PPC_FUNC_IMPL(__imp__sub_83110B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110B50"))) PPC_WEAK_FUNC(sub_83110B50);
PPC_FUNC_IMPL(__imp__sub_83110B50) {
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
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x830ffea0
	ctx.lr = 0x83110B74;
	sub_830FFEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83110bd4
	if (cr6.eq) goto loc_83110BD4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83100688
	ctx.lr = 0x83110B90;
	sub_83100688(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83100770
	ctx.lr = 0x83110BA0;
	sub_83100770(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x831004c8
	ctx.lr = 0x83110BC0;
	sub_831004C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r6,r30,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x83110940
	ctx.lr = 0x83110BD4;
	sub_83110940(ctx, base);
loc_83110BD4:
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

__attribute__((alias("__imp__sub_83110BEC"))) PPC_WEAK_FUNC(sub_83110BEC);
PPC_FUNC_IMPL(__imp__sub_83110BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110BF0"))) PPC_WEAK_FUNC(sub_83110BF0);
PPC_FUNC_IMPL(__imp__sub_83110BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83110BF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x83110cdc
	if (!cr6.lt) goto loc_83110CDC;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-11396
	ctx.r11.s64 = ctx.r11.s64 + -11396;
	// li r28,15
	ctx.r28.s64 = 15;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,2
	ctx.r25.s64 = 2;
	// addi r26,r11,-6364
	ctx.r26.s64 = ctx.r11.s64 + -6364;
loc_83110C34:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r4,r26,-8
	ctx.r4.s64 = ctx.r26.s64 + -8;
	// beq cr6,0x83110c5c
	if (cr6.eq) goto loc_83110C5C;
	// addi r4,r26,-4
	ctx.r4.s64 = ctx.r26.s64 + -4;
loc_83110C5C:
	// bl 0x825a1eb8
	ctx.lr = 0x83110C60;
	sub_825A1EB8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83110C68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83110c68
	if (!cr6.eq) goto loc_83110C68;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x83110C8C;
	sub_825A1EB8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x83110C9C;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83110cb8
	if (cr6.lt) goto loc_83110CB8;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83110CB8;
	sub_825952B8(ctx, base);
loc_83110CB8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83110c34
	if (cr6.lt) goto loc_83110C34;
loc_83110CDC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83110CE4"))) PPC_WEAK_FUNC(sub_83110CE4);
PPC_FUNC_IMPL(__imp__sub_83110CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110CE8"))) PPC_WEAK_FUNC(sub_83110CE8);
PPC_FUNC_IMPL(__imp__sub_83110CE8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,4956
	ctx.r9.s64 = ctx.r10.s64 + 4956;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f0,-26260(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// stw r7,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
	// bl 0x830ffbc0
	ctx.lr = 0x83110D68;
	sub_830FFBC0(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83110D84"))) PPC_WEAK_FUNC(sub_83110D84);
PPC_FUNC_IMPL(__imp__sub_83110D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110D88"))) PPC_WEAK_FUNC(sub_83110D88);
PPC_FUNC_IMPL(__imp__sub_83110D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83110D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x83110DA4;
	sub_825359D8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82539ae8
	ctx.lr = 0x83110DAC;
	sub_82539AE8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83110ed8
	if (cr6.lt) goto loc_83110ED8;
	// beq cr6,0x83110de0
	if (cr6.eq) goto loc_83110DE0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83110f64
	if (!cr6.lt) goto loc_83110F64;
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x83103e98
	ctx.lr = 0x83110DCC;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// b 0x83110f64
	goto loc_83110F64;
loc_83110DE0:
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x83103bb8
	ctx.lr = 0x83110DE8;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83110f64
	if (!cr6.eq) goto loc_83110F64;
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x83103d60
	ctx.lr = 0x83110DFC;
	sub_83103D60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x83103d20
	ctx.lr = 0x83110E08;
	sub_83103D20(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8253a610
	ctx.lr = 0x83110E24;
	sub_8253A610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83110ecc
	if (cr6.eq) goto loc_83110ECC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,-6408
	ctx.r30.s64 = ctx.r11.s64 + -6408;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x83110E48;
	sub_82536D88(ctx, base);
	// bl 0x825355c0
	ctx.lr = 0x83110E4C;
	sub_825355C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83110ecc
	if (cr6.eq) goto loc_83110ECC;
loc_83110E54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x83110E60;
	sub_82536D88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82536a70
	ctx.lr = 0x83110E68;
	sub_82536A70(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x83110E6C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x83110E78;
	sub_837B0C10(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83110e8c
	if (!cr6.lt) goto loc_83110E8C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_83110E8C:
	// bl 0x83104018
	ctx.lr = 0x83110E90;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83110ea8
	if (cr6.eq) goto loc_83110EA8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x8291fdc8
	ctx.lr = 0x83110EA8;
	sub_8291FDC8(ctx, base);
loc_83110EA8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83110EB0;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82536d88
	ctx.lr = 0x83110EC0;
	sub_82536D88(ctx, base);
	// bl 0x825355c0
	ctx.lr = 0x83110EC4;
	sub_825355C0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x83110e54
	if (cr6.lt) goto loc_83110E54;
loc_83110ECC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x83110f64
	goto loc_83110F64;
loc_83110ED8:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-6408
	ctx.r31.s64 = ctx.r11.s64 + -6408;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x837b0c10
	ctx.lr = 0x83110EEC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x83110EFC;
	sub_825A1EB8(ctx, base);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r4,-11400(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11400);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83110F08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83110f08
	if (!cr6.eq) goto loc_83110F08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x83110F2C;
	sub_825A1EB8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bge cr6,0x83110f48
	if (!cr6.lt) goto loc_83110F48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_83110F48:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83104938
	ctx.lr = 0x83110F50;
	sub_83104938(ctx, base);
	// stw r3,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x83110F58;
	sub_83103B18(ctx, base);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83110F64;
	sub_8387E8E0(ctx, base);
loc_83110F64:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82450e18
	ctx.lr = 0x83110F6C;
	sub_82450E18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x83110F74;
	sub_82535AA0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83110F7C"))) PPC_WEAK_FUNC(sub_83110F7C);
PPC_FUNC_IMPL(__imp__sub_83110F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83110F80"))) PPC_WEAK_FUNC(sub_83110F80);
PPC_FUNC_IMPL(__imp__sub_83110F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83110F88;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r28,r11,-6376
	ctx.r28.s64 = ctx.r11.s64 + -6376;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// bl 0x8259cc28
	ctx.lr = 0x83110FBC;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bge cr6,0x83110fd8
	if (!cr6.lt) goto loc_83110FD8;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_83110FD8:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83530750
	ctx.lr = 0x83110FF8;
	sub_83530750(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8311100C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8311112c
	if (cr6.eq) goto loc_8311112C;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_83111020:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83111034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x83111054;
	sub_8259CB28(ctx, base);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82574d38
	ctx.lr = 0x83111068;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831110e4
	if (cr6.eq) goto loc_831110E4;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x8311108C;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x8311109C;
	sub_825A1EB8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x831110B0;
	sub_825A1DA8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r26,40
	ctx.r3.s64 = ctx.r26.s64 + 40;
	// bl 0x8291fdc8
	ctx.lr = 0x831110BC;
	sub_8291FDC8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x831110d8
	if (cr6.lt) goto loc_831110D8;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x831110D8;
	sub_825952B8(ctx, base);
loc_831110D8:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_831110E4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83111100
	if (cr6.lt) goto loc_83111100;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x83111100;
	sub_825952B8(ctx, base);
loc_83111100:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83111120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83111020
	if (!cr6.eq) goto loc_83111020;
loc_8311112C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83111140;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8311115c
	if (cr6.lt) goto loc_8311115C;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x8311115C;
	sub_825952B8(ctx, base);
loc_8311115C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83111164"))) PPC_WEAK_FUNC(sub_83111164);
PPC_FUNC_IMPL(__imp__sub_83111164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83111168"))) PPC_WEAK_FUNC(sub_83111168);
PPC_FUNC_IMPL(__imp__sub_83111168) {
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
	ctx.lr = 0x83111170;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x831111ac
	if (!cr6.eq) goto loc_831111AC;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// bl 0x82b8c198
	ctx.lr = 0x831111A4;
	sub_82B8C198(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x831111b8
	goto loc_831111B8;
loc_831111AC:
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x82b8c198
	ctx.lr = 0x831111B4;
	sub_82B8C198(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_831111B8:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83111484
	if (cr6.gt) goto loc_83111484;
	// lis r12,-31983
	ctx.r12.s64 = -2096037888;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4580
	ctx.r12.s64 = ctx.r12.s64 + 4580;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8311120C;
	case 1:
		goto loc_8311130C;
	case 2:
		goto loc_83111354;
	case 3:
		goto loc_831113BC;
	case 4:
		goto loc_831113CC;
	case 5:
		goto loc_831113E4;
	case 6:
		goto loc_8311140C;
	case 7:
		goto loc_83111434;
	case 8:
		goto loc_8311145C;
	case 9:
		goto loc_83111470;
	default:
		return;
	}
	// lwz r24,4620(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4620);
	// lwz r24,4876(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4876);
	// lwz r24,4948(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4948);
	// lwz r24,5052(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5052);
	// lwz r24,5068(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5068);
	// lwz r24,5092(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5092);
	// lwz r24,5132(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5132);
	// lwz r24,5172(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5172);
	// lwz r24,5212(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5212);
	// lwz r24,5232(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5232);
loc_8311120C:
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// li r10,28
	ctx.r10.s64 = 28;
	// divw. r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83111484
	if (cr0.eq) goto loc_83111484;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83101530
	ctx.lr = 0x83111230;
	sub_83101530(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83100450
	ctx.lr = 0x83111244;
	sub_83100450(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x8311129c
	if (!cr0.eq) goto loc_8311129C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83111278
	if (cr6.lt) goto loc_83111278;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83111278:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x83101ba0
	ctx.lr = 0x83111290;
	sub_83101BA0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83111484
	goto loc_83111484;
loc_8311129C:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83111300
	if (cr6.eq) goto loc_83111300;
loc_831112A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x831112c8
	if (cr6.lt) goto loc_831112C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_831112C8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x83101ba0
	ctx.lr = 0x831112E0;
	sub_83101BA0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x831112a8
	if (cr6.lt) goto loc_831112A8;
loc_83111300:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83111484
	goto loc_83111484;
loc_8311130C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83111344
	if (cr6.eq) goto loc_83111344;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83111484
	if (cr6.eq) goto loc_83111484;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x83111484
	goto loc_83111484;
loc_83111344:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83111484
	goto loc_83111484;
loc_83111354:
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r9,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831113a4
	if (cr0.eq) goto loc_831113A4;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8311137C:
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// beq cr6,0x831113a0
	if (cr6.eq) goto loc_831113A0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8311137c
	if (cr6.lt) goto loc_8311137C;
	// b 0x831113a4
	goto loc_831113A4;
loc_831113A0:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_831113A4:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83111484
	if (cr6.eq) goto loc_83111484;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x835977d8
	ctx.lr = 0x831113B8;
	sub_835977D8(ctx, base);
	// b 0x83111484
	goto loc_83111484;
loc_831113BC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83111484
	goto loc_83111484;
loc_831113CC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83111484
	if (cr6.eq) goto loc_83111484;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x83111484
	goto loc_83111484;
loc_831113E4:
	// subf r10,r26,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r26.s64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,28
	ctx.r9.s64 = 28;
	// divw r10,r10,r9
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x83111484
	if (!cr6.lt) goto loc_83111484;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x83111484
	goto loc_83111484;
loc_8311140C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-6436
	ctx.r11.s64 = ctx.r11.s64 + -6436;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83111484
	if (!cr6.gt) goto loc_83111484;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x83111484
	goto loc_83111484;
loc_83111434:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11432(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11432);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83111484
	if (!cr6.lt) goto loc_83111484;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f13,-6436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6436);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x83111484
	goto loc_83111484;
loc_8311145C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83111484
	if (!cr6.gt) goto loc_83111484;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x83111480
	goto loc_83111480;
loc_83111470:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,300
	cr6.compare<uint32_t>(ctx.r11.u32, 300, xer);
	// bge cr6,0x83111484
	if (!cr6.lt) goto loc_83111484;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83111480:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_83111484:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831114b4
	if (cr6.eq) goto loc_831114B4;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838adab0
	ctx.lr = 0x831114A0;
	sub_838ADAB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x831114B4;
	sub_825952B8(ctx, base);
loc_831114B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

