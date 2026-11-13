#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C2A308"))) PPC_WEAK_FUNC(sub_82C2A308);
PPC_FUNC_IMPL(__imp__sub_82C2A308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C2A310;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2A31C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r4,120(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 120);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r29,r10,221
	ctx.r29.s64 = ctx.r10.s64 + 14483456;
	// addi r29,r29,-26512
	ctx.r29.s64 = ctx.r29.s64 + -26512;
	// bl 0x8315c470
	ctx.lr = 0x82C2A338;
	sub_8315C470(ctx, base);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,-18660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18660);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82c2a368
	if (!cr6.eq) goto loc_82C2A368;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c2a36c
	if (cr6.eq) goto loc_82C2A36C;
loc_82C2A368:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C2A36C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c2a3ec
	if (!cr6.eq) goto loc_82C2A3EC;
	// lbz r11,1100(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1100);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c2a3ec
	if (cr6.eq) goto loc_82C2A3EC;
loc_82C2A388:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lhz r4,120(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 120);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,289
	ctx.r11.s64 = ctx.r11.s64 + 289;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x8315c470
	ctx.lr = 0x82C2A3A4;
	sub_8315C470(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c2a3cc
	if (!cr6.eq) goto loc_82C2A3CC;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c2a3d0
	if (cr6.eq) goto loc_82C2A3D0;
loc_82C2A3CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C2A3D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c2a3f8
	if (!cr6.eq) goto loc_82C2A3F8;
	// lbz r11,1100(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c2a388
	if (cr6.lt) goto loc_82C2A388;
loc_82C2A3EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C2A3F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2A404"))) PPC_WEAK_FUNC(sub_82C2A404);
PPC_FUNC_IMPL(__imp__sub_82C2A404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2A408"))) PPC_WEAK_FUNC(sub_82C2A408);
PPC_FUNC_IMPL(__imp__sub_82C2A408) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-800
	ctx.r9.s64 = ctx.r11.s64 + -800;
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
	// bl 0x82c27460
	ctx.lr = 0x82C2A440;
	sub_82C27460(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c2a458
	if (cr6.eq) goto loc_82C2A458;
	// bl 0x82416268
	ctx.lr = 0x82C2A454;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C2A458:
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

__attribute__((alias("__imp__sub_82C2A470"))) PPC_WEAK_FUNC(sub_82C2A470);
PPC_FUNC_IMPL(__imp__sub_82C2A470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C2A478;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82c27860
	ctx.lr = 0x82C2A48C;
	sub_82C27860(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-800
	ctx.r9.s64 = ctx.r11.s64 + -800;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// sth r7,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r7.u16);
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// bl 0x830ff290
	ctx.lr = 0x82C2A4BC;
	sub_830FF290(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// lwz r4,-18756(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18756);
	// bl 0x82d20ae0
	ctx.lr = 0x82C2A4E0;
	sub_82D20AE0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-1620
	ctx.r30.s64 = ctx.r11.s64 + -1620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// bl 0x82d23390
	ctx.lr = 0x82C2A4F8;
	sub_82D23390(ctx, base);
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C2A508;
	sub_8259CC28(ctx, base);
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c2a568
	if (!cr6.eq) goto loc_82C2A568;
	// cmplwi cr6,r28,18
	cr6.compare<uint32_t>(ctx.r28.u32, 18, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x82c2a52c
	if (!cr6.eq) goto loc_82C2A52C;
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x82c2bc98
	ctx.lr = 0x82C2A528;
	sub_82C2BC98(ctx, base);
	// b 0x82c2a534
	goto loc_82C2A534;
loc_82C2A52C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c2bbb8
	ctx.lr = 0x82C2A534;
	sub_82C2BBB8(ctx, base);
loc_82C2A534:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,152(r11)
	PPC_STORE_U8(ctx.r11.u32 + 152, ctx.r10.u8);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82c2a558
	if (!cr6.lt) goto loc_82C2A558;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C2A558:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d238b8
	ctx.lr = 0x82C2A568;
	sub_82D238B8(ctx, base);
loc_82C2A568:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2a588
	if (cr6.lt) goto loc_82C2A588;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2A588;
	sub_825952B8(ctx, base);
loc_82C2A588:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2A594"))) PPC_WEAK_FUNC(sub_82C2A594);
PPC_FUNC_IMPL(__imp__sub_82C2A594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2A598"))) PPC_WEAK_FUNC(sub_82C2A598);
PPC_FUNC_IMPL(__imp__sub_82C2A598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C2A5A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82c2a5e0
	if (!cr6.eq) goto loc_82C2A5E0;
	// addi r11,r11,-1048
	ctx.r11.s64 = ctx.r11.s64 + -1048;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// b 0x82c2a5e4
	goto loc_82C2A5E4;
loc_82C2A5E0:
	// addi r4,r11,-1048
	ctx.r4.s64 = ctx.r11.s64 + -1048;
loc_82C2A5E4:
	// bl 0x8259cc28
	ctx.lr = 0x82C2A5E8;
	sub_8259CC28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82C2A5EC;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82C2A5F4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,5
	ctx.r4.s64 = ctx.r10.s64 + 327680;
	// addi r4,r4,14904
	ctx.r4.s64 = ctx.r4.s64 + 14904;
	// bl 0x831239e0
	ctx.lr = 0x82C2A610;
	sub_831239E0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82C2A620;
	sub_8311C148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2A62C;
	sub_82D19A68(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82c2a644
	if (!cr6.lt) goto loc_82C2A644;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C2A644:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2A654;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c2a684
	if (!cr6.eq) goto loc_82C2A684;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2a6d4
	if (cr6.lt) goto loc_82C2A6D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2A67C;
	sub_825952B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C2A684:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r29,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r29.u32);
	// beq cr6,0x82c2a6a4
	if (cr6.eq) goto loc_82C2A6A4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C2A6A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82d329f8
	ctx.lr = 0x82C2A6B4;
	sub_82D329F8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2a6d4
	if (cr6.lt) goto loc_82C2A6D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2A6D4;
	sub_825952B8(ctx, base);
loc_82C2A6D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2A6DC"))) PPC_WEAK_FUNC(sub_82C2A6DC);
PPC_FUNC_IMPL(__imp__sub_82C2A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2A6E0"))) PPC_WEAK_FUNC(sub_82C2A6E0);
PPC_FUNC_IMPL(__imp__sub_82C2A6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C2A6E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2A6F8;
	sub_831156E8(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82C2A704;
	sub_8311C148(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_82C2A720:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2a720
	if (!cr6.eq) goto loc_82C2A720;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C2A744;
	sub_8259CC28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2A74C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,-992
	ctx.r31.s64 = ctx.r11.s64 + -992;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C2A76C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2a784
	if (cr6.eq) goto loc_82C2A784;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82C2A784;
	sub_82D291E0(ctx, base);
loc_82C2A784:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2A78C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2A7A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2a7bc
	if (cr6.eq) goto loc_82C2A7BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82C2A7BC;
	sub_82D291E0(ctx, base);
loc_82C2A7BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2A7C4;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2A7DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2a7f4
	if (cr6.eq) goto loc_82C2A7F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82C2A7F4;
	sub_82D291E0(ctx, base);
loc_82C2A7F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2A7FC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2A814;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r29,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c2a82c
	if (cr6.eq) goto loc_82C2A82C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C2A82C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82C2A83C;
	sub_82D329F8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2a85c
	if (cr6.lt) goto loc_82C2A85C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2A85C;
	sub_825952B8(ctx, base);
loc_82C2A85C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2A864"))) PPC_WEAK_FUNC(sub_82C2A864);
PPC_FUNC_IMPL(__imp__sub_82C2A864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2A868"))) PPC_WEAK_FUNC(sub_82C2A868);
PPC_FUNC_IMPL(__imp__sub_82C2A868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C2A870;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2A87C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r26,r30,221
	ctx.r26.s64 = ctx.r30.s64 + 14483456;
	// addi r26,r26,-26512
	ctx.r26.s64 = ctx.r26.s64 + -26512;
	// bl 0x82d19a68
	ctx.lr = 0x82C2A894;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-912
	ctx.r31.s64 = ctx.r11.s64 + -912;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C2A8B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,120(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 120);
	// bl 0x8311c338
	ctx.lr = 0x82C2A8C0;
	sub_8311C338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2A8CC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C2A8E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2a95c
	if (cr6.eq) goto loc_82C2A95C;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83125548
	ctx.lr = 0x82C2A908;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2a91c
	if (cr6.lt) goto loc_82C2A91C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c2a920
	goto loc_82C2A920;
loc_82C2A91C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82C2A920:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d30138
	ctx.lr = 0x82C2A92C;
	sub_82D30138(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2a94c
	if (cr6.lt) goto loc_82C2A94C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2A94C;
	sub_825952B8(ctx, base);
loc_82C2A94C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82C2A95C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2A964;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2A97C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2aa80
	if (cr6.eq) goto loc_82C2AA80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2A990;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2A9A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2aa80
	if (cr6.eq) goto loc_82C2AA80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2A9BC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2A9D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2aa80
	if (cr6.eq) goto loc_82C2AA80;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r31,r11,247
	ctx.r31.u64 = ctx.r11.u64 | 247;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2A9F4;
	sub_82D29598(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2AA00;
	sub_82D29598(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2AA0C;
	sub_82D29598(ctx, base);
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r9,-18660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -18660);
loc_82C2AA18:
	// addi r11,r31,289
	ctx.r11.s64 = ctx.r31.s64 + 289;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82c2aa48
	if (!cr6.eq) goto loc_82C2AA48;
	// xor r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r8,r10,14
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c2aa4c
	if (cr6.eq) goto loc_82C2AA4C;
loc_82C2AA48:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82C2AA4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2aa6c
	if (!cr6.eq) goto loc_82C2AA6C;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c2a6e0
	ctx.lr = 0x82C2AA68;
	sub_82C2A6E0(ctx, base);
	// lwz r9,-18660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -18660);
loc_82C2AA6C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82c2aa18
	if (cr6.lt) goto loc_82C2AA18;
loc_82C2AA80:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2AA88"))) PPC_WEAK_FUNC(sub_82C2AA88);
PPC_FUNC_IMPL(__imp__sub_82C2AA88) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C2AABC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2aad8
	if (cr6.eq) goto loc_82C2AAD8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c2a470
	ctx.lr = 0x82C2AAD4;
	sub_82C2A470(ctx, base);
	// b 0x82c2aadc
	goto loc_82C2AADC;
loc_82C2AAD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C2AADC:
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

__attribute__((alias("__imp__sub_82C2AAF4"))) PPC_WEAK_FUNC(sub_82C2AAF4);
PPC_FUNC_IMPL(__imp__sub_82C2AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2AAF8"))) PPC_WEAK_FUNC(sub_82C2AAF8);
PPC_FUNC_IMPL(__imp__sub_82C2AAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C2AB00;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2AB0C;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82C2AB14;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r29,r10,5
	ctx.r29.s64 = ctx.r10.s64 + 327680;
	// addi r29,r29,14904
	ctx.r29.s64 = ctx.r29.s64 + 14904;
	// bl 0x82d19a68
	ctx.lr = 0x82C2AB2C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,-1352
	ctx.r31.s64 = ctx.r11.s64 + -1352;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C2AB4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2ae88
	if (cr6.eq) goto loc_82C2AE88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123768
	ctx.lr = 0x82C2AB60;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83162d40
	ctx.lr = 0x82C2AB7C;
	sub_83162D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82C2AB90;
	sub_82D291E0(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c2abb0
	if (cr6.lt) goto loc_82C2ABB0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2ABB0;
	sub_825952B8(ctx, base);
loc_82C2ABB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// bl 0x82d19a68
	ctx.lr = 0x82C2ABCC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C2ABE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2ae88
	if (cr6.eq) goto loc_82C2AE88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123768
	ctx.lr = 0x82C2ABF8;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83162d40
	ctx.lr = 0x82C2AC14;
	sub_83162D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82C2AC28;
	sub_82D291E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82C2AC30;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2AC38;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C2AC50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2ae88
	if (cr6.eq) goto loc_82C2AE88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123768
	ctx.lr = 0x82C2AC64;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83162d40
	ctx.lr = 0x82C2AC80;
	sub_83162D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82C2AC94;
	sub_82D291E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82C2AC9C;
	sub_8387E8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831239e0
	ctx.lr = 0x82C2ACAC;
	sub_831239E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82C2ACBC;
	sub_8311C148(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831239e0
	ctx.lr = 0x82C2ACD0;
	sub_831239E0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82C2ACE0;
	sub_8311C148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2ACEC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C2AD04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2ae88
	if (cr6.eq) goto loc_82C2AE88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2AD18;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2AD30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2ae88
	if (cr6.eq) goto loc_82C2AE88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2AD44;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2AD5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2ae88
	if (cr6.eq) goto loc_82C2AE88;
	// addi r4,r31,-765
	ctx.r4.s64 = ctx.r31.s64 + -765;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C2AD74;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-734
	ctx.r4.s64 = ctx.r31.s64 + -734;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C2AD80;
	sub_837B0C10(ctx, base);
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,54
	ctx.r4.u64 = ctx.r4.u64 | 54;
	// bl 0x82d04220
	ctx.lr = 0x82C2AD90;
	sub_82D04220(ctx, base);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C2AD98:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2ad98
	if (!cr6.eq) goto loc_82C2AD98;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C2ADBC;
	sub_825A1EB8(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82C2ADCC;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82C2ADE0;
	sub_825A1DA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82C2ADF0;
	sub_825A1EB8(ctx, base);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C2ADF8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2adf8
	if (!cr6.eq) goto loc_82C2ADF8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C2AE1C;
	sub_825A1EB8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2AE30;
	sub_82D291E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2AE44;
	sub_82D291E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2AE58;
	sub_82D291E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82c2a598
	ctx.lr = 0x82C2AE68;
	sub_82C2A598(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c2a598
	ctx.lr = 0x82C2AE78;
	sub_82C2A598(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82C2AE80;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C2AE88;
	sub_8387E8E0(ctx, base);
loc_82C2AE88:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2AE90"))) PPC_WEAK_FUNC(sub_82C2AE90);
PPC_FUNC_IMPL(__imp__sub_82C2AE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C2AE98;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2AEA4;
	sub_82D19A68(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-1280
	ctx.r30.s64 = ctx.r11.s64 + -1280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2AEC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82C2AEC8;
	sub_831156E8(ctx, base);
	// lhz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x82C2AED4;
	sub_8311C338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2AEE0;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C2AEF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2af70
	if (cr6.eq) goto loc_82C2AF70;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83125548
	ctx.lr = 0x82C2AF1C;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2af30
	if (cr6.lt) goto loc_82C2AF30;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c2af34
	goto loc_82C2AF34;
loc_82C2AF30:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82C2AF34:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d30138
	ctx.lr = 0x82C2AF40;
	sub_82D30138(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2af60
	if (cr6.lt) goto loc_82C2AF60;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2AF60;
	sub_825952B8(ctx, base);
loc_82C2AF60:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82C2AF70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2AF78;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2AF90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,28
	ctx.r9.s64 = 1835008;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r29,r9,37
	ctx.r29.u64 = ctx.r9.u64 | 37;
	// beq cr6,0x82c2afa8
	if (cr6.eq) goto loc_82C2AFA8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2AFA8;
	sub_82D29598(ctx, base);
loc_82C2AFA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2AFB0;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2AFC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2afd8
	if (cr6.eq) goto loc_82C2AFD8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2AFD8;
	sub_82D29598(ctx, base);
loc_82C2AFD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2AFE0;
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
	ctx.lr = 0x82C2AFF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2b008
	if (cr6.eq) goto loc_82C2B008;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2B008;
	sub_82D29598(ctx, base);
loc_82C2B008:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// bl 0x8315c470
	ctx.lr = 0x82C2B014;
	sub_8315C470(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c2a6e0
	ctx.lr = 0x82C2B020;
	sub_82C2A6E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2B028"))) PPC_WEAK_FUNC(sub_82C2B028);
PPC_FUNC_IMPL(__imp__sub_82C2B028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82C2B030;
	__savegprlr_20(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2B03C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r26,r27,221
	ctx.r26.s64 = ctx.r27.s64 + 14483456;
	// addi r26,r26,-26512
	ctx.r26.s64 = ctx.r26.s64 + -26512;
	// bl 0x82d19a68
	ctx.lr = 0x82C2B054;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r25,r11,-2085
	ctx.r25.s64 = ctx.r11.s64 + -2085;
	// addi r4,r25,829
	ctx.r4.s64 = ctx.r25.s64 + 829;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C2B074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,120(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 120);
	// bl 0x8311c338
	ctx.lr = 0x82C2B080;
	sub_8311C338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2B08C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,845
	ctx.r4.s64 = ctx.r25.s64 + 845;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C2B0A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r21,15
	ctx.r21.s64 = 15;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2b11c
	if (cr6.eq) goto loc_82C2B11C;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x83125548
	ctx.lr = 0x82C2B0D0;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2b0e4
	if (cr6.lt) goto loc_82C2B0E4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c2b0e8
	goto loc_82C2B0E8;
loc_82C2B0E4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82C2B0E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30138
	ctx.lr = 0x82C2B0F4;
	sub_82D30138(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2b110
	if (cr6.lt) goto loc_82C2B110;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82C2B110;
	sub_825952B8(ctx, base);
loc_82C2B110:
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// stw r28,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r28.u32);
	// stb r28,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r28.u8);
loc_82C2B11C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2B124;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,857
	ctx.r4.s64 = ctx.r25.s64 + 857;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2B13C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2b520
	if (cr6.eq) goto loc_82C2B520;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2B150;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,873
	ctx.r4.s64 = ctx.r25.s64 + 873;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2B168;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2b520
	if (cr6.eq) goto loc_82C2B520;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2B17C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,897
	ctx.r4.s64 = ctx.r25.s64 + 897;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2B194;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2b520
	if (cr6.eq) goto loc_82C2B520;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r31,r11,247
	ctx.r31.u64 = ctx.r11.u64 | 247;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2B1B4;
	sub_82D29598(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2B1C0;
	sub_82D29598(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2B1CC;
	sub_82D29598(ctx, base);
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r9,-18660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -18660);
loc_82C2B1D8:
	// addi r11,r31,289
	ctx.r11.s64 = ctx.r31.s64 + 289;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82c2b208
	if (!cr6.eq) goto loc_82C2B208;
	// xor r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r8,r10,14
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c2b20c
	if (cr6.eq) goto loc_82C2B20C;
loc_82C2B208:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82C2B20C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2b22c
	if (!cr6.eq) goto loc_82C2B22C;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c2a6e0
	ctx.lr = 0x82C2B228;
	sub_82C2A6E0(ctx, base);
	// lwz r9,-18660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -18660);
loc_82C2B22C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82c2b1d8
	if (cr6.lt) goto loc_82C2B1D8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82C2B254;
	sub_8319DC20(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8319dc88
	ctx.lr = 0x82C2B25C;
	sub_8319DC88(ctx, base);
	// addis r11,r27,192
	ctx.r11.s64 = ctx.r27.s64 + 12582912;
	// cmplwi cr6,r3,365
	cr6.compare<uint32_t>(ctx.r3.u32, 365, xer);
	// addi r11,r11,-10964
	ctx.r11.s64 = ctx.r11.s64 + -10964;
	// bge cr6,0x82c2b274
	if (!cr6.lt) goto loc_82C2B274;
	// mulli r10,r3,532
	ctx.r10.s64 = ctx.r3.s64 * 532;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82C2B274:
	// addi r29,r11,404
	ctx.r29.s64 = ctx.r11.s64 + 404;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(ctx.r28.u32, 16, xer);
	// blt cr6,0x82c2b294
	if (cr6.lt) goto loc_82C2B294;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// b 0x82c2b298
	goto loc_82C2B298;
loc_82C2B294:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
loc_82C2B298:
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82c2b2b8
	if (cr6.eq) goto loc_82C2B2B8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82c2b2e0
	goto loc_82C2B2E0;
loc_82C2B2B8:
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c2b2d0
	if (cr6.eq) goto loc_82C2B2D0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82c2b2e0
	goto loc_82C2B2E0;
loc_82C2B2D0:
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82C2B2E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c2b31c
	if (cr6.eq) goto loc_82C2B31C;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x82c2b2fc
	if (cr6.lt) goto loc_82C2B2FC;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// b 0x82c2b300
	goto loc_82C2B300;
loc_82C2B2FC:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
loc_82C2B300:
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x835977d8
	ctx.lr = 0x82C2B318;
	sub_835977D8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C2B31C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x82c2b294
	if (cr6.lt) goto loc_82C2B294;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi. r31,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82c2b468
	if (!cr0.eq) goto loc_82C2B468;
	// stw r21,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r21.u32);
	// addi r4,r25,921
	ctx.r4.s64 = ctx.r25.s64 + 921;
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r28,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r28.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8259cc28
	ctx.lr = 0x82C2B35C;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2B370;
	sub_82D291E0(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2b38c
	if (cr6.lt) goto loc_82C2B38C;
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82C2B38C;
	sub_825952B8(ctx, base);
loc_82C2B38C:
	// stw r21,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r21.u32);
	// addi r4,r25,925
	ctx.r4.s64 = ctx.r25.s64 + 925;
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r28,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r28.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82C2B3B4;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2B3C8;
	sub_82D291E0(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2b3e4
	if (cr6.lt) goto loc_82C2B3E4;
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82C2B3E4;
	sub_825952B8(ctx, base);
loc_82C2B3E4:
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// addi r4,r25,929
	ctx.r4.s64 = ctx.r25.s64 + 929;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// stw r28,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// stb r28,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r28.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82C2B40C;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2B420;
	sub_82D291E0(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2b43c
	if (cr6.lt) goto loc_82C2B43C;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82C2B43C;
	sub_825952B8(ctx, base);
loc_82C2B43C:
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r28,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// stb r28,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r28.u8);
	// beq cr6,0x82c2b520
	if (cr6.eq) goto loc_82C2B520;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825952b8
	ctx.lr = 0x82C2B460;
	sub_825952B8(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82C2B468:
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82C2B484;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82c2b498
	if (!cr6.eq) goto loc_82C2B498;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2B498;
	sub_831CC188(ctx, base);
loc_82C2B498:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8315ffd0
	ctx.lr = 0x82C2B4A4;
	sub_8315FFD0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2B4B8;
	sub_82D291E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2B4CC;
	sub_82D291E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2B4E0;
	sub_82D291E0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2b4fc
	if (cr6.lt) goto loc_82C2B4FC;
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C2B4FC;
	sub_825952B8(ctx, base);
loc_82C2B4FC:
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// beq cr6,0x82c2b520
	if (cr6.eq) goto loc_82C2B520;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825952b8
	ctx.lr = 0x82C2B520;
	sub_825952B8(ctx, base);
loc_82C2B520:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2B528"))) PPC_WEAK_FUNC(sub_82C2B528);
PPC_FUNC_IMPL(__imp__sub_82C2B528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C2B530;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2B53C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r27,r10,39024
	ctx.r27.u64 = ctx.r10.u64 | 39024;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r24,r30,r27
	ctx.r24.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2B558;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-1084
	ctx.r31.s64 = ctx.r11.s64 + -1084;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C2B578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,120(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 120);
	// bl 0x8311c338
	ctx.lr = 0x82C2B584;
	sub_8311C338(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2B590;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C2B5A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2b620
	if (cr6.eq) goto loc_82C2B620;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83125548
	ctx.lr = 0x82C2B5CC;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2b5e0
	if (cr6.lt) goto loc_82C2B5E0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c2b5e4
	goto loc_82C2B5E4;
loc_82C2B5E0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82C2B5E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d30138
	ctx.lr = 0x82C2B5F0;
	sub_82D30138(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2b610
	if (cr6.lt) goto loc_82C2B610;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2B610;
	sub_825952B8(ctx, base);
loc_82C2B610:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82C2B620:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2B628;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2B640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2b7a8
	if (cr6.eq) goto loc_82C2B7A8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2B654;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2B66C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2b7a8
	if (cr6.eq) goto loc_82C2B7A8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2B680;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2B698;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2b7a8
	if (cr6.eq) goto loc_82C2B7A8;
	// lbz r11,1100(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c2b764
	if (!cr6.eq) goto loc_82C2B764;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r31,r11,254
	ctx.r31.u64 = ctx.r11.u64 | 254;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2B6C4;
	sub_82D29598(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2B6D0;
	sub_82D29598(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C2B6DC;
	sub_82D29598(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82C2B6E0;
	sub_831156E8(ctx, base);
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// add r29,r10,r27
	ctx.r29.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwz r9,-18660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -18660);
loc_82C2B6F4:
	// addi r11,r31,289
	ctx.r11.s64 = ctx.r31.s64 + 289;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82c2b724
	if (!cr6.eq) goto loc_82C2B724;
	// xor r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r8,r10,14
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c2b728
	if (cr6.eq) goto loc_82C2B728;
loc_82C2B724:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82C2B728:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2b748
	if (!cr6.eq) goto loc_82C2B748;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c2a6e0
	ctx.lr = 0x82C2B744;
	sub_82C2A6E0(ctx, base);
	// lwz r9,-18660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -18660);
loc_82C2B748:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82c2b6f4
	if (cr6.lt) goto loc_82C2B6F4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82C2B764:
	// lis r4,28
	ctx.r4.s64 = 1835008;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// bl 0x82d29598
	ctx.lr = 0x82C2B770;
	sub_82D29598(ctx, base);
	// lis r4,28
	ctx.r4.s64 = 1835008;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// bl 0x82d29598
	ctx.lr = 0x82C2B780;
	sub_82D29598(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,254
	ctx.r4.u64 = ctx.r4.u64 | 254;
	// bl 0x82d29598
	ctx.lr = 0x82C2B790;
	sub_82D29598(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lhz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// bl 0x8315c470
	ctx.lr = 0x82C2B79C;
	sub_8315C470(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c2a6e0
	ctx.lr = 0x82C2B7A8;
	sub_82C2A6E0(ctx, base);
loc_82C2B7A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2B7B0"))) PPC_WEAK_FUNC(sub_82C2B7B0);
PPC_FUNC_IMPL(__imp__sub_82C2B7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C2B7B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2B7C4;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x82C2B7D4;
	sub_83126788(ctx, base);
	// lis r11,194
	ctx.r11.s64 = 12713984;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,52144
	ctx.r10.u64 = ctx.r11.u64 | 52144;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x83166e70
	ctx.lr = 0x82C2B804;
	sub_83166E70(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c2b830
	if (cr6.eq) goto loc_82C2B830;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82c2b82c
	if (!cr0.eq) goto loc_82C2B82C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2B82C;
	sub_831CC188(ctx, base);
loc_82C2B82C:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C2B830:
	// cmplwi cr6,r28,65535
	cr6.compare<uint32_t>(ctx.r28.u32, 65535, xer);
	// beq cr6,0x82c2b844
	if (cr6.eq) goto loc_82C2B844;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c2aaf8
	ctx.lr = 0x82C2B840;
	sub_82C2AAF8(ctx, base);
	// b 0x82c2b8e8
	goto loc_82C2B8E8;
loc_82C2B844:
	// cmpwi cr6,r31,23
	cr6.compare<int32_t>(ctx.r31.s32, 23, xer);
	// bne cr6,0x82c2b868
	if (!cr6.eq) goto loc_82C2B868;
	// bl 0x830ff290
	ctx.lr = 0x82C2B850;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C2B854;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bne cr6,0x82c2b868
	if (!cr6.eq) goto loc_82C2B868;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c2a868
	ctx.lr = 0x82C2B864;
	sub_82C2A868(ctx, base);
	// b 0x82c2b8e8
	goto loc_82C2B8E8;
loc_82C2B868:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c2a308
	ctx.lr = 0x82C2B870;
	sub_82C2A308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c2b888
	if (cr6.eq) goto loc_82C2B888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c2ae90
	ctx.lr = 0x82C2B884;
	sub_82C2AE90(ctx, base);
	// b 0x82c2b8e8
	goto loc_82C2B8E8;
loc_82C2B888:
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,1612
	ctx.r10.u64 = ctx.r11.u64 | 1612;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c2b8d4
	if (cr6.eq) goto loc_82C2B8D4;
	// bl 0x830ff290
	ctx.lr = 0x82C2B8A0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C2B8A4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bne cr6,0x82c2b8d4
	if (!cr6.eq) goto loc_82C2B8D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c2a308
	ctx.lr = 0x82C2B8B4;
	sub_82C2A308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c2b8cc
	if (cr6.eq) goto loc_82C2B8CC;
	// bl 0x82c2ae90
	ctx.lr = 0x82C2B8C8;
	sub_82C2AE90(ctx, base);
	// b 0x82c2b8e8
	goto loc_82C2B8E8;
loc_82C2B8CC:
	// bl 0x82c2b528
	ctx.lr = 0x82C2B8D0;
	sub_82C2B528(ctx, base);
	// b 0x82c2b8e8
	goto loc_82C2B8E8;
loc_82C2B8D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2B8E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C2B8E8:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c2b904
	if (cr6.eq) goto loc_82C2B904;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2B904;
	sub_825952B8(ctx, base);
loc_82C2B904:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2B90C"))) PPC_WEAK_FUNC(sub_82C2B90C);
PPC_FUNC_IMPL(__imp__sub_82C2B90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2B910"))) PPC_WEAK_FUNC(sub_82C2B910);
PPC_FUNC_IMPL(__imp__sub_82C2B910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C2B918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d34e50
	ctx.lr = 0x82C2B924;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82C2B928;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c2b940
	if (!cr6.eq) goto loc_82C2B940;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C2B940:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r31,152(r11)
	PPC_STORE_U8(ctx.r11.u32 + 152, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x82C2B950;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82C2B958;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C2B95C;
	sub_830FFAA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// addi r28,r11,-1516
	ctx.r28.s64 = ctx.r11.s64 + -1516;
	// bne cr6,0x82c2b9c8
	if (!cr6.eq) goto loc_82C2B9C8;
	// addis r8,r29,96
	ctx.r8.s64 = ctx.r29.s64 + 6291456;
	// addi r8,r8,-4888
	ctx.r8.s64 = ctx.r8.s64 + -4888;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82c2b9fc
	if (!cr6.gt) goto loc_82C2B9FC;
	// addis r10,r29,85
	ctx.r10.s64 = ctx.r29.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r10,r10,11904
	ctx.r10.s64 = ctx.r10.s64 + 11904;
	// ori r9,r11,59456
	ctx.r9.u64 = ctx.r11.u64 | 59456;
loc_82C2B990:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r11,r29,r9
	ctx.r11.u64 = ctx.r29.u64 + ctx.r9.u64;
	// bge cr6,0x82c2b9a0
	if (!cr6.lt) goto loc_82C2B9A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82C2B9A0:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// sth r11,120(r30)
	PPC_STORE_U16(ctx.r30.u32 + 120, ctx.r11.u16);
	// bne cr6,0x82c2b9fc
	if (!cr6.eq) goto loc_82C2B9FC;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,548
	ctx.r10.s64 = ctx.r10.s64 + 548;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c2b990
	if (cr6.lt) goto loc_82C2B990;
	// b 0x82c2b9fc
	goto loc_82C2B9FC;
loc_82C2B9C8:
	// bl 0x831156e8
	ctx.lr = 0x82C2B9CC;
	sub_831156E8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r28,-604
	ctx.r5.s64 = ctx.r28.s64 + -604;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x831178a0
	ctx.lr = 0x82C2B9E8;
	sub_831178A0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8316fb10
	ctx.lr = 0x82C2B9F8;
	sub_8316FB10(ctx, base);
	// sth r3,120(r30)
	PPC_STORE_U16(ctx.r30.u32 + 120, ctx.r3.u16);
loc_82C2B9FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// bl 0x8311c338
	ctx.lr = 0x82C2BA08;
	sub_8311C338(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// bgt cr6,0x82c2bab4
	if (cr6.gt) goto loc_82C2BAB4;
	// beq cr6,0x82c2ba94
	if (cr6.eq) goto loc_82C2BA94;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82c2bab4
	if (cr6.gt) goto loc_82C2BAB4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c2ba54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2BA54;
	// bdzf 4*cr6+eq,0x82c2ba64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2BA64;
	// bdzf 4*cr6+eq,0x82c2bab4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2BAB4;
	// bdzf 4*cr6+eq,0x82c2ba94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2BA94;
	// bdzf 4*cr6+eq,0x82c2ba74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2BA74;
	// bne cr6,0x82c2ba84
	if (!cr6.eq) goto loc_82C2BA84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2BA4C;
	sub_82D19A68(ctx, base);
	// addi r4,r28,-88
	ctx.r4.s64 = ctx.r28.s64 + -88;
	// b 0x82c2baa0
	goto loc_82C2BAA0;
loc_82C2BA54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2BA5C;
	sub_82D19A68(ctx, base);
	// addi r4,r28,-76
	ctx.r4.s64 = ctx.r28.s64 + -76;
	// b 0x82c2baa0
	goto loc_82C2BAA0;
loc_82C2BA64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2BA6C;
	sub_82D19A68(ctx, base);
	// addi r4,r28,-64
	ctx.r4.s64 = ctx.r28.s64 + -64;
	// b 0x82c2baa0
	goto loc_82C2BAA0;
loc_82C2BA74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2BA7C;
	sub_82D19A68(ctx, base);
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// b 0x82c2baa0
	goto loc_82C2BAA0;
loc_82C2BA84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2BA8C;
	sub_82D19A68(ctx, base);
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// b 0x82c2baa0
	goto loc_82C2BAA0;
loc_82C2BA94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2BA9C;
	sub_82D19A68(ctx, base);
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
loc_82C2BAA0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2BAB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C2BAB4:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-13652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bne cr6,0x82c2bad4
	if (!cr6.eq) goto loc_82C2BAD4;
	// bl 0x82d19a68
	ctx.lr = 0x82C2BACC;
	sub_82D19A68(ctx, base);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// b 0x82c2badc
	goto loc_82C2BADC;
loc_82C2BAD4:
	// bl 0x82d19a68
	ctx.lr = 0x82C2BAD8;
	sub_82D19A68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82C2BADC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2BAF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c2b7b0
	ctx.lr = 0x82C2BAF8;
	sub_82C2B7B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C2BB00;
	sub_82D19A68(ctx, base);
	// bl 0x82d2bbb8
	ctx.lr = 0x82C2BB04;
	sub_82D2BBB8(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82C2BB08;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82C2BB0C;
	sub_82D25AB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82C2BB18;
	sub_82D198D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2BB24"))) PPC_WEAK_FUNC(sub_82C2BB24);
PPC_FUNC_IMPL(__imp__sub_82C2BB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2BB28"))) PPC_WEAK_FUNC(sub_82C2BB28);
PPC_FUNC_IMPL(__imp__sub_82C2BB28) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2BB50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c2bb74
	if (!cr6.eq) goto loc_82C2BB74;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82c27f40
	ctx.lr = 0x82C2BB64;
	sub_82C27F40(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82C2BB74;
	sub_82D1EAC0(ctx, base);
loc_82C2BB74:
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

__attribute__((alias("__imp__sub_82C2BB8C"))) PPC_WEAK_FUNC(sub_82C2BB8C);
PPC_FUNC_IMPL(__imp__sub_82C2BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2BB90"))) PPC_WEAK_FUNC(sub_82C2BB90);
PPC_FUNC_IMPL(__imp__sub_82C2BB90) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x83177ba8
	ctx.lr = 0x82C2BBA8;
	sub_83177BA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C2BBB8"))) PPC_WEAK_FUNC(sub_82C2BBB8);
PPC_FUNC_IMPL(__imp__sub_82C2BBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C2BBC0;
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
	// li r4,156
	ctx.r4.s64 = 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C2BBE4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2bc20
	if (cr6.eq) goto loc_82C2BC20;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c28ac0
	ctx.lr = 0x82C2BBFC;
	sub_82C28AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,2664
	ctx.r9.s64 = ctx.r11.s64 + 2664;
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
loc_82C2BC20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2BC2C"))) PPC_WEAK_FUNC(sub_82C2BC2C);
PPC_FUNC_IMPL(__imp__sub_82C2BC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2BC30"))) PPC_WEAK_FUNC(sub_82C2BC30);
PPC_FUNC_IMPL(__imp__sub_82C2BC30) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,2664
	ctx.r9.s64 = ctx.r11.s64 + 2664;
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
	// bl 0x82c28840
	ctx.lr = 0x82C2BC68;
	sub_82C28840(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c2bc80
	if (cr6.eq) goto loc_82C2BC80;
	// bl 0x82416268
	ctx.lr = 0x82C2BC7C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C2BC80:
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

__attribute__((alias("__imp__sub_82C2BC98"))) PPC_WEAK_FUNC(sub_82C2BC98);
PPC_FUNC_IMPL(__imp__sub_82C2BC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C2BCA0;
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
	// li r4,156
	ctx.r4.s64 = 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C2BCC4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2bd00
	if (cr6.eq) goto loc_82C2BD00;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c28ac0
	ctx.lr = 0x82C2BCDC;
	sub_82C28AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,3000
	ctx.r9.s64 = ctx.r11.s64 + 3000;
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
loc_82C2BD00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2BD0C"))) PPC_WEAK_FUNC(sub_82C2BD0C);
PPC_FUNC_IMPL(__imp__sub_82C2BD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2BD10"))) PPC_WEAK_FUNC(sub_82C2BD10);
PPC_FUNC_IMPL(__imp__sub_82C2BD10) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,3000
	ctx.r9.s64 = ctx.r11.s64 + 3000;
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
	// bl 0x82c28840
	ctx.lr = 0x82C2BD48;
	sub_82C28840(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c2bd60
	if (cr6.eq) goto loc_82C2BD60;
	// bl 0x82416268
	ctx.lr = 0x82C2BD5C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C2BD60:
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

__attribute__((alias("__imp__sub_82C2BD78"))) PPC_WEAK_FUNC(sub_82C2BD78);
PPC_FUNC_IMPL(__imp__sub_82C2BD78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C2BD80;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2bdac
	if (cr6.lt) goto loc_82C2BDAC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C2BDAC;
	sub_825952B8(ctx, base);
loc_82C2BDAC:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
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
	// blt cr6,0x82c2bde0
	if (cr6.lt) goto loc_82C2BDE0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C2BDE0;
	sub_825952B8(ctx, base);
loc_82C2BDE0:
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

__attribute__((alias("__imp__sub_82C2BDF4"))) PPC_WEAK_FUNC(sub_82C2BDF4);
PPC_FUNC_IMPL(__imp__sub_82C2BDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2BDF8"))) PPC_WEAK_FUNC(sub_82C2BDF8);
PPC_FUNC_IMPL(__imp__sub_82C2BDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C2BE00;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2BE0C;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82C2BE14;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addis r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// lwz r31,-18576(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18576);
	// bl 0x83123778
	ctx.lr = 0x82C2BE2C;
	sub_83123778(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// beq cr6,0x82c2be48
	if (cr6.eq) goto loc_82C2BE48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82C2BE44;
	sub_8311C338(ctx, base);
	// lwz r31,88(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
loc_82C2BE48:
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,1612
	ctx.r10.u64 = ctx.r11.u64 | 1612;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c2be68
	if (cr6.eq) goto loc_82C2BE68;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,40312
	ctx.r10.u64 = ctx.r11.u64 | 40312;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
loc_82C2BE68:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r9,-200
	ctx.r4.s64 = ctx.r9.s64 + -200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C2BE90;
	sub_8259CC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c29260
	ctx.lr = 0x82C2BEA0;
	sub_82C29260(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82C2BEA4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgt cr6,0x82c2bed4
	if (cr6.gt) goto loc_82C2BED4;
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// bge cr6,0x82c2bedc
	if (!cr6.lt) goto loc_82C2BEDC;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// blt cr6,0x82c2bee8
	if (cr6.lt) goto loc_82C2BEE8;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// ble cr6,0x82c2bedc
	if (!cr6.gt) goto loc_82C2BEDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C2BED4:
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, xer);
	// bne cr6,0x82c2bee8
	if (!cr6.eq) goto loc_82C2BEE8;
loc_82C2BEDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82C2BEE8;
	sub_82D198D0(ctx, base);
loc_82C2BEE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2BEF4"))) PPC_WEAK_FUNC(sub_82C2BEF4);
PPC_FUNC_IMPL(__imp__sub_82C2BEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2BEF8"))) PPC_WEAK_FUNC(sub_82C2BEF8);
PPC_FUNC_IMPL(__imp__sub_82C2BEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C2BF00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-4624
	ctx.r31.s64 = ctx.r11.s64 + -4624;
	// lwz r11,-3672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3672);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2c210
	if (!cr6.eq) goto loc_82C2C210;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,-3672(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3672, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r30,r10,-196
	ctx.r30.s64 = ctx.r10.s64 + -196;
	// addi r4,r30,256
	ctx.r4.s64 = ctx.r30.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82C2BF54;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-242
	ctx.r4.s64 = ctx.r30.s64 + -242;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82C2BF60;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,582
	ctx.r10.u64 = ctx.r10.u64 | 582;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r4,r30,248
	ctx.r4.s64 = ctx.r30.s64 + 248;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C2BF88;
	sub_837B0C10(ctx, base);
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82C2BF94;
	sub_837B0C10(ctx, base);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,37
	ctx.r10.u64 = ctx.r10.u64 | 37;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// addi r4,r30,228
	ctx.r4.s64 = ctx.r30.s64 + 228;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x837b0c10
	ctx.lr = 0x82C2BFBC;
	sub_837B0C10(ctx, base);
	// addi r4,r30,220
	ctx.r4.s64 = ctx.r30.s64 + 220;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C2BFC8;
	sub_837B0C10(ctx, base);
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,221
	ctx.r10.u64 = ctx.r10.u64 | 221;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r4,r30,212
	ctx.r4.s64 = ctx.r30.s64 + 212;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82C2BFF0;
	sub_837B0C10(ctx, base);
	// addi r4,r30,204
	ctx.r4.s64 = ctx.r30.s64 + 204;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82C2BFFC;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,520
	ctx.r10.u64 = ctx.r10.u64 | 520;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C024;
	sub_837B0C10(ctx, base);
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C030;
	sub_837B0C10(ctx, base);
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,90
	ctx.r10.u64 = ctx.r10.u64 | 90;
	// li r9,79
	ctx.r9.s64 = 79;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// addi r4,r30,176
	ctx.r4.s64 = ctx.r30.s64 + 176;
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C058;
	sub_837B0C10(ctx, base);
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C064;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r11,r11,115
	ctx.r11.u64 = ctx.r11.u64 | 115;
	// stw r10,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r10.u32);
	// addi r4,r30,160
	ctx.r4.s64 = ctx.r30.s64 + 160;
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C08C;
	sub_837B0C10(ctx, base);
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C098;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,521
	ctx.r10.u64 = ctx.r10.u64 | 521;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// stw r9,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r9.u32);
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C0C0;
	sub_837B0C10(ctx, base);
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C0CC;
	sub_837B0C10(ctx, base);
	// lis r10,75
	ctx.r10.s64 = 4915200;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,21
	ctx.r10.u64 = ctx.r10.u64 | 21;
	// li r9,49
	ctx.r9.s64 = 49;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C0F4;
	sub_837B0C10(ctx, base);
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C100;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// li r9,50
	ctx.r9.s64 = 50;
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// stw r10,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r10.u32);
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// stw r9,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r9.u32);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C128;
	sub_837B0C10(ctx, base);
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// addi r3,r31,652
	ctx.r3.s64 = ctx.r31.s64 + 652;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C134;
	sub_837B0C10(ctx, base);
	// lis r10,109
	ctx.r10.s64 = 7143424;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 | 5;
	// li r9,53
	ctx.r9.s64 = 53;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// stw r10,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r10.u32);
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// stw r9,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r9.u32);
	// addi r3,r31,692
	ctx.r3.s64 = ctx.r31.s64 + 692;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C15C;
	sub_837B0C10(ctx, base);
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// addi r3,r31,720
	ctx.r3.s64 = ctx.r31.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C168;
	sub_837B0C10(ctx, base);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// li r9,54
	ctx.r9.s64 = 54;
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
	// stw r10,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r10.u32);
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// stw r9,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r9.u32);
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C190;
	sub_837B0C10(ctx, base);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r3,r31,788
	ctx.r3.s64 = ctx.r31.s64 + 788;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C19C;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// ori r10,r10,141
	ctx.r10.u64 = ctx.r10.u64 | 141;
	// li r9,56
	ctx.r9.s64 = 56;
	// stw r10,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r10.u32);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// stw r9,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r9.u32);
	// addi r3,r31,828
	ctx.r3.s64 = ctx.r31.s64 + 828;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C1C4;
	sub_837B0C10(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C1D0;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,611
	ctx.r10.u64 = ctx.r10.u64 | 611;
	// li r9,57
	ctx.r9.s64 = 57;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C1F8;
	sub_837B0C10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,924
	ctx.r3.s64 = ctx.r31.s64 + 924;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C204;
	sub_837B0C10(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-30864
	ctx.r3.s64 = ctx.r9.s64 + -30864;
	// bl 0x831cdcc8
	ctx.lr = 0x82C2C210;
	sub_831CDCC8(ctx, base);
loc_82C2C210:
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2C224"))) PPC_WEAK_FUNC(sub_82C2C224);
PPC_FUNC_IMPL(__imp__sub_82C2C224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2C228"))) PPC_WEAK_FUNC(sub_82C2C228);
PPC_FUNC_IMPL(__imp__sub_82C2C228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C2C230;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2C23C;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82C2C244;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addis r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// lwz r31,-18576(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18576);
	// bl 0x83123778
	ctx.lr = 0x82C2C25C;
	sub_83123778(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// beq cr6,0x82c2c278
	if (cr6.eq) goto loc_82C2C278;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82C2C274;
	sub_8311C338(ctx, base);
	// lwz r31,88(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
loc_82C2C278:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r9,-437
	ctx.r4.s64 = ctx.r9.s64 + -437;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82C2C2A0;
	sub_8259CC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c29260
	ctx.lr = 0x82C2C2B0;
	sub_82C29260(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2C2BC"))) PPC_WEAK_FUNC(sub_82C2C2BC);
PPC_FUNC_IMPL(__imp__sub_82C2C2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2C2C0"))) PPC_WEAK_FUNC(sub_82C2C2C0);
PPC_FUNC_IMPL(__imp__sub_82C2C2C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82C2C2C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31760
	ctx.r24.s64 = -2081423360;
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// lis r27,26
	ctx.r27.s64 = 1703936;
	// lis r31,3
	ctx.r31.s64 = 196608;
	// lis r30,2
	ctx.r30.s64 = 131072;
	// lis r26,25
	ctx.r26.s64 = 1638400;
	// lwz r11,4508(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4508);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-31760
	ctx.r9.s64 = -2081423360;
	// lis r8,25
	ctx.r8.s64 = 1638400;
	// lis r7,60
	ctx.r7.s64 = 3932160;
	// lis r6,26
	ctx.r6.s64 = 1703936;
	// lis r5,509
	ctx.r5.s64 = 33357824;
	// lis r4,109
	ctx.r4.s64 = 7143424;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// lis r29,25
	ctx.r29.s64 = 1638400;
	// lis r28,75
	ctx.r28.s64 = 4915200;
	// ori r23,r27,18
	ctx.r23.u64 = ctx.r27.u64 | 18;
	// ori r19,r31,2
	ctx.r19.u64 = ctx.r31.u64 | 2;
	// ori r20,r30,141
	ctx.r20.u64 = ctx.r30.u64 | 141;
	// ori r27,r26,133
	ctx.r27.u64 = ctx.r26.u64 | 133;
	// ori r14,r8,410
	ctx.r14.u64 = ctx.r8.u64 | 410;
	// ori r15,r7,74
	ctx.r15.u64 = ctx.r7.u64 | 74;
	// ori r16,r6,556
	ctx.r16.u64 = ctx.r6.u64 | 556;
	// ori r17,r5,152
	ctx.r17.u64 = ctx.r5.u64 | 152;
	// ori r18,r4,5
	ctx.r18.u64 = ctx.r4.u64 | 5;
	// ori r21,r29,611
	ctx.r21.u64 = ctx.r29.u64 | 611;
	// ori r22,r28,21
	ctx.r22.u64 = ctx.r28.u64 | 21;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r10,2224
	ctx.r31.s64 = ctx.r10.s64 + 2224;
	// addi r30,r9,2944
	ctx.r30.s64 = ctx.r9.s64 + 2944;
	// li r26,-1
	ctx.r26.s64 = -1;
	// bne cr6,0x82c2c7b8
	if (!cr6.eq) goto loc_82C2C7B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4508(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4508, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r4,r31,-1684
	ctx.r4.s64 = ctx.r31.s64 + -1684;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C378;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2630
	ctx.r4.s64 = ctx.r31.s64 + -2630;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C384;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,582
	ctx.r10.u64 = ctx.r10.u64 | 582;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// addi r4,r31,-1692
	ctx.r4.s64 = ctx.r31.s64 + -1692;
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C3AC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1700
	ctx.r4.s64 = ctx.r31.s64 + -1700;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C3B8;
	sub_837B0C10(ctx, base);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,37
	ctx.r10.u64 = ctx.r10.u64 | 37;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// stw r10,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r10.u32);
	// addi r4,r31,-1712
	ctx.r4.s64 = ctx.r31.s64 + -1712;
	// stw r9,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r9.u32);
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C3E0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1720
	ctx.r4.s64 = ctx.r31.s64 + -1720;
	// addi r3,r30,176
	ctx.r3.s64 = ctx.r30.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C3EC;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,555
	ctx.r10.u64 = ctx.r10.u64 | 555;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r11.u32);
	// stw r10,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r10.u32);
	// addi r4,r31,-1732
	ctx.r4.s64 = ctx.r31.s64 + -1732;
	// stw r9,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r9.u32);
	// addi r3,r30,216
	ctx.r3.s64 = ctx.r30.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C414;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1740
	ctx.r4.s64 = ctx.r31.s64 + -1740;
	// addi r3,r30,244
	ctx.r3.s64 = ctx.r30.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C420;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,557
	ctx.r10.u64 = ctx.r10.u64 | 557;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r11.u32);
	// stw r10,276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 276, ctx.r10.u32);
	// addi r4,r31,-1748
	ctx.r4.s64 = ctx.r31.s64 + -1748;
	// stw r9,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r9.u32);
	// addi r3,r30,284
	ctx.r3.s64 = ctx.r30.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C448;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1756
	ctx.r4.s64 = ctx.r31.s64 + -1756;
	// addi r3,r30,312
	ctx.r3.s64 = ctx.r30.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C454;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,520
	ctx.r10.u64 = ctx.r10.u64 | 520;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
	// stw r10,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r10.u32);
	// addi r4,r31,-1768
	ctx.r4.s64 = ctx.r31.s64 + -1768;
	// stw r9,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r9.u32);
	// addi r3,r30,352
	ctx.r3.s64 = ctx.r30.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C47C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1776
	ctx.r4.s64 = ctx.r31.s64 + -1776;
	// addi r3,r30,380
	ctx.r3.s64 = ctx.r30.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C488;
	sub_837B0C10(ctx, base);
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r25,r10,90
	ctx.r25.u64 = ctx.r10.u64 | 90;
	// li r10,79
	ctx.r10.s64 = 79;
	// stw r11,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r11.u32);
	// stw r25,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r25.u32);
	// addi r4,r31,-1784
	ctx.r4.s64 = ctx.r31.s64 + -1784;
	// stw r10,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r10.u32);
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C4B0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1792
	ctx.r4.s64 = ctx.r31.s64 + -1792;
	// addi r3,r30,448
	ctx.r3.s64 = ctx.r30.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C4BC;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,115
	ctx.r10.u64 = ctx.r10.u64 | 115;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r11.u32);
	// stw r10,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r10.u32);
	// addi r4,r31,-1800
	ctx.r4.s64 = ctx.r31.s64 + -1800;
	// stw r9,484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 484, ctx.r9.u32);
	// addi r3,r30,488
	ctx.r3.s64 = ctx.r30.s64 + 488;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C4E4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1808
	ctx.r4.s64 = ctx.r31.s64 + -1808;
	// addi r3,r30,516
	ctx.r3.s64 = ctx.r30.s64 + 516;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C4F0;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,521
	ctx.r10.u64 = ctx.r10.u64 | 521;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r11.u32);
	// stw r10,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r10.u32);
	// addi r4,r31,-1816
	ctx.r4.s64 = ctx.r31.s64 + -1816;
	// stw r9,552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 552, ctx.r9.u32);
	// addi r3,r30,556
	ctx.r3.s64 = ctx.r30.s64 + 556;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C518;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1824
	ctx.r4.s64 = ctx.r31.s64 + -1824;
	// addi r3,r30,584
	ctx.r3.s64 = ctx.r30.s64 + 584;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C524;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r14,616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 616, ctx.r14.u32);
	// stw r11,612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 612, ctx.r11.u32);
	// addi r4,r31,-1836
	ctx.r4.s64 = ctx.r31.s64 + -1836;
	// stw r10,620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 620, ctx.r10.u32);
	// addi r3,r30,624
	ctx.r3.s64 = ctx.r30.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C544;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1848
	ctx.r4.s64 = ctx.r31.s64 + -1848;
	// addi r3,r30,652
	ctx.r3.s64 = ctx.r30.s64 + 652;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C550;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r15,684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 684, ctx.r15.u32);
	// stw r11,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r11.u32);
	// addi r4,r31,-1860
	ctx.r4.s64 = ctx.r31.s64 + -1860;
	// stw r10,688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 688, ctx.r10.u32);
	// addi r3,r30,692
	ctx.r3.s64 = ctx.r30.s64 + 692;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C570;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1872
	ctx.r4.s64 = ctx.r31.s64 + -1872;
	// addi r3,r30,720
	ctx.r3.s64 = ctx.r30.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C57C;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r16,752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 752, ctx.r16.u32);
	// stw r11,748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 748, ctx.r11.u32);
	// addi r4,r31,-1888
	ctx.r4.s64 = ctx.r31.s64 + -1888;
	// stw r10,756(r30)
	PPC_STORE_U32(ctx.r30.u32 + 756, ctx.r10.u32);
	// addi r3,r30,760
	ctx.r3.s64 = ctx.r30.s64 + 760;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C59C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1900
	ctx.r4.s64 = ctx.r31.s64 + -1900;
	// addi r3,r30,788
	ctx.r3.s64 = ctx.r30.s64 + 788;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C5A8;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,39
	ctx.r9.s64 = 39;
	// ori r10,r10,307
	ctx.r10.u64 = ctx.r10.u64 | 307;
	// stw r11,816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 816, ctx.r11.u32);
	// stw r9,824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 824, ctx.r9.u32);
	// addi r4,r31,-1912
	ctx.r4.s64 = ctx.r31.s64 + -1912;
	// stw r10,820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 820, ctx.r10.u32);
	// addi r3,r30,828
	ctx.r3.s64 = ctx.r30.s64 + 828;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C5D0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1924
	ctx.r4.s64 = ctx.r31.s64 + -1924;
	// addi r3,r30,856
	ctx.r3.s64 = ctx.r30.s64 + 856;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C5DC;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r17,888(r30)
	PPC_STORE_U32(ctx.r30.u32 + 888, ctx.r17.u32);
	// addi r4,r31,-1936
	ctx.r4.s64 = ctx.r31.s64 + -1936;
	// stw r11,884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 884, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r3,r30,896
	ctx.r3.s64 = ctx.r30.s64 + 896;
	// stw r11,892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 892, ctx.r11.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82C2C5FC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1948
	ctx.r4.s64 = ctx.r31.s64 + -1948;
	// addi r3,r30,924
	ctx.r3.s64 = ctx.r30.s64 + 924;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C608;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r18,956(r30)
	PPC_STORE_U32(ctx.r30.u32 + 956, ctx.r18.u32);
	// stw r11,952(r30)
	PPC_STORE_U32(ctx.r30.u32 + 952, ctx.r11.u32);
	// addi r4,r31,-1956
	ctx.r4.s64 = ctx.r31.s64 + -1956;
	// stw r10,960(r30)
	PPC_STORE_U32(ctx.r30.u32 + 960, ctx.r10.u32);
	// addi r3,r30,964
	ctx.r3.s64 = ctx.r30.s64 + 964;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C628;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1968
	ctx.r4.s64 = ctx.r31.s64 + -1968;
	// addi r3,r30,992
	ctx.r3.s64 = ctx.r30.s64 + 992;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C634;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,54
	ctx.r10.s64 = 54;
	// stw r19,1024(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1024, ctx.r19.u32);
	// stw r11,1020(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1020, ctx.r11.u32);
	// addi r4,r31,-1980
	ctx.r4.s64 = ctx.r31.s64 + -1980;
	// stw r10,1028(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1028, ctx.r10.u32);
	// addi r3,r30,1032
	ctx.r3.s64 = ctx.r30.s64 + 1032;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C654;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1992
	ctx.r4.s64 = ctx.r31.s64 + -1992;
	// addi r3,r30,1060
	ctx.r3.s64 = ctx.r30.s64 + 1060;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C660;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r20,1092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1092, ctx.r20.u32);
	// stw r11,1088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1088, ctx.r11.u32);
	// addi r4,r31,-2004
	ctx.r4.s64 = ctx.r31.s64 + -2004;
	// stw r10,1096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1096, ctx.r10.u32);
	// addi r3,r30,1100
	ctx.r3.s64 = ctx.r30.s64 + 1100;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C680;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2016
	ctx.r4.s64 = ctx.r31.s64 + -2016;
	// addi r3,r30,1128
	ctx.r3.s64 = ctx.r30.s64 + 1128;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C68C;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,57
	ctx.r10.s64 = 57;
	// stw r21,1160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1160, ctx.r21.u32);
	// stw r11,1156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1156, ctx.r11.u32);
	// addi r4,r31,-2032
	ctx.r4.s64 = ctx.r31.s64 + -2032;
	// stw r10,1164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1164, ctx.r10.u32);
	// addi r3,r30,1168
	ctx.r3.s64 = ctx.r30.s64 + 1168;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C6AC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2044
	ctx.r4.s64 = ctx.r31.s64 + -2044;
	// addi r3,r30,1196
	ctx.r3.s64 = ctx.r30.s64 + 1196;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C6B8;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r22,1228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1228, ctx.r22.u32);
	// stw r11,1224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1224, ctx.r11.u32);
	// addi r4,r31,-2056
	ctx.r4.s64 = ctx.r31.s64 + -2056;
	// stw r10,1232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1232, ctx.r10.u32);
	// addi r3,r30,1236
	ctx.r3.s64 = ctx.r30.s64 + 1236;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C6D8;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2064
	ctx.r4.s64 = ctx.r31.s64 + -2064;
	// addi r3,r30,1264
	ctx.r3.s64 = ctx.r30.s64 + 1264;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C6E4;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r23,1296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1296, ctx.r23.u32);
	// stw r11,1292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1292, ctx.r11.u32);
	// addi r4,r31,-2076
	ctx.r4.s64 = ctx.r31.s64 + -2076;
	// stw r10,1300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1300, ctx.r10.u32);
	// addi r3,r30,1304
	ctx.r3.s64 = ctx.r30.s64 + 1304;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C704;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2084
	ctx.r4.s64 = ctx.r31.s64 + -2084;
	// addi r3,r30,1332
	ctx.r3.s64 = ctx.r30.s64 + 1332;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C710;
	sub_837B0C10(ctx, base);
	// lis r10,29
	ctx.r10.s64 = 1900544;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,321
	ctx.r10.u64 = ctx.r10.u64 | 321;
	// li r9,78
	ctx.r9.s64 = 78;
	// stw r11,1360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1360, ctx.r11.u32);
	// stw r10,1364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1364, ctx.r10.u32);
	// addi r4,r31,-2096
	ctx.r4.s64 = ctx.r31.s64 + -2096;
	// stw r9,1368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1368, ctx.r9.u32);
	// addi r3,r30,1372
	ctx.r3.s64 = ctx.r30.s64 + 1372;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C738;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2104
	ctx.r4.s64 = ctx.r31.s64 + -2104;
	// addi r3,r30,1400
	ctx.r3.s64 = ctx.r30.s64 + 1400;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C744;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r10,r10,552
	ctx.r10.u64 = ctx.r10.u64 | 552;
	// li r9,74
	ctx.r9.s64 = 74;
	// stw r11,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r11.u32);
	// stw r10,1432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1432, ctx.r10.u32);
	// addi r4,r31,-2120
	ctx.r4.s64 = ctx.r31.s64 + -2120;
	// stw r9,1436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1436, ctx.r9.u32);
	// addi r3,r30,1440
	ctx.r3.s64 = ctx.r30.s64 + 1440;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C76C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2132
	ctx.r4.s64 = ctx.r31.s64 + -2132;
	// addi r3,r30,1468
	ctx.r3.s64 = ctx.r30.s64 + 1468;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C778;
	sub_837B0C10(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,76
	ctx.r10.s64 = 76;
	// stw r27,1500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1500, ctx.r27.u32);
	// stw r11,1496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1496, ctx.r11.u32);
	// addi r4,r31,-2144
	ctx.r4.s64 = ctx.r31.s64 + -2144;
	// stw r10,1504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1504, ctx.r10.u32);
	// addi r3,r30,1508
	ctx.r3.s64 = ctx.r30.s64 + 1508;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C798;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2156
	ctx.r4.s64 = ctx.r31.s64 + -2156;
	// addi r3,r30,1536
	ctx.r3.s64 = ctx.r30.s64 + 1536;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C7A4;
	sub_837B0C10(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-31000
	ctx.r3.s64 = ctx.r9.s64 + -31000;
	// bl 0x831cdcc8
	ctx.lr = 0x82C2C7B0;
	sub_831CDCC8(ctx, base);
	// lwz r11,4508(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4508);
	// b 0x82c2c7c0
	goto loc_82C2C7C0;
loc_82C2C7B8:
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// ori r25,r10,90
	ctx.r25.u64 = ctx.r10.u64 | 90;
loc_82C2C7C0:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r10,-31760
	ctx.r10.s64 = -2081423360;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r29,r10,1448
	ctx.r29.s64 = ctx.r10.s64 + 1448;
	// bne cr6,0x82c2cbfc
	if (!cr6.eq) goto loc_82C2CBFC;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4508(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4508, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r4,r31,-1216
	ctx.r4.s64 = ctx.r31.s64 + -1216;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C7FC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2629
	ctx.r4.s64 = ctx.r31.s64 + -2629;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C808;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,582
	ctx.r10.u64 = ctx.r10.u64 | 582;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r11.u32);
	// stw r10,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r10.u32);
	// addi r4,r31,-1224
	ctx.r4.s64 = ctx.r31.s64 + -1224;
	// stw r9,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r9.u32);
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C830;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1232
	ctx.r4.s64 = ctx.r31.s64 + -1232;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C83C;
	sub_837B0C10(ctx, base);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,37
	ctx.r10.u64 = ctx.r10.u64 | 37;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r11.u32);
	// stw r10,140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 140, ctx.r10.u32);
	// addi r4,r31,-1244
	ctx.r4.s64 = ctx.r31.s64 + -1244;
	// stw r9,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r9.u32);
	// addi r3,r29,148
	ctx.r3.s64 = ctx.r29.s64 + 148;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C864;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1252
	ctx.r4.s64 = ctx.r31.s64 + -1252;
	// addi r3,r29,176
	ctx.r3.s64 = ctx.r29.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C870;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,555
	ctx.r10.u64 = ctx.r10.u64 | 555;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 204, ctx.r11.u32);
	// stw r10,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r10.u32);
	// addi r4,r31,-1264
	ctx.r4.s64 = ctx.r31.s64 + -1264;
	// stw r9,212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 212, ctx.r9.u32);
	// addi r3,r29,216
	ctx.r3.s64 = ctx.r29.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C898;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1272
	ctx.r4.s64 = ctx.r31.s64 + -1272;
	// addi r3,r29,244
	ctx.r3.s64 = ctx.r29.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C8A4;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,557
	ctx.r10.u64 = ctx.r10.u64 | 557;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r11.u32);
	// stw r10,276(r29)
	PPC_STORE_U32(ctx.r29.u32 + 276, ctx.r10.u32);
	// addi r4,r31,-1280
	ctx.r4.s64 = ctx.r31.s64 + -1280;
	// stw r9,280(r29)
	PPC_STORE_U32(ctx.r29.u32 + 280, ctx.r9.u32);
	// addi r3,r29,284
	ctx.r3.s64 = ctx.r29.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C8CC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1288
	ctx.r4.s64 = ctx.r31.s64 + -1288;
	// addi r3,r29,312
	ctx.r3.s64 = ctx.r29.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C8D8;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,520
	ctx.r10.u64 = ctx.r10.u64 | 520;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,340(r29)
	PPC_STORE_U32(ctx.r29.u32 + 340, ctx.r11.u32);
	// stw r10,344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 344, ctx.r10.u32);
	// addi r4,r31,-1300
	ctx.r4.s64 = ctx.r31.s64 + -1300;
	// stw r9,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r9.u32);
	// addi r3,r29,352
	ctx.r3.s64 = ctx.r29.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C900;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1308
	ctx.r4.s64 = ctx.r31.s64 + -1308;
	// addi r3,r29,380
	ctx.r3.s64 = ctx.r29.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C90C;
	sub_837B0C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,79
	ctx.r10.s64 = 79;
	// stw r11,408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 408, ctx.r11.u32);
	// stw r10,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r10.u32);
	// addi r4,r31,-1316
	ctx.r4.s64 = ctx.r31.s64 + -1316;
	// stw r25,412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 412, ctx.r25.u32);
	// addi r3,r29,420
	ctx.r3.s64 = ctx.r29.s64 + 420;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C92C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1324
	ctx.r4.s64 = ctx.r31.s64 + -1324;
	// addi r3,r29,448
	ctx.r3.s64 = ctx.r29.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C938;
	sub_837B0C10(ctx, base);
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,140
	ctx.r10.u64 = ctx.r10.u64 | 140;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 476, ctx.r11.u32);
	// stw r10,480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 480, ctx.r10.u32);
	// addi r4,r31,-1336
	ctx.r4.s64 = ctx.r31.s64 + -1336;
	// stw r9,484(r29)
	PPC_STORE_U32(ctx.r29.u32 + 484, ctx.r9.u32);
	// addi r3,r29,488
	ctx.r3.s64 = ctx.r29.s64 + 488;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C960;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1344
	ctx.r4.s64 = ctx.r31.s64 + -1344;
	// addi r3,r29,516
	ctx.r3.s64 = ctx.r29.s64 + 516;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C96C;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r14,548(r29)
	PPC_STORE_U32(ctx.r29.u32 + 548, ctx.r14.u32);
	// stw r11,544(r29)
	PPC_STORE_U32(ctx.r29.u32 + 544, ctx.r11.u32);
	// addi r4,r31,-1356
	ctx.r4.s64 = ctx.r31.s64 + -1356;
	// stw r10,552(r29)
	PPC_STORE_U32(ctx.r29.u32 + 552, ctx.r10.u32);
	// addi r3,r29,556
	ctx.r3.s64 = ctx.r29.s64 + 556;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C98C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1368
	ctx.r4.s64 = ctx.r31.s64 + -1368;
	// addi r3,r29,584
	ctx.r3.s64 = ctx.r29.s64 + 584;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C998;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r15,616(r29)
	PPC_STORE_U32(ctx.r29.u32 + 616, ctx.r15.u32);
	// stw r11,612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 612, ctx.r11.u32);
	// addi r4,r31,-1380
	ctx.r4.s64 = ctx.r31.s64 + -1380;
	// stw r10,620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 620, ctx.r10.u32);
	// addi r3,r29,624
	ctx.r3.s64 = ctx.r29.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C9B8;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1392
	ctx.r4.s64 = ctx.r31.s64 + -1392;
	// addi r3,r29,652
	ctx.r3.s64 = ctx.r29.s64 + 652;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C9C4;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r16,684(r29)
	PPC_STORE_U32(ctx.r29.u32 + 684, ctx.r16.u32);
	// stw r11,680(r29)
	PPC_STORE_U32(ctx.r29.u32 + 680, ctx.r11.u32);
	// addi r4,r31,-1408
	ctx.r4.s64 = ctx.r31.s64 + -1408;
	// stw r10,688(r29)
	PPC_STORE_U32(ctx.r29.u32 + 688, ctx.r10.u32);
	// addi r3,r29,692
	ctx.r3.s64 = ctx.r29.s64 + 692;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C9E4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1420
	ctx.r4.s64 = ctx.r31.s64 + -1420;
	// addi r3,r29,720
	ctx.r3.s64 = ctx.r29.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82C2C9F0;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,307
	ctx.r10.u64 = ctx.r10.u64 | 307;
	// li r9,39
	ctx.r9.s64 = 39;
	// stw r11,748(r29)
	PPC_STORE_U32(ctx.r29.u32 + 748, ctx.r11.u32);
	// stw r10,752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 752, ctx.r10.u32);
	// addi r4,r31,-1432
	ctx.r4.s64 = ctx.r31.s64 + -1432;
	// stw r9,756(r29)
	PPC_STORE_U32(ctx.r29.u32 + 756, ctx.r9.u32);
	// addi r3,r29,760
	ctx.r3.s64 = ctx.r29.s64 + 760;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CA18;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1444
	ctx.r4.s64 = ctx.r31.s64 + -1444;
	// addi r3,r29,788
	ctx.r3.s64 = ctx.r29.s64 + 788;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CA24;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r17,820(r29)
	PPC_STORE_U32(ctx.r29.u32 + 820, ctx.r17.u32);
	// stw r11,816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 816, ctx.r11.u32);
	// addi r4,r31,-1456
	ctx.r4.s64 = ctx.r31.s64 + -1456;
	// stw r10,824(r29)
	PPC_STORE_U32(ctx.r29.u32 + 824, ctx.r10.u32);
	// addi r3,r29,828
	ctx.r3.s64 = ctx.r29.s64 + 828;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CA44;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1468
	ctx.r4.s64 = ctx.r31.s64 + -1468;
	// addi r3,r29,856
	ctx.r3.s64 = ctx.r29.s64 + 856;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CA50;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,884(r29)
	PPC_STORE_U32(ctx.r29.u32 + 884, ctx.r11.u32);
	// li r11,53
	ctx.r11.s64 = 53;
	// stw r18,888(r29)
	PPC_STORE_U32(ctx.r29.u32 + 888, ctx.r18.u32);
	// addi r4,r31,-1476
	ctx.r4.s64 = ctx.r31.s64 + -1476;
	// stw r11,892(r29)
	PPC_STORE_U32(ctx.r29.u32 + 892, ctx.r11.u32);
	// addi r3,r29,896
	ctx.r3.s64 = ctx.r29.s64 + 896;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CA70;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1488
	ctx.r4.s64 = ctx.r31.s64 + -1488;
	// addi r3,r29,924
	ctx.r3.s64 = ctx.r29.s64 + 924;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CA7C;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,54
	ctx.r10.s64 = 54;
	// stw r19,956(r29)
	PPC_STORE_U32(ctx.r29.u32 + 956, ctx.r19.u32);
	// stw r11,952(r29)
	PPC_STORE_U32(ctx.r29.u32 + 952, ctx.r11.u32);
	// addi r4,r31,-1500
	ctx.r4.s64 = ctx.r31.s64 + -1500;
	// stw r10,960(r29)
	PPC_STORE_U32(ctx.r29.u32 + 960, ctx.r10.u32);
	// addi r3,r29,964
	ctx.r3.s64 = ctx.r29.s64 + 964;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CA9C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1512
	ctx.r4.s64 = ctx.r31.s64 + -1512;
	// addi r3,r29,992
	ctx.r3.s64 = ctx.r29.s64 + 992;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CAA8;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r20,1024(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1024, ctx.r20.u32);
	// stw r11,1020(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1020, ctx.r11.u32);
	// addi r4,r31,-1524
	ctx.r4.s64 = ctx.r31.s64 + -1524;
	// stw r10,1028(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1028, ctx.r10.u32);
	// addi r3,r29,1032
	ctx.r3.s64 = ctx.r29.s64 + 1032;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CAC8;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1536
	ctx.r4.s64 = ctx.r31.s64 + -1536;
	// addi r3,r29,1060
	ctx.r3.s64 = ctx.r29.s64 + 1060;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CAD4;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,57
	ctx.r10.s64 = 57;
	// stw r21,1092(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1092, ctx.r21.u32);
	// stw r11,1088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1088, ctx.r11.u32);
	// addi r4,r31,-1552
	ctx.r4.s64 = ctx.r31.s64 + -1552;
	// stw r10,1096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1096, ctx.r10.u32);
	// addi r3,r29,1100
	ctx.r3.s64 = ctx.r29.s64 + 1100;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CAF4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1564
	ctx.r4.s64 = ctx.r31.s64 + -1564;
	// addi r3,r29,1128
	ctx.r3.s64 = ctx.r29.s64 + 1128;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CB00;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r22,1160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1160, ctx.r22.u32);
	// stw r11,1156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1156, ctx.r11.u32);
	// addi r4,r31,-1576
	ctx.r4.s64 = ctx.r31.s64 + -1576;
	// stw r10,1164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1164, ctx.r10.u32);
	// addi r3,r29,1168
	ctx.r3.s64 = ctx.r29.s64 + 1168;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CB20;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1584
	ctx.r4.s64 = ctx.r31.s64 + -1584;
	// addi r3,r29,1196
	ctx.r3.s64 = ctx.r29.s64 + 1196;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CB2C;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r23,1228(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1228, ctx.r23.u32);
	// stw r11,1224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1224, ctx.r11.u32);
	// addi r4,r31,-1596
	ctx.r4.s64 = ctx.r31.s64 + -1596;
	// stw r10,1232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1232, ctx.r10.u32);
	// addi r3,r29,1236
	ctx.r3.s64 = ctx.r29.s64 + 1236;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CB4C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1604
	ctx.r4.s64 = ctx.r31.s64 + -1604;
	// addi r3,r29,1264
	ctx.r3.s64 = ctx.r29.s64 + 1264;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CB58;
	sub_837B0C10(ctx, base);
	// lis r10,29
	ctx.r10.s64 = 1900544;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,78
	ctx.r9.s64 = 78;
	// ori r10,r10,321
	ctx.r10.u64 = ctx.r10.u64 | 321;
	// stw r11,1292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1292, ctx.r11.u32);
	// stw r9,1300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1300, ctx.r9.u32);
	// addi r4,r31,-1616
	ctx.r4.s64 = ctx.r31.s64 + -1616;
	// stw r10,1296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1296, ctx.r10.u32);
	// addi r3,r29,1304
	ctx.r3.s64 = ctx.r29.s64 + 1304;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CB80;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1624
	ctx.r4.s64 = ctx.r31.s64 + -1624;
	// addi r3,r29,1332
	ctx.r3.s64 = ctx.r29.s64 + 1332;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CB8C;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r10,r10,552
	ctx.r10.u64 = ctx.r10.u64 | 552;
	// li r9,74
	ctx.r9.s64 = 74;
	// stw r11,1360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1360, ctx.r11.u32);
	// stw r10,1364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1364, ctx.r10.u32);
	// addi r4,r31,-1640
	ctx.r4.s64 = ctx.r31.s64 + -1640;
	// stw r9,1368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1368, ctx.r9.u32);
	// addi r3,r29,1372
	ctx.r3.s64 = ctx.r29.s64 + 1372;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CBB4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1652
	ctx.r4.s64 = ctx.r31.s64 + -1652;
	// addi r3,r29,1400
	ctx.r3.s64 = ctx.r29.s64 + 1400;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CBC0;
	sub_837B0C10(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,76
	ctx.r10.s64 = 76;
	// stw r27,1432(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1432, ctx.r27.u32);
	// stw r11,1428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1428, ctx.r11.u32);
	// addi r4,r31,-1664
	ctx.r4.s64 = ctx.r31.s64 + -1664;
	// stw r10,1436(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1436, ctx.r10.u32);
	// addi r3,r29,1440
	ctx.r3.s64 = ctx.r29.s64 + 1440;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CBE0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1676
	ctx.r4.s64 = ctx.r31.s64 + -1676;
	// addi r3,r29,1468
	ctx.r3.s64 = ctx.r29.s64 + 1468;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CBEC;
	sub_837B0C10(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-31136
	ctx.r3.s64 = ctx.r11.s64 + -31136;
	// bl 0x831cdcc8
	ctx.lr = 0x82C2CBF8;
	sub_831CDCC8(ctx, base);
	// lwz r11,4508(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4508);
loc_82C2CBFC:
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r10,-31760
	ctx.r10.s64 = -2081423360;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r28,r10,16
	ctx.r28.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x82c2d004
	if (!cr6.eq) goto loc_82C2D004;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4508(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4508, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r4,r31,-764
	ctx.r4.s64 = ctx.r31.s64 + -764;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CC38;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2599
	ctx.r4.s64 = ctx.r31.s64 + -2599;
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CC44;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,41
	ctx.r10.u64 = ctx.r10.u64 | 41;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r11.u32);
	// stw r10,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r10.u32);
	// addi r4,r31,-776
	ctx.r4.s64 = ctx.r31.s64 + -776;
	// stw r9,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r9.u32);
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CC6C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-784
	ctx.r4.s64 = ctx.r31.s64 + -784;
	// addi r3,r28,108
	ctx.r3.s64 = ctx.r28.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CC78;
	sub_837B0C10(ctx, base);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,37
	ctx.r10.u64 = ctx.r10.u64 | 37;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 136, ctx.r11.u32);
	// stw r10,140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 140, ctx.r10.u32);
	// addi r4,r31,-796
	ctx.r4.s64 = ctx.r31.s64 + -796;
	// stw r9,144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 144, ctx.r9.u32);
	// addi r3,r28,148
	ctx.r3.s64 = ctx.r28.s64 + 148;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CCA0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-804
	ctx.r4.s64 = ctx.r31.s64 + -804;
	// addi r3,r28,176
	ctx.r3.s64 = ctx.r28.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CCAC;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,555
	ctx.r10.u64 = ctx.r10.u64 | 555;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,204(r28)
	PPC_STORE_U32(ctx.r28.u32 + 204, ctx.r11.u32);
	// stw r10,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r10.u32);
	// addi r4,r31,-816
	ctx.r4.s64 = ctx.r31.s64 + -816;
	// stw r9,212(r28)
	PPC_STORE_U32(ctx.r28.u32 + 212, ctx.r9.u32);
	// addi r3,r28,216
	ctx.r3.s64 = ctx.r28.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CCD4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-824
	ctx.r4.s64 = ctx.r31.s64 + -824;
	// addi r3,r28,244
	ctx.r3.s64 = ctx.r28.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CCE0;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,557
	ctx.r10.u64 = ctx.r10.u64 | 557;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,272(r28)
	PPC_STORE_U32(ctx.r28.u32 + 272, ctx.r11.u32);
	// stw r10,276(r28)
	PPC_STORE_U32(ctx.r28.u32 + 276, ctx.r10.u32);
	// addi r4,r31,-832
	ctx.r4.s64 = ctx.r31.s64 + -832;
	// stw r9,280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 280, ctx.r9.u32);
	// addi r3,r28,284
	ctx.r3.s64 = ctx.r28.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CD08;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-840
	ctx.r4.s64 = ctx.r31.s64 + -840;
	// addi r3,r28,312
	ctx.r3.s64 = ctx.r28.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CD14;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,520
	ctx.r10.u64 = ctx.r10.u64 | 520;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,340(r28)
	PPC_STORE_U32(ctx.r28.u32 + 340, ctx.r11.u32);
	// stw r10,344(r28)
	PPC_STORE_U32(ctx.r28.u32 + 344, ctx.r10.u32);
	// addi r4,r31,-852
	ctx.r4.s64 = ctx.r31.s64 + -852;
	// stw r9,348(r28)
	PPC_STORE_U32(ctx.r28.u32 + 348, ctx.r9.u32);
	// addi r3,r28,352
	ctx.r3.s64 = ctx.r28.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CD3C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-860
	ctx.r4.s64 = ctx.r31.s64 + -860;
	// addi r3,r28,380
	ctx.r3.s64 = ctx.r28.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CD48;
	sub_837B0C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,79
	ctx.r10.s64 = 79;
	// stw r11,408(r28)
	PPC_STORE_U32(ctx.r28.u32 + 408, ctx.r11.u32);
	// stw r10,416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 416, ctx.r10.u32);
	// addi r4,r31,-868
	ctx.r4.s64 = ctx.r31.s64 + -868;
	// stw r25,412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 412, ctx.r25.u32);
	// addi r3,r28,420
	ctx.r3.s64 = ctx.r28.s64 + 420;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CD68;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-876
	ctx.r4.s64 = ctx.r31.s64 + -876;
	// addi r3,r28,448
	ctx.r3.s64 = ctx.r28.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CD74;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r14,480(r28)
	PPC_STORE_U32(ctx.r28.u32 + 480, ctx.r14.u32);
	// stw r11,476(r28)
	PPC_STORE_U32(ctx.r28.u32 + 476, ctx.r11.u32);
	// addi r4,r31,-888
	ctx.r4.s64 = ctx.r31.s64 + -888;
	// stw r10,484(r28)
	PPC_STORE_U32(ctx.r28.u32 + 484, ctx.r10.u32);
	// addi r3,r28,488
	ctx.r3.s64 = ctx.r28.s64 + 488;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CD94;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-900
	ctx.r4.s64 = ctx.r31.s64 + -900;
	// addi r3,r28,516
	ctx.r3.s64 = ctx.r28.s64 + 516;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CDA0;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r15,548(r28)
	PPC_STORE_U32(ctx.r28.u32 + 548, ctx.r15.u32);
	// stw r11,544(r28)
	PPC_STORE_U32(ctx.r28.u32 + 544, ctx.r11.u32);
	// addi r4,r31,-912
	ctx.r4.s64 = ctx.r31.s64 + -912;
	// stw r10,552(r28)
	PPC_STORE_U32(ctx.r28.u32 + 552, ctx.r10.u32);
	// addi r3,r28,556
	ctx.r3.s64 = ctx.r28.s64 + 556;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CDC0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-924
	ctx.r4.s64 = ctx.r31.s64 + -924;
	// addi r3,r28,584
	ctx.r3.s64 = ctx.r28.s64 + 584;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CDCC;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r16,616(r28)
	PPC_STORE_U32(ctx.r28.u32 + 616, ctx.r16.u32);
	// stw r11,612(r28)
	PPC_STORE_U32(ctx.r28.u32 + 612, ctx.r11.u32);
	// addi r4,r31,-940
	ctx.r4.s64 = ctx.r31.s64 + -940;
	// stw r10,620(r28)
	PPC_STORE_U32(ctx.r28.u32 + 620, ctx.r10.u32);
	// addi r3,r28,624
	ctx.r3.s64 = ctx.r28.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CDEC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-952
	ctx.r4.s64 = ctx.r31.s64 + -952;
	// addi r3,r28,652
	ctx.r3.s64 = ctx.r28.s64 + 652;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CDF8;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,307
	ctx.r10.u64 = ctx.r10.u64 | 307;
	// li r9,39
	ctx.r9.s64 = 39;
	// stw r11,680(r28)
	PPC_STORE_U32(ctx.r28.u32 + 680, ctx.r11.u32);
	// stw r10,684(r28)
	PPC_STORE_U32(ctx.r28.u32 + 684, ctx.r10.u32);
	// addi r4,r31,-964
	ctx.r4.s64 = ctx.r31.s64 + -964;
	// stw r9,688(r28)
	PPC_STORE_U32(ctx.r28.u32 + 688, ctx.r9.u32);
	// addi r3,r28,692
	ctx.r3.s64 = ctx.r28.s64 + 692;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CE20;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-976
	ctx.r4.s64 = ctx.r31.s64 + -976;
	// addi r3,r28,720
	ctx.r3.s64 = ctx.r28.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CE2C;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r17,752(r28)
	PPC_STORE_U32(ctx.r28.u32 + 752, ctx.r17.u32);
	// stw r11,748(r28)
	PPC_STORE_U32(ctx.r28.u32 + 748, ctx.r11.u32);
	// addi r4,r31,-988
	ctx.r4.s64 = ctx.r31.s64 + -988;
	// stw r10,756(r28)
	PPC_STORE_U32(ctx.r28.u32 + 756, ctx.r10.u32);
	// addi r3,r28,760
	ctx.r3.s64 = ctx.r28.s64 + 760;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CE4C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1000
	ctx.r4.s64 = ctx.r31.s64 + -1000;
	// addi r3,r28,788
	ctx.r3.s64 = ctx.r28.s64 + 788;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CE58;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r18,820(r28)
	PPC_STORE_U32(ctx.r28.u32 + 820, ctx.r18.u32);
	// stw r11,816(r28)
	PPC_STORE_U32(ctx.r28.u32 + 816, ctx.r11.u32);
	// addi r4,r31,-1008
	ctx.r4.s64 = ctx.r31.s64 + -1008;
	// stw r10,824(r28)
	PPC_STORE_U32(ctx.r28.u32 + 824, ctx.r10.u32);
	// addi r3,r28,828
	ctx.r3.s64 = ctx.r28.s64 + 828;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CE78;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1020
	ctx.r4.s64 = ctx.r31.s64 + -1020;
	// addi r3,r28,856
	ctx.r3.s64 = ctx.r28.s64 + 856;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CE84;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r19,888(r28)
	PPC_STORE_U32(ctx.r28.u32 + 888, ctx.r19.u32);
	// addi r4,r31,-1032
	ctx.r4.s64 = ctx.r31.s64 + -1032;
	// stw r11,884(r28)
	PPC_STORE_U32(ctx.r28.u32 + 884, ctx.r11.u32);
	// li r11,54
	ctx.r11.s64 = 54;
	// stw r11,892(r28)
	PPC_STORE_U32(ctx.r28.u32 + 892, ctx.r11.u32);
	// addi r3,r28,896
	ctx.r3.s64 = ctx.r28.s64 + 896;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CEA4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1044
	ctx.r4.s64 = ctx.r31.s64 + -1044;
	// addi r3,r28,924
	ctx.r3.s64 = ctx.r28.s64 + 924;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CEB0;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r20,956(r28)
	PPC_STORE_U32(ctx.r28.u32 + 956, ctx.r20.u32);
	// stw r11,952(r28)
	PPC_STORE_U32(ctx.r28.u32 + 952, ctx.r11.u32);
	// addi r4,r31,-1056
	ctx.r4.s64 = ctx.r31.s64 + -1056;
	// stw r10,960(r28)
	PPC_STORE_U32(ctx.r28.u32 + 960, ctx.r10.u32);
	// addi r3,r28,964
	ctx.r3.s64 = ctx.r28.s64 + 964;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CED0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1068
	ctx.r4.s64 = ctx.r31.s64 + -1068;
	// addi r3,r28,992
	ctx.r3.s64 = ctx.r28.s64 + 992;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CEDC;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,57
	ctx.r10.s64 = 57;
	// stw r21,1024(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1024, ctx.r21.u32);
	// stw r11,1020(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1020, ctx.r11.u32);
	// addi r4,r31,-1084
	ctx.r4.s64 = ctx.r31.s64 + -1084;
	// stw r10,1028(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1028, ctx.r10.u32);
	// addi r3,r28,1032
	ctx.r3.s64 = ctx.r28.s64 + 1032;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CEFC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1096
	ctx.r4.s64 = ctx.r31.s64 + -1096;
	// addi r3,r28,1060
	ctx.r3.s64 = ctx.r28.s64 + 1060;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CF08;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r22,1092(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1092, ctx.r22.u32);
	// stw r11,1088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1088, ctx.r11.u32);
	// addi r4,r31,-1108
	ctx.r4.s64 = ctx.r31.s64 + -1108;
	// stw r10,1096(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1096, ctx.r10.u32);
	// addi r3,r28,1100
	ctx.r3.s64 = ctx.r28.s64 + 1100;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CF28;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1116
	ctx.r4.s64 = ctx.r31.s64 + -1116;
	// addi r3,r28,1128
	ctx.r3.s64 = ctx.r28.s64 + 1128;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CF34;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r23,1160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1160, ctx.r23.u32);
	// stw r11,1156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1156, ctx.r11.u32);
	// addi r4,r31,-1128
	ctx.r4.s64 = ctx.r31.s64 + -1128;
	// stw r10,1164(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1164, ctx.r10.u32);
	// addi r3,r28,1168
	ctx.r3.s64 = ctx.r28.s64 + 1168;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CF54;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1136
	ctx.r4.s64 = ctx.r31.s64 + -1136;
	// addi r3,r28,1196
	ctx.r3.s64 = ctx.r28.s64 + 1196;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CF60;
	sub_837B0C10(ctx, base);
	// lis r10,29
	ctx.r10.s64 = 1900544;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,321
	ctx.r10.u64 = ctx.r10.u64 | 321;
	// li r9,78
	ctx.r9.s64 = 78;
	// stw r11,1224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1224, ctx.r11.u32);
	// stw r10,1228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1228, ctx.r10.u32);
	// addi r4,r31,-1148
	ctx.r4.s64 = ctx.r31.s64 + -1148;
	// stw r9,1232(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1232, ctx.r9.u32);
	// addi r3,r28,1236
	ctx.r3.s64 = ctx.r28.s64 + 1236;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CF88;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1156
	ctx.r4.s64 = ctx.r31.s64 + -1156;
	// addi r3,r28,1264
	ctx.r3.s64 = ctx.r28.s64 + 1264;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CF94;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,74
	ctx.r9.s64 = 74;
	// ori r10,r10,552
	ctx.r10.u64 = ctx.r10.u64 | 552;
	// stw r11,1292(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1292, ctx.r11.u32);
	// stw r9,1300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1300, ctx.r9.u32);
	// addi r4,r31,-1172
	ctx.r4.s64 = ctx.r31.s64 + -1172;
	// stw r10,1296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1296, ctx.r10.u32);
	// addi r3,r28,1304
	ctx.r3.s64 = ctx.r28.s64 + 1304;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CFBC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1184
	ctx.r4.s64 = ctx.r31.s64 + -1184;
	// addi r3,r28,1332
	ctx.r3.s64 = ctx.r28.s64 + 1332;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CFC8;
	sub_837B0C10(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,76
	ctx.r10.s64 = 76;
	// stw r11,1360(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1360, ctx.r11.u32);
	// addi r4,r31,-1196
	ctx.r4.s64 = ctx.r31.s64 + -1196;
	// stw r10,1368(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1368, ctx.r10.u32);
	// stw r27,1364(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1364, ctx.r27.u32);
	// addi r3,r28,1372
	ctx.r3.s64 = ctx.r28.s64 + 1372;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CFE8;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-1208
	ctx.r4.s64 = ctx.r31.s64 + -1208;
	// addi r3,r28,1400
	ctx.r3.s64 = ctx.r28.s64 + 1400;
	// bl 0x837b0c10
	ctx.lr = 0x82C2CFF4;
	sub_837B0C10(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-31272
	ctx.r3.s64 = ctx.r11.s64 + -31272;
	// bl 0x831cdcc8
	ctx.lr = 0x82C2D000;
	sub_831CDCC8(ctx, base);
	// lwz r11,4508(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4508);
loc_82C2D004:
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lis r10,-31760
	ctx.r10.s64 = -2081423360;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r27,r10,-1280
	ctx.r27.s64 = ctx.r10.s64 + -1280;
	// bne cr6,0x82c2d3ac
	if (!cr6.eq) goto loc_82C2D3AC;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4508(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4508, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r4,r31,-380
	ctx.r4.s64 = ctx.r31.s64 + -380;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D040;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2598
	ctx.r4.s64 = ctx.r31.s64 + -2598;
	// addi r3,r27,40
	ctx.r3.s64 = ctx.r27.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D04C;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,582
	ctx.r10.u64 = ctx.r10.u64 | 582;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r11.u32);
	// stw r10,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r10.u32);
	// addi r4,r31,-388
	ctx.r4.s64 = ctx.r31.s64 + -388;
	// stw r9,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r9.u32);
	// addi r3,r27,80
	ctx.r3.s64 = ctx.r27.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D074;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-396
	ctx.r4.s64 = ctx.r31.s64 + -396;
	// addi r3,r27,108
	ctx.r3.s64 = ctx.r27.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D080;
	sub_837B0C10(ctx, base);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,37
	ctx.r10.u64 = ctx.r10.u64 | 37;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,136(r27)
	PPC_STORE_U32(ctx.r27.u32 + 136, ctx.r11.u32);
	// stw r10,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r10.u32);
	// addi r4,r31,-408
	ctx.r4.s64 = ctx.r31.s64 + -408;
	// stw r9,144(r27)
	PPC_STORE_U32(ctx.r27.u32 + 144, ctx.r9.u32);
	// addi r3,r27,148
	ctx.r3.s64 = ctx.r27.s64 + 148;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D0A8;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// addi r3,r27,176
	ctx.r3.s64 = ctx.r27.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D0B4;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,555
	ctx.r10.u64 = ctx.r10.u64 | 555;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,204(r27)
	PPC_STORE_U32(ctx.r27.u32 + 204, ctx.r11.u32);
	// stw r10,208(r27)
	PPC_STORE_U32(ctx.r27.u32 + 208, ctx.r10.u32);
	// addi r4,r31,-428
	ctx.r4.s64 = ctx.r31.s64 + -428;
	// stw r9,212(r27)
	PPC_STORE_U32(ctx.r27.u32 + 212, ctx.r9.u32);
	// addi r3,r27,216
	ctx.r3.s64 = ctx.r27.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D0DC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-436
	ctx.r4.s64 = ctx.r31.s64 + -436;
	// addi r3,r27,244
	ctx.r3.s64 = ctx.r27.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D0E8;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,557
	ctx.r10.u64 = ctx.r10.u64 | 557;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,272(r27)
	PPC_STORE_U32(ctx.r27.u32 + 272, ctx.r11.u32);
	// stw r10,276(r27)
	PPC_STORE_U32(ctx.r27.u32 + 276, ctx.r10.u32);
	// addi r4,r31,-444
	ctx.r4.s64 = ctx.r31.s64 + -444;
	// stw r9,280(r27)
	PPC_STORE_U32(ctx.r27.u32 + 280, ctx.r9.u32);
	// addi r3,r27,284
	ctx.r3.s64 = ctx.r27.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D110;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// addi r3,r27,312
	ctx.r3.s64 = ctx.r27.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D11C;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,520
	ctx.r10.u64 = ctx.r10.u64 | 520;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,340(r27)
	PPC_STORE_U32(ctx.r27.u32 + 340, ctx.r11.u32);
	// stw r10,344(r27)
	PPC_STORE_U32(ctx.r27.u32 + 344, ctx.r10.u32);
	// addi r4,r31,-464
	ctx.r4.s64 = ctx.r31.s64 + -464;
	// stw r9,348(r27)
	PPC_STORE_U32(ctx.r27.u32 + 348, ctx.r9.u32);
	// addi r3,r27,352
	ctx.r3.s64 = ctx.r27.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D144;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-472
	ctx.r4.s64 = ctx.r31.s64 + -472;
	// addi r3,r27,380
	ctx.r3.s64 = ctx.r27.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D150;
	sub_837B0C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,79
	ctx.r10.s64 = 79;
	// stw r11,408(r27)
	PPC_STORE_U32(ctx.r27.u32 + 408, ctx.r11.u32);
	// stw r10,416(r27)
	PPC_STORE_U32(ctx.r27.u32 + 416, ctx.r10.u32);
	// addi r4,r31,-480
	ctx.r4.s64 = ctx.r31.s64 + -480;
	// stw r25,412(r27)
	PPC_STORE_U32(ctx.r27.u32 + 412, ctx.r25.u32);
	// addi r3,r27,420
	ctx.r3.s64 = ctx.r27.s64 + 420;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D170;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-488
	ctx.r4.s64 = ctx.r31.s64 + -488;
	// addi r3,r27,448
	ctx.r3.s64 = ctx.r27.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D17C;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,115
	ctx.r10.u64 = ctx.r10.u64 | 115;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,476(r27)
	PPC_STORE_U32(ctx.r27.u32 + 476, ctx.r11.u32);
	// stw r10,480(r27)
	PPC_STORE_U32(ctx.r27.u32 + 480, ctx.r10.u32);
	// addi r4,r31,-496
	ctx.r4.s64 = ctx.r31.s64 + -496;
	// stw r9,484(r27)
	PPC_STORE_U32(ctx.r27.u32 + 484, ctx.r9.u32);
	// addi r3,r27,488
	ctx.r3.s64 = ctx.r27.s64 + 488;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D1A4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-504
	ctx.r4.s64 = ctx.r31.s64 + -504;
	// addi r3,r27,516
	ctx.r3.s64 = ctx.r27.s64 + 516;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D1B0;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,521
	ctx.r10.u64 = ctx.r10.u64 | 521;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,544(r27)
	PPC_STORE_U32(ctx.r27.u32 + 544, ctx.r11.u32);
	// stw r10,548(r27)
	PPC_STORE_U32(ctx.r27.u32 + 548, ctx.r10.u32);
	// addi r4,r31,-512
	ctx.r4.s64 = ctx.r31.s64 + -512;
	// stw r9,552(r27)
	PPC_STORE_U32(ctx.r27.u32 + 552, ctx.r9.u32);
	// addi r3,r27,556
	ctx.r3.s64 = ctx.r27.s64 + 556;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D1D8;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-520
	ctx.r4.s64 = ctx.r31.s64 + -520;
	// addi r3,r27,584
	ctx.r3.s64 = ctx.r27.s64 + 584;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D1E4;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r14,616(r27)
	PPC_STORE_U32(ctx.r27.u32 + 616, ctx.r14.u32);
	// stw r11,612(r27)
	PPC_STORE_U32(ctx.r27.u32 + 612, ctx.r11.u32);
	// addi r4,r31,-532
	ctx.r4.s64 = ctx.r31.s64 + -532;
	// stw r10,620(r27)
	PPC_STORE_U32(ctx.r27.u32 + 620, ctx.r10.u32);
	// addi r3,r27,624
	ctx.r3.s64 = ctx.r27.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D204;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-544
	ctx.r4.s64 = ctx.r31.s64 + -544;
	// addi r3,r27,652
	ctx.r3.s64 = ctx.r27.s64 + 652;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D210;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r15,684(r27)
	PPC_STORE_U32(ctx.r27.u32 + 684, ctx.r15.u32);
	// stw r11,680(r27)
	PPC_STORE_U32(ctx.r27.u32 + 680, ctx.r11.u32);
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// stw r10,688(r27)
	PPC_STORE_U32(ctx.r27.u32 + 688, ctx.r10.u32);
	// addi r3,r27,692
	ctx.r3.s64 = ctx.r27.s64 + 692;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D230;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-568
	ctx.r4.s64 = ctx.r31.s64 + -568;
	// addi r3,r27,720
	ctx.r3.s64 = ctx.r27.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D23C;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r16,752(r27)
	PPC_STORE_U32(ctx.r27.u32 + 752, ctx.r16.u32);
	// stw r11,748(r27)
	PPC_STORE_U32(ctx.r27.u32 + 748, ctx.r11.u32);
	// addi r4,r31,-584
	ctx.r4.s64 = ctx.r31.s64 + -584;
	// stw r10,756(r27)
	PPC_STORE_U32(ctx.r27.u32 + 756, ctx.r10.u32);
	// addi r3,r27,760
	ctx.r3.s64 = ctx.r27.s64 + 760;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D25C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-596
	ctx.r4.s64 = ctx.r31.s64 + -596;
	// addi r3,r27,788
	ctx.r3.s64 = ctx.r27.s64 + 788;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D268;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r17,820(r27)
	PPC_STORE_U32(ctx.r27.u32 + 820, ctx.r17.u32);
	// stw r11,816(r27)
	PPC_STORE_U32(ctx.r27.u32 + 816, ctx.r11.u32);
	// addi r4,r31,-608
	ctx.r4.s64 = ctx.r31.s64 + -608;
	// stw r10,824(r27)
	PPC_STORE_U32(ctx.r27.u32 + 824, ctx.r10.u32);
	// addi r3,r27,828
	ctx.r3.s64 = ctx.r27.s64 + 828;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D288;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-620
	ctx.r4.s64 = ctx.r31.s64 + -620;
	// addi r3,r27,856
	ctx.r3.s64 = ctx.r27.s64 + 856;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D294;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,884(r27)
	PPC_STORE_U32(ctx.r27.u32 + 884, ctx.r11.u32);
	// li r11,53
	ctx.r11.s64 = 53;
	// stw r18,888(r27)
	PPC_STORE_U32(ctx.r27.u32 + 888, ctx.r18.u32);
	// addi r4,r31,-628
	ctx.r4.s64 = ctx.r31.s64 + -628;
	// stw r11,892(r27)
	PPC_STORE_U32(ctx.r27.u32 + 892, ctx.r11.u32);
	// addi r3,r27,896
	ctx.r3.s64 = ctx.r27.s64 + 896;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D2B4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-640
	ctx.r4.s64 = ctx.r31.s64 + -640;
	// addi r3,r27,924
	ctx.r3.s64 = ctx.r27.s64 + 924;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D2C0;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,54
	ctx.r10.s64 = 54;
	// stw r19,956(r27)
	PPC_STORE_U32(ctx.r27.u32 + 956, ctx.r19.u32);
	// stw r11,952(r27)
	PPC_STORE_U32(ctx.r27.u32 + 952, ctx.r11.u32);
	// addi r4,r31,-652
	ctx.r4.s64 = ctx.r31.s64 + -652;
	// stw r10,960(r27)
	PPC_STORE_U32(ctx.r27.u32 + 960, ctx.r10.u32);
	// addi r3,r27,964
	ctx.r3.s64 = ctx.r27.s64 + 964;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D2E0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-664
	ctx.r4.s64 = ctx.r31.s64 + -664;
	// addi r3,r27,992
	ctx.r3.s64 = ctx.r27.s64 + 992;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D2EC;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r20,1024(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1024, ctx.r20.u32);
	// stw r11,1020(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1020, ctx.r11.u32);
	// addi r4,r31,-676
	ctx.r4.s64 = ctx.r31.s64 + -676;
	// stw r10,1028(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1028, ctx.r10.u32);
	// addi r3,r27,1032
	ctx.r3.s64 = ctx.r27.s64 + 1032;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D30C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-688
	ctx.r4.s64 = ctx.r31.s64 + -688;
	// addi r3,r27,1060
	ctx.r3.s64 = ctx.r27.s64 + 1060;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D318;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,57
	ctx.r10.s64 = 57;
	// stw r21,1092(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1092, ctx.r21.u32);
	// stw r11,1088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1088, ctx.r11.u32);
	// addi r4,r31,-704
	ctx.r4.s64 = ctx.r31.s64 + -704;
	// stw r10,1096(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1096, ctx.r10.u32);
	// addi r3,r27,1100
	ctx.r3.s64 = ctx.r27.s64 + 1100;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D338;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-716
	ctx.r4.s64 = ctx.r31.s64 + -716;
	// addi r3,r27,1128
	ctx.r3.s64 = ctx.r27.s64 + 1128;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D344;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r22,1160(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1160, ctx.r22.u32);
	// stw r11,1156(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1156, ctx.r11.u32);
	// addi r4,r31,-728
	ctx.r4.s64 = ctx.r31.s64 + -728;
	// stw r10,1164(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1164, ctx.r10.u32);
	// addi r3,r27,1168
	ctx.r3.s64 = ctx.r27.s64 + 1168;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D364;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-736
	ctx.r4.s64 = ctx.r31.s64 + -736;
	// addi r3,r27,1196
	ctx.r3.s64 = ctx.r27.s64 + 1196;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D370;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r23,1228(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1228, ctx.r23.u32);
	// stw r11,1224(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1224, ctx.r11.u32);
	// addi r4,r31,-748
	ctx.r4.s64 = ctx.r31.s64 + -748;
	// stw r10,1232(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1232, ctx.r10.u32);
	// addi r3,r27,1236
	ctx.r3.s64 = ctx.r27.s64 + 1236;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D390;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-756
	ctx.r4.s64 = ctx.r31.s64 + -756;
	// addi r3,r27,1264
	ctx.r3.s64 = ctx.r27.s64 + 1264;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D39C;
	sub_837B0C10(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-31408
	ctx.r3.s64 = ctx.r11.s64 + -31408;
	// bl 0x831cdcc8
	ctx.lr = 0x82C2D3A8;
	sub_831CDCC8(ctx, base);
	// lwz r11,4508(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4508);
loc_82C2D3AC:
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lis r10,-31760
	ctx.r10.s64 = -2081423360;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r26,r10,-2504
	ctx.r26.s64 = ctx.r10.s64 + -2504;
	// bne cr6,0x82c2d724
	if (!cr6.eq) goto loc_82C2D724;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4508(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4508, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D3EC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2597
	ctx.r4.s64 = ctx.r31.s64 + -2597;
	// addi r3,r26,40
	ctx.r3.s64 = ctx.r26.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D3F8;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,582
	ctx.r10.u64 = ctx.r10.u64 | 582;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,68(r26)
	PPC_STORE_U32(ctx.r26.u32 + 68, ctx.r11.u32);
	// stw r10,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r10.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// stw r9,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r9.u32);
	// addi r3,r26,80
	ctx.r3.s64 = ctx.r26.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D420;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r26,108
	ctx.r3.s64 = ctx.r26.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D42C;
	sub_837B0C10(ctx, base);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,37
	ctx.r10.u64 = ctx.r10.u64 | 37;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,136(r26)
	PPC_STORE_U32(ctx.r26.u32 + 136, ctx.r11.u32);
	// stw r10,140(r26)
	PPC_STORE_U32(ctx.r26.u32 + 140, ctx.r10.u32);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// stw r9,144(r26)
	PPC_STORE_U32(ctx.r26.u32 + 144, ctx.r9.u32);
	// addi r3,r26,148
	ctx.r3.s64 = ctx.r26.s64 + 148;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D454;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r26,176
	ctx.r3.s64 = ctx.r26.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D460;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,555
	ctx.r10.u64 = ctx.r10.u64 | 555;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,204(r26)
	PPC_STORE_U32(ctx.r26.u32 + 204, ctx.r11.u32);
	// stw r10,208(r26)
	PPC_STORE_U32(ctx.r26.u32 + 208, ctx.r10.u32);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// stw r9,212(r26)
	PPC_STORE_U32(ctx.r26.u32 + 212, ctx.r9.u32);
	// addi r3,r26,216
	ctx.r3.s64 = ctx.r26.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D488;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r26,244
	ctx.r3.s64 = ctx.r26.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D494;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,557
	ctx.r10.u64 = ctx.r10.u64 | 557;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,272(r26)
	PPC_STORE_U32(ctx.r26.u32 + 272, ctx.r11.u32);
	// stw r10,276(r26)
	PPC_STORE_U32(ctx.r26.u32 + 276, ctx.r10.u32);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// stw r9,280(r26)
	PPC_STORE_U32(ctx.r26.u32 + 280, ctx.r9.u32);
	// addi r3,r26,284
	ctx.r3.s64 = ctx.r26.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D4BC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r26,312
	ctx.r3.s64 = ctx.r26.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D4C8;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,520
	ctx.r10.u64 = ctx.r10.u64 | 520;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,340(r26)
	PPC_STORE_U32(ctx.r26.u32 + 340, ctx.r11.u32);
	// stw r10,344(r26)
	PPC_STORE_U32(ctx.r26.u32 + 344, ctx.r10.u32);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// stw r9,348(r26)
	PPC_STORE_U32(ctx.r26.u32 + 348, ctx.r9.u32);
	// addi r3,r26,352
	ctx.r3.s64 = ctx.r26.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D4F0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// addi r3,r26,380
	ctx.r3.s64 = ctx.r26.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D4FC;
	sub_837B0C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,79
	ctx.r10.s64 = 79;
	// stw r11,408(r26)
	PPC_STORE_U32(ctx.r26.u32 + 408, ctx.r11.u32);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// stw r10,416(r26)
	PPC_STORE_U32(ctx.r26.u32 + 416, ctx.r10.u32);
	// addi r3,r26,420
	ctx.r3.s64 = ctx.r26.s64 + 420;
	// stw r25,412(r26)
	PPC_STORE_U32(ctx.r26.u32 + 412, ctx.r25.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82C2D51C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// addi r3,r26,448
	ctx.r3.s64 = ctx.r26.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D528;
	sub_837B0C10(ctx, base);
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,140
	ctx.r10.u64 = ctx.r10.u64 | 140;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,476(r26)
	PPC_STORE_U32(ctx.r26.u32 + 476, ctx.r11.u32);
	// stw r10,480(r26)
	PPC_STORE_U32(ctx.r26.u32 + 480, ctx.r10.u32);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// stw r9,484(r26)
	PPC_STORE_U32(ctx.r26.u32 + 484, ctx.r9.u32);
	// addi r3,r26,488
	ctx.r3.s64 = ctx.r26.s64 + 488;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D550;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// addi r3,r26,516
	ctx.r3.s64 = ctx.r26.s64 + 516;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D55C;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r14,548(r26)
	PPC_STORE_U32(ctx.r26.u32 + 548, ctx.r14.u32);
	// stw r11,544(r26)
	PPC_STORE_U32(ctx.r26.u32 + 544, ctx.r11.u32);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// stw r10,552(r26)
	PPC_STORE_U32(ctx.r26.u32 + 552, ctx.r10.u32);
	// addi r3,r26,556
	ctx.r3.s64 = ctx.r26.s64 + 556;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D57C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// addi r3,r26,584
	ctx.r3.s64 = ctx.r26.s64 + 584;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D588;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r15,616(r26)
	PPC_STORE_U32(ctx.r26.u32 + 616, ctx.r15.u32);
	// stw r11,612(r26)
	PPC_STORE_U32(ctx.r26.u32 + 612, ctx.r11.u32);
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// stw r10,620(r26)
	PPC_STORE_U32(ctx.r26.u32 + 620, ctx.r10.u32);
	// addi r3,r26,624
	ctx.r3.s64 = ctx.r26.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D5A8;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// addi r3,r26,652
	ctx.r3.s64 = ctx.r26.s64 + 652;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D5B4;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r16,684(r26)
	PPC_STORE_U32(ctx.r26.u32 + 684, ctx.r16.u32);
	// stw r11,680(r26)
	PPC_STORE_U32(ctx.r26.u32 + 680, ctx.r11.u32);
	// addi r4,r31,-200
	ctx.r4.s64 = ctx.r31.s64 + -200;
	// stw r10,688(r26)
	PPC_STORE_U32(ctx.r26.u32 + 688, ctx.r10.u32);
	// addi r3,r26,692
	ctx.r3.s64 = ctx.r26.s64 + 692;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D5D4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-212
	ctx.r4.s64 = ctx.r31.s64 + -212;
	// addi r3,r26,720
	ctx.r3.s64 = ctx.r26.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D5E0;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r17,752(r26)
	PPC_STORE_U32(ctx.r26.u32 + 752, ctx.r17.u32);
	// stw r11,748(r26)
	PPC_STORE_U32(ctx.r26.u32 + 748, ctx.r11.u32);
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// stw r10,756(r26)
	PPC_STORE_U32(ctx.r26.u32 + 756, ctx.r10.u32);
	// addi r3,r26,760
	ctx.r3.s64 = ctx.r26.s64 + 760;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D600;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-236
	ctx.r4.s64 = ctx.r31.s64 + -236;
	// addi r3,r26,788
	ctx.r3.s64 = ctx.r26.s64 + 788;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D60C;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r18,820(r26)
	PPC_STORE_U32(ctx.r26.u32 + 820, ctx.r18.u32);
	// stw r11,816(r26)
	PPC_STORE_U32(ctx.r26.u32 + 816, ctx.r11.u32);
	// addi r4,r31,-244
	ctx.r4.s64 = ctx.r31.s64 + -244;
	// stw r10,824(r26)
	PPC_STORE_U32(ctx.r26.u32 + 824, ctx.r10.u32);
	// addi r3,r26,828
	ctx.r3.s64 = ctx.r26.s64 + 828;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D62C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// addi r3,r26,856
	ctx.r3.s64 = ctx.r26.s64 + 856;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D638;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r19,888(r26)
	PPC_STORE_U32(ctx.r26.u32 + 888, ctx.r19.u32);
	// stw r11,884(r26)
	PPC_STORE_U32(ctx.r26.u32 + 884, ctx.r11.u32);
	// li r11,54
	ctx.r11.s64 = 54;
	// stw r11,892(r26)
	PPC_STORE_U32(ctx.r26.u32 + 892, ctx.r11.u32);
	// addi r4,r31,-268
	ctx.r4.s64 = ctx.r31.s64 + -268;
	// addi r3,r26,896
	ctx.r3.s64 = ctx.r26.s64 + 896;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D658;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-280
	ctx.r4.s64 = ctx.r31.s64 + -280;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D664;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r20,956(r26)
	PPC_STORE_U32(ctx.r26.u32 + 956, ctx.r20.u32);
	// stw r11,952(r26)
	PPC_STORE_U32(ctx.r26.u32 + 952, ctx.r11.u32);
	// addi r4,r31,-292
	ctx.r4.s64 = ctx.r31.s64 + -292;
	// stw r10,960(r26)
	PPC_STORE_U32(ctx.r26.u32 + 960, ctx.r10.u32);
	// addi r3,r26,964
	ctx.r3.s64 = ctx.r26.s64 + 964;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D684;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// addi r3,r26,992
	ctx.r3.s64 = ctx.r26.s64 + 992;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D690;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,57
	ctx.r10.s64 = 57;
	// stw r21,1024(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1024, ctx.r21.u32);
	// stw r11,1020(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1020, ctx.r11.u32);
	// addi r4,r31,-320
	ctx.r4.s64 = ctx.r31.s64 + -320;
	// stw r10,1028(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1028, ctx.r10.u32);
	// addi r3,r26,1032
	ctx.r3.s64 = ctx.r26.s64 + 1032;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D6B0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-332
	ctx.r4.s64 = ctx.r31.s64 + -332;
	// addi r3,r26,1060
	ctx.r3.s64 = ctx.r26.s64 + 1060;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D6BC;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r22,1092(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1092, ctx.r22.u32);
	// stw r11,1088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1088, ctx.r11.u32);
	// addi r4,r31,-344
	ctx.r4.s64 = ctx.r31.s64 + -344;
	// stw r10,1096(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1096, ctx.r10.u32);
	// addi r3,r26,1100
	ctx.r3.s64 = ctx.r26.s64 + 1100;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D6DC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-352
	ctx.r4.s64 = ctx.r31.s64 + -352;
	// addi r3,r26,1128
	ctx.r3.s64 = ctx.r26.s64 + 1128;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D6E8;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r23,1160(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1160, ctx.r23.u32);
	// stw r11,1156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1156, ctx.r11.u32);
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// stw r10,1164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1164, ctx.r10.u32);
	// addi r3,r26,1168
	ctx.r3.s64 = ctx.r26.s64 + 1168;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D708;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-372
	ctx.r4.s64 = ctx.r31.s64 + -372;
	// addi r3,r26,1196
	ctx.r3.s64 = ctx.r26.s64 + 1196;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D714;
	sub_837B0C10(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-31544
	ctx.r3.s64 = ctx.r11.s64 + -31544;
	// bl 0x831cdcc8
	ctx.lr = 0x82C2D720;
	sub_831CDCC8(ctx, base);
	// lwz r11,4508(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4508);
loc_82C2D724:
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lis r10,-31760
	ctx.r10.s64 = -2081423360;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r25,r10,-3664
	ctx.r25.s64 = ctx.r10.s64 + -3664;
	// bne cr6,0x82c2da6c
	if (!cr6.eq) goto loc_82C2DA6C;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4508(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4508, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// addi r4,r31,348
	ctx.r4.s64 = ctx.r31.s64 + 348;
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// addi r3,r25,12
	ctx.r3.s64 = ctx.r25.s64 + 12;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D764;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-2579
	ctx.r4.s64 = ctx.r31.s64 + -2579;
	// addi r3,r25,40
	ctx.r3.s64 = ctx.r25.s64 + 40;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D770;
	sub_837B0C10(ctx, base);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,41
	ctx.r10.u64 = ctx.r10.u64 | 41;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,68(r25)
	PPC_STORE_U32(ctx.r25.u32 + 68, ctx.r11.u32);
	// stw r10,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r10.u32);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// stw r9,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r9.u32);
	// addi r3,r25,80
	ctx.r3.s64 = ctx.r25.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D798;
	sub_837B0C10(ctx, base);
	// addi r4,r31,328
	ctx.r4.s64 = ctx.r31.s64 + 328;
	// addi r3,r25,108
	ctx.r3.s64 = ctx.r25.s64 + 108;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D7A4;
	sub_837B0C10(ctx, base);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,37
	ctx.r10.u64 = ctx.r10.u64 | 37;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,136(r25)
	PPC_STORE_U32(ctx.r25.u32 + 136, ctx.r11.u32);
	// stw r10,140(r25)
	PPC_STORE_U32(ctx.r25.u32 + 140, ctx.r10.u32);
	// addi r4,r31,316
	ctx.r4.s64 = ctx.r31.s64 + 316;
	// stw r9,144(r25)
	PPC_STORE_U32(ctx.r25.u32 + 144, ctx.r9.u32);
	// addi r3,r25,148
	ctx.r3.s64 = ctx.r25.s64 + 148;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D7CC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// addi r3,r25,176
	ctx.r3.s64 = ctx.r25.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D7D8;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,555
	ctx.r10.u64 = ctx.r10.u64 | 555;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,204(r25)
	PPC_STORE_U32(ctx.r25.u32 + 204, ctx.r11.u32);
	// stw r10,208(r25)
	PPC_STORE_U32(ctx.r25.u32 + 208, ctx.r10.u32);
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// stw r9,212(r25)
	PPC_STORE_U32(ctx.r25.u32 + 212, ctx.r9.u32);
	// addi r3,r25,216
	ctx.r3.s64 = ctx.r25.s64 + 216;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D800;
	sub_837B0C10(ctx, base);
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// addi r3,r25,244
	ctx.r3.s64 = ctx.r25.s64 + 244;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D80C;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,557
	ctx.r10.u64 = ctx.r10.u64 | 557;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,272(r25)
	PPC_STORE_U32(ctx.r25.u32 + 272, ctx.r11.u32);
	// stw r10,276(r25)
	PPC_STORE_U32(ctx.r25.u32 + 276, ctx.r10.u32);
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// stw r9,280(r25)
	PPC_STORE_U32(ctx.r25.u32 + 280, ctx.r9.u32);
	// addi r3,r25,284
	ctx.r3.s64 = ctx.r25.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D834;
	sub_837B0C10(ctx, base);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// addi r3,r25,312
	ctx.r3.s64 = ctx.r25.s64 + 312;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D840;
	sub_837B0C10(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,520
	ctx.r10.u64 = ctx.r10.u64 | 520;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,340(r25)
	PPC_STORE_U32(ctx.r25.u32 + 340, ctx.r11.u32);
	// stw r10,344(r25)
	PPC_STORE_U32(ctx.r25.u32 + 344, ctx.r10.u32);
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// stw r9,348(r25)
	PPC_STORE_U32(ctx.r25.u32 + 348, ctx.r9.u32);
	// addi r3,r25,352
	ctx.r3.s64 = ctx.r25.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D868;
	sub_837B0C10(ctx, base);
	// addi r4,r31,252
	ctx.r4.s64 = ctx.r31.s64 + 252;
	// addi r3,r25,380
	ctx.r3.s64 = ctx.r25.s64 + 380;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D874;
	sub_837B0C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// li r9,79
	ctx.r9.s64 = 79;
	// stw r11,408(r25)
	PPC_STORE_U32(ctx.r25.u32 + 408, ctx.r11.u32);
	// ori r10,r10,90
	ctx.r10.u64 = ctx.r10.u64 | 90;
	// stw r9,416(r25)
	PPC_STORE_U32(ctx.r25.u32 + 416, ctx.r9.u32);
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// stw r10,412(r25)
	PPC_STORE_U32(ctx.r25.u32 + 412, ctx.r10.u32);
	// addi r3,r25,420
	ctx.r3.s64 = ctx.r25.s64 + 420;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D89C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// addi r3,r25,448
	ctx.r3.s64 = ctx.r25.s64 + 448;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D8A8;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r14,480(r25)
	PPC_STORE_U32(ctx.r25.u32 + 480, ctx.r14.u32);
	// stw r11,476(r25)
	PPC_STORE_U32(ctx.r25.u32 + 476, ctx.r11.u32);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// stw r10,484(r25)
	PPC_STORE_U32(ctx.r25.u32 + 484, ctx.r10.u32);
	// addi r3,r25,488
	ctx.r3.s64 = ctx.r25.s64 + 488;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D8C8;
	sub_837B0C10(ctx, base);
	// addi r4,r31,212
	ctx.r4.s64 = ctx.r31.s64 + 212;
	// addi r3,r25,516
	ctx.r3.s64 = ctx.r25.s64 + 516;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D8D4;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r15,548(r25)
	PPC_STORE_U32(ctx.r25.u32 + 548, ctx.r15.u32);
	// stw r11,544(r25)
	PPC_STORE_U32(ctx.r25.u32 + 544, ctx.r11.u32);
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// stw r10,552(r25)
	PPC_STORE_U32(ctx.r25.u32 + 552, ctx.r10.u32);
	// addi r3,r25,556
	ctx.r3.s64 = ctx.r25.s64 + 556;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D8F4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,188
	ctx.r4.s64 = ctx.r31.s64 + 188;
	// addi r3,r25,584
	ctx.r3.s64 = ctx.r25.s64 + 584;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D900;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r16,616(r25)
	PPC_STORE_U32(ctx.r25.u32 + 616, ctx.r16.u32);
	// stw r11,612(r25)
	PPC_STORE_U32(ctx.r25.u32 + 612, ctx.r11.u32);
	// addi r4,r31,172
	ctx.r4.s64 = ctx.r31.s64 + 172;
	// stw r10,620(r25)
	PPC_STORE_U32(ctx.r25.u32 + 620, ctx.r10.u32);
	// addi r3,r25,624
	ctx.r3.s64 = ctx.r25.s64 + 624;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D920;
	sub_837B0C10(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r25,652
	ctx.r3.s64 = ctx.r25.s64 + 652;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D92C;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r17,684(r25)
	PPC_STORE_U32(ctx.r25.u32 + 684, ctx.r17.u32);
	// stw r11,680(r25)
	PPC_STORE_U32(ctx.r25.u32 + 680, ctx.r11.u32);
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// stw r10,688(r25)
	PPC_STORE_U32(ctx.r25.u32 + 688, ctx.r10.u32);
	// addi r3,r25,692
	ctx.r3.s64 = ctx.r25.s64 + 692;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D94C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// addi r3,r25,720
	ctx.r3.s64 = ctx.r25.s64 + 720;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D958;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r18,752(r25)
	PPC_STORE_U32(ctx.r25.u32 + 752, ctx.r18.u32);
	// stw r11,748(r25)
	PPC_STORE_U32(ctx.r25.u32 + 748, ctx.r11.u32);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// stw r10,756(r25)
	PPC_STORE_U32(ctx.r25.u32 + 756, ctx.r10.u32);
	// addi r3,r25,760
	ctx.r3.s64 = ctx.r25.s64 + 760;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D978;
	sub_837B0C10(ctx, base);
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// addi r3,r25,788
	ctx.r3.s64 = ctx.r25.s64 + 788;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D984;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,54
	ctx.r10.s64 = 54;
	// stw r19,820(r25)
	PPC_STORE_U32(ctx.r25.u32 + 820, ctx.r19.u32);
	// stw r11,816(r25)
	PPC_STORE_U32(ctx.r25.u32 + 816, ctx.r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// stw r10,824(r25)
	PPC_STORE_U32(ctx.r25.u32 + 824, ctx.r10.u32);
	// addi r3,r25,828
	ctx.r3.s64 = ctx.r25.s64 + 828;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D9A4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r25,856
	ctx.r3.s64 = ctx.r25.s64 + 856;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D9B0;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r20,888(r25)
	PPC_STORE_U32(ctx.r25.u32 + 888, ctx.r20.u32);
	// stw r11,884(r25)
	PPC_STORE_U32(ctx.r25.u32 + 884, ctx.r11.u32);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r11,892(r25)
	PPC_STORE_U32(ctx.r25.u32 + 892, ctx.r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r25,896
	ctx.r3.s64 = ctx.r25.s64 + 896;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D9D0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r25,924
	ctx.r3.s64 = ctx.r25.s64 + 924;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D9DC;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,57
	ctx.r10.s64 = 57;
	// stw r21,956(r25)
	PPC_STORE_U32(ctx.r25.u32 + 956, ctx.r21.u32);
	// stw r11,952(r25)
	PPC_STORE_U32(ctx.r25.u32 + 952, ctx.r11.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// stw r10,960(r25)
	PPC_STORE_U32(ctx.r25.u32 + 960, ctx.r10.u32);
	// addi r3,r25,964
	ctx.r3.s64 = ctx.r25.s64 + 964;
	// bl 0x837b0c10
	ctx.lr = 0x82C2D9FC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r25,992
	ctx.r3.s64 = ctx.r25.s64 + 992;
	// bl 0x837b0c10
	ctx.lr = 0x82C2DA08;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r22,1024(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1024, ctx.r22.u32);
	// stw r11,1020(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1020, ctx.r11.u32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// stw r10,1028(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1028, ctx.r10.u32);
	// addi r3,r25,1032
	ctx.r3.s64 = ctx.r25.s64 + 1032;
	// bl 0x837b0c10
	ctx.lr = 0x82C2DA28;
	sub_837B0C10(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r25,1060
	ctx.r3.s64 = ctx.r25.s64 + 1060;
	// bl 0x837b0c10
	ctx.lr = 0x82C2DA34;
	sub_837B0C10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r23,1092(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1092, ctx.r23.u32);
	// stw r11,1088(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1088, ctx.r11.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// stw r10,1096(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1096, ctx.r10.u32);
	// addi r3,r25,1100
	ctx.r3.s64 = ctx.r25.s64 + 1100;
	// bl 0x837b0c10
	ctx.lr = 0x82C2DA54;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r25,1128
	ctx.r3.s64 = ctx.r25.s64 + 1128;
	// bl 0x837b0c10
	ctx.lr = 0x82C2DA60;
	sub_837B0C10(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-31680
	ctx.r3.s64 = ctx.r11.s64 + -31680;
	// bl 0x831cdcc8
	ctx.lr = 0x82C2DA6C;
	sub_831CDCC8(ctx, base);
loc_82C2DA6C:
	// bl 0x831156e8
	ctx.lr = 0x82C2DA70;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82C2DA78;
	sub_831156E8(ctx, base);
	// addis r31,r24,195
	ctx.r31.s64 = ctx.r24.s64 + 12779520;
	// addis r24,r24,221
	ctx.r24.s64 = ctx.r24.s64 + 14483456;
	// lwz r23,52(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r31,r31,-13392
	ctx.r31.s64 = ctx.r31.s64 + -13392;
	// addi r24,r24,-26512
	ctx.r24.s64 = ctx.r24.s64 + -26512;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lbz r10,1100(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1100);
	// subfic r9,r10,1
	xer.ca = ctx.r10.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r22,r7,31
	ctx.r22.u64 = ctx.r7.u32 & 0x1;
	// bl 0x830ff290
	ctx.lr = 0x82C2DAA8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C2DAAC;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bne cr6,0x82c2db0c
	if (!cr6.eq) goto loc_82C2DB0C;
	// lwz r11,1288(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1288);
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// bne cr6,0x82c2db0c
	if (!cr6.eq) goto loc_82C2DB0C;
	// li r11,23
	ctx.r11.s64 = 23;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314d470
	ctx.lr = 0x82C2DAD4;
	sub_8314D470(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2daf8
	if (!cr6.eq) goto loc_82C2DAF8;
loc_82C2DAE4:
	// li r10,19
	ctx.r10.s64 = 19;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82C2DAF8:
	// li r10,17
	ctx.r10.s64 = 17;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82C2DB0C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r24,23
	ctx.r24.s64 = 23;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8314d470
	ctx.lr = 0x82C2DB28;
	sub_8314D470(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ori r31,r9,14904
	ctx.r31.u64 = ctx.r9.u64 | 14904;
	// bne cr6,0x82c2db70
	if (!cr6.eq) goto loc_82C2DB70;
	// add r3,r23,r31
	ctx.r3.u64 = ctx.r23.u64 + ctx.r31.u64;
	// bl 0x83123768
	ctx.lr = 0x82C2DB44;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82c2db70
	if (cr6.eq) goto loc_82C2DB70;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bne cr6,0x82c2dae4
	if (!cr6.eq) goto loc_82C2DAE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r24,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r24.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82C2DB70:
	// add r3,r23,r31
	ctx.r3.u64 = ctx.r23.u64 + ctx.r31.u64;
	// bl 0x83123768
	ctx.lr = 0x82C2DB78;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82c2dbd8
	if (!cr6.eq) goto loc_82C2DBD8;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8314d470
	ctx.lr = 0x82C2DB94;
	sub_8314D470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c2dbd8
	if (!cr6.eq) goto loc_82C2DBD8;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// beq cr6,0x82c2dbc4
	if (cr6.eq) goto loc_82C2DBC4;
	// li r10,18
	ctx.r10.s64 = 18;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82C2DBC4:
	// li r10,22
	ctx.r10.s64 = 22;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82C2DBD8:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bne cr6,0x82c2daf8
	if (!cr6.eq) goto loc_82C2DAF8;
	// li r10,21
	ctx.r10.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2DBFC"))) PPC_WEAK_FUNC(sub_82C2DBFC);
PPC_FUNC_IMPL(__imp__sub_82C2DBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2DC00"))) PPC_WEAK_FUNC(sub_82C2DC00);
PPC_FUNC_IMPL(__imp__sub_82C2DC00) {
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
	// bl 0x82b41548
	ctx.lr = 0x82C2DC18;
	sub_82B41548(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,4000
	ctx.r9.s64 = ctx.r11.s64 + 4000;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// stw r7,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-18324(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18324);
	// bl 0x82d20ae0
	ctx.lr = 0x82C2DC48;
	sub_82D20AE0(ctx, base);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,3768
	ctx.r4.s64 = ctx.r5.s64 + 3768;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82C2DC5C;
	sub_82D23390(ctx, base);
	// lis r3,-31776
	ctx.r3.s64 = -2082471936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-18456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18456);
	// bl 0x833bca80
	ctx.lr = 0x82C2DC74;
	sub_833BCA80(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82C2DC90"))) PPC_WEAK_FUNC(sub_82C2DC90);
PPC_FUNC_IMPL(__imp__sub_82C2DC90) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2DCA8;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x82C2DCB4;
	sub_8311C338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lhz r9,78(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 78);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,4308
	ctx.r11.s64 = ctx.r11.s64 + 4308;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C2DCC8:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// beq cr6,0x82c2dce8
	if (cr6.eq) goto loc_82C2DCE8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x82c2dcc8
	if (cr6.lt) goto loc_82C2DCC8;
	// b 0x82c2dcec
	goto loc_82C2DCEC;
loc_82C2DCE8:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82C2DCEC:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82c2dd18
	if (cr6.eq) goto loc_82C2DD18;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82c2dd18
	if (cr6.eq) goto loc_82C2DD18;
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
loc_82C2DD18:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82C2DD40"))) PPC_WEAK_FUNC(sub_82C2DD40);
PPC_FUNC_IMPL(__imp__sub_82C2DD40) {
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
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2dd6c
	if (cr6.eq) goto loc_82C2DD6C;
	// bl 0x833bbd78
	ctx.lr = 0x82C2DD64;
	sub_833BBD78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
loc_82C2DD6C:
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

__attribute__((alias("__imp__sub_82C2DD84"))) PPC_WEAK_FUNC(sub_82C2DD84);
PPC_FUNC_IMPL(__imp__sub_82C2DD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2DD88"))) PPC_WEAK_FUNC(sub_82C2DD88);
PPC_FUNC_IMPL(__imp__sub_82C2DD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C2DD90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C2DDA0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,3904
	ctx.r29.s64 = ctx.r11.s64 + 3904;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C2DDC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C2DDCC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C2DDE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c2de78
	if (cr6.eq) goto loc_82C2DE78;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2de78
	if (cr6.eq) goto loc_82C2DE78;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82c2de0c
	if (cr6.eq) goto loc_82C2DE0C;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82c2de3c
	if (!cr6.eq) goto loc_82C2DE3C;
loc_82C2DE0C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82c2de3c
	if (!cr6.eq) goto loc_82C2DE3C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2DE24;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2DE34;
	sub_82D2AEC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82c2de60
	goto loc_82C2DE60;
loc_82C2DE3C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2DE4C;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2DE5C;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C2DE60:
	// bl 0x82d2fe58
	ctx.lr = 0x82C2DE64;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2de78
	if (cr6.eq) goto loc_82C2DE78;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82C2DE78;
	sub_82D3D968(ctx, base);
loc_82C2DE78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2DE80"))) PPC_WEAK_FUNC(sub_82C2DE80);
PPC_FUNC_IMPL(__imp__sub_82C2DE80) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C2DE98;
	sub_82D19A78(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x82C2DE9C;
	sub_82D33C10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82C2DEBC;
	sub_82D1EBF8(ctx, base);
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

__attribute__((alias("__imp__sub_82C2DED4"))) PPC_WEAK_FUNC(sub_82C2DED4);
PPC_FUNC_IMPL(__imp__sub_82C2DED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2DED8"))) PPC_WEAK_FUNC(sub_82C2DED8);
PPC_FUNC_IMPL(__imp__sub_82C2DED8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,4000
	ctx.r9.s64 = ctx.r11.s64 + 4000;
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
	// bl 0x82b41350
	ctx.lr = 0x82C2DF10;
	sub_82B41350(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c2df28
	if (cr6.eq) goto loc_82C2DF28;
	// bl 0x82416268
	ctx.lr = 0x82C2DF24;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C2DF28:
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

__attribute__((alias("__imp__sub_82C2DF40"))) PPC_WEAK_FUNC(sub_82C2DF40);
PPC_FUNC_IMPL(__imp__sub_82C2DF40) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,180
	ctx.r4.s64 = 180;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C2DF74;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2dfa8
	if (cr6.eq) goto loc_82C2DFA8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2df90
	if (cr6.lt) goto loc_82C2DF90;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82c2df94
	goto loc_82C2DF94;
loc_82C2DF90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82C2DF94:
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82c2dc00
	ctx.lr = 0x82C2DFA0;
	sub_82C2DC00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c2dfac
	if (!cr6.eq) goto loc_82C2DFAC;
loc_82C2DFA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C2DFAC:
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

__attribute__((alias("__imp__sub_82C2DFC4"))) PPC_WEAK_FUNC(sub_82C2DFC4);
PPC_FUNC_IMPL(__imp__sub_82C2DFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2DFC8"))) PPC_WEAK_FUNC(sub_82C2DFC8);
PPC_FUNC_IMPL(__imp__sub_82C2DFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C2DFD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r30,r11,3888
	ctx.r30.s64 = ctx.r11.s64 + 3888;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E018;
	sub_8259CC28(ctx, base);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// stb r31,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E034;
	sub_8259CC28(ctx, base);
	// stw r29,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r29.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// stb r31,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E050;
	sub_8259CC28(ctx, base);
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E06C;
	sub_8259CC28(ctx, base);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E088;
	sub_8259CC28(ctx, base);
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E0A4;
	sub_8259CC28(ctx, base);
	// stw r29,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r29.u32);
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// stb r31,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E0C0;
	sub_8259CC28(ctx, base);
	// stw r29,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r29.u32);
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r31.u32);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// stb r31,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E0DC;
	sub_8259CC28(ctx, base);
	// stw r29,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r29.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E0F8;
	sub_8259CC28(ctx, base);
	// stw r29,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r29.u32);
	// stw r31,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r31.u32);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// stb r31,412(r1)
	PPC_STORE_U8(ctx.r1.u32 + 412, ctx.r31.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E114;
	sub_8259CC28(ctx, base);
	// stw r29,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r29.u32);
	// stw r31,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r31.u32);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// stb r31,440(r1)
	PPC_STORE_U8(ctx.r1.u32 + 440, ctx.r31.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E130;
	sub_8259CC28(ctx, base);
	// stw r29,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r29.u32);
	// stw r31,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r31.u32);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// stb r31,468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 468, ctx.r31.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E14C;
	sub_8259CC28(ctx, base);
	// stw r29,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r29.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E168;
	sub_8259CC28(ctx, base);
	// stw r29,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r29.u32);
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r31.u32);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// stb r31,524(r1)
	PPC_STORE_U8(ctx.r1.u32 + 524, ctx.r31.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,524
	ctx.r3.s64 = ctx.r1.s64 + 524;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E184;
	sub_8259CC28(ctx, base);
	// stw r29,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r29.u32);
	// stw r31,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r31.u32);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// stb r31,552(r1)
	PPC_STORE_U8(ctx.r1.u32 + 552, ctx.r31.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E1A0;
	sub_8259CC28(ctx, base);
	// stw r29,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r29.u32);
	// stw r31,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,580(r1)
	PPC_STORE_U8(ctx.r1.u32 + 580, ctx.r31.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E1BC;
	sub_8259CC28(ctx, base);
	// lwz r9,100(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,-18464(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18464);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C2E1D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,160(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82c2e1f8
	if (!cr6.eq) goto loc_82C2E1F8;
	// lis r4,78
	ctx.r4.s64 = 5111808;
	// addi r5,r27,1
	ctx.r5.s64 = ctx.r27.s64 + 1;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// b 0x82c2e220
	goto loc_82C2E220;
loc_82C2E1F8:
	// mulli r10,r27,28
	ctx.r10.s64 = ctx.r27.s64 * 28;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c2e214
	if (cr6.lt) goto loc_82C2E214;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C2E214:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
loc_82C2E220:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82C2E228;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c2e23c
	if (!cr6.lt) goto loc_82C2E23C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82C2E23C:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82C2E24C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2e24c
	if (!cr6.eq) goto loc_82C2E24C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C2E270;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2E284;
	sub_82D291E0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c2e2a4
	if (cr6.lt) goto loc_82C2E2A4;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C2E2A4;
	sub_825952B8(ctx, base);
loc_82C2E2A4:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r30,r1,608
	ctx.r30.s64 = ctx.r1.s64 + 608;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82C2E2B8:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2e2d8
	if (cr6.lt) goto loc_82C2E2D8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2E2D8;
	sub_825952B8(ctx, base);
loc_82C2E2D8:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82c2e2b8
	if (!cr0.lt) goto loc_82C2E2B8;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2e308
	if (cr6.lt) goto loc_82C2E308;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C2E308;
	sub_825952B8(ctx, base);
loc_82C2E308:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2E310"))) PPC_WEAK_FUNC(sub_82C2E310);
PPC_FUNC_IMPL(__imp__sub_82C2E310) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,3387
	ctx.r4.s64 = ctx.r9.s64 + 3387;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C2E34C;
	sub_8259CC28(ctx, base);
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c2e3a8
	if (!cr6.eq) goto loc_82C2E3A8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82c2e384
	if (cr6.eq) goto loc_82C2E384;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82c2e384
	if (cr6.eq) goto loc_82C2E384;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-18476
	ctx.r10.s64 = ctx.r11.s64 + -18476;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8259d6c0
	ctx.lr = 0x82C2E380;
	sub_8259D6C0(ctx, base);
	// b 0x82c2e400
	goto loc_82C2E400;
loc_82C2E384:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,-18476
	ctx.r10.s64 = ctx.r11.s64 + -18476;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C2E394:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2e394
	if (!cr6.eq) goto loc_82C2E394;
	// b 0x82c2e3ec
	goto loc_82C2E3EC;
loc_82C2E3A8:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82c2e3d0
	if (cr6.eq) goto loc_82C2E3D0;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82c2e3d0
	if (cr6.eq) goto loc_82C2E3D0;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-18476
	ctx.r10.s64 = ctx.r11.s64 + -18476;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8259d6c0
	ctx.lr = 0x82C2E3CC;
	sub_8259D6C0(ctx, base);
	// b 0x82c2e400
	goto loc_82C2E400;
loc_82C2E3D0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,-18476(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18476);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C2E3DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2e3dc
	if (!cr6.eq) goto loc_82C2E3DC;
loc_82C2E3EC:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C2E400;
	sub_8259CC28(ctx, base);
loc_82C2E400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C2E408;
	sub_82D19A78(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c2e41c
	if (!cr6.lt) goto loc_82C2E41C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C2E41C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2E430;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82c2e450
	if (cr6.lt) goto loc_82C2E450;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2E450;
	sub_825952B8(ctx, base);
loc_82C2E450:
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

__attribute__((alias("__imp__sub_82C2E464"))) PPC_WEAK_FUNC(sub_82C2E464);
PPC_FUNC_IMPL(__imp__sub_82C2E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2E468"))) PPC_WEAK_FUNC(sub_82C2E468);
PPC_FUNC_IMPL(__imp__sub_82C2E468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C2E470;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c2e310
	ctx.lr = 0x82C2E47C;
	sub_82C2E310(ctx, base);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c2e4c8
	if (!cr6.eq) goto loc_82C2E4C8;
	// ori r4,r4,94
	ctx.r4.u64 = ctx.r4.u64 | 94;
	// bl 0x82b3eec8
	ctx.lr = 0x82C2E498;
	sub_82B3EEC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c2dd88
	ctx.lr = 0x82C2E4A4;
	sub_82C2DD88(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82c2e4c0
	if (cr6.eq) goto loc_82C2E4C0;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82c2e4c0
	if (cr6.eq) goto loc_82C2E4C0;
	// li r25,16
	ctx.r25.s64 = 16;
	// b 0x82c2e4f8
	goto loc_82C2E4F8;
loc_82C2E4C0:
	// li r25,6
	ctx.r25.s64 = 6;
	// b 0x82c2e4f8
	goto loc_82C2E4F8;
loc_82C2E4C8:
	// ori r4,r4,95
	ctx.r4.u64 = ctx.r4.u64 | 95;
	// bl 0x82b3eec8
	ctx.lr = 0x82C2E4D0;
	sub_82B3EEC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c2dd88
	ctx.lr = 0x82C2E4DC;
	sub_82C2DD88(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82c2e4f4
	if (cr6.eq) goto loc_82C2E4F4;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// li r25,16
	ctx.r25.s64 = 16;
	// bne cr6,0x82c2e4f8
	if (!cr6.eq) goto loc_82C2E4F8;
loc_82C2E4F4:
	// li r25,8
	ctx.r25.s64 = 8;
loc_82C2E4F8:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82C2E4FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C2E504;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2E524;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C2E538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2e66c
	if (cr6.eq) goto loc_82C2E66C;
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// bge cr6,0x82c2e650
	if (!cr6.lt) goto loc_82C2E650;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2E558;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C2E56C;
	sub_82D2B608(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x82C2E578;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2e66c
	if (cr6.eq) goto loc_82C2E66C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C2E584:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C2E590;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2e634
	if (cr6.eq) goto loc_82C2E634;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c2e634
	if (cr6.eq) goto loc_82C2E634;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c2e688
	if (!cr6.gt) goto loc_82C2E688;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c2e694
	if (!cr6.gt) goto loc_82C2E694;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhzx r4,r28,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r10.u32);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2E5F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bgt cr6,0x82c2e618
	if (cr6.gt) goto loc_82C2E618;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2E610;
	sub_82D2AEC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82c2e624
	goto loc_82C2E624;
loc_82C2E618:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2E620;
	sub_82D2AEC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_82C2E624:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C2E634;
	sub_82D2B608(ctx, base);
loc_82C2E634:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// bl 0x82d33c10
	ctx.lr = 0x82C2E644;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82c2e584
	if (cr6.lt) goto loc_82C2E584;
	// b 0x82c2e66c
	goto loc_82C2E66C;
loc_82C2E650:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2E658;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C2E66C;
	sub_82D2B608(ctx, base);
loc_82C2E66C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(ctx.r26.u32, 16, xer);
	// blt cr6,0x82c2e4fc
	if (cr6.lt) goto loc_82C2E4FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1dc40
	ctx.lr = 0x82C2E680;
	sub_82D1DC40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C2E688:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2E694;
	sub_831CC188(ctx, base);
loc_82C2E694:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2E6A0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C2E6A0"))) PPC_WEAK_FUNC(sub_82C2E6A0);
PPC_FUNC_IMPL(__imp__sub_82C2E6A0) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82c2e6dc
	if (cr6.eq) goto loc_82C2E6DC;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82c2e6dc
	if (cr6.eq) goto loc_82C2E6DC;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// b 0x82c2e6f0
	goto loc_82C2E6F0;
loc_82C2E6DC:
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,44
	ctx.r9.s64 = 44;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
loc_82C2E6F0:
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c2e310
	ctx.lr = 0x82C2E6FC;
	sub_82C2E310(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C2E70C;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C2E71C;
	sub_82D19788(ctx, base);
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82c2e734
	if (!cr6.eq) goto loc_82C2E734;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C2E734:
	// bl 0x82c2dd88
	ctx.lr = 0x82C2E738;
	sub_82C2DD88(ctx, base);
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

__attribute__((alias("__imp__sub_82C2E750"))) PPC_WEAK_FUNC(sub_82C2E750);
PPC_FUNC_IMPL(__imp__sub_82C2E750) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c2e468
	sub_82C2E468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2E754"))) PPC_WEAK_FUNC(sub_82C2E754);
PPC_FUNC_IMPL(__imp__sub_82C2E754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2E758"))) PPC_WEAK_FUNC(sub_82C2E758);
PPC_FUNC_IMPL(__imp__sub_82C2E758) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r9.u32);
	// bl 0x82c2e468
	ctx.lr = 0x82C2E780;
	sub_82C2E468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b40290
	ctx.lr = 0x82C2E788;
	sub_82B40290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1dc40
	ctx.lr = 0x82C2E790;
	sub_82D1DC40(ctx, base);
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

__attribute__((alias("__imp__sub_82C2E7A4"))) PPC_WEAK_FUNC(sub_82C2E7A4);
PPC_FUNC_IMPL(__imp__sub_82C2E7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2E7A8"))) PPC_WEAK_FUNC(sub_82C2E7A8);
PPC_FUNC_IMPL(__imp__sub_82C2E7A8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2e7ec
	if (cr6.eq) goto loc_82C2E7EC;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bbbf28
	ctx.lr = 0x82C2E7D8;
	sub_82BBBF28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2E7EC;
	sub_825952B8(ctx, base);
loc_82C2E7EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C2E810"))) PPC_WEAK_FUNC(sub_82C2E810);
PPC_FUNC_IMPL(__imp__sub_82C2E810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82C2E818;
	__savegprlr_21(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C2E840;
	sub_82D2B608(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,3386
	ctx.r29.s64 = ctx.r11.s64 + 3386;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,402
	ctx.r4.s64 = ctx.r29.s64 + 402;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2E864;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r29,418
	ctx.r4.s64 = ctx.r29.s64 + 418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C2E880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2E890;
	sub_82D2AEC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,176(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d32830
	ctx.lr = 0x82C2E8A4;
	sub_82D32830(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,430
	ctx.r4.s64 = ctx.r29.s64 + 430;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C2E8BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2eda0
	if (cr6.eq) goto loc_82C2EDA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-18460(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18460);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C2E8E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2eda0
	if (cr6.eq) goto loc_82C2EDA0;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r21,2
	ctx.r21.s64 = 2;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// beq cr6,0x82c2ea80
	if (cr6.eq) goto loc_82C2EA80;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82c2ea80
	if (cr6.eq) goto loc_82C2EA80;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// bne cr6,0x82c2e944
	if (!cr6.eq) goto loc_82C2E944;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82c2e950
	goto loc_82C2E950;
loc_82C2E944:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82c2e958
	if (!cr6.eq) goto loc_82C2E958;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82C2E950:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831af820
	ctx.lr = 0x82C2E958;
	sub_831AF820(ctx, base);
loc_82C2E958:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x82c2e970
	if (!cr6.gt) goto loc_82C2E970;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82C2E970:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83197d10
	ctx.lr = 0x82C2E980;
	sub_83197D10(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83197d10
	ctx.lr = 0x82C2E990;
	sub_83197D10(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r5,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c2ea44
	if (cr6.eq) goto loc_82C2EA44;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r30,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 1;
loc_82C2E9C8:
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, xer);
	// bge cr6,0x82c2ea44
	if (!cr6.lt) goto loc_82C2EA44;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// ble cr6,0x82c2ea68
	if (!cr6.gt) goto loc_82C2EA68;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c2ea34
	if (!cr6.eq) goto loc_82C2EA34;
	// subf r10,r6,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r6.s64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c2ea34
	if (cr6.eq) goto loc_82C2EA34;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplw cr6,r9,r25
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, xer);
	// ble cr6,0x82c2ea74
	if (!cr6.gt) goto loc_82C2EA74;
loc_82C2EA0C:
	// lhz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,2(r8)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// beq cr6,0x82c2ea30
	if (cr6.eq) goto loc_82C2EA30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c2ea0c
	if (cr6.gt) goto loc_82C2EA0C;
	// b 0x82c2ea34
	goto loc_82C2EA34;
loc_82C2EA30:
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
loc_82C2EA34:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// blt cr6,0x82c2e9c8
	if (cr6.lt) goto loc_82C2E9C8;
loc_82C2EA44:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c2ea58
	if (cr6.eq) goto loc_82C2EA58;
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x825952b8
	ctx.lr = 0x82C2EA58;
	sub_825952B8(ctx, base);
loc_82C2EA58:
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// b 0x82c2ece4
	goto loc_82C2ECE4;
loc_82C2EA68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2EA74;
	sub_831CC188(ctx, base);
loc_82C2EA74:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2EA80;
	sub_831CC188(ctx, base);
loc_82C2EA80:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r25,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// ble cr6,0x82c2eaa0
	if (!cr6.gt) goto loc_82C2EAA0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82C2EAA0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// bne cr6,0x82c2eab0
	if (!cr6.eq) goto loc_82C2EAB0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82C2EAB0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83102db0
	ctx.lr = 0x82C2EAB8;
	sub_83102DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83197d10
	ctx.lr = 0x82C2EAC8;
	sub_83197D10(ctx, base);
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r11,20
	ctx.r11.s64 = 20;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r11,r9,r11
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c2eb04
	if (cr6.lt) goto loc_82C2EB04;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82c2e7a8
	ctx.lr = 0x82C2EAEC;
	sub_82C2E7A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82C2EAF4;
	sub_82F73D60(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f73d60
	ctx.lr = 0x82C2EAFC;
	sub_82F73D60(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C2EB04:
	// addi r10,r26,16
	ctx.r10.s64 = ctx.r26.s64 + 16;
	// li r5,-1
	ctx.r5.s64 = -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82c2eb20
	if (cr6.gt) goto loc_82C2EB20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2EB20;
	sub_831CC188(ctx, base);
loc_82C2EB20:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r3,r7,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r10,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lhzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// beq cr6,0x82c2ec24
	if (cr6.eq) goto loc_82C2EC24;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// ble cr6,0x82c2eb90
	if (!cr6.gt) goto loc_82C2EB90;
loc_82C2EB58:
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r3,r8,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r8.s64;
	// srawi. r4,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82c2eb9c
	if (cr0.eq) goto loc_82C2EB9C;
	// lhz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// beq cr6,0x82c2eba8
	if (cr6.eq) goto loc_82C2EBA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c2eb58
	if (cr6.gt) goto loc_82C2EB58;
	// b 0x82c2ec24
	goto loc_82C2EC24;
loc_82C2EB90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2EB9C;
	sub_831CC188(ctx, base);
loc_82C2EB9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2EBA8;
	sub_831CC188(ctx, base);
loc_82C2EBA8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x82c2ebdc
	if (!cr6.eq) goto loc_82C2EBDC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bgt cr6,0x82c2ec20
	if (cr6.gt) goto loc_82C2EC20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2EBDC;
	sub_831CC188(ctx, base);
loc_82C2EBDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c2ebf4
	if (cr6.gt) goto loc_82C2EBF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2EBF4;
	sub_831CC188(ctx, base);
loc_82C2EBF4:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bgt cr6,0x82c2ec20
	if (cr6.gt) goto loc_82C2EC20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2EC20;
	sub_831CC188(ctx, base);
loc_82C2EC20:
	// lhz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
loc_82C2EC24:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82c2ecc8
	if (!cr6.eq) goto loc_82C2ECC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82C2EC3C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2EC50;
	sub_82D291E0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82C2EC58;
	sub_8387E8E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2EC68;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2EC78;
	sub_82D2AEC8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82c2e7a8
	ctx.lr = 0x82C2EC80;
	sub_82C2E7A8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r21,2
	ctx.r21.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c2ec9c
	if (cr6.eq) goto loc_82C2EC9C;
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x825952b8
	ctx.lr = 0x82C2EC9C;
	sub_825952B8(ctx, base);
loc_82C2EC9C:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// beq cr6,0x82c2eda0
	if (cr6.eq) goto loc_82C2EDA0;
	// stw r21,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r21.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825952b8
	ctx.lr = 0x82C2ECC0;
	sub_825952B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C2ECC8:
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r24,r11,-19999
	ctx.r24.s64 = ctx.r11.s64 + -19999;
	// cmplwi cr6,r10,91
	cr6.compare<uint32_t>(ctx.r10.u32, 91, xer);
	// beq cr6,0x82c2ecdc
	if (cr6.eq) goto loc_82C2ECDC;
	// addi r24,r11,-2199
	ctx.r24.s64 = ctx.r11.s64 + -2199;
loc_82C2ECDC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82c2e7a8
	ctx.lr = 0x82C2ECE4;
	sub_82C2E7A8(ctx, base);
loc_82C2ECE4:
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// stb r25,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r25.u8);
	// lis r4,78
	ctx.r4.s64 = 5111808;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d042a8
	ctx.lr = 0x82C2ED08;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2ED1C;
	sub_82D291E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d28130
	ctx.lr = 0x82C2ED2C;
	sub_82D28130(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2ED3C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2ed58
	if (cr6.lt) goto loc_82C2ED58;
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82C2ED58;
	sub_825952B8(ctx, base);
loc_82C2ED58:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r25,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r25.u8);
	// beq cr6,0x82c2ed7c
	if (cr6.eq) goto loc_82C2ED7C;
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825952b8
	ctx.lr = 0x82C2ED7C;
	sub_825952B8(ctx, base);
loc_82C2ED7C:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// beq cr6,0x82c2eda0
	if (cr6.eq) goto loc_82C2EDA0;
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x825952b8
	ctx.lr = 0x82C2EDA0;
	sub_825952B8(ctx, base);
loc_82C2EDA0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2EDA8"))) PPC_WEAK_FUNC(sub_82C2EDA8);
PPC_FUNC_IMPL(__imp__sub_82C2EDA8) {
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
	// bl 0x82b41548
	ctx.lr = 0x82C2EDC0;
	sub_82B41548(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,4952
	ctx.r9.s64 = ctx.r11.s64 + 4952;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-18320(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -18320);
	// bl 0x82d20ae0
	ctx.lr = 0x82C2EDE8;
	sub_82D20AE0(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,4640
	ctx.r4.s64 = ctx.r6.s64 + 4640;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82C2EDFC;
	sub_82D23390(ctx, base);
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

__attribute__((alias("__imp__sub_82C2EE14"))) PPC_WEAK_FUNC(sub_82C2EE14);
PPC_FUNC_IMPL(__imp__sub_82C2EE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2EE18"))) PPC_WEAK_FUNC(sub_82C2EE18);
PPC_FUNC_IMPL(__imp__sub_82C2EE18) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b41548
	ctx.lr = 0x82C2EE34;
	sub_82B41548(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,4952
	ctx.r9.s64 = ctx.r11.s64 + 4952;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-18320(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -18320);
	// bl 0x82d20ae0
	ctx.lr = 0x82C2EE5C;
	sub_82D20AE0(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,4640
	ctx.r4.s64 = ctx.r6.s64 + 4640;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82C2EE70;
	sub_82D23390(ctx, base);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// addi r3,r5,4952
	ctx.r3.s64 = ctx.r5.s64 + 4952;
	// addi r11,r4,-17088
	ctx.r11.s64 = ctx.r4.s64 + -17088;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C2EEA0"))) PPC_WEAK_FUNC(sub_82C2EEA0);
PPC_FUNC_IMPL(__imp__sub_82C2EEA0) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C2EED4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2eeec
	if (cr6.eq) goto loc_82C2EEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c2ee18
	ctx.lr = 0x82C2EEE8;
	sub_82C2EE18(ctx, base);
	// b 0x82c2eef0
	goto loc_82C2EEF0;
loc_82C2EEEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C2EEF0:
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

__attribute__((alias("__imp__sub_82C2EF08"))) PPC_WEAK_FUNC(sub_82C2EF08);
PPC_FUNC_IMPL(__imp__sub_82C2EF08) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,4952
	ctx.r9.s64 = ctx.r11.s64 + 4952;
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
	// bl 0x82b41350
	ctx.lr = 0x82C2EF40;
	sub_82B41350(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c2ef58
	if (cr6.eq) goto loc_82C2EF58;
	// bl 0x82416268
	ctx.lr = 0x82C2EF54;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C2EF58:
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

__attribute__((alias("__imp__sub_82C2EF70"))) PPC_WEAK_FUNC(sub_82C2EF70);
PPC_FUNC_IMPL(__imp__sub_82C2EF70) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C2EFA4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2efd8
	if (cr6.eq) goto loc_82C2EFD8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2efc0
	if (cr6.lt) goto loc_82C2EFC0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82c2efc4
	goto loc_82C2EFC4;
loc_82C2EFC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82C2EFC4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82c2eda8
	ctx.lr = 0x82C2EFD0;
	sub_82C2EDA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c2efdc
	if (!cr6.eq) goto loc_82C2EFDC;
loc_82C2EFD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C2EFDC:
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

__attribute__((alias("__imp__sub_82C2EFF4"))) PPC_WEAK_FUNC(sub_82C2EFF4);
PPC_FUNC_IMPL(__imp__sub_82C2EFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2EFF8"))) PPC_WEAK_FUNC(sub_82C2EFF8);
PPC_FUNC_IMPL(__imp__sub_82C2EFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C2F000;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31760
	ctx.r28.s64 = -2081423360;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r31,r10,4852
	ctx.r31.s64 = ctx.r10.s64 + 4852;
	// li r23,15
	ctx.r23.s64 = 15;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// lwz r11,5920(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5920);
	// lis r9,-31760
	ctx.r9.s64 = -2081423360;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r9,5584
	ctx.r29.s64 = ctx.r9.s64 + 5584;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2f0f0
	if (!cr6.eq) goto loc_82C2F0F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// stw r11,5920(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5920, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F05C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F068;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F074;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r29,84
	ctx.r3.s64 = ctx.r29.s64 + 84;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F080;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F08C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F098;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// addi r3,r29,168
	ctx.r3.s64 = ctx.r29.s64 + 168;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F0A4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r29,196
	ctx.r3.s64 = ctx.r29.s64 + 196;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F0B0;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// addi r3,r29,224
	ctx.r3.s64 = ctx.r29.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F0BC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// addi r3,r29,252
	ctx.r3.s64 = ctx.r29.s64 + 252;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F0C8;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// addi r3,r29,280
	ctx.r3.s64 = ctx.r29.s64 + 280;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F0D4;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// addi r3,r29,308
	ctx.r3.s64 = ctx.r29.s64 + 308;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F0E0;
	sub_837B0C10(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-30352
	ctx.r3.s64 = ctx.r11.s64 + -30352;
	// bl 0x831cdcc8
	ctx.lr = 0x82C2F0EC;
	sub_831CDCC8(ctx, base);
	// lwz r11,5920(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5920);
loc_82C2F0F0:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r10,-31760
	ctx.r10.s64 = -2081423360;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r30,r10,5248
	ctx.r30.s64 = ctx.r10.s64 + 5248;
	// bne cr6,0x82c2f1a8
	if (!cr6.eq) goto loc_82C2F1A8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// stw r11,5920(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5920, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F118;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F124;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F130;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F13C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F148;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r30,140
	ctx.r3.s64 = ctx.r30.s64 + 140;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F154;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F160;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r30,196
	ctx.r3.s64 = ctx.r30.s64 + 196;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F16C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F178;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r30,252
	ctx.r3.s64 = ctx.r30.s64 + 252;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F184;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r30,280
	ctx.r3.s64 = ctx.r30.s64 + 280;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F190;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r30,308
	ctx.r3.s64 = ctx.r30.s64 + 308;
	// bl 0x837b0c10
	ctx.lr = 0x82C2F19C;
	sub_837B0C10(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-30456
	ctx.r3.s64 = ctx.r11.s64 + -30456;
	// bl 0x831cdcc8
	ctx.lr = 0x82C2F1A8;
	sub_831CDCC8(ctx, base);
loc_82C2F1A8:
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// addi r3,r26,100
	ctx.r3.s64 = ctx.r26.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2F1C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2F1C8;
	sub_831156E8(ctx, base);
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// lwz r9,116(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82c2f1ec
	if (!cr0.eq) goto loc_82C2F1EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2F1EC;
	sub_831CC188(ctx, base);
loc_82C2F1EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82c2f20c
	if (!cr0.eq) goto loc_82C2F20C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C2F20C;
	sub_831CC188(ctx, base);
loc_82C2F20C:
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x82C2F214;
	sub_8311C338(ctx, base);
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// rlwinm r10,r11,19,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// mulli r11,r25,28
	ctx.r11.s64 = ctx.r25.s64 * 28;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c2f230
	if (!cr6.eq) goto loc_82C2F230;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82c2f234
	goto loc_82C2F234;
loc_82C2F230:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82C2F234:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c2f244
	if (cr6.lt) goto loc_82C2F244;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C2F244:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82C2F258;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c2f26c
	if (!cr6.lt) goto loc_82C2F26C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82C2F26C:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
loc_82C2F27C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c2f27c
	if (!cr6.eq) goto loc_82C2F27C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C2F2A0;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C2F2B4;
	sub_82D291E0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c2f2d4
	if (cr6.lt) goto loc_82C2F2D4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C2F2D4;
	sub_825952B8(ctx, base);
loc_82C2F2D4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// blt cr6,0x82c2f2fc
	if (cr6.lt) goto loc_82C2F2FC;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C2F2FC;
	sub_825952B8(ctx, base);
loc_82C2F2FC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2F304"))) PPC_WEAK_FUNC(sub_82C2F304);
PPC_FUNC_IMPL(__imp__sub_82C2F304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2F308"))) PPC_WEAK_FUNC(sub_82C2F308);
PPC_FUNC_IMPL(__imp__sub_82C2F308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C2F310;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C2F31C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r30,r10,221
	ctx.r30.s64 = ctx.r10.s64 + 14483456;
	// addi r30,r30,-26512
	ctx.r30.s64 = ctx.r30.s64 + -26512;
	// bl 0x82d17aa0
	ctx.lr = 0x82C2F334;
	sub_82D17AA0(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bgt cr6,0x82c2f4a8
	if (cr6.gt) goto loc_82C2F4A8;
	// beq cr6,0x82c2f400
	if (cr6.eq) goto loc_82C2F400;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82c2f4b8
	if (cr6.gt) goto loc_82C2F4B8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c2f3a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2F3A0;
	// bdzf 4*cr6+eq,0x82c2f4b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2F4B8;
	// bdzf 4*cr6+eq,0x82c2f5c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2F5C0;
	// bdzf 4*cr6+eq,0x82c2f588
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2F588;
	// bdzf 4*cr6+eq,0x82c2f4b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2F4B8;
	// bne cr6,0x82c2f3d0
	if (!cr6.eq) goto loc_82C2F3D0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82C2F390;
	sub_82D19A78(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r8,4744
	ctx.r11.s64 = ctx.r8.s64 + 4744;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// b 0x82c2f5ec
	goto loc_82C2F5EC;
loc_82C2F3A0:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82C2F3C0;
	sub_82D19A78(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r8,4744
	ctx.r11.s64 = ctx.r8.s64 + 4744;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// b 0x82c2f5ec
	goto loc_82C2F5EC;
loc_82C2F3D0:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82C2F3F0;
	sub_82D19A78(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r8,4744
	ctx.r11.s64 = ctx.r8.s64 + 4744;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// b 0x82c2f5ec
	goto loc_82C2F5EC;
loc_82C2F400:
	// lbz r11,1120(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1120);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// bl 0x82b491f8
	ctx.lr = 0x82C2F430;
	sub_82B491F8(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r6,4744
	ctx.r11.s64 = ctx.r6.s64 + 4744;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// lwz r30,152(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82473550
	ctx.lr = 0x82C2F448;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82C2F450;
	sub_82474170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C2F458;
	sub_82D19A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a79bf8
	ctx.lr = 0x82C2F468;
	sub_82A79BF8(ctx, base);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bge cr6,0x82c2f47c
	if (!cr6.lt) goto loc_82C2F47C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82C2F47C:
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
	ctx.lr = 0x82C2F494;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x82C2F49C;
	sub_824707C8(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82b48bf8
	ctx.lr = 0x82C2F4A4;
	sub_82B48BF8(ctx, base);
	// b 0x82c2f600
	goto loc_82C2F600;
loc_82C2F4A8:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82c2f5c0
	if (cr6.eq) goto loc_82C2F5C0;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82c2f588
	if (cr6.eq) goto loc_82C2F588;
loc_82C2F4B8:
	// lbz r11,1120(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1120);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lbz r9,1120(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1120);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// bl 0x82b491f8
	ctx.lr = 0x82C2F4E4;
	sub_82B491F8(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r8,4744
	ctx.r4.s64 = ctx.r8.s64 + 4744;
	// lwz r30,152(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82473550
	ctx.lr = 0x82C2F4F8;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x82C2F500;
	sub_82474170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C2F508;
	sub_82D19A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x82C2F518;
	sub_82A79BF8(ctx, base);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82c2f52c
	if (!cr6.lt) goto loc_82C2F52C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82C2F52C:
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
	ctx.lr = 0x82C2F544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82c2f558
	if (cr6.lt) goto loc_82C2F558;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82C2F558;
	sub_82416268(ctx, base);
loc_82C2F558:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82b48ae0
	ctx.lr = 0x82C2F570;
	sub_82B48AE0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r9,r10,15320
	ctx.r9.s64 = ctx.r10.s64 + 15320;
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82C2F584;
	sub_831CCF00(ctx, base);
	// b 0x82c2f600
	goto loc_82C2F600;
loc_82C2F588:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82C2F5A4;
	sub_82D19A78(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r9,4744
	ctx.r11.s64 = ctx.r9.s64 + 4744;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// b 0x82c2f5f8
	goto loc_82C2F5F8;
loc_82C2F5C0:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,44
	ctx.r9.s64 = 44;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82C2F5E0;
	sub_82D19A78(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r8,4744
	ctx.r11.s64 = ctx.r8.s64 + 4744;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
loc_82C2F5EC:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82C2F5F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bctrl 
	ctx.lr = 0x82C2F600;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C2F600:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,152(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82d19a78
	ctx.lr = 0x82C2F60C;
	sub_82D19A78(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x82C2F610;
	sub_82D33C10(ctx, base);
	// addi r28,r3,-1
	ctx.r28.s64 = ctx.r3.s64 + -1;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// bge cr6,0x82c2f698
	if (!cr6.lt) goto loc_82C2F698;
loc_82C2F61C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C2F624;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2F644;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C2F658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2f698
	if (cr6.eq) goto loc_82C2F698;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2F670;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C2F684;
	sub_82D2B608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b038
	ctx.lr = 0x82C2F68C;
	sub_82D2B038(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// blt cr6,0x82c2f61c
	if (cr6.lt) goto loc_82C2F61C;
loc_82C2F698:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2F6A4"))) PPC_WEAK_FUNC(sub_82C2F6A4);
PPC_FUNC_IMPL(__imp__sub_82C2F6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2F6A8"))) PPC_WEAK_FUNC(sub_82C2F6A8);
PPC_FUNC_IMPL(__imp__sub_82C2F6A8) {
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
	// lwz r3,11400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c2f6f8
	if (!cr6.eq) goto loc_82C2F6F8;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C2F6E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2f6f0
	if (cr6.eq) goto loc_82C2F6F0;
	// bl 0x82d82420
	ctx.lr = 0x82C2F6EC;
	sub_82D82420(ctx, base);
	// b 0x82c2f6f4
	goto loc_82C2F6F4;
loc_82C2F6F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C2F6F4:
	// stw r3,11400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11400, ctx.r3.u32);
loc_82C2F6F8:
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

__attribute__((alias("__imp__sub_82C2F70C"))) PPC_WEAK_FUNC(sub_82C2F70C);
PPC_FUNC_IMPL(__imp__sub_82C2F70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2F710"))) PPC_WEAK_FUNC(sub_82C2F710);
PPC_FUNC_IMPL(__imp__sub_82C2F710) {
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
	// lwz r3,11400(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2f734
	if (cr6.eq) goto loc_82C2F734;
	// bl 0x82d82940
	ctx.lr = 0x82C2F730;
	sub_82D82940(ctx, base);
	// bl 0x8259bb68
	ctx.lr = 0x82C2F734;
	sub_8259BB68(ctx, base);
loc_82C2F734:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C2F744"))) PPC_WEAK_FUNC(sub_82C2F744);
PPC_FUNC_IMPL(__imp__sub_82C2F744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2F748"))) PPC_WEAK_FUNC(sub_82C2F748);
PPC_FUNC_IMPL(__imp__sub_82C2F748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C2F750;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,5310
	ctx.r29.s64 = ctx.r11.s64 + 5310;
	// addi r4,r29,238
	ctx.r4.s64 = ctx.r29.s64 + 238;
	// bl 0x83103328
	ctx.lr = 0x82C2F768;
	sub_83103328(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,5648
	ctx.r9.s64 = ctx.r10.s64 + 5648;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82C2F7A4;
	sub_8259CC28(ctx, base);
	// lis r29,-31758
	ctx.r29.s64 = -2081292288;
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r30,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r30.u64);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,11400(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c2f7d0
	if (!cr6.eq) goto loc_82C2F7D0;
	// bl 0x82c2f6a8
	ctx.lr = 0x82C2F7C8;
	sub_82C2F6A8(ctx, base);
	// lwz r3,11400(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11400);
	// bl 0x82d82470
	ctx.lr = 0x82C2F7D0;
	sub_82D82470(ctx, base);
loc_82C2F7D0:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12416
	ctx.r4.s64 = 12416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C2F7E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2f7fc
	if (cr6.eq) goto loc_82C2F7FC;
	// bl 0x82d83e48
	ctx.lr = 0x82C2F7F4;
	sub_82D83E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82c2f800
	goto loc_82C2F800;
loc_82C2F7FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C2F800:
	// stw r4,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82c2f818
	if (cr6.eq) goto loc_82C2F818;
	// bl 0x83103100
	ctx.lr = 0x82C2F814;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C2F818:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2F820"))) PPC_WEAK_FUNC(sub_82C2F820);
PPC_FUNC_IMPL(__imp__sub_82C2F820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C2F828;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,100(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,84
	ctx.r31.s64 = ctx.r3.s64 + 84;
	// addi r29,r11,5373
	ctx.r29.s64 = ctx.r11.s64 + 5373;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r29,-30
	ctx.r6.s64 = ctx.r29.s64 + -30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82C2F850;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c2f88c
	if (cr6.eq) goto loc_82C2F88C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2f86c
	if (cr6.lt) goto loc_82C2F86C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82c2f870
	goto loc_82C2F870;
loc_82C2F86C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82C2F870:
	// bl 0x83816968
	ctx.lr = 0x82C2F874;
	sub_83816968(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83816378
	ctx.lr = 0x82C2F87C;
	sub_83816378(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82C2F88C;
	sub_8259CC28(ctx, base);
loc_82C2F88C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2F894"))) PPC_WEAK_FUNC(sub_82C2F894);
PPC_FUNC_IMPL(__imp__sub_82C2F894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2F898"))) PPC_WEAK_FUNC(sub_82C2F898);
PPC_FUNC_IMPL(__imp__sub_82C2F898) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,5648
	ctx.r10.s64 = ctx.r11.s64 + 5648;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82c2f820
	ctx.lr = 0x82C2F8C0;
	sub_82C2F820(ctx, base);
	// lwz r9,104(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r31,r30,84
	ctx.r31.s64 = ctx.r30.s64 + 84;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82c2f8e4
	if (cr6.lt) goto loc_82C2F8E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C2F8E4;
	sub_825952B8(ctx, base);
loc_82C2F8E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x831032a0
	ctx.lr = 0x82C2F900;
	sub_831032A0(ctx, base);
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

__attribute__((alias("__imp__sub_82C2F918"))) PPC_WEAK_FUNC(sub_82C2F918);
PPC_FUNC_IMPL(__imp__sub_82C2F918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C2F920;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c2fa0c
	if (cr6.eq) goto loc_82C2FA0C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c2f948
	if (!cr6.eq) goto loc_82C2F948;
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
loc_82C2F948:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c2f9c4
	if (!cr6.eq) goto loc_82C2F9C4;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c2fa0c
	if (!cr6.eq) goto loc_82C2FA0C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c2f9c4
	if (cr6.eq) goto loc_82C2F9C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,5311
	ctx.r4.s64 = ctx.r11.s64 + 5311;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a64a88
	ctx.lr = 0x82C2F980;
	sub_82A64A88(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c2f9c4
	if (cr6.eq) goto loc_82C2F9C4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2f9a0
	if (cr6.lt) goto loc_82C2F9A0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82c2f9a4
	goto loc_82C2F9A4;
loc_82C2F9A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C2F9A4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2F9BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C2F9C4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c2f9e0
	if (cr6.eq) goto loc_82C2F9E0;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// std r28,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r28.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C2F9E0:
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82d83fb0
	ctx.lr = 0x82C2F9F4;
	sub_82D83FB0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82d473c8
	ctx.lr = 0x82C2F9FC;
	sub_82D473C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c2f820
	ctx.lr = 0x82C2FA04;
	sub_82C2F820(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82C2FA0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2FA14"))) PPC_WEAK_FUNC(sub_82C2FA14);
PPC_FUNC_IMPL(__imp__sub_82C2FA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2FA18"))) PPC_WEAK_FUNC(sub_82C2FA18);
PPC_FUNC_IMPL(__imp__sub_82C2FA18) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// b 0x82c2f820
	sub_82C2F820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2FA24"))) PPC_WEAK_FUNC(sub_82C2FA24);
PPC_FUNC_IMPL(__imp__sub_82C2FA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2FA28"))) PPC_WEAK_FUNC(sub_82C2FA28);
PPC_FUNC_IMPL(__imp__sub_82C2FA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C2FA30;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82c2fa98
	if (cr6.eq) goto loc_82C2FA98;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82c2fc7c
	if (!cr6.eq) goto loc_82C2FC7C;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2fa64
	if (cr6.eq) goto loc_82C2FA64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C2FA64;
	sub_82D2AEC8(ctx, base);
loc_82C2FA64:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2fa78
	if (cr6.eq) goto loc_82C2FA78;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d83690
	ctx.lr = 0x82C2FA78;
	sub_82D83690(ctx, base);
loc_82C2FA78:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82c2f820
	ctx.lr = 0x82C2FA88;
	sub_82C2F820(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C2FA98:
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82d82c88
	ctx.lr = 0x82C2FAA4;
	sub_82D82C88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c2fc7c
	if (cr6.eq) goto loc_82C2FC7C;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82c2faf8
	if (cr6.eq) goto loc_82C2FAF8;
	// bl 0x82d83690
	ctx.lr = 0x82C2FAC8;
	sub_82D83690(ctx, base);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r11,-1
	ctx.r11.s64 = -1;
	// ld r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// std r10,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r10.u64);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// bl 0x82d83fb0
	ctx.lr = 0x82C2FAF0;
	sub_82D83FB0(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C2FAF8:
	// bl 0x82d82d00
	ctx.lr = 0x82C2FAFC;
	sub_82D82D00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c2fb18
	if (cr6.eq) goto loc_82C2FB18;
loc_82C2FB08:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C2FB18:
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82d82c20
	ctx.lr = 0x82C2FB24;
	sub_82D82C20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2fb08
	if (cr6.eq) goto loc_82C2FB08;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a8c428
	ctx.lr = 0x82C2FB40;
	sub_82A8C428(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-18188(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18188);
	// bl 0x82473550
	ctx.lr = 0x82C2FB50;
	sub_82473550(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c2fb64
	if (!cr6.eq) goto loc_82C2FB64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82c2fb70
	goto loc_82C2FB70;
loc_82C2FB64:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82C2FB70:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r10,r9,11,20,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 11) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82474170
	ctx.lr = 0x82C2FB88;
	sub_82474170(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a79bf8
	ctx.lr = 0x82C2FB94;
	sub_82A79BF8(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82c2fba8
	if (!cr6.lt) goto loc_82C2FBA8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82C2FBA8:
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82C2FBB4;
	sub_8259D6C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x82C2FBBC;
	sub_824707C8(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2fbd0
	if (cr6.lt) goto loc_82C2FBD0;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82c2fbd4
	goto loc_82C2FBD4;
loc_82C2FBD0:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82C2FBD4:
	// lwz r27,24(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// bl 0x83816968
	ctx.lr = 0x82C2FBDC;
	sub_83816968(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// lfs f3,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f4,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x83816550
	ctx.lr = 0x82C2FC10;
	sub_83816550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c2fc40
	if (cr6.eq) goto loc_82C2FC40;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,5342
	ctx.r4.s64 = ctx.r11.s64 + 5342;
	// bl 0x8259d6c0
	ctx.lr = 0x82C2FC28;
	sub_8259D6C0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// bl 0x82a795b8
	ctx.lr = 0x82C2FC38;
	sub_82A795B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C2FC40:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c2fc54
	if (cr6.lt) goto loc_82C2FC54;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82c2fc58
	goto loc_82C2FC58;
loc_82C2FC54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C2FC58:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C2FC70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a795b8
	ctx.lr = 0x82C2FC7C;
	sub_82A795B8(ctx, base);
loc_82C2FC7C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2FC84"))) PPC_WEAK_FUNC(sub_82C2FC84);
PPC_FUNC_IMPL(__imp__sub_82C2FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2FC88"))) PPC_WEAK_FUNC(sub_82C2FC88);
PPC_FUNC_IMPL(__imp__sub_82C2FC88) {
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
	// bl 0x82c2f898
	ctx.lr = 0x82C2FCA8;
	sub_82C2F898(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c2fcc0
	if (cr6.eq) goto loc_82C2FCC0;
	// bl 0x82416268
	ctx.lr = 0x82C2FCBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C2FCC0:
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

__attribute__((alias("__imp__sub_82C2FCD8"))) PPC_WEAK_FUNC(sub_82C2FCD8);
PPC_FUNC_IMPL(__imp__sub_82C2FCD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x82c30858
	sub_82C30858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2FCE0"))) PPC_WEAK_FUNC(sub_82C2FCE0);
PPC_FUNC_IMPL(__imp__sub_82C2FCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82c2fd14
	if (cr6.gt) goto loc_82C2FD14;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c2fd10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2FD10;
	// bdzf 4*cr6+eq,0x82c2fd10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2FD10;
	// bdzf 4*cr6+eq,0x82c2fd2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2FD2C;
	// bdzf 4*cr6+eq,0x82c2fd10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C2FD10;
	// bne cr6,0x82c2fd10
	if (!cr6.eq) goto loc_82C2FD10;
loc_82C2FD10:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82C2FD14:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// blr 
	return;
loc_82C2FD2C:
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82c2fd50
	if (cr6.eq) goto loc_82C2FD50;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82c2fd48
	if (cr6.eq) goto loc_82C2FD48;
	// li r3,72
	ctx.r3.s64 = 72;
	// blr 
	return;
loc_82C2FD48:
	// li r3,114
	ctx.r3.s64 = 114;
	// blr 
	return;
loc_82C2FD50:
	// li r3,113
	ctx.r3.s64 = 113;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C2FD58"))) PPC_WEAK_FUNC(sub_82C2FD58);
PPC_FUNC_IMPL(__imp__sub_82C2FD58) {
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
	// bl 0x82d86078
	ctx.lr = 0x82C2FD78;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c2fd9c
	if (cr6.eq) goto loc_82C2FD9C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C2FD88;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82C2FD8C;
	sub_82D99C08(ctx, base);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82d9a978
	ctx.lr = 0x82C2FD94;
	sub_82D9A978(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82C2FD9C:
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

__attribute__((alias("__imp__sub_82C2FDB4"))) PPC_WEAK_FUNC(sub_82C2FDB4);
PPC_FUNC_IMPL(__imp__sub_82C2FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2FDB8"))) PPC_WEAK_FUNC(sub_82C2FDB8);
PPC_FUNC_IMPL(__imp__sub_82C2FDB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lwz r10,188(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,220(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C2FDD4"))) PPC_WEAK_FUNC(sub_82C2FDD4);
PPC_FUNC_IMPL(__imp__sub_82C2FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2FDD8"))) PPC_WEAK_FUNC(sub_82C2FDD8);
PPC_FUNC_IMPL(__imp__sub_82C2FDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,5956
	ctx.r3.s64 = ctx.r11.s64 + 5956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C2FDE4"))) PPC_WEAK_FUNC(sub_82C2FDE4);
PPC_FUNC_IMPL(__imp__sub_82C2FDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2FDE8"))) PPC_WEAK_FUNC(sub_82C2FDE8);
PPC_FUNC_IMPL(__imp__sub_82C2FDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,5964
	ctx.r3.s64 = ctx.r11.s64 + 5964;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C2FDF4"))) PPC_WEAK_FUNC(sub_82C2FDF4);
PPC_FUNC_IMPL(__imp__sub_82C2FDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2FDF8"))) PPC_WEAK_FUNC(sub_82C2FDF8);
PPC_FUNC_IMPL(__imp__sub_82C2FDF8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,6056
	ctx.r9.s64 = ctx.r11.s64 + 6056;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82c16c98
	ctx.lr = 0x82C2FE2C;
	sub_82C16C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c30838
	ctx.lr = 0x82C2FE34;
	sub_82C30838(ctx, base);
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

__attribute__((alias("__imp__sub_82C2FE48"))) PPC_WEAK_FUNC(sub_82C2FE48);
PPC_FUNC_IMPL(__imp__sub_82C2FE48) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,6056
	ctx.r9.s64 = ctx.r11.s64 + 6056;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c16c98
	ctx.lr = 0x82C2FE84;
	sub_82C16C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c30838
	ctx.lr = 0x82C2FE8C;
	sub_82C30838(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c2fea4
	if (cr6.eq) goto loc_82C2FEA4;
	// bl 0x82416268
	ctx.lr = 0x82C2FEA0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C2FEA4:
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

__attribute__((alias("__imp__sub_82C2FEBC"))) PPC_WEAK_FUNC(sub_82C2FEBC);
PPC_FUNC_IMPL(__imp__sub_82C2FEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2FEC0"))) PPC_WEAK_FUNC(sub_82C2FEC0);
PPC_FUNC_IMPL(__imp__sub_82C2FEC0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r4,r4,132
	ctx.r4.s64 = ctx.r4.s64 + 132;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C2FEF8;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_82C2FF10"))) PPC_WEAK_FUNC(sub_82C2FF10);
PPC_FUNC_IMPL(__imp__sub_82C2FF10) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r4,r4,160
	ctx.r4.s64 = ctx.r4.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C2FF48;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_82C2FF60"))) PPC_WEAK_FUNC(sub_82C2FF60);
PPC_FUNC_IMPL(__imp__sub_82C2FF60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C2FF68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C2FF74;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c2ff8c
	if (!cr6.eq) goto loc_82C2FF8C;
loc_82C2FF80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C2FF8C:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82C2FF94;
	sub_82DAB6D0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831f8200
	ctx.lr = 0x82C2FFA4;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x82C2FFA8;
	sub_82D9E470(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d975f8
	ctx.lr = 0x82C2FFB4;
	sub_82D975F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d9eb98
	ctx.lr = 0x82C2FFC0;
	sub_82D9EB98(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c2ff80
	if (cr6.eq) goto loc_82C2FF80;
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x82b57f88
	ctx.lr = 0x82C2FFD8;
	sub_82B57F88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C2FFE4"))) PPC_WEAK_FUNC(sub_82C2FFE4);
PPC_FUNC_IMPL(__imp__sub_82C2FFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C2FFE8"))) PPC_WEAK_FUNC(sub_82C2FFE8);
PPC_FUNC_IMPL(__imp__sub_82C2FFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C2FFF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5722
	ctx.r4.s64 = ctx.r11.s64 + 5722;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C30024;
	sub_8259CC28(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C30028;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3007c
	if (!cr6.eq) goto loc_82C3007C;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r29.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C30050;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3035c
	if (cr6.lt) goto loc_82C3035C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C30070;
	sub_825952B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82C3007C:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// li r26,-1
	ctx.r26.s64 = -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82c3031c
	if (cr6.gt) goto loc_82C3031C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c300cc
	if (cr6.eq) goto loc_82C300CC;
	// bdz 0x82c300b4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C300B4;
	// bdz 0x82c300e4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C300E4;
	// bdz 0x82c3022c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C3022C;
	// bdz 0x82c3022c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C3022C;
	// bdz 0x82c302c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C302C0;
	// bdz 0x82c302d4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C302D4;
	// b 0x82c30144
	goto loc_82C30144;
loc_82C300B4:
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,222
	ctx.r4.u64 = ctx.r4.u64 | 222;
	// bl 0x82d042a8
	ctx.lr = 0x82C300C8;
	sub_82D042A8(ctx, base);
	// b 0x82c3031c
	goto loc_82C3031C;
loc_82C300CC:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,164
	ctx.r4.u64 = ctx.r4.u64 | 164;
	// bl 0x82d042a8
	ctx.lr = 0x82C300E0;
	sub_82D042A8(ctx, base);
	// b 0x82c3031c
	goto loc_82C3031C;
loc_82C300E4:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C300EC;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82C300F0;
	sub_82D99C08(ctx, base);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82d9a978
	ctx.lr = 0x82C300F8;
	sub_82D9A978(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82c3031c
	if (cr6.eq) goto loc_82C3031C;
	// bl 0x831156e8
	ctx.lr = 0x82C3010C;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82C30124;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82C30134;
	sub_831CE980(ctx, base);
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x82C30140;
	sub_8259D6C0(ctx, base);
	// b 0x82c3031c
	goto loc_82C3031C;
loc_82C30144:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// bgt cr6,0x82c30208
	if (cr6.gt) goto loc_82C30208;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c30208
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C30208;
	// bdzf 4*cr6+eq,0x82c30194
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C30194;
	// bdzf 4*cr6+eq,0x82c30208
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C30208;
	// bdzf 4*cr6+eq,0x82c301a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C301A8;
	// bdzf 4*cr6+eq,0x82c301bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C301BC;
	// bdzf 4*cr6+eq,0x82c301d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C301D0;
	// bne cr6,0x82c301e4
	if (!cr6.eq) goto loc_82C301E4;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,165
	ctx.r4.u64 = ctx.r4.u64 | 165;
	// bl 0x82d04220
	ctx.lr = 0x82C30190;
	sub_82D04220(ctx, base);
	// b 0x82c301f8
	goto loc_82C301F8;
loc_82C30194:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,414
	ctx.r4.u64 = ctx.r4.u64 | 414;
	// bl 0x82d04220
	ctx.lr = 0x82C301A4;
	sub_82D04220(ctx, base);
	// b 0x82c301f8
	goto loc_82C301F8;
loc_82C301A8:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,555
	ctx.r4.u64 = ctx.r4.u64 | 555;
	// bl 0x82d04220
	ctx.lr = 0x82C301B8;
	sub_82D04220(ctx, base);
	// b 0x82c301f8
	goto loc_82C301F8;
loc_82C301BC:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,556
	ctx.r4.u64 = ctx.r4.u64 | 556;
	// bl 0x82d04220
	ctx.lr = 0x82C301CC;
	sub_82D04220(ctx, base);
	// b 0x82c301f8
	goto loc_82C301F8;
loc_82C301D0:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,557
	ctx.r4.u64 = ctx.r4.u64 | 557;
	// bl 0x82d04220
	ctx.lr = 0x82C301E0;
	sub_82D04220(ctx, base);
	// b 0x82c301f8
	goto loc_82C301F8;
loc_82C301E4:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r5,236(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,666
	ctx.r4.u64 = ctx.r4.u64 | 666;
	// bl 0x82d042a8
	ctx.lr = 0x82C301F8;
	sub_82D042A8(ctx, base);
loc_82C301F8:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c3020c
	if (!cr6.lt) goto loc_82C3020C;
loc_82C30208:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_82C3020C:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r6,216(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
	// bl 0x82d042a8
	ctx.lr = 0x82C30220;
	sub_82D042A8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82C30228;
	sub_8387E8E0(ctx, base);
	// b 0x82c3031c
	goto loc_82C3031C;
loc_82C3022C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c30240
	if (!cr6.eq) goto loc_82C30240;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82c3024c
	goto loc_82C3024C;
loc_82C30240:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82c3024c
	if (!cr6.eq) goto loc_82C3024C;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82C3024C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r25,192(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r24,200(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r23,204(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x825832d8
	ctx.lr = 0x82C30260;
	sub_825832D8(ctx, base);
	// bl 0x82da4368
	ctx.lr = 0x82C30264;
	sub_82DA4368(ctx, base);
	// li r9,84
	ctx.r9.s64 = 84;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d9a9f0
	ctx.lr = 0x82C30280;
	sub_82D9A9F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3031c
	if (cr6.eq) goto loc_82C3031C;
	// bl 0x82dc9d40
	ctx.lr = 0x82C30294;
	sub_82DC9D40(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82c302b4
	if (!cr6.eq) goto loc_82C302B4;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82C302B0;
	sub_8259CB28(ctx, base);
	// b 0x82c3031c
	goto loc_82C3031C;
loc_82C302B4:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82C302BC;
	sub_8259CB28(ctx, base);
	// b 0x82c3031c
	goto loc_82C3031C;
loc_82C302C0:
	// lis r4,640
	ctx.r4.s64 = 41943040;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d04220
	ctx.lr = 0x82C302D0;
	sub_82D04220(ctx, base);
	// b 0x82c3031c
	goto loc_82C3031C;
loc_82C302D4:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82C302E4;
	sub_831156E8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82C302F0;
	sub_8311BF98(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C302F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c302f8
	if (!cr6.eq) goto loc_82C302F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C3031C;
	sub_8259CC28(ctx, base);
loc_82C3031C:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r29.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C3033C;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3035c
	if (cr6.lt) goto loc_82C3035C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C3035C;
	sub_825952B8(ctx, base);
loc_82C3035C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C30368"))) PPC_WEAK_FUNC(sub_82C30368);
PPC_FUNC_IMPL(__imp__sub_82C30368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C30370;
	__savegprlr_24(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// addi r29,r11,5786
	ctx.r29.s64 = ctx.r11.s64 + 5786;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r29,-63
	ctx.r4.s64 = ctx.r29.s64 + -63;
	// bl 0x8259cc28
	ctx.lr = 0x82C303A8;
	sub_8259CC28(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C303AC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c30400
	if (!cr6.eq) goto loc_82C30400;
	// stw r26,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r26.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r28,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r28.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C303D4;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3064c
	if (cr6.lt) goto loc_82C3064C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C303F4;
	sub_825952B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82C30400:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x82c3060c
	if (cr6.gt) goto loc_82C3060C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c3052c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3052C;
	// bdzf 4*cr6+eq,0x82c3052c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3052C;
	// bdzf 4*cr6+eq,0x82c3052c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3052C;
	// bdzf 4*cr6+eq,0x82c305e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C305E0;
	// bne cr6,0x82c30600
	if (!cr6.eq) goto loc_82C30600;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C30434;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82C30438;
	sub_82D99C08(ctx, base);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82d9a978
	ctx.lr = 0x82C30440;
	sub_82D9A978(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82c3060c
	if (cr6.eq) goto loc_82C3060C;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82C3045C;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-31
	ctx.r4.s64 = ctx.r29.s64 + -31;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C30468;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82C30474;
	sub_837B0C10(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,385
	ctx.r4.u64 = ctx.r4.u64 | 385;
	// bl 0x82d04220
	ctx.lr = 0x82C30484;
	sub_82D04220(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d042a8
	ctx.lr = 0x82C30494;
	sub_82D042A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c304a8
	if (!cr6.lt) goto loc_82C304A8;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
loc_82C304A8:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c304bc
	if (!cr6.lt) goto loc_82C304BC;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_82C304BC:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ori r4,r4,263
	ctx.r4.u64 = ctx.r4.u64 | 263;
	// bl 0x82d042a8
	ctx.lr = 0x82C304CC;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C304D4;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c304e4
	if (!cr6.eq) goto loc_82C304E4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82C304E4:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292a3f8
	ctx.lr = 0x82C304F0;
	sub_8292A3F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r29,158
	ctx.r4.s64 = ctx.r29.s64 + 158;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x837b0c10
	ctx.lr = 0x82C30500;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C30510;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82C30518;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82C30520;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82C30528;
	sub_8387E8E0(ctx, base);
	// b 0x82c3060c
	goto loc_82C3060C;
loc_82C3052C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c30540
	if (!cr6.eq) goto loc_82C30540;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82c3054c
	goto loc_82C3054C;
loc_82C30540:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82c3054c
	if (!cr6.eq) goto loc_82C3054C;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82C3054C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r29,192(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r25,200(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r24,204(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x825832d8
	ctx.lr = 0x82C30560;
	sub_825832D8(ctx, base);
	// bl 0x82da4368
	ctx.lr = 0x82C30564;
	sub_82DA4368(ctx, base);
	// li r9,84
	ctx.r9.s64 = 84;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d9a9f0
	ctx.lr = 0x82C30580;
	sub_82D9A9F0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3060c
	if (cr6.eq) goto loc_82C3060C;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// lwz r6,92(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x82d8e6a0
	ctx.lr = 0x82C305B0;
	sub_82D8E6A0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c305c4
	if (!cr6.lt) goto loc_82C305C4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82C305C4:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,202
	ctx.r4.u64 = ctx.r4.u64 | 202;
	// bl 0x82d042a8
	ctx.lr = 0x82C305D4;
	sub_82D042A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C305DC;
	sub_8387E8E0(ctx, base);
	// b 0x82c3060c
	goto loc_82C3060C;
loc_82C305E0:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r10,90
	ctx.r10.s64 = 90;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// divwu r5,r11,r10
	ctx.r5.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// ori r4,r4,376
	ctx.r4.u64 = ctx.r4.u64 | 376;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82C305FC;
	sub_82D042A8(ctx, base);
	// b 0x82c3060c
	goto loc_82C3060C;
loc_82C30600:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x82C3060C;
	sub_8259D6C0(ctx, base);
loc_82C3060C:
	// stw r26,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r26.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r28,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r28.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C3062C;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3064c
	if (cr6.lt) goto loc_82C3064C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C3064C;
	sub_825952B8(ctx, base);
loc_82C3064C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C30658"))) PPC_WEAK_FUNC(sub_82C30658);
PPC_FUNC_IMPL(__imp__sub_82C30658) {
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
	// bl 0x82c30760
	ctx.lr = 0x82C30674;
	sub_82C30760(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,6056
	ctx.r9.s64 = ctx.r11.s64 + 6056;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b57f10
	ctx.lr = 0x82C30698;
	sub_82B57F10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b57df0
	ctx.lr = 0x82C306A0;
	sub_82B57DF0(ctx, base);
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

__attribute__((alias("__imp__sub_82C306BC"))) PPC_WEAK_FUNC(sub_82C306BC);
PPC_FUNC_IMPL(__imp__sub_82C306BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C306C0"))) PPC_WEAK_FUNC(sub_82C306C0);
PPC_FUNC_IMPL(__imp__sub_82C306C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C306C8;
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
	// li r4,248
	ctx.r4.s64 = 248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C306EC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3073c
	if (cr6.eq) goto loc_82C3073C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c30760
	ctx.lr = 0x82C30704;
	sub_82C30760(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,6056
	ctx.r9.s64 = ctx.r11.s64 + 6056;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b57f10
	ctx.lr = 0x82C30728;
	sub_82B57F10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b57df0
	ctx.lr = 0x82C30730;
	sub_82B57DF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C3073C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C30748"))) PPC_WEAK_FUNC(sub_82C30748);
PPC_FUNC_IMPL(__imp__sub_82C30748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c30758
	if (cr6.lt) goto loc_82C30758;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82C30758:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82c306c0
	sub_82C306C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C30760"))) PPC_WEAK_FUNC(sub_82C30760);
PPC_FUNC_IMPL(__imp__sub_82C30760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C30768;
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
	ctx.lr = 0x82C3077C;
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
	ctx.lr = 0x82C30794;
	sub_82D253F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,7392
	ctx.r9.s64 = ctx.r11.s64 + 7392;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82dd6420
	ctx.lr = 0x82C307B4;
	sub_82DD6420(ctx, base);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-17952(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -17952);
	// bl 0x82d20ae0
	ctx.lr = 0x82C307C4;
	sub_82D20AE0(ctx, base);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-17944(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17944);
	// bl 0x82d20ae0
	ctx.lr = 0x82C307D4;
	sub_82D20AE0(ctx, base);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-17940(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17940);
	// bl 0x82d20ae0
	ctx.lr = 0x82C307E4;
	sub_82D20AE0(ctx, base);
	// lis r4,-31776
	ctx.r4.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-17936(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -17936);
	// bl 0x82d20ae0
	ctx.lr = 0x82C307F4;
	sub_82D20AE0(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-17948(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17948);
	// bl 0x82d23390
	ctx.lr = 0x82C30808;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C30814"))) PPC_WEAK_FUNC(sub_82C30814);
PPC_FUNC_IMPL(__imp__sub_82C30814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C30818"))) PPC_WEAK_FUNC(sub_82C30818);
PPC_FUNC_IMPL(__imp__sub_82C30818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-14844
	ctx.r3.s64 = ctx.r11.s64 + -14844;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C30824"))) PPC_WEAK_FUNC(sub_82C30824);
PPC_FUNC_IMPL(__imp__sub_82C30824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C30828"))) PPC_WEAK_FUNC(sub_82C30828);
PPC_FUNC_IMPL(__imp__sub_82C30828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,23548
	ctx.r3.s64 = ctx.r11.s64 + 23548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C30834"))) PPC_WEAK_FUNC(sub_82C30834);
PPC_FUNC_IMPL(__imp__sub_82C30834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C30838"))) PPC_WEAK_FUNC(sub_82C30838);
PPC_FUNC_IMPL(__imp__sub_82C30838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,7392
	ctx.r9.s64 = ctx.r11.s64 + 7392;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// b 0x82d25548
	sub_82D25548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C30854"))) PPC_WEAK_FUNC(sub_82C30854);
PPC_FUNC_IMPL(__imp__sub_82C30854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C30858"))) PPC_WEAK_FUNC(sub_82C30858);
PPC_FUNC_IMPL(__imp__sub_82C30858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r11,14
	ctx.r11.s64 = 14;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bgt cr6,0x82c3096c
	if (cr6.gt) goto loc_82C3096C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c30898
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C30898;
	// bdzf 4*cr6+eq,0x82c308a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C308A4;
	// bdzf 4*cr6+eq,0x82c3095c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3095C;
	// bdzf 4*cr6+eq,0x82c3095c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3095C;
	// bdzf 4*cr6+eq,0x82c3095c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3095C;
	// bdzf 4*cr6+eq,0x82c30968
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C30968;
	// bne cr6,0x82c308b0
	if (!cr6.eq) goto loc_82C308B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C30898:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C308A4:
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C308B0:
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bgt cr6,0x82c3096c
	if (cr6.gt) goto loc_82C3096C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c3096c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3096C;
	// bdzf 4*cr6+eq,0x82c308ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C308EC;
	// bdzf 4*cr6+eq,0x82c3096c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3096C;
	// bdzf 4*cr6+eq,0x82c308f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C308F8;
	// bdzf 4*cr6+eq,0x82c30904
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C30904;
	// bdzf 4*cr6+eq,0x82c30910
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C30910;
	// bne cr6,0x82c3091c
	if (!cr6.eq) goto loc_82C3091C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C308EC:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C308F8:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C30904:
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C30910:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C3091C:
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82c30934
	if (!cr6.eq) goto loc_82C30934;
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C30934:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82c30948
	if (!cr6.eq) goto loc_82C30948;
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C30948:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82c3096c
	if (!cr6.eq) goto loc_82C3096C;
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C3095C:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C30968:
	// li r11,7
	ctx.r11.s64 = 7;
loc_82C3096C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C30974"))) PPC_WEAK_FUNC(sub_82C30974);
PPC_FUNC_IMPL(__imp__sub_82C30974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C30978"))) PPC_WEAK_FUNC(sub_82C30978);
PPC_FUNC_IMPL(__imp__sub_82C30978) {
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
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3099C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C309AC;
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

__attribute__((alias("__imp__sub_82C309C0"))) PPC_WEAK_FUNC(sub_82C309C0);
PPC_FUNC_IMPL(__imp__sub_82C309C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C309C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C309D4;
	sub_82D19A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c30bc4
	if (cr6.eq) goto loc_82C30BC4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-17916(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17916);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C309FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c30bc4
	if (cr6.eq) goto loc_82C30BC4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,-17932(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17932);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C30A28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x82c30bb4
	if (cr6.gt) goto loc_82C30BB4;
	// lis r12,-32061
	ctx.r12.s64 = -2101149696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2636
	ctx.r12.s64 = ctx.r12.s64 + 2636;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82C30A84;
	case 1:
		goto loc_82C30AB0;
	case 2:
		goto loc_82C30ADC;
	case 3:
		goto loc_82C30B08;
	case 4:
		goto loc_82C30BB4;
	case 5:
		goto loc_82C30BB4;
	case 6:
		goto loc_82C30BB4;
	case 7:
		goto loc_82C30BB4;
	case 8:
		goto loc_82C30B34;
	case 9:
		goto loc_82C30B60;
	case 10:
		goto loc_82C30B8C;
	case 11:
		goto loc_82C30B08;
	case 12:
		goto loc_82C30B08;
	case 13:
		goto loc_82C30B08;
	default:
		return;
	}
	// lwz r22,2692(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2692);
	// lwz r22,2736(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2736);
	// lwz r22,2780(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2780);
	// lwz r22,2824(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2824);
	// lwz r22,2996(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2996);
	// lwz r22,2996(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2996);
	// lwz r22,2996(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2996);
	// lwz r22,2996(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2996);
	// lwz r22,2868(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2868);
	// lwz r22,2912(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2912);
	// lwz r22,2956(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2956);
	// lwz r22,2824(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2824);
	// lwz r22,2824(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2824);
	// lwz r22,2824(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2824);
loc_82C30A84:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,7144
	ctx.r11.s64 = ctx.r9.s64 + 7144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C30AA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C30AB0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,7144
	ctx.r11.s64 = ctx.r9.s64 + 7144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C30AD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C30ADC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,7144
	ctx.r11.s64 = ctx.r9.s64 + 7144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C30B00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C30B08:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,7144
	ctx.r11.s64 = ctx.r9.s64 + 7144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C30B2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C30B34:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,7144
	ctx.r11.s64 = ctx.r9.s64 + 7144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C30B58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C30B60:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,7144
	ctx.r11.s64 = ctx.r9.s64 + 7144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C30B84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C30B8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7144
	ctx.r4.s64 = ctx.r10.s64 + 7144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C30BAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C30BB4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C30BC4;
	sub_82D2AEC8(ctx, base);
loc_82C30BC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C30BCC"))) PPC_WEAK_FUNC(sub_82C30BCC);
PPC_FUNC_IMPL(__imp__sub_82C30BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C30BD0"))) PPC_WEAK_FUNC(sub_82C30BD0);
PPC_FUNC_IMPL(__imp__sub_82C30BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C30BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C30BE4;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c30ca8
	if (cr6.eq) goto loc_82C30CA8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-17916(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17916);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C30C0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c30ca8
	if (cr6.eq) goto loc_82C30CA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,-17932(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17932);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C30C38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,324(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 324);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C30C64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d8ba80
	ctx.lr = 0x82C30C70;
	sub_82D8BA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c30c90
	if (!cr6.eq) goto loc_82C30C90;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C30C88;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C30C90:
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
	ctx.lr = 0x82C30CA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C30CA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C30CB0"))) PPC_WEAK_FUNC(sub_82C30CB0);
PPC_FUNC_IMPL(__imp__sub_82C30CB0) {
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
	ctx.lr = 0x82C30CC8;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c30d3c
	if (cr6.eq) goto loc_82C30D3C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-17912(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17912);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C30CF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c30d3c
	if (cr6.eq) goto loc_82C30D3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,-17928(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17928);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C30D1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r8,7160
	ctx.r4.s64 = ctx.r8.s64 + 7160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C30D3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C30D3C:
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

__attribute__((alias("__imp__sub_82C30D54"))) PPC_WEAK_FUNC(sub_82C30D54);
PPC_FUNC_IMPL(__imp__sub_82C30D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C30D58"))) PPC_WEAK_FUNC(sub_82C30D58);
PPC_FUNC_IMPL(__imp__sub_82C30D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C30D60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C30D6C;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c30df4
	if (cr6.eq) goto loc_82C30DF4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-17908(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17908);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C30D94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c30df4
	if (cr6.eq) goto loc_82C30DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,-17924(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17924);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C30DC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,332(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 332);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C30DE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d45220
	ctx.lr = 0x82C30DF4;
	sub_82D45220(ctx, base);
loc_82C30DF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C30DFC"))) PPC_WEAK_FUNC(sub_82C30DFC);
PPC_FUNC_IMPL(__imp__sub_82C30DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C30E00"))) PPC_WEAK_FUNC(sub_82C30E00);
PPC_FUNC_IMPL(__imp__sub_82C30E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C30E08;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C30E14;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3107c
	if (cr6.eq) goto loc_82C3107C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-17904(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17904);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C30E3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3107c
	if (cr6.eq) goto loc_82C3107C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,-17920(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17920);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C30E68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-17868
	ctx.r31.s64 = ctx.r11.s64 + -17868;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,336(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 336);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// ld r11,-17868(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17868);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bctrl 
	ctx.lr = 0x82C30E9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c30eb8
	if (!cr6.eq) goto loc_82C30EB8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82c30ee0
	goto loc_82C30EE0;
loc_82C30EB8:
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c30ed8
	if (!cr6.eq) goto loc_82C30ED8;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c30edc
	if (cr6.eq) goto loc_82C30EDC;
loc_82C30ED8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C30EDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C30EE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c30f04
	if (cr6.eq) goto loc_82C30F04;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C30EFC;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C30F04:
	// bl 0x831156e8
	ctx.lr = 0x82C30F08;
	sub_831156E8(ctx, base);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82C30F14;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r27,0
	ctx.r27.s64 = 0;
	// ld r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x825a2298
	ctx.lr = 0x82C30F30;
	sub_825A2298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c30f5c
	if (cr6.eq) goto loc_82C30F5C;
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83179518
	ctx.lr = 0x82C30F58;
	sub_83179518(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82C30F5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C30F64;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,7192
	ctx.r30.s64 = ctx.r11.s64 + 7192;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C30F84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C30F8C;
	sub_82D19A78(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C30FA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c30fc0
	if (!cr6.eq) goto loc_82C30FC0;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82c30fe4
	goto loc_82C30FE4;
loc_82C30FC0:
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c30fdc
	if (!cr6.eq) goto loc_82C30FDC;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c30fe0
	if (cr6.eq) goto loc_82C30FE0;
loc_82C30FDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C30FE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C30FE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c31008
	if (cr6.eq) goto loc_82C31008;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C31000;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C31008:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d459d0
	ctx.lr = 0x82C31014;
	sub_82D459D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831235b8
	ctx.lr = 0x82C3102C;
	sub_831235B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C31038;
	sub_83102DB0(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82C31050;
	sub_83120738(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d45a28
	ctx.lr = 0x82C3105C;
	sub_82D45A28(ctx, base);
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d45c08
	ctx.lr = 0x82C31068;
	sub_82D45C08(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d8bf78
	ctx.lr = 0x82C31070;
	sub_82D8BF78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d45370
	ctx.lr = 0x82C3107C;
	sub_82D45370(ctx, base);
loc_82C3107C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C31084"))) PPC_WEAK_FUNC(sub_82C31084);
PPC_FUNC_IMPL(__imp__sub_82C31084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C31088"))) PPC_WEAK_FUNC(sub_82C31088);
PPC_FUNC_IMPL(__imp__sub_82C31088) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,7392
	ctx.r9.s64 = ctx.r11.s64 + 7392;
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
	// bl 0x82d25548
	ctx.lr = 0x82C310C0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c310d8
	if (cr6.eq) goto loc_82C310D8;
	// bl 0x82416268
	ctx.lr = 0x82C310D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C310D8:
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

__attribute__((alias("__imp__sub_82C310F0"))) PPC_WEAK_FUNC(sub_82C310F0);
PPC_FUNC_IMPL(__imp__sub_82C310F0) {
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
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bl 0x82dd64f8
	ctx.lr = 0x82C3110C;
	sub_82DD64F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c31130
	if (!cr6.eq) goto loc_82C31130;
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
loc_82C31130:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C31138;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c31150
	if (cr6.eq) goto loc_82C31150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C31148;
	sub_82D19A78(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82C3114C;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d39100
	ctx.lr = 0x82C31150;
	sub_82D39100(ctx, base);
loc_82C31150:
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

__attribute__((alias("__imp__sub_82C31168"))) PPC_WEAK_FUNC(sub_82C31168);
PPC_FUNC_IMPL(__imp__sub_82C31168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C31170;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3117C;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c31260
	if (cr6.eq) goto loc_82C31260;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-17912(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17912);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C311A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c31260
	if (cr6.eq) goto loc_82C31260;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,-17928(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17928);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C311D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82da0bb0
	ctx.lr = 0x82C311D8;
	sub_82DA0BB0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82da0b78
	ctx.lr = 0x82C311E0;
	sub_82DA0B78(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,328(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 328);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C311F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d92ef0
	ctx.lr = 0x82C31218;
	sub_82D92EF0(ctx, base);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bge cr6,0x82c3122c
	if (!cr6.lt) goto loc_82C3122C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82C3122C:
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
	ctx.lr = 0x82C31244;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d93058
	ctx.lr = 0x82C31250;
	sub_82D93058(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C31258;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x82C31260;
	sub_83102DB0(ctx, base);
loc_82C31260:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C31268"))) PPC_WEAK_FUNC(sub_82C31268);
PPC_FUNC_IMPL(__imp__sub_82C31268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C31270;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3127C;
	sub_82D19A78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c31290
	if (!cr6.eq) goto loc_82C31290;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C31290:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C312A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r27,100
	ctx.r30.s64 = ctx.r27.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82C312D8;
	sub_8259CB28(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r29,r11,7048
	ctx.r29.s64 = ctx.r11.s64 + 7048;
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// bl 0x837b0c10
	ctx.lr = 0x82C312EC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a69ad0
	ctx.lr = 0x82C312FC;
	sub_82A69AD0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r8,308(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C31314;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82C31334;
	sub_8259CB28(ctx, base);
	// addi r4,r29,-56
	ctx.r4.s64 = ctx.r29.s64 + -56;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82C31340;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a69ad0
	ctx.lr = 0x82C31350;
	sub_82A69AD0(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,312(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 312);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C31368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c313b4
	if (!cr6.eq) goto loc_82C313B4;
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// bctrl 
	ctx.lr = 0x82C31390;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-590
	ctx.r4.s64 = ctx.r29.s64 + -590;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82C3139C;
	sub_837B0C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C313AC;
	sub_837B0C10(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x82c313ec
	goto loc_82C313EC;
loc_82C313B4:
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// bctrl 
	ctx.lr = 0x82C313BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82C313DC;
	sub_8259CB28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82C313E8;
	sub_837B0C10(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82C313EC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C313F8;
	sub_82A69AD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C31410;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,348(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C31428;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,300(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 300);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C3143C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82c314c8
	if (cr6.gt) goto loc_82C314C8;
	// lis r12,-32061
	ctx.r12.s64 = -2101149696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5220
	ctx.r12.s64 = ctx.r12.s64 + 5220;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82C31498;
	case 1:
		goto loc_82C314A4;
	case 2:
		goto loc_82C314B0;
	case 3:
		goto loc_82C314BC;
	case 4:
		goto loc_82C314C8;
	case 5:
		goto loc_82C314C8;
	case 6:
		goto loc_82C314C8;
	case 7:
		goto loc_82C3148C;
	case 8:
		goto loc_82C3148C;
	case 9:
		goto loc_82C3148C;
	default:
		return;
	}
	// lwz r22,5272(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5272);
	// lwz r22,5284(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5284);
	// lwz r22,5296(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5296);
	// lwz r22,5308(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5308);
	// lwz r22,5320(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5320);
	// lwz r22,5320(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5320);
	// lwz r22,5320(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5320);
	// lwz r22,5260(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5260);
	// lwz r22,5260(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5260);
	// lwz r22,5260(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5260);
loc_82C3148C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c30cb0
	ctx.lr = 0x82C31494;
	sub_82C30CB0(ctx, base);
	// b 0x82c314d4
	goto loc_82C314D4;
loc_82C31498:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c30bd0
	ctx.lr = 0x82C314A0;
	sub_82C30BD0(ctx, base);
	// b 0x82c314d4
	goto loc_82C314D4;
loc_82C314A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c31168
	ctx.lr = 0x82C314AC;
	sub_82C31168(ctx, base);
	// b 0x82c314d4
	goto loc_82C314D4;
loc_82C314B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c30d58
	ctx.lr = 0x82C314B8;
	sub_82C30D58(ctx, base);
	// b 0x82c314d4
	goto loc_82C314D4;
loc_82C314BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c30e00
	ctx.lr = 0x82C314C4;
	sub_82C30E00(ctx, base);
	// b 0x82c314d4
	goto loc_82C314D4;
loc_82C314C8:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c309c0
	ctx.lr = 0x82C314D4;
	sub_82C309C0(ctx, base);
loc_82C314D4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c314f4
	if (cr6.lt) goto loc_82C314F4;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82C314F4;
	sub_825952B8(ctx, base);
loc_82C314F4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r28.u8);
	// blt cr6,0x82c3151c
	if (cr6.lt) goto loc_82C3151C;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82C3151C;
	sub_825952B8(ctx, base);
loc_82C3151C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// blt cr6,0x82c31544
	if (cr6.lt) goto loc_82C31544;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82C31544;
	sub_825952B8(ctx, base);
loc_82C31544:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r28.u8);
	// blt cr6,0x82c3156c
	if (cr6.lt) goto loc_82C3156C;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82C3156C;
	sub_825952B8(ctx, base);
loc_82C3156C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C31578"))) PPC_WEAK_FUNC(sub_82C31578);
PPC_FUNC_IMPL(__imp__sub_82C31578) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3159C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c315c0
	if (!cr6.eq) goto loc_82C315C0;
loc_82C315A8:
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
loc_82C315C0:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82dd6438
	ctx.lr = 0x82C315C8;
	sub_82DD6438(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c315a8
	if (cr6.eq) goto loc_82C315A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C315E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c31630
	if (!cr6.eq) goto loc_82C31630;
loc_82C315F8:
	// bl 0x82d19a78
	ctx.lr = 0x82C315FC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82C31608;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3161C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C3162C;
	sub_82D20DA8(ctx, base);
	// b 0x82c316a0
	goto loc_82C316A0;
loc_82C31630:
	// bl 0x82d19a78
	ctx.lr = 0x82C31634;
	sub_82D19A78(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82C31638;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x82C3163C;
	sub_82D390C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c31268
	ctx.lr = 0x82C31644;
	sub_82C31268(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c315f8
	if (cr6.eq) goto loc_82C315F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C31664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c315f8
	if (cr6.eq) goto loc_82C315F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C31684;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C31690;
	sub_82D17DA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C316A0;
	sub_82D19788(ctx, base);
loc_82C316A0:
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

__attribute__((alias("__imp__sub_82C316B8"))) PPC_WEAK_FUNC(sub_82C316B8);
PPC_FUNC_IMPL(__imp__sub_82C316B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C316C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C316CC;
	sub_82D19A78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c317d0
	if (cr6.eq) goto loc_82C317D0;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r31,r11,7284
	ctx.r31.s64 = ctx.r11.s64 + 7284;
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C316F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c317d0
	if (cr6.eq) goto loc_82C317D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C31714;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d04828
	ctx.lr = 0x82C3171C;
	sub_82D04828(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d28370
	ctx.lr = 0x82C31728;
	sub_82D28370(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8291fd60
	ctx.lr = 0x82C31740;
	sub_8291FD60(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d04d80
	ctx.lr = 0x82C31750;
	sub_82D04D80(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,28
	ctx.r11.s64 = 28;
	// addi r10,r31,-60
	ctx.r10.s64 = ctx.r31.s64 + -60;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// addi r9,r31,-40
	ctx.r9.s64 = ctx.r31.s64 + -40;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r8,r31,-20
	ctx.r8.s64 = ctx.r31.s64 + -20;
	// divw r11,r5,r11
	ctx.r11.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82c31790
	if (cr6.lt) goto loc_82C31790;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82c3179c
	goto loc_82C3179C;
loc_82C31790:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3179c
	if (cr6.eq) goto loc_82C3179C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82C3179C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,72(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C317C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838ae2a8
	ctx.lr = 0x82C317C8;
	sub_838AE2A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d04b60
	ctx.lr = 0x82C317D0;
	sub_82D04B60(ctx, base);
loc_82C317D0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C317D8"))) PPC_WEAK_FUNC(sub_82C317D8);
PPC_FUNC_IMPL(__imp__sub_82C317D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,9920
	ctx.r8.s64 = ctx.r11.s64 + 9920;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82C317EC:
	// cmplwi cr6,r11,280
	cr6.compare<uint32_t>(ctx.r11.u32, 280, xer);
	// bge cr6,0x82c31814
	if (!cr6.lt) goto loc_82C31814;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// beq cr6,0x82c31820
	if (cr6.eq) goto loc_82C31820;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r11,2280
	cr6.compare<uint32_t>(ctx.r11.u32, 2280, xer);
	// blt cr6,0x82c317ec
	if (cr6.lt) goto loc_82C317EC;
loc_82C31814:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,-17764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17764);
	// blr 
	return;
loc_82C31820:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C31838"))) PPC_WEAK_FUNC(sub_82C31838);
PPC_FUNC_IMPL(__imp__sub_82C31838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,9920
	ctx.r8.s64 = ctx.r11.s64 + 9920;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82C3184C:
	// cmplwi cr6,r11,280
	cr6.compare<uint32_t>(ctx.r11.u32, 280, xer);
	// bge cr6,0x82c31874
	if (!cr6.lt) goto loc_82C31874;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// beq cr6,0x82c31880
	if (cr6.eq) goto loc_82C31880;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r11,2280
	cr6.compare<uint32_t>(ctx.r11.u32, 2280, xer);
	// blt cr6,0x82c3184c
	if (cr6.lt) goto loc_82C3184C;
loc_82C31874:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,-17760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17760);
	// blr 
	return;
loc_82C31880:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C31898"))) PPC_WEAK_FUNC(sub_82C31898);
PPC_FUNC_IMPL(__imp__sub_82C31898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,9920
	ctx.r8.s64 = ctx.r11.s64 + 9920;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82C318AC:
	// cmplwi cr6,r11,280
	cr6.compare<uint32_t>(ctx.r11.u32, 280, xer);
	// bge cr6,0x82c318d4
	if (!cr6.lt) goto loc_82C318D4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// beq cr6,0x82c318e0
	if (cr6.eq) goto loc_82C318E0;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r11,2280
	cr6.compare<uint32_t>(ctx.r11.u32, 2280, xer);
	// blt cr6,0x82c318ac
	if (cr6.lt) goto loc_82C318AC;
loc_82C318D4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,-17756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// blr 
	return;
loc_82C318E0:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 + 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C318F8"))) PPC_WEAK_FUNC(sub_82C318F8);
PPC_FUNC_IMPL(__imp__sub_82C318F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,9920
	ctx.r8.s64 = ctx.r11.s64 + 9920;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82C3190C:
	// cmplwi cr6,r11,280
	cr6.compare<uint32_t>(ctx.r11.u32, 280, xer);
	// bge cr6,0x82c31940
	if (!cr6.lt) goto loc_82C31940;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// beq cr6,0x82c31950
	if (cr6.eq) goto loc_82C31950;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r11,2280
	cr6.compare<uint32_t>(ctx.r11.u32, 2280, xer);
	// blt cr6,0x82c3190c
	if (cr6.lt) goto loc_82C3190C;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,-17760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17760);
	// blr 
	return;
loc_82C31940:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,-17760
	ctx.r10.s64 = ctx.r11.s64 + -17760;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
loc_82C31950:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C31968"))) PPC_WEAK_FUNC(sub_82C31968);
PPC_FUNC_IMPL(__imp__sub_82C31968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c3198c
	if (cr6.lt) goto loc_82C3198C;
	// beq cr6,0x82c31980
	if (cr6.eq) goto loc_82C31980;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C31980:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,-17756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// blr 
	return;
loc_82C3198C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,-17756
	ctx.r10.s64 = ctx.r11.s64 + -17756;
	// lwz r3,-8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3199C"))) PPC_WEAK_FUNC(sub_82C3199C);
PPC_FUNC_IMPL(__imp__sub_82C3199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C319A0"))) PPC_WEAK_FUNC(sub_82C319A0);
PPC_FUNC_IMPL(__imp__sub_82C319A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c319c4
	if (cr6.lt) goto loc_82C319C4;
	// beq cr6,0x82c319b8
	if (cr6.eq) goto loc_82C319B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C319B8:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,-17752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17752);
	// blr 
	return;
loc_82C319C4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,-17752
	ctx.r10.s64 = ctx.r11.s64 + -17752;
	// lwz r3,-8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C319D4"))) PPC_WEAK_FUNC(sub_82C319D4);
PPC_FUNC_IMPL(__imp__sub_82C319D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C319D8"))) PPC_WEAK_FUNC(sub_82C319D8);
PPC_FUNC_IMPL(__imp__sub_82C319D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C319F0"))) PPC_WEAK_FUNC(sub_82C319F0);
PPC_FUNC_IMPL(__imp__sub_82C319F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82c31a2c
	if (!cr6.lt) goto loc_82C31A2C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,10608
	ctx.r8.s64 = ctx.r11.s64 + 10608;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82C31A0C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r3
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, xer);
	// beq cr6,0x82c31a38
	if (cr6.eq) goto loc_82C31A38;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// blt cr6,0x82c31a0c
	if (cr6.lt) goto loc_82C31A0C;
loc_82C31A2C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,-17748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17748);
	// blr 
	return;
loc_82C31A38:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C31A50"))) PPC_WEAK_FUNC(sub_82C31A50);
PPC_FUNC_IMPL(__imp__sub_82C31A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82c31a8c
	if (!cr6.lt) goto loc_82C31A8C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,10608
	ctx.r8.s64 = ctx.r11.s64 + 10608;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82C31A6C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r3
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, xer);
	// beq cr6,0x82c31a98
	if (cr6.eq) goto loc_82C31A98;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// blt cr6,0x82c31a6c
	if (cr6.lt) goto loc_82C31A6C;
loc_82C31A8C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,-17744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17744);
	// blr 
	return;
loc_82C31A98:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C31AB0"))) PPC_WEAK_FUNC(sub_82C31AB0);
PPC_FUNC_IMPL(__imp__sub_82C31AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C31AB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// li r27,28
	ctx.r27.s64 = 28;
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,384
	ctx.r31.s64 = ctx.r3.s64 + 384;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r28,0
	ctx.r28.s64 = 0;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c31b44
	if (cr0.eq) goto loc_82C31B44;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C31AE4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r3,r29,r10
	ctx.r3.u64 = ctx.r29.u64 + ctx.r10.u64;
loc_82C31AF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c31af0
	if (!cr6.eq) goto loc_82C31AF0;
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
	ctx.lr = 0x82C31B1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c31b50
	if (cr6.eq) goto loc_82C31B50;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c31ae4
	if (cr6.lt) goto loc_82C31AE4;
loc_82C31B44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C31B50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C31B5C"))) PPC_WEAK_FUNC(sub_82C31B5C);
PPC_FUNC_IMPL(__imp__sub_82C31B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C31B60"))) PPC_WEAK_FUNC(sub_82C31B60);
PPC_FUNC_IMPL(__imp__sub_82C31B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C31B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c31bd4
	if (!cr6.eq) goto loc_82C31BD4;
loc_82C31B84:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c31ba0
	if (cr6.lt) goto loc_82C31BA0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82c31ba4
	goto loc_82C31BA4;
loc_82C31BA0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82C31BA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x82C31BB0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82c31bc0
	if (!cr6.lt) goto loc_82C31BC0;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82c31bc8
	goto loc_82C31BC8;
loc_82C31BC0:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82C31BC8:
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c31b84
	if (cr6.eq) goto loc_82C31B84;
loc_82C31BD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C31BE0"))) PPC_WEAK_FUNC(sub_82C31BE0);
PPC_FUNC_IMPL(__imp__sub_82C31BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C31BE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r27,28
	ctx.r27.s64 = 28;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c31c74
	if (cr0.eq) goto loc_82C31C74;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82C31C1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c31c3c
	if (cr6.lt) goto loc_82C31C3C;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82c31c40
	goto loc_82C31C40;
loc_82C31C3C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82C31C40:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x82C31C4C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c31c88
	if (cr6.eq) goto loc_82C31C88;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c31c1c
	if (cr6.lt) goto loc_82C31C1C;
loc_82C31C74:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c31cb0
	if (cr6.lt) goto loc_82C31CB0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82c31cb4
	goto loc_82C31CB4;
loc_82C31C88:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c31ca8
	if (cr6.lt) goto loc_82C31CA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C31CA8;
	sub_825952B8(ctx, base);
loc_82C31CA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c31d10
	goto loc_82C31D10;
loc_82C31CB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82C31CB4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c31ab0
	ctx.lr = 0x82C31CBC;
	sub_82C31AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// beq cr6,0x82c31cf0
	if (cr6.eq) goto loc_82C31CF0;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c31ce8
	if (cr6.lt) goto loc_82C31CE8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C31CE8;
	sub_825952B8(ctx, base);
loc_82C31CE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c31d10
	goto loc_82C31D10;
loc_82C31CF0:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c31d0c
	if (cr6.lt) goto loc_82C31D0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C31D0C;
	sub_825952B8(ctx, base);
loc_82C31D0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C31D10:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r25,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r25.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C31D28"))) PPC_WEAK_FUNC(sub_82C31D28);
PPC_FUNC_IMPL(__imp__sub_82C31D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C31D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,10868
	ctx.r4.s64 = ctx.r11.s64 + 10868;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83103328
	ctx.lr = 0x82C31D4C;
	sub_83103328(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,10844
	ctx.r9.s64 = ctx.r10.s64 + 10844;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
loc_82C31D74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c31d74
	if (!cr6.eq) goto loc_82C31D74;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82C31D98;
	sub_82472FC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82e76868
	ctx.lr = 0x82C31DA4;
	sub_82E76868(ctx, base);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// stb r30,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r30.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
loc_82C31DC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c31dc4
	if (!cr6.eq) goto loc_82C31DC4;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82C31DE8;
	sub_82472FC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C31DF8"))) PPC_WEAK_FUNC(sub_82C31DF8);
PPC_FUNC_IMPL(__imp__sub_82C31DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C31E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,10844
	ctx.r10.s64 = ctx.r11.s64 + 10844;
	// addi r30,r3,136
	ctx.r30.s64 = ctx.r3.s64 + 136;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82c31e2c
	if (cr6.lt) goto loc_82C31E2C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82C31E2C;
	sub_82416268(ctx, base);
loc_82C31E2C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x82e76a88
	ctx.lr = 0x82C31E48;
	sub_82E76A88(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82416268
	ctx.lr = 0x82C31E50;
	sub_82416268(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c31e6c
	if (cr6.lt) goto loc_82C31E6C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82C31E6C;
	sub_82416268(ctx, base);
loc_82C31E6C:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x831032a0
	ctx.lr = 0x82C31E80;
	sub_831032A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C31E88"))) PPC_WEAK_FUNC(sub_82C31E88);
PPC_FUNC_IMPL(__imp__sub_82C31E88) {
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
	// bl 0x82c31df8
	ctx.lr = 0x82C31EA8;
	sub_82C31DF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c31ec0
	if (cr6.eq) goto loc_82C31EC0;
	// bl 0x82416268
	ctx.lr = 0x82C31EBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C31EC0:
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

__attribute__((alias("__imp__sub_82C31ED8"))) PPC_WEAK_FUNC(sub_82C31ED8);
PPC_FUNC_IMPL(__imp__sub_82C31ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C31EE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,7826
	ctx.r4.s64 = ctx.r11.s64 + 7826;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C31F18;
	sub_8259CC28(ctx, base);
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c31f70
	if (!cr6.eq) goto loc_82C31F70;
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C31F44;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c32028
	if (cr6.lt) goto loc_82C32028;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C31F64;
	sub_825952B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C31F70:
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r31,r11,128
	ctx.r31.s64 = ctx.r11.s64 + 128;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c31f90
	if (cr6.lt) goto loc_82C31F90;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82c31f94
	goto loc_82C31F94;
loc_82C31F90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82C31F94:
	// bl 0x82e7f630
	ctx.lr = 0x82C31F98;
	sub_82E7F630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c31fe4
	if (cr6.eq) goto loc_82C31FE4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c31fb8
	if (cr6.lt) goto loc_82C31FB8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82c31fbc
	goto loc_82C31FBC;
loc_82C31FB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82C31FBC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82C31FC4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c31be0
	ctx.lr = 0x82C31FD0;
	sub_82C31BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c31fe4
	if (!cr6.eq) goto loc_82C31FE4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x82c32018
	goto loc_82C32018;
loc_82C31FE4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c31ff8
	if (cr6.lt) goto loc_82C31FF8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82c31ffc
	goto loc_82C31FFC;
loc_82C31FF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82C31FFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c31ab0
	ctx.lr = 0x82C32004;
	sub_82C31AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c32018
	if (!cr6.eq) goto loc_82C32018;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82C32018:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8292a3f8
	ctx.lr = 0x82C32020;
	sub_8292A3F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C32028;
	sub_8387E8E0(ctx, base);
loc_82C32028:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C32034"))) PPC_WEAK_FUNC(sub_82C32034);
PPC_FUNC_IMPL(__imp__sub_82C32034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C32038"))) PPC_WEAK_FUNC(sub_82C32038);
PPC_FUNC_IMPL(__imp__sub_82C32038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C32040;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r10,r11,7044
	ctx.r10.s64 = ctx.r11.s64 + 7044;
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82c320cc
	if (cr6.eq) goto loc_82C320CC;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82C32070:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82C32090;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c320ac
	if (cr6.lt) goto loc_82C320AC;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C320AC;
	sub_825952B8(ctx, base);
loc_82C320AC:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x837c05a0
	ctx.lr = 0x82C320C0;
	sub_837C05A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c32070
	if (!cr6.eq) goto loc_82C32070;
loc_82C320CC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C320D4"))) PPC_WEAK_FUNC(sub_82C320D4);
PPC_FUNC_IMPL(__imp__sub_82C320D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C320D8"))) PPC_WEAK_FUNC(sub_82C320D8);
PPC_FUNC_IMPL(__imp__sub_82C320D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C320E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,7044
	ctx.r29.s64 = ctx.r11.s64 + 7044;
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82c3219c
	if (cr6.eq) goto loc_82C3219C;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82C32110:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82C32130;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82c32148
	if (!cr6.lt) goto loc_82C32148;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
loc_82C32148:
	// bl 0x83816968
	ctx.lr = 0x82C3214C;
	sub_83816968(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83816378
	ctx.lr = 0x82C32154;
	sub_83816378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833bbd78
	ctx.lr = 0x82C3215C;
	sub_833BBD78(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c32178
	if (cr6.lt) goto loc_82C32178;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C32178;
	sub_825952B8(ctx, base);
loc_82C32178:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x837c05a0
	ctx.lr = 0x82C3218C;
	sub_837C05A0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c32110
	if (!cr6.eq) goto loc_82C32110;
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82C3219C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x838162e0
	ctx.lr = 0x82C321A8;
	sub_838162E0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C321CC"))) PPC_WEAK_FUNC(sub_82C321CC);
PPC_FUNC_IMPL(__imp__sub_82C321CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C321D0"))) PPC_WEAK_FUNC(sub_82C321D0);
PPC_FUNC_IMPL(__imp__sub_82C321D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C321D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,10880
	ctx.r10.s64 = ctx.r11.s64 + 10880;
	// addi r29,r3,384
	ctx.r29.s64 = ctx.r3.s64 + 384;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r3,384(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c32220
	if (cr6.eq) goto loc_82C32220;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82C32210;
	sub_838ADAB0(ctx, base);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C32220;
	sub_825952B8(ctx, base);
loc_82C32220:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,352
	ctx.r30.s64 = ctx.r28.s64 + 352;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r29,7
	ctx.r29.s64 = 7;
loc_82C3223C:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3225c
	if (cr6.lt) goto loc_82C3225C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C3225C;
	sub_825952B8(ctx, base);
loc_82C3225C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82c3223c
	if (!cr0.lt) goto loc_82C3223C;
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// addi r29,r28,112
	ctx.r29.s64 = ctx.r28.s64 + 112;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c322a0
	if (cr6.eq) goto loc_82C322A0;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82C32290;
	sub_838ADAB0(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C322A0;
	sub_825952B8(ctx, base);
loc_82C322A0:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// addi r30,r28,96
	ctx.r30.s64 = ctx.r28.s64 + 96;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c322dc
	if (cr6.eq) goto loc_82C322DC;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82C322CC;
	sub_838ADAB0(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C322DC;
	sub_825952B8(ctx, base);
loc_82C322DC:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// lwz r4,80(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c32300
	if (cr6.eq) goto loc_82C32300;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82C32300;
	sub_825952B8(ctx, base);
loc_82C32300:
	// stw r31,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r31.u32);
	// stw r31,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r31.u32);
	// bl 0x831032a0
	ctx.lr = 0x82C32314;
	sub_831032A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3231C"))) PPC_WEAK_FUNC(sub_82C3231C);
PPC_FUNC_IMPL(__imp__sub_82C3231C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C32320"))) PPC_WEAK_FUNC(sub_82C32320);
PPC_FUNC_IMPL(__imp__sub_82C32320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C32328;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// addi r29,r3,348
	ctx.r29.s64 = ctx.r3.s64 + 348;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// li r31,8
	ctx.r31.s64 = 8;
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r27,r11,-22544
	ctx.r27.s64 = ctx.r11.s64 + -22544;
loc_82C32354:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82C32364;
	sub_8259CC28(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stwu r26,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r29.u32 = ea;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x82c32354
	if (!cr0.eq) goto loc_82C32354;
	// lwz r31,80(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r29,r28,80
	ctx.r29.s64 = ctx.r28.s64 + 80;
	// lwz r4,84(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c323a8
	if (cr6.eq) goto loc_82C323A8;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82C323A0;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82C323A8:
	// lwz r5,96(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// addi r31,r28,96
	ctx.r31.s64 = ctx.r28.s64 + 96;
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c323e0
	if (cr6.eq) goto loc_82C323E0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x82C323C8;
	sub_83915A50(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82C323DC;
	sub_838ADAB0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82C323E0:
	// lwz r5,112(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// addi r31,r28,112
	ctx.r31.s64 = ctx.r28.s64 + 112;
	// lwz r4,116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c32418
	if (cr6.eq) goto loc_82C32418;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x82C32400;
	sub_83915A50(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82C32414;
	sub_838ADAB0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82C32418:
	// lwz r5,384(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// addi r31,r28,384
	ctx.r31.s64 = ctx.r28.s64 + 384;
	// lwz r4,388(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 388);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c32450
	if (cr6.eq) goto loc_82C32450;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x82C32438;
	sub_83915A50(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82C3244C;
	sub_838ADAB0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82C32450:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C32458"))) PPC_WEAK_FUNC(sub_82C32458);
PPC_FUNC_IMPL(__imp__sub_82C32458) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,10736
	ctx.r4.s64 = ctx.r11.s64 + 10736;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103328
	ctx.lr = 0x82C32480;
	sub_83103328(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,10880
	ctx.r9.s64 = ctx.r10.s64 + 10880;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stb r11,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r11.u8);
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stb r11,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r11.u8);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stb r11,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r11.u8);
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stb r11,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r11.u8);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stb r11,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r11.u8);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stb r11,324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 324, ctx.r11.u8);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// bl 0x82c32320
	ctx.lr = 0x82C32534;
	sub_82C32320(ctx, base);
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82C32558"))) PPC_WEAK_FUNC(sub_82C32558);
PPC_FUNC_IMPL(__imp__sub_82C32558) {
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
	// bl 0x82c321d0
	ctx.lr = 0x82C32578;
	sub_82C321D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c32590
	if (cr6.eq) goto loc_82C32590;
	// bl 0x82416268
	ctx.lr = 0x82C3258C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C32590:
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

__attribute__((alias("__imp__sub_82C325A8"))) PPC_WEAK_FUNC(sub_82C325A8);
PPC_FUNC_IMPL(__imp__sub_82C325A8) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c325d0
	if (cr6.eq) goto loc_82C325D0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,132(r11)
	PPC_STORE_U8(ctx.r11.u32 + 132, ctx.r10.u8);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
loc_82C325D0:
	// bl 0x82c32320
	ctx.lr = 0x82C325D4;
	sub_82C32320(ctx, base);
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

__attribute__((alias("__imp__sub_82C325E8"))) PPC_WEAK_FUNC(sub_82C325E8);
PPC_FUNC_IMPL(__imp__sub_82C325E8) {
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
	// li r4,400
	ctx.r4.s64 = 400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C32614;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c32638
	if (cr6.eq) goto loc_82C32638;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c32458
	ctx.lr = 0x82C32624;
	sub_82C32458(ctx, base);
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
loc_82C32638:
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

__attribute__((alias("__imp__sub_82C32650"))) PPC_WEAK_FUNC(sub_82C32650);
PPC_FUNC_IMPL(__imp__sub_82C32650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C32658;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// li r27,28
	ctx.r27.s64 = 28;
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r3,384
	ctx.r31.s64 = ctx.r3.s64 + 384;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c326e8
	if (cr0.eq) goto loc_82C326E8;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82C32688:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r3,r29,r10
	ctx.r3.u64 = ctx.r29.u64 + ctx.r10.u64;
loc_82C32694:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c32694
	if (!cr6.eq) goto loc_82C32694;
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
	ctx.lr = 0x82C326C0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c32750
	if (cr6.eq) goto loc_82C32750;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c32688
	if (cr6.lt) goto loc_82C32688;
loc_82C326E8:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_82C326FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c326fc
	if (!cr6.eq) goto loc_82C326FC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C32724;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82C32730;
	sub_8291FDC8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c32750
	if (cr6.lt) goto loc_82C32750;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C32750;
	sub_825952B8(ctx, base);
loc_82C32750:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C32758"))) PPC_WEAK_FUNC(sub_82C32758);
PPC_FUNC_IMPL(__imp__sub_82C32758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C32760;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82C32774;
	sub_82E6E978(ctx, base);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c32838
	if (!cr6.eq) goto loc_82C32838;
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r10,-17772
	ctx.r9.s64 = ctx.r10.s64 + -17772;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82e80aa8
	ctx.lr = 0x82C327A0;
	sub_82E80AA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c327f0
	if (!cr6.eq) goto loc_82C327F0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c327d4
	if (cr6.lt) goto loc_82C327D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c32650
	ctx.lr = 0x82C327C4;
	sub_82C32650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82C327CC;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C327D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c32650
	ctx.lr = 0x82C327E0;
	sub_82C32650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82C327E8;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C327F0:
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
	ctx.lr = 0x82C32808;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c32828
	if (cr6.eq) goto loc_82C32828;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,10752
	ctx.r5.s64 = ctx.r11.s64 + 10752;
	// bl 0x82c31d28
	ctx.lr = 0x82C32820;
	sub_82C31D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82c3282c
	goto loc_82C3282C;
loc_82C32828:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82C3282C:
	// stw r4,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82C32838;
	sub_83103100(ctx, base);
loc_82C32838:
	// mulli r11,r23,28
	ctx.r11.s64 = ctx.r23.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r22,-1
	ctx.r22.s64 = -1;
	// addi r25,r11,128
	ctx.r25.s64 = ctx.r11.s64 + 128;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C3285C;
	sub_8259CB28(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r26,28
	ctx.r26.s64 = 28;
	// addi r30,r28,96
	ctx.r30.s64 = ctx.r28.s64 + 96;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// divw. r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c328d8
	if (cr0.eq) goto loc_82C328D8;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82C32880:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c328a0
	if (cr6.lt) goto loc_82C328A0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82c328a4
	goto loc_82C328A4;
loc_82C328A0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82C328A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x82C328B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c32978
	if (cr6.eq) goto loc_82C32978;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c32880
	if (cr6.lt) goto loc_82C32880;
loc_82C328D8:
	// addi r11,r23,88
	ctx.r11.s64 = ctx.r23.s64 + 88;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c328f8
	if (!cr6.eq) goto loc_82C328F8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r28,112
	ctx.r3.s64 = ctx.r28.s64 + 112;
	// bl 0x8291fdc8
	ctx.lr = 0x82C328F8;
	sub_8291FDC8(ctx, base);
loc_82C328F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c32038
	ctx.lr = 0x82C32900;
	sub_82C32038(ctx, base);
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r27,r11,7044
	ctx.r27.s64 = ctx.r11.s64 + 7044;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x837e78b8
	ctx.lr = 0x82C3291C;
	sub_837E78B8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c32930
	if (cr6.eq) goto loc_82C32930;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82C32930:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c329b0
	if (cr6.eq) goto loc_82C329B0;
	// stwx r24,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r24.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c32960
	if (cr6.lt) goto loc_82C32960;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C32960;
	sub_825952B8(ctx, base);
loc_82C32960:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C32978:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c32998
	if (cr6.lt) goto loc_82C32998;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C32998;
	sub_825952B8(ctx, base);
loc_82C32998:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C329B0:
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82C329D4;
	sub_8259CB28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c329e8
	if (!cr6.lt) goto loc_82C329E8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82C329E8:
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// bl 0x82e804f0
	ctx.lr = 0x82C329F0;
	sub_82E804F0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r27,2
	ctx.r27.s64 = 2;
	// stwx r24,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c32a14
	if (cr6.lt) goto loc_82C32A14;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82C32A14;
	sub_825952B8(ctx, base);
loc_82C32A14:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// blt cr6,0x82c32a3c
	if (cr6.lt) goto loc_82C32A3C;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C32A3C;
	sub_825952B8(ctx, base);
loc_82C32A3C:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C32A50"))) PPC_WEAK_FUNC(sub_82C32A50);
PPC_FUNC_IMPL(__imp__sub_82C32A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C32A58;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r25,r3,96
	ctx.r25.s64 = ctx.r3.s64 + 96;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// divw. r8,r8,r10
	ctx.r8.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c32abc
	if (cr0.eq) goto loc_82C32ABC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82C32A8C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82c32aa4
	if (cr6.lt) goto loc_82C32AA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C32AA4:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x82c32d28
	if (cr6.eq) goto loc_82C32D28;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c32a8c
	if (cr6.lt) goto loc_82C32A8C;
loc_82C32ABC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82e7f750
	ctx.lr = 0x82C32AC8;
	sub_82E7F750(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835ef3e0
	ctx.lr = 0x82C32AD4;
	sub_835EF3E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x835ecaf8
	ctx.lr = 0x82C32ADC;
	sub_835ECAF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8307e038
	ctx.lr = 0x82C32AE8;
	sub_8307E038(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825832f8
	ctx.lr = 0x82C32AF4;
	sub_825832F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83131d70
	ctx.lr = 0x82C32B00;
	sub_83131D70(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82e7f748
	ctx.lr = 0x82C32B0C;
	sub_82E7F748(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x835ef5a8
	ctx.lr = 0x82C32B20;
	sub_835EF5A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c32b38
	if (cr6.eq) goto loc_82C32B38;
loc_82C32B28:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c32650
	ctx.lr = 0x82C32B34;
	sub_82C32650(ctx, base);
	// b 0x82c32d18
	goto loc_82C32D18;
loc_82C32B38:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x835410b8
	ctx.lr = 0x82C32B40;
	sub_835410B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x835410b8
	ctx.lr = 0x82C32B50;
	sub_835410B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// bl 0x835ebe48
	ctx.lr = 0x82C32B6C;
	sub_835EBE48(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82C32B80;
	sub_82572FA0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c32b28
	if (cr6.eq) goto loc_82C32B28;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833bcae8
	ctx.lr = 0x82C32BA0;
	sub_833BCAE8(ctx, base);
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r9,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82c32be8
	if (cr0.eq) goto loc_82C32BE8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C32BC8:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82c32d18
	if (cr6.eq) goto loc_82C32D18;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c32bc8
	if (cr6.lt) goto loc_82C32BC8;
loc_82C32BE8:
	// bl 0x83816968
	ctx.lr = 0x82C32BEC;
	sub_83816968(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// clrlwi r6,r27,16
	ctx.r6.u64 = ctx.r27.u32 & 0xFFFF;
	// lfs f3,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// clrlwi r7,r26,16
	ctx.r7.u64 = ctx.r26.u32 & 0xFFFF;
	// lfs f4,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x83816550
	ctx.lr = 0x82C32C20;
	sub_83816550(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
loc_82C32C34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c32c34
	if (!cr6.eq) goto loc_82C32C34;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C32C5C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82C32C68;
	sub_8291FDC8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c32c88
	if (cr6.lt) goto loc_82C32C88;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82C32C88;
	sub_825952B8(ctx, base);
loc_82C32C88:
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// bl 0x835977d8
	ctx.lr = 0x82C32CA0;
	sub_835977D8(ctx, base);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
loc_82C32CB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c32cb0
	if (!cr6.eq) goto loc_82C32CB0;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C32CD8;
	sub_8259CC28(ctx, base);
	// lis r10,-31760
	ctx.r10.s64 = -2081423360;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r10,7044
	ctx.r3.s64 = ctx.r10.s64 + 7044;
	// bl 0x837efa70
	ctx.lr = 0x82C32CE8;
	sub_837EFA70(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82c32d0c
	if (cr6.lt) goto loc_82C32D0C;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82C32D0C;
	sub_825952B8(ctx, base);
loc_82C32D0C:
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
loc_82C32D18:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x835ecaa8
	ctx.lr = 0x82C32D20;
	sub_835ECAA8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835f3ab0
	ctx.lr = 0x82C32D28;
	sub_835F3AB0(ctx, base);
loc_82C32D28:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C32D30"))) PPC_WEAK_FUNC(sub_82C32D30);
PPC_FUNC_IMPL(__imp__sub_82C32D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82C32D38;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r30,r3,352
	ctx.r30.s64 = ctx.r3.s64 + 352;
	// addi r29,r3,128
	ctx.r29.s64 = ctx.r3.s64 + 128;
	// li r23,8
	ctx.r23.s64 = 8;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r26,r11,7044
	ctx.r26.s64 = ctx.r11.s64 + 7044;
loc_82C32D68:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c32d7c
	if (!cr6.eq) goto loc_82C32D7C;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// b 0x82c32e60
	goto loc_82C32E60;
loc_82C32D7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c32dec
	if (cr6.lt) goto loc_82C32DEC;
	// bne cr6,0x82c32e60
	if (!cr6.eq) goto loc_82C32E60;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c32da0
	if (cr6.lt) goto loc_82C32DA0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82c32da4
	goto loc_82C32DA4;
loc_82C32DA0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82C32DA4:
	// lwz r3,76(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// bl 0x82e7f5e8
	ctx.lr = 0x82C32DAC;
	sub_82E7F5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c32e60
	if (cr6.eq) goto loc_82C32E60;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c32dd8
	if (cr6.lt) goto loc_82C32DD8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c32a50
	ctx.lr = 0x82C32DD0;
	sub_82C32A50(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// b 0x82c32e60
	goto loc_82C32E60;
loc_82C32DD8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c32a50
	ctx.lr = 0x82C32DE4;
	sub_82C32A50(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// b 0x82c32e60
	goto loc_82C32E60;
loc_82C32DEC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x837e78b8
	ctx.lr = 0x82C32DFC;
	sub_837E78B8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c32e5c
	if (cr6.eq) goto loc_82C32E5C;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82C32E2C;
	sub_8259CB28(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r24,96
	ctx.r3.s64 = ctx.r24.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8291fdc8
	ctx.lr = 0x82C32E40;
	sub_8291FDC8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r24,80
	ctx.r3.s64 = ctx.r24.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x82C32E4C;
	sub_835977D8(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C32E58;
	sub_8387E8E0(ctx, base);
	// b 0x82c32e60
	goto loc_82C32E60;
loc_82C32E5C:
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
loc_82C32E60:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x82c32d68
	if (!cr0.eq) goto loc_82C32D68;
	// lwz r26,112(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// addi r28,r24,112
	ctx.r28.s64 = ctx.r24.s64 + 112;
	// lwz r11,116(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c32f4c
	if (cr6.eq) goto loc_82C32F4C;
	// lbz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r27,r26,28
	ctx.r27.s64 = ctx.r26.s64 + 28;
loc_82C32E8C:
	// lwz r11,-8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c32ea0
	if (cr6.lt) goto loc_82C32EA0;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82c32ea4
	goto loc_82C32EA4;
loc_82C32EA0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82C32EA4:
	// lwz r3,76(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// bl 0x82e7f5e8
	ctx.lr = 0x82C32EAC;
	sub_82E7F5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c32f34
	if (cr6.eq) goto loc_82C32F34;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c32ed0
	if (cr6.lt) goto loc_82C32ED0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C32ED0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c32a50
	ctx.lr = 0x82C32EDC;
	sub_82C32A50(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, xer);
	// beq cr6,0x82c32f10
	if (cr6.eq) goto loc_82C32F10;
	// subf r29,r27,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_82C32EF0:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C32F04;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c32ef0
	if (!cr6.eq) goto loc_82C32EF0;
loc_82C32F10:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x82C32F24;
	sub_838ADAB0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// b 0x82c32f40
	goto loc_82C32F40;
loc_82C32F34:
	// addi r25,r25,28
	ctx.r25.s64 = ctx.r25.s64 + 28;
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
loc_82C32F40:
	// lwz r11,116(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c32e8c
	if (!cr6.eq) goto loc_82C32E8C;
loc_82C32F4C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C32F54"))) PPC_WEAK_FUNC(sub_82C32F54);
PPC_FUNC_IMPL(__imp__sub_82C32F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C32F58"))) PPC_WEAK_FUNC(sub_82C32F58);
PPC_FUNC_IMPL(__imp__sub_82C32F58) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c273a0
	ctx.lr = 0x82C32F78;
	sub_82C273A0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,11864
	ctx.r9.s64 = ctx.r11.s64 + 11864;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r30.u8);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// lwz r4,-17612(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -17612);
	// bl 0x82d20ae0
	ctx.lr = 0x82C32FB0;
	sub_82D20AE0(ctx, base);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-17608(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17608);
	// bl 0x82d20ae0
	ctx.lr = 0x82C32FC0;
	sub_82D20AE0(ctx, base);
	// lis r4,-31776
	ctx.r4.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-17604(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -17604);
	// bl 0x82d23390
	ctx.lr = 0x82C32FD4;
	sub_82D23390(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82C32FD8;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33058
	if (cr6.eq) goto loc_82C33058;
	// li r11,44
	ctx.r11.s64 = 44;
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C33000;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33014
	if (cr6.eq) goto loc_82C33014;
	// bl 0x82c2f748
	ctx.lr = 0x82C3300C;
	sub_82C2F748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82c33018
	goto loc_82C33018;
loc_82C33014:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C33018:
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c3302c
	if (cr6.eq) goto loc_82C3302C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C3302C;
	sub_83103100(ctx, base);
loc_82C3302C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,11312
	ctx.r3.s64 = ctx.r11.s64 + 11312;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd6558
	ctx.lr = 0x82C33044;
	sub_82BD6558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82c3305c
	if (cr6.eq) goto loc_82C3305C;
	// bl 0x83103100
	ctx.lr = 0x82C33058;
	sub_83103100(ctx, base);
loc_82C33058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3305C:
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

__attribute__((alias("__imp__sub_82C33074"))) PPC_WEAK_FUNC(sub_82C33074);
PPC_FUNC_IMPL(__imp__sub_82C33074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33078"))) PPC_WEAK_FUNC(sub_82C33078);
PPC_FUNC_IMPL(__imp__sub_82C33078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C33080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,11348
	ctx.r30.s64 = ctx.r11.s64 + 11348;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c330c0
	if (cr6.eq) goto loc_82C330C0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c330bc
	if (!cr6.eq) goto loc_82C330BC;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d20da8
	ctx.lr = 0x82C330BC;
	sub_82D20DA8(ctx, base);
loc_82C330BC:
	// stb r28,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r28.u8);
loc_82C330C0:
	// lbz r11,113(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c33108
	if (cr6.eq) goto loc_82C33108;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c33104
	if (!cr6.eq) goto loc_82C33104;
	// bl 0x82d86078
	ctx.lr = 0x82C330DC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33108
	if (cr6.eq) goto loc_82C33108;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x83102db0
	ctx.lr = 0x82C330EC;
	sub_83102DB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C33104;
	sub_82D20DA8(ctx, base);
loc_82C33104:
	// stb r28,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r28.u8);
loc_82C33108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33110"))) PPC_WEAK_FUNC(sub_82C33110);
PPC_FUNC_IMPL(__imp__sub_82C33110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,11704
	ctx.r5.s64 = ctx.r11.s64 + 11704;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33120"))) PPC_WEAK_FUNC(sub_82C33120);
PPC_FUNC_IMPL(__imp__sub_82C33120) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,11712
	ctx.r3.s64 = ctx.r11.s64 + 11712;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82C33154;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33180
	if (cr6.eq) goto loc_82C33180;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,153
	ctx.r4.u64 = ctx.r4.u64 | 153;
	// bl 0x82d2ada8
	ctx.lr = 0x82C3316C;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82C33178;
	sub_83103100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r11.u8);
loc_82C33180:
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

__attribute__((alias("__imp__sub_82C33198"))) PPC_WEAK_FUNC(sub_82C33198);
PPC_FUNC_IMPL(__imp__sub_82C33198) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,11728
	ctx.r3.s64 = ctx.r11.s64 + 11728;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82C331CC;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c331f8
	if (cr6.eq) goto loc_82C331F8;
	// lis r4,510
	ctx.r4.s64 = 33423360;
	// ori r4,r4,39
	ctx.r4.u64 = ctx.r4.u64 | 39;
	// bl 0x82d2ada8
	ctx.lr = 0x82C331E4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82C331F0;
	sub_83103100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,113(r30)
	PPC_STORE_U8(ctx.r30.u32 + 113, ctx.r11.u8);
loc_82C331F8:
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

__attribute__((alias("__imp__sub_82C33210"))) PPC_WEAK_FUNC(sub_82C33210);
PPC_FUNC_IMPL(__imp__sub_82C33210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,11744
	ctx.r5.s64 = ctx.r11.s64 + 11744;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33220"))) PPC_WEAK_FUNC(sub_82C33220);
PPC_FUNC_IMPL(__imp__sub_82C33220) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,11864
	ctx.r9.s64 = ctx.r11.s64 + 11864;
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
	// bl 0x82c27460
	ctx.lr = 0x82C33258;
	sub_82C27460(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c33270
	if (cr6.eq) goto loc_82C33270;
	// bl 0x82416268
	ctx.lr = 0x82C3326C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C33270:
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

__attribute__((alias("__imp__sub_82C33288"))) PPC_WEAK_FUNC(sub_82C33288);
PPC_FUNC_IMPL(__imp__sub_82C33288) {
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
	// blt cr6,0x82c332b0
	if (cr6.lt) goto loc_82C332B0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c332b4
	goto loc_82C332B4;
loc_82C332B0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C332B4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C332D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c332ec
	if (cr6.eq) goto loc_82C332EC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c32f58
	ctx.lr = 0x82C332E4;
	sub_82C32F58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c332f0
	if (!cr6.eq) goto loc_82C332F0;
loc_82C332EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C332F0:
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

__attribute__((alias("__imp__sub_82C33308"))) PPC_WEAK_FUNC(sub_82C33308);
PPC_FUNC_IMPL(__imp__sub_82C33308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C33310;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r4,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c335a4
	if (cr6.eq) goto loc_82C335A4;
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// bl 0x82da3f60
	ctx.lr = 0x82C33344;
	sub_82DA3F60(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82da3f78
	ctx.lr = 0x82C3334C;
	sub_82DA3F78(ctx, base);
	// cmpw cr6,r24,r3
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r3.s32, xer);
	// blt cr6,0x82c335a4
	if (cr6.lt) goto loc_82C335A4;
	// cmpwi cr6,r24,12
	cr6.compare<int32_t>(ctx.r24.s32, 12, xer);
	// bgt cr6,0x82c335a4
	if (cr6.gt) goto loc_82C335A4;
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, xer);
	// bge cr6,0x82c33368
	if (!cr6.lt) goto loc_82C33368;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82C33368:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r8,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// blt cr6,0x82c33388
	if (cr6.lt) goto loc_82C33388;
	// li r29,10
	ctx.r29.s64 = 10;
loc_82C33388:
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,7380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// beq cr6,0x82c333e0
	if (cr6.eq) goto loc_82C333E0;
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x82c333d0
	if (!cr6.lt) goto loc_82C333D0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82C333D0:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// bge cr6,0x82c33408
	if (!cr6.lt) goto loc_82C33408;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// b 0x82c33408
	goto loc_82C33408;
loc_82C333E0:
	// cmpwi cr6,r24,12
	cr6.compare<int32_t>(ctx.r24.s32, 12, xer);
	// bne cr6,0x82c33408
	if (!cr6.eq) goto loc_82C33408;
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-18568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18568);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_82C33408:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// beq cr6,0x82c33458
	if (cr6.eq) goto loc_82C33458;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C33424:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c335b4
	if (!cr6.gt) goto loc_82C335B4;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// blt cr6,0x82c33424
	if (cr6.lt) goto loc_82C33424;
loc_82C33458:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82c33464
	if (!cr6.lt) goto loc_82C33464;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82C33464:
	// fctiwz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c335a4
	if (cr6.eq) goto loc_82C335A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r28,r11,11684
	ctx.r28.s64 = ctx.r11.s64 + 11684;
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// bl 0x83815d38
	ctx.lr = 0x82C3348C;
	sub_83815D38(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c334e8
	if (cr6.eq) goto loc_82C334E8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C3349C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c335c0
	if (!cr6.gt) goto loc_82C335C0;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fdivs f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// bl 0x83815b68
	ctx.lr = 0x82C334D8;
	sub_83815B68(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82c3349c
	if (cr6.lt) goto loc_82C3349C;
loc_82C334E8:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x838153c8
	ctx.lr = 0x82C334F4;
	sub_838153C8(ctx, base);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83815d38
	ctx.lr = 0x82C33500;
	sub_83815D38(ctx, base);
	// bl 0x82da3f78
	ctx.lr = 0x82C33504;
	sub_82DA3F78(ctx, base);
	// cmpw cr6,r3,r24
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, xer);
	// bgt cr6,0x82c33534
	if (cr6.gt) goto loc_82C33534;
	// cmpwi cr6,r24,12
	cr6.compare<int32_t>(ctx.r24.s32, 12, xer);
	// bge cr6,0x82c33534
	if (!cr6.lt) goto loc_82C33534;
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f30.f64));
	// bl 0x83815b68
	ctx.lr = 0x82C33534;
	sub_83815B68(ctx, base);
loc_82C33534:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x838153c8
	ctx.lr = 0x82C33540;
	sub_838153C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815d38
	ctx.lr = 0x82C3354C;
	sub_83815D38(ctx, base);
	// bl 0x82da3f78
	ctx.lr = 0x82C33550;
	sub_82DA3F78(ctx, base);
	// cmpw cr6,r3,r24
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, xer);
	// bge cr6,0x82c33580
	if (!cr6.lt) goto loc_82C33580;
	// cmpwi cr6,r24,12
	cr6.compare<int32_t>(ctx.r24.s32, 12, xer);
	// bgt cr6,0x82c33580
	if (cr6.gt) goto loc_82C33580;
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f30.f64));
	// bl 0x83815b68
	ctx.lr = 0x82C33580;
	sub_83815B68(ctx, base);
loc_82C33580:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x838153c8
	ctx.lr = 0x82C3358C;
	sub_838153C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815cb8
	ctx.lr = 0x82C33594;
	sub_83815CB8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83815cb8
	ctx.lr = 0x82C3359C;
	sub_83815CB8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83815cb8
	ctx.lr = 0x82C335A4;
	sub_83815CB8(ctx, base);
loc_82C335A4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82C335B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C335C0;
	sub_831CC188(ctx, base);
loc_82C335C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C335CC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C335CC"))) PPC_WEAK_FUNC(sub_82C335CC);
PPC_FUNC_IMPL(__imp__sub_82C335CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C335D0"))) PPC_WEAK_FUNC(sub_82C335D0);
PPC_FUNC_IMPL(__imp__sub_82C335D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C335D8;
	__savegprlr_22(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r4,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r4.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33870
	if (cr6.eq) goto loc_82C33870;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r30,r11,11480
	ctx.r30.s64 = ctx.r11.s64 + 11480;
	// addi r29,r10,100
	ctx.r29.s64 = ctx.r10.s64 + 100;
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// bl 0x837b0c10
	ctx.lr = 0x82C33610;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82C33620;
	sub_82A6A1B8(ctx, base);
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C3362C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82C3363C;
	sub_82A6A1B8(ctx, base);
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C33648;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82C33658;
	sub_82A6A1B8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// lwz r5,380(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// ori r4,r4,96
	ctx.r4.u64 = ctx.r4.u64 | 96;
	// bl 0x82d042a8
	ctx.lr = 0x82C33680;
	sub_82D042A8(ctx, base);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82C336A4;
	sub_8259CB28(ctx, base);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C336B0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82a69ad0
	ctx.lr = 0x82C336C0;
	sub_82A69AD0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C336D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c336f4
	if (!cr6.eq) goto loc_82C336F4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82C336EC;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C336F4:
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// bl 0x82da3f60
	ctx.lr = 0x82C336FC;
	sub_82DA3F60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a672f0
	ctx.lr = 0x82C33708;
	sub_82A672F0(ctx, base);
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r9,r30,-12
	ctx.r9.s64 = ctx.r30.s64 + -12;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// addi r27,r1,196
	ctx.r27.s64 = ctx.r1.s64 + 196;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// li r23,3
	ctx.r23.s64 = 3;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// li r22,2
	ctx.r22.s64 = 2;
loc_82C33740:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C33758;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33848
	if (cr6.eq) goto loc_82C33848;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da3f60
	ctx.lr = 0x82C33770;
	sub_82DA3F60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82da3f78
	ctx.lr = 0x82C33778;
	sub_82DA3F78(ctx, base);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, xer);
	// blt cr6,0x82c33788
	if (cr6.lt) goto loc_82C33788;
	// cmpwi cr6,r26,12
	cr6.compare<int32_t>(ctx.r26.s32, 12, xer);
	// ble cr6,0x82c33798
	if (!cr6.gt) goto loc_82C33798;
loc_82C33788:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C33798;
	sub_82D2AEC8(ctx, base);
loc_82C33798:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// ori r4,r4,294
	ctx.r4.u64 = ctx.r4.u64 | 294;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d042a8
	ctx.lr = 0x82C337B8;
	sub_82D042A8(ctx, base);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82C337D8;
	sub_8259CB28(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_82C337EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c337ec
	if (!cr6.eq) goto loc_82C337EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C33810;
	sub_8259CC28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C33820;
	sub_82A69AD0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c3383c
	if (cr6.lt) goto loc_82C3383C;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C3383C;
	sub_825952B8(ctx, base);
loc_82C3383C:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82C33848:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x82c33740
	if (!cr0.eq) goto loc_82C33740;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c33870
	if (cr6.lt) goto loc_82C33870;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82C33870;
	sub_825952B8(ctx, base);
loc_82C33870:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33878"))) PPC_WEAK_FUNC(sub_82C33878);
PPC_FUNC_IMPL(__imp__sub_82C33878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C33880;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33a74
	if (cr6.eq) goto loc_82C33A74;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r30,r11,11620
	ctx.r30.s64 = ctx.r11.s64 + 11620;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x82C338B0;
	sub_837B0C10(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82C338D4;
	sub_82D042A8(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82C338EC;
	sub_825A1DA8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82c33900
	if (!cr6.lt) goto loc_82C33900;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82C33900:
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x82C33908;
	sub_82D2E228(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33a64
	if (cr6.eq) goto loc_82C33A64;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r26,r3,100
	ctx.r26.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C33930;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33a64
	if (cr6.eq) goto loc_82C33A64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c339a8
	if (cr6.eq) goto loc_82C339A8;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r10,-17520(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17520);
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c339a8
	if (cr6.eq) goto loc_82C339A8;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x82c33978
	if (!cr6.gt) goto loc_82C33978;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82C33978:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r24,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c33990
	if (cr6.eq) goto loc_82C33990;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C33990:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82C339A4;
	sub_82D329F8(ctx, base);
	// b 0x82c339c8
	goto loc_82C339C8;
loc_82C339A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C339B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d32958
	ctx.lr = 0x82C339C0;
	sub_82D32958(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82C339C8;
	sub_8387E8E0(ctx, base);
loc_82C339C8:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c33a64
	if (cr6.eq) goto loc_82C33A64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r25,4
	ctx.r27.s64 = ctx.r25.s64 + 4;
	// addi r11,r11,12188
	ctx.r11.s64 = ctx.r11.s64 + 12188;
	// addi r29,r27,-4
	ctx.r29.s64 = ctx.r27.s64 + -4;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82C339EC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwzu r28,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x837b0c10
	ctx.lr = 0x82C339FC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82C33A0C;
	sub_82A6A1B8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82c339ec
	if (!cr0.eq) goto loc_82C339EC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c33a7c
	if (!cr6.lt) goto loc_82C33A7C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C33A28:
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq cr6,0x82c33a3c
	if (cr6.eq) goto loc_82C33A3C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C33A3C:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,12172
	ctx.r7.s64 = ctx.r9.s64 + 12172;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r6,72(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C33A64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C33A64:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C33A6C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C33A74;
	sub_8387E8E0(ctx, base);
loc_82C33A74:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82C33A7C:
	// ble cr6,0x82c33a88
	if (!cr6.gt) goto loc_82C33A88;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82c33a28
	goto loc_82C33A28;
loc_82C33A88:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82c33a3c
	goto loc_82C33A3C;
}

__attribute__((alias("__imp__sub_82C33A90"))) PPC_WEAK_FUNC(sub_82C33A90);
PPC_FUNC_IMPL(__imp__sub_82C33A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C33A98;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C33AA4;
	sub_82D199F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,10954
	ctx.r31.s64 = ctx.r11.s64 + 10954;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,802
	ctx.r3.s64 = ctx.r31.s64 + 802;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x82d2fa90
	ctx.lr = 0x82C33AC0;
	sub_82D2FA90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33b74
	if (cr6.eq) goto loc_82C33B74;
	// bl 0x82d86078
	ctx.lr = 0x82C33AD0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33b74
	if (cr6.eq) goto loc_82C33B74;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x83102db0
	ctx.lr = 0x82C33AE0;
	sub_83102DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r29,56(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82da3f48
	ctx.lr = 0x82C33AFC;
	sub_82DA3F48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C33B0C;
	sub_837B0C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,510
	ctx.r4.s64 = 33423360;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82c33b48
	if (cr6.eq) goto loc_82C33B48;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// beq cr6,0x82c33b40
	if (cr6.eq) goto loc_82C33B40;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ori r4,r4,43
	ctx.r4.u64 = ctx.r4.u64 | 43;
	// bl 0x82d042a8
	ctx.lr = 0x82C33B3C;
	sub_82D042A8(ctx, base);
	// b 0x82c33b54
	goto loc_82C33B54;
loc_82C33B40:
	// ori r4,r4,45
	ctx.r4.u64 = ctx.r4.u64 | 45;
	// b 0x82c33b50
	goto loc_82C33B50;
loc_82C33B48:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r4,r4,44
	ctx.r4.u64 = ctx.r4.u64 | 44;
loc_82C33B50:
	// bl 0x82d042a8
	ctx.lr = 0x82C33B54;
	sub_82D042A8(ctx, base);
loc_82C33B54:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82C33B60;
	sub_82D2AAB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82C33B6C;
	sub_83103100(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C33B74;
	sub_8387E8E0(ctx, base);
loc_82C33B74:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33B7C"))) PPC_WEAK_FUNC(sub_82C33B7C);
PPC_FUNC_IMPL(__imp__sub_82C33B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33B80"))) PPC_WEAK_FUNC(sub_82C33B80);
PPC_FUNC_IMPL(__imp__sub_82C33B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C33B88;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C33B94;
	sub_82D19A68(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c33ba8
	if (!cr6.eq) goto loc_82C33BA8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82C33BA8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r10,11324
	ctx.r4.s64 = ctx.r10.s64 + 11324;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C33BCC;
	sub_8259CC28(ctx, base);
	// lis r5,930
	ctx.r5.s64 = 60948480;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,130
	ctx.r5.u64 = ctx.r5.u64 | 130;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82C33BE0;
	sub_82A69A28(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82C33BE4;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82C33BE8;
	sub_82D25AB8(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C33BEC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33e4c
	if (cr6.eq) goto loc_82C33E4C;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x83102db0
	ctx.lr = 0x82C33BFC;
	sub_83102DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da6a08
	ctx.lr = 0x82C33C04;
	sub_82DA6A08(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,52(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r26,56(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82da3f48
	ctx.lr = 0x82C33C20;
	sub_82DA3F48(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C33C2C;
	sub_82D19A68(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x82c335d0
	ctx.lr = 0x82C33C40;
	sub_82C335D0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82C33C54:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// bl 0x82da69a8
	ctx.lr = 0x82C33C78;
	sub_82DA69A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bl 0x82d19a68
	ctx.lr = 0x82C33C8C;
	sub_82D19A68(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82c33878
	ctx.lr = 0x82C33C9C;
	sub_82C33878(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c33cb4
	if (cr6.eq) goto loc_82C33CB4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82C33CB4;
	sub_835977D8(ctx, base);
loc_82C33CB4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x82c33c54
	if (cr6.lt) goto loc_82C33C54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82C33CD0;
	sub_82D19A10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33cf0
	if (cr6.eq) goto loc_82C33CF0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82c33308
	ctx.lr = 0x82C33CF0;
	sub_82C33308(ctx, base);
loc_82C33CF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C33CF8;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c33d18
	if (!cr6.eq) goto loc_82C33D18;
	// bl 0x82d26ed8
	ctx.lr = 0x82C33D08;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33d18
	if (cr6.eq) goto loc_82C33D18;
	// li r4,58
	ctx.r4.s64 = 58;
	// bl 0x82d26b18
	ctx.lr = 0x82C33D18;
	sub_82D26B18(ctx, base);
loc_82C33D18:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82c33d4c
	if (!cr6.eq) goto loc_82C33D4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C33D38;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c33d4c
	if (!cr6.eq) goto loc_82C33D4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c33a90
	ctx.lr = 0x82C33D4C;
	sub_82C33A90(ctx, base);
loc_82C33D4C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C33D5C;
	sub_82D19788(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,115
	ctx.r5.u64 = ctx.r5.u64 | 115;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C33D7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C33D8C;
	sub_82D19788(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,91
	ctx.r5.u64 = ctx.r5.u64 | 91;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C33DAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C33DBC;
	sub_82D19788(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,221
	ctx.r5.u64 = ctx.r5.u64 | 221;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C33DDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,56(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82da6a08
	ctx.lr = 0x82C33DE8;
	sub_82DA6A08(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bgt cr6,0x82c33e24
	if (cr6.gt) goto loc_82C33E24;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82C33E00;
	sub_82D19788(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C33E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c33e2c
	goto loc_82C33E2C;
loc_82C33E24:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82C33E2C;
	sub_82D19788(ctx, base);
loc_82C33E2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a689e8
	ctx.lr = 0x82C33E34;
	sub_82A689E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c33e4c
	if (cr6.eq) goto loc_82C33E4C;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82C33E4C;
	sub_825952B8(ctx, base);
loc_82C33E4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33E58"))) PPC_WEAK_FUNC(sub_82C33E58);
PPC_FUNC_IMPL(__imp__sub_82C33E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C33E60;
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
	ctx.lr = 0x82C33E74;
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
	ctx.lr = 0x82C33E8C;
	sub_82D253F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,13216
	ctx.r9.s64 = ctx.r11.s64 + 13216;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-17472(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -17472);
	// bl 0x82d20ae0
	ctx.lr = 0x82C33EB4;
	sub_82D20AE0(ctx, base);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-17468(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17468);
	// bl 0x82d20ae0
	ctx.lr = 0x82C33EC4;
	sub_82D20AE0(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r4,12572
	ctx.r4.s64 = ctx.r4.s64 + 12572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82C33ED8;
	sub_82D23390(ctx, base);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,27
	ctx.r28.s64 = 27;
loc_82C33EE4:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C33EF8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33f0c
	if (cr6.eq) goto loc_82C33F0C;
	// bl 0x82c2f748
	ctx.lr = 0x82C33F04;
	sub_82C2F748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82c33f10
	goto loc_82C33F10;
loc_82C33F0C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C33F10:
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c33f24
	if (cr6.eq) goto loc_82C33F24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C33F24;
	sub_83103100(ctx, base);
loc_82C33F24:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82c33ee4
	if (!cr0.eq) goto loc_82C33EE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33F3C"))) PPC_WEAK_FUNC(sub_82C33F3C);
PPC_FUNC_IMPL(__imp__sub_82C33F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33F40"))) PPC_WEAK_FUNC(sub_82C33F40);
PPC_FUNC_IMPL(__imp__sub_82C33F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,13216
	ctx.r9.s64 = ctx.r11.s64 + 13216;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// b 0x82d25548
	sub_82D25548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33F5C"))) PPC_WEAK_FUNC(sub_82C33F5C);
PPC_FUNC_IMPL(__imp__sub_82C33F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33F60"))) PPC_WEAK_FUNC(sub_82C33F60);
PPC_FUNC_IMPL(__imp__sub_82C33F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C33F68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C33F74;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82C33F78;
	sub_82D2EC40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c33f90
	if (!cr6.eq) goto loc_82C33F90;
loc_82C33F84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C33F90:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82C33FA4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C33FB0;
	sub_82D33DB0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c33f84
	if (cr6.eq) goto loc_82C33F84;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82c33fa4
	if (cr6.lt) goto loc_82C33FA4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C33FE0;
	sub_82D2B608(ctx, base);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// addi r4,r11,12584
	ctx.r4.s64 = ctx.r11.s64 + 12584;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C33FFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34014
	if (cr6.eq) goto loc_82C34014;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,220
	ctx.r4.u64 = ctx.r4.u64 | 220;
	// bl 0x82d30340
	ctx.lr = 0x82C34014;
	sub_82D30340(ctx, base);
loc_82C34014:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34028;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C34030"))) PPC_WEAK_FUNC(sub_82C34030);
PPC_FUNC_IMPL(__imp__sub_82C34030) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82c34064
	if (!cr6.eq) goto loc_82C34064;
loc_82C3404C:
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
loc_82C34064:
	// bl 0x82d19a78
	ctx.lr = 0x82C34068;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3404c
	if (cr6.eq) goto loc_82C3404C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C34078;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3404c
	if (cr6.eq) goto loc_82C3404C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-17464(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17464);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3409C;
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

__attribute__((alias("__imp__sub_82C340B0"))) PPC_WEAK_FUNC(sub_82C340B0);
PPC_FUNC_IMPL(__imp__sub_82C340B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82dbb400
	sub_82DBB400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C340C0"))) PPC_WEAK_FUNC(sub_82C340C0);
PPC_FUNC_IMPL(__imp__sub_82C340C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C340C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82c34194
	if (cr6.eq) goto loc_82C34194;
	// bl 0x82c34030
	ctx.lr = 0x82C340E0;
	sub_82C34030(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34194
	if (cr6.eq) goto loc_82C34194;
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c34194
	if (cr6.eq) goto loc_82C34194;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,12716
	ctx.r30.s64 = ctx.r11.s64 + 12716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C34118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C34134;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34194
	if (cr6.eq) goto loc_82C34194;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C3414C;
	sub_82D291E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34164;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34194
	if (cr6.eq) goto loc_82C34194;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// beq cr6,0x82c34184
	if (cr6.eq) goto loc_82C34184;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C34184:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82C34194;
	sub_82D329F8(ctx, base);
loc_82C34194:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3419C"))) PPC_WEAK_FUNC(sub_82C3419C);
PPC_FUNC_IMPL(__imp__sub_82C3419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C341A0"))) PPC_WEAK_FUNC(sub_82C341A0);
PPC_FUNC_IMPL(__imp__sub_82C341A0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,13216
	ctx.r9.s64 = ctx.r11.s64 + 13216;
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
	// bl 0x82d25548
	ctx.lr = 0x82C341D8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c341f0
	if (cr6.eq) goto loc_82C341F0;
	// bl 0x82416268
	ctx.lr = 0x82C341EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C341F0:
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

__attribute__((alias("__imp__sub_82C34208"))) PPC_WEAK_FUNC(sub_82C34208);
PPC_FUNC_IMPL(__imp__sub_82C34208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C34210;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82C34248;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dd65c0
	ctx.lr = 0x82C34250;
	sub_82DD65C0(ctx, base);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,13508
	ctx.r4.s64 = ctx.r11.s64 + 13508;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82C34274;
	sub_8259CC28(ctx, base);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// bne cr6,0x82c342cc
	if (!cr6.eq) goto loc_82C342CC;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c342d8
	if (cr6.eq) goto loc_82C342D8;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82da4040
	ctx.lr = 0x82C342A0;
	sub_82DA4040(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c342dc
	if (cr6.eq) goto loc_82C342DC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82C342C0;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C342CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d04220
	ctx.lr = 0x82C342D8;
	sub_82D04220(ctx, base);
loc_82C342D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C342DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C342E4"))) PPC_WEAK_FUNC(sub_82C342E4);
PPC_FUNC_IMPL(__imp__sub_82C342E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C342E8"))) PPC_WEAK_FUNC(sub_82C342E8);
PPC_FUNC_IMPL(__imp__sub_82C342E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C342F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82c34428
	if (cr6.eq) goto loc_82C34428;
	// bl 0x82c34030
	ctx.lr = 0x82C3431C;
	sub_82C34030(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34428
	if (cr6.eq) goto loc_82C34428;
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c34428
	if (cr6.eq) goto loc_82C34428;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,12652
	ctx.r30.s64 = ctx.r11.s64 + 12652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C34358;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C34374;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34428
	if (cr6.eq) goto loc_82C34428;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C3438C;
	sub_82D291E0(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c343e0
	if (cr6.eq) goto loc_82C343E0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C343B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292a3f8
	ctx.lr = 0x82C343C0;
	sub_8292A3F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C343D0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82C343E0;
	sub_82A69AD0(ctx, base);
loc_82C343E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C343F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34428
	if (cr6.eq) goto loc_82C34428;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c34428
	if (cr6.eq) goto loc_82C34428;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82c2f918
	ctx.lr = 0x82C34428;
	sub_82C2F918(ctx, base);
loc_82C34428:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C34430"))) PPC_WEAK_FUNC(sub_82C34430);
PPC_FUNC_IMPL(__imp__sub_82C34430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C34438;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82c344f8
	if (cr6.eq) goto loc_82C344F8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r5,r11,274
	ctx.r5.u64 = ctx.r11.u64 | 274;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r11,r10,275
	ctx.r11.u64 = ctx.r10.u64 | 275;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// ori r10,r9,276
	ctx.r10.u64 = ctx.r9.u64 | 276;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ori r9,r8,277
	ctx.r9.u64 = ctx.r8.u64 | 277;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ori r8,r7,278
	ctx.r8.u64 = ctx.r7.u64 | 278;
	// ori r7,r6,279
	ctx.r7.u64 = ctx.r6.u64 | 279;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(ctx.r29.u32, 6, xer);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bge cr6,0x82c344f8
	if (!cr6.lt) goto loc_82C344F8;
	// bl 0x82c34030
	ctx.lr = 0x82C3449C;
	sub_82C34030(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c344f8
	if (cr6.eq) goto loc_82C344F8;
	// lwz r30,100(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c344f8
	if (cr6.eq) goto loc_82C344F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r10,12676
	ctx.r31.s64 = ctx.r10.s64 + 12676;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C344D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82C344E0;
	sub_837B0C10(ctx, base);
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x82a69a28
	ctx.lr = 0x82C344F8;
	sub_82A69A28(ctx, base);
loc_82C344F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C34500"))) PPC_WEAK_FUNC(sub_82C34500);
PPC_FUNC_IMPL(__imp__sub_82C34500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82C34508;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-1744(r1)
	ea = -1744 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r27,r11,13112
	ctx.r27.s64 = ctx.r11.s64 + 13112;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r4,r27,-388
	ctx.r4.s64 = ctx.r27.s64 + -388;
	// beq cr6,0x82c3453c
	if (cr6.eq) goto loc_82C3453C;
	// addi r4,r27,-372
	ctx.r4.s64 = ctx.r27.s64 + -372;
loc_82C3453C:
	// li r22,0
	ctx.r22.s64 = 0;
	// li r18,15
	ctx.r18.s64 = 15;
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// stb r22,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r22.u8);
loc_82C34554:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c34554
	if (!cr6.eq) goto loc_82C34554;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C34578;
	sub_8259CC28(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C34580;
	sub_82D19A78(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82c34598
	if (!cr6.lt) goto loc_82C34598;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82C34598:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C345A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c345e0
	if (!cr6.eq) goto loc_82C345E0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c34d0c
	if (cr6.lt) goto loc_82C34D0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C345D4;
	sub_825952B8(ctx, base);
	// addi r1,r1,1744
	ctx.r1.s64 = ctx.r1.s64 + 1744;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82C345E0:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r4,r27,-356
	ctx.r4.s64 = ctx.r27.s64 + -356;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C345FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3461c
	if (!cr6.eq) goto loc_82C3461C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82C34610;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1744
	ctx.r1.s64 = ctx.r1.s64 + 1744;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82C3461C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,-344
	ctx.r4.s64 = ctx.r27.s64 + -344;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34638;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r27,-328
	ctx.r4.s64 = ctx.r27.s64 + -328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C34650;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r19,-1
	ctx.r19.s64 = -1;
	// ori r20,r7,65535
	ctx.r20.u64 = ctx.r7.u64 | 65535;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c346a4
	if (cr6.eq) goto loc_82C346A4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ble cr6,0x82c3467c
	if (!cr6.gt) goto loc_82C3467C;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
loc_82C3467C:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r22,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r22.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c34694
	if (cr6.eq) goto loc_82C34694;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C34694:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d329f8
	ctx.lr = 0x82C346A4;
	sub_82D329F8(ctx, base);
loc_82C346A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r27,-320
	ctx.r4.s64 = ctx.r27.s64 + -320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C346BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c346f0
	if (cr6.eq) goto loc_82C346F0;
	// lwz r4,44(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x82c346f0
	if (cr6.eq) goto loc_82C346F0;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r22,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r22.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c346e8
	if (cr6.eq) goto loc_82C346E8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C346E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32b60
	ctx.lr = 0x82C346F0;
	sub_82D32B60(ctx, base);
loc_82C346F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r27,-300
	ctx.r4.s64 = ctx.r27.s64 + -300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r25,4
	ctx.r4.s64 = ctx.r25.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C3471C;
	sub_82D291E0(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82da4040
	ctx.lr = 0x82C34734;
	sub_82DA4040(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c347b4
	if (!cr6.eq) goto loc_82C347B4;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c347b4
	if (!cr6.eq) goto loc_82C347B4;
	// bl 0x830ff290
	ctx.lr = 0x82C34750;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C34754;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82c347b4
	if (!cr6.eq) goto loc_82C347B4;
	// bl 0x831156e8
	ctx.lr = 0x82C34760;
	sub_831156E8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// ble cr6,0x82c34778
	if (!cr6.gt) goto loc_82C34778;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82C34778:
	// bl 0x8311c148
	ctx.lr = 0x82C3477C;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x82C3478C;
	sub_831CE980(ctx, base);
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82C34798;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C347AC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82C347B4;
	sub_8387E8E0(ctx, base);
loc_82C347B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r27,-288
	ctx.r4.s64 = ctx.r27.s64 + -288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C347CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34800
	if (cr6.eq) goto loc_82C34800;
	// addi r4,r25,44
	ctx.r4.s64 = ctx.r25.s64 + 44;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82c34208
	ctx.lr = 0x82C347E4;
	sub_82C34208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82C347F8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82C34800;
	sub_8387E8E0(ctx, base);
loc_82C34800:
	// addi r4,r27,-276
	ctx.r4.s64 = ctx.r27.s64 + -276;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82C3480C;
	sub_837B0C10(ctx, base);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r23,r28,100
	ctx.r23.s64 = ctx.r28.s64 + 100;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82C34818:
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r22,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r22.u8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82C34838;
	sub_8259CB28(ctx, base);
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82C34848;
	sub_82B142A0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82c3485c
	if (!cr6.lt) goto loc_82C3485C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C3485C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82C34864;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34964
	if (cr6.eq) goto loc_82C34964;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-264
	ctx.r4.s64 = ctx.r27.s64 + -264;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34888;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r4,r27,-248
	ctx.r4.s64 = ctx.r27.s64 + -248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C348A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r27,-236
	ctx.r4.s64 = ctx.r27.s64 + -236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C348C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c34940
	if (cr6.eq) goto loc_82C34940;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34940
	if (cr6.eq) goto loc_82C34940;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82c34920
	if (cr6.lt) goto loc_82C34920;
	// beq cr6,0x82c34904
	if (cr6.eq) goto loc_82C34904;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82c34940
	if (!cr6.lt) goto loc_82C34940;
	// lis r4,61
	ctx.r4.s64 = 3997696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,124
	ctx.r4.u64 = ctx.r4.u64 | 124;
	// bl 0x82d29598
	ctx.lr = 0x82C348F8;
	sub_82D29598(ctx, base);
	// lis r4,61
	ctx.r4.s64 = 3997696;
	// ori r4,r4,78
	ctx.r4.u64 = ctx.r4.u64 | 78;
	// b 0x82c34938
	goto loc_82C34938;
loc_82C34904:
	// lis r4,24
	ctx.r4.s64 = 1572864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,157
	ctx.r4.u64 = ctx.r4.u64 | 157;
	// bl 0x82d29598
	ctx.lr = 0x82C34914;
	sub_82D29598(ctx, base);
	// lis r4,24
	ctx.r4.s64 = 1572864;
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
	// b 0x82c34938
	goto loc_82C34938;
loc_82C34920:
	// lis r4,61
	ctx.r4.s64 = 3997696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,116
	ctx.r4.u64 = ctx.r4.u64 | 116;
	// bl 0x82d29598
	ctx.lr = 0x82C34930;
	sub_82D29598(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,253
	ctx.r4.u64 = ctx.r4.u64 | 253;
loc_82C34938:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C34940;
	sub_82D29598(ctx, base);
loc_82C34940:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3495c
	if (cr6.lt) goto loc_82C3495C;
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C3495C;
	sub_825952B8(ctx, base);
loc_82C3495C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82c34818
	goto loc_82C34818;
loc_82C34964:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c34980
	if (cr6.lt) goto loc_82C34980;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C34980;
	sub_825952B8(ctx, base);
loc_82C34980:
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// stb r22,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r22.u8);
	// bl 0x82d19a68
	ctx.lr = 0x82C34994;
	sub_82D19A68(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82c349f0
	if (!cr6.eq) goto loc_82C349F0;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c349bc
	if (cr6.lt) goto loc_82C349BC;
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82C349BC;
	sub_825952B8(ctx, base);
loc_82C349BC:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// stw r22,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r22.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r22,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r22.u8);
	// blt cr6,0x82c34d0c
	if (cr6.lt) goto loc_82C34D0C;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82C349E4;
	sub_825952B8(ctx, base);
	// addi r1,r1,1744
	ctx.r1.s64 = ctx.r1.s64 + 1744;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82C349F0:
	// addi r4,r27,-224
	ctx.r4.s64 = ctx.r27.s64 + -224;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83815d38
	ctx.lr = 0x82C349FC;
	sub_83815D38(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x83815b28
	ctx.lr = 0x82C34A10;
	sub_83815B28(ctx, base);
	// lwz r9,108(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r8,104(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// addi r26,r25,104
	ctx.r26.s64 = ctx.r25.s64 + 104;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r6,r7,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82c34a54
	if (!cr6.eq) goto loc_82C34A54;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82C34A40;
	sub_83815B68(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82C34A4C;
	sub_83815B68(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82c34a6c
	goto loc_82C34A6C;
loc_82C34A54:
	// lfs f1,32(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x82C34A5C;
	sub_83815B68(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f1,36(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x82C34A68;
	sub_83815B68(ctx, base);
	// lfs f1,40(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
loc_82C34A6C:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83815b68
	ctx.lr = 0x82C34A74;
	sub_83815B68(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838153c8
	ctx.lr = 0x82C34A80;
	sub_838153C8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r25,r11,-17332
	ctx.r25.s64 = ctx.r11.s64 + -17332;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_82C34A90:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82d2e228
	ctx.lr = 0x82C34A9C;
	sub_82D2E228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34cc0
	if (cr6.eq) goto loc_82C34CC0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82c34b4c
	if (cr6.gt) goto loc_82C34B4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-132
	ctx.r4.s64 = ctx.r27.s64 + -132;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34AD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r27,-112
	ctx.r4.s64 = ctx.r27.s64 + -112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C34AF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34b20
	if (cr6.eq) goto loc_82C34B20;
	// addi r4,r27,-104
	ctx.r4.s64 = ctx.r27.s64 + -104;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82C34B0C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d32958
	ctx.lr = 0x82C34B18;
	sub_82D32958(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82C34B20;
	sub_8387E8E0(ctx, base);
loc_82C34B20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,-68
	ctx.r4.s64 = ctx.r27.s64 + -68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34B38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34cac
	if (cr6.eq) goto loc_82C34CAC;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,98
	ctx.r4.u64 = ctx.r4.u64 | 98;
	// b 0x82c34ca8
	goto loc_82C34CA8;
loc_82C34B4C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r4,r27,-56
	ctx.r4.s64 = ctx.r27.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34B68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34bd8
	if (cr6.eq) goto loc_82C34BD8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82c34d18
	if (!cr6.gt) goto loc_82C34D18;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r10,14
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwimi r9,r10,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r8,r20
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, xer);
	// ble cr6,0x82c34bb0
	if (!cr6.gt) goto loc_82C34BB0;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
loc_82C34BB0:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r22,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r22.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c34bc8
	if (cr6.eq) goto loc_82C34BC8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C34BC8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82d329f8
	ctx.lr = 0x82C34BD8;
	sub_82D329F8(ctx, base);
loc_82C34BD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r27,-48
	ctx.r4.s64 = ctx.r27.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34BF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c34cac
	if (cr6.eq) goto loc_82C34CAC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82c34d24
	if (!cr6.gt) goto loc_82C34D24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c34c80
	if (cr6.lt) goto loc_82C34C80;
	// beq cr6,0x82c34c58
	if (cr6.eq) goto loc_82C34C58;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82c34cac
	if (!cr6.lt) goto loc_82C34CAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34C4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,521
	ctx.r4.s64 = 34144256;
	// ori r4,r4,58
	ctx.r4.u64 = ctx.r4.u64 | 58;
	// b 0x82c34ca4
	goto loc_82C34CA4;
loc_82C34C58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,521
	ctx.r4.s64 = 34144256;
	// ori r4,r4,59
	ctx.r4.u64 = ctx.r4.u64 | 59;
	// b 0x82c34ca4
	goto loc_82C34CA4;
loc_82C34C80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C34C9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,521
	ctx.r4.s64 = 34144256;
	// ori r4,r4,57
	ctx.r4.u64 = ctx.r4.u64 | 57;
loc_82C34CA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C34CA8:
	// bl 0x82d29598
	ctx.lr = 0x82C34CAC;
	sub_82D29598(ctx, base);
loc_82C34CAC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(ctx.r28.u32, 5, xer);
	// blt cr6,0x82c34a90
	if (cr6.lt) goto loc_82C34A90;
loc_82C34CC0:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83815cb8
	ctx.lr = 0x82C34CC8;
	sub_83815CB8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c34ce4
	if (cr6.lt) goto loc_82C34CE4;
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82C34CE4;
	sub_825952B8(ctx, base);
loc_82C34CE4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// stw r22,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r22.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r22,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r22.u8);
	// blt cr6,0x82c34d0c
	if (cr6.lt) goto loc_82C34D0C;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82C34D0C;
	sub_825952B8(ctx, base);
loc_82C34D0C:
	// addi r1,r1,1744
	ctx.r1.s64 = ctx.r1.s64 + 1744;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82C34D18:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C34D24;
	sub_831CC188(ctx, base);
loc_82C34D24:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C34D30;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C34D30"))) PPC_WEAK_FUNC(sub_82C34D30);
PPC_FUNC_IMPL(__imp__sub_82C34D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C34D38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C34D4C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C34D54;
	sub_82D33DB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C34D5C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// addi r29,r11,13932
	ctx.r29.s64 = ctx.r11.s64 + 13932;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C34D84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C34DA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C34DAC"))) PPC_WEAK_FUNC(sub_82C34DAC);
PPC_FUNC_IMPL(__imp__sub_82C34DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C34DB0"))) PPC_WEAK_FUNC(sub_82C34DB0);
PPC_FUNC_IMPL(__imp__sub_82C34DB0) {
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
	// bl 0x82d19638
	ctx.lr = 0x82C34DCC;
	sub_82D19638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82C34DD4;
	sub_8308E078(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x82c34de4
	if (!cr6.eq) goto loc_82C34DE4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c34e30
	goto loc_82C34E30;
loc_82C34DE4:
	// bl 0x830ff290
	ctx.lr = 0x82C34DE8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C34DEC;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82c34e2c
	if (cr6.gt) goto loc_82C34E2C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c34e10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C34E10;
	// bdzf 4*cr6+eq,0x82c34e2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C34E2C;
	// bdzf 4*cr6+eq,0x82c34e10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C34E10;
	// bne cr6,0x82c34e10
	if (!cr6.eq) goto loc_82C34E10;
loc_82C34E10:
	// lbz r11,113(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82c34e2c
	if (!cr6.eq) goto loc_82C34E2C;
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c34e30
	if (!cr6.eq) goto loc_82C34E30;
loc_82C34E2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C34E30:
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

__attribute__((alias("__imp__sub_82C34E48"))) PPC_WEAK_FUNC(sub_82C34E48);
PPC_FUNC_IMPL(__imp__sub_82C34E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C34E50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82C34E70;
	sub_82D253F8(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lbz r7,215(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 215);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stb r30,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r30.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r28,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r28.u8);
	// addi r6,r9,14144
	ctx.r6.s64 = ctx.r9.s64 + 14144;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// addi r5,r8,-17088
	ctx.r5.s64 = ctx.r8.s64 + -17088;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// stw r4,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r10.u8);
	// addi r30,r9,-17312
	ctx.r30.s64 = ctx.r9.s64 + -17312;
	// stb r10,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r10.u8);
	// stb r11,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r11.u8);
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// stb r11,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r11.u8);
	// stb r11,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r11.u8);
	// stb r11,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r11.u8);
	// stb r27,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r27.u8);
	// stb r7,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r7.u8);
	// lwz r4,-17312(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17312);
	// bl 0x82d20ae0
	ctx.lr = 0x82C34EE8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82C34EF8;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C34F04"))) PPC_WEAK_FUNC(sub_82C34F04);
PPC_FUNC_IMPL(__imp__sub_82C34F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C34F08"))) PPC_WEAK_FUNC(sub_82C34F08);
PPC_FUNC_IMPL(__imp__sub_82C34F08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C34F24;
	sub_82D19A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c34db0
	ctx.lr = 0x82C34F30;
	sub_82C34DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c34f64
	if (cr6.eq) goto loc_82C34F64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r11,-17288
	ctx.r9.s64 = ctx.r11.s64 + -17288;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,-4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C34F60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c34fa8
	goto loc_82C34FA8;
loc_82C34F64:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,-17288(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17288);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C34F80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
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
	ctx.lr = 0x82C34FA8;
	sub_82D1EBF8(ctx, base);
loc_82C34FA8:
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

__attribute__((alias("__imp__sub_82C34FC0"))) PPC_WEAK_FUNC(sub_82C34FC0);
PPC_FUNC_IMPL(__imp__sub_82C34FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C34FC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C34FD8;
	sub_82D19BA0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c35058
	if (!cr6.eq) goto loc_82C35058;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// beq cr6,0x82c35054
	if (cr6.eq) goto loc_82C35054;
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bne cr6,0x82c35000
	if (!cr6.eq) goto loc_82C35000;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82C35000:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5cb10
	ctx.lr = 0x82C3500C;
	sub_82B5CB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c35030
	if (cr6.eq) goto loc_82C35030;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5cb78
	ctx.lr = 0x82C35024;
	sub_82B5CB78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c35054
	if (!cr6.eq) goto loc_82C35054;
loc_82C35030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d1eac0
	ctx.lr = 0x82C35040;
	sub_82D1EAC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C3504C;
	sub_82D17DA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C35054:
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
loc_82C35058:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35060"))) PPC_WEAK_FUNC(sub_82C35060);
PPC_FUNC_IMPL(__imp__sub_82C35060) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82C35080;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c350b4
	if (cr6.eq) goto loc_82C350B4;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,-17304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17304);
	// bl 0x82d2f098
	ctx.lr = 0x82C35094;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c350b4
	if (cr6.eq) goto loc_82C350B4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c350b4
	if (!cr6.eq) goto loc_82C350B4;
	// li r5,271
	ctx.r5.s64 = 271;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C350B4;
	sub_82D2AEC8(ctx, base);
loc_82C350B4:
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

__attribute__((alias("__imp__sub_82C350CC"))) PPC_WEAK_FUNC(sub_82C350CC);
PPC_FUNC_IMPL(__imp__sub_82C350CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C350D0"))) PPC_WEAK_FUNC(sub_82C350D0);
PPC_FUNC_IMPL(__imp__sub_82C350D0) {
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
	// bl 0x82d19ba0
	ctx.lr = 0x82C350E8;
	sub_82D19BA0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c35124
	if (!cr6.eq) goto loc_82C35124;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,4097
	ctx.r8.u64 = ctx.r10.u64 | 4097;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82C35124;
	sub_83103068(ctx, base);
loc_82C35124:
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

__attribute__((alias("__imp__sub_82C35138"))) PPC_WEAK_FUNC(sub_82C35138);
PPC_FUNC_IMPL(__imp__sub_82C35138) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x82b5ca98
	ctx.lr = 0x82C35154;
	sub_82B5CA98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c35180
	if (!cr6.eq) goto loc_82C35180;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C3516C;
	sub_82D17DA0(ctx, base);
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
loc_82C35180:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,4098
	ctx.r8.u64 = ctx.r10.u64 | 4098;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82C351B0;
	sub_83103068(ctx, base);
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

__attribute__((alias("__imp__sub_82C351C4"))) PPC_WEAK_FUNC(sub_82C351C4);
PPC_FUNC_IMPL(__imp__sub_82C351C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C351C8"))) PPC_WEAK_FUNC(sub_82C351C8);
PPC_FUNC_IMPL(__imp__sub_82C351C8) {
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
	// bl 0x82d19ba0
	ctx.lr = 0x82C351E0;
	sub_82D19BA0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c3521c
	if (!cr6.eq) goto loc_82C3521C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,4100
	ctx.r8.u64 = ctx.r10.u64 | 4100;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82C3521C;
	sub_83103068(ctx, base);
loc_82C3521C:
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

__attribute__((alias("__imp__sub_82C35230"))) PPC_WEAK_FUNC(sub_82C35230);
PPC_FUNC_IMPL(__imp__sub_82C35230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c35244
	if (!cr6.eq) goto loc_82C35244;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x82c35248
	goto loc_82C35248;
loc_82C35244:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82C35248:
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// li r4,121
	ctx.r4.s64 = 121;
	// b 0x82d17da0
	sub_82D17DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35254"))) PPC_WEAK_FUNC(sub_82C35254);
PPC_FUNC_IMPL(__imp__sub_82C35254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35258"))) PPC_WEAK_FUNC(sub_82C35258);
PPC_FUNC_IMPL(__imp__sub_82C35258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82c35274
	if (cr6.lt) goto loc_82C35274;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
loc_82C35274:
	// li r4,121
	ctx.r4.s64 = 121;
	// b 0x82d17da0
	sub_82D17DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3527C"))) PPC_WEAK_FUNC(sub_82C3527C);
PPC_FUNC_IMPL(__imp__sub_82C3527C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35280"))) PPC_WEAK_FUNC(sub_82C35280);
PPC_FUNC_IMPL(__imp__sub_82C35280) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C3529C;
	sub_82D19BA0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c35308
	if (!cr6.eq) goto loc_82C35308;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2940, ctx.r11.u32);
	// bl 0x82d19638
	ctx.lr = 0x82C352BC;
	sub_82D19638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x82C352C4;
	sub_8311E3D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8311d8c0
	ctx.lr = 0x82C352CC;
	sub_8311D8C0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r9,21716
	ctx.r7.s64 = ctx.r9.s64 + 21716;
	// ori r6,r8,4099
	ctx.r6.u64 = ctx.r8.u64 | 4099;
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
	ctx.lr = 0x82C352FC;
	sub_83103068(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C35308;
	sub_82D17DA0(ctx, base);
loc_82C35308:
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

__attribute__((alias("__imp__sub_82C35320"))) PPC_WEAK_FUNC(sub_82C35320);
PPC_FUNC_IMPL(__imp__sub_82C35320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c35338
	if (!cr6.eq) goto loc_82C35338;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C35338:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C35348"))) PPC_WEAK_FUNC(sub_82C35348);
PPC_FUNC_IMPL(__imp__sub_82C35348) {
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
	// lbz r11,97(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 97);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c35390
	if (!cr6.eq) goto loc_82C35390;
	// lbz r11,114(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 114);
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c35390
	if (cr6.eq) goto loc_82C35390;
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
loc_82C35390:
	// bl 0x831156e8
	ctx.lr = 0x82C35394;
	sub_831156E8(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r11,r11,2800
	ctx.r11.s64 = ctx.r11.s64 * 2800;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,690
	ctx.r3.s64 = ctx.r11.s64 + 690;
	// bl 0x8312a600
	ctx.lr = 0x82C353AC;
	sub_8312A600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82C353D0"))) PPC_WEAK_FUNC(sub_82C353D0);
PPC_FUNC_IMPL(__imp__sub_82C353D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,97(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c35410
	if (!cr6.eq) goto loc_82C35410;
	// lbz r11,114(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 114);
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c353f4
	if (cr6.eq) goto loc_82C353F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C353F4:
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82c35410
	if (!cr6.lt) goto loc_82C35410;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82C35410:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C35418"))) PPC_WEAK_FUNC(sub_82C35418);
PPC_FUNC_IMPL(__imp__sub_82C35418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C35420;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C35434;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r31,r11,6
	ctx.r31.s64 = ctx.r11.s64 + 393216;
	// addi r31,r31,-30316
	ctx.r31.s64 = ctx.r31.s64 + -30316;
	// bl 0x831156e8
	ctx.lr = 0x82C35444;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c35468
	if (cr6.eq) goto loc_82C35468;
	// bl 0x83115808
	ctx.lr = 0x82C35458;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82c3546c
	if (!cr6.eq) goto loc_82C3546C;
loc_82C35468:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C3546C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c35498
	if (!cr6.eq) goto loc_82C35498;
	// bl 0x831bc900
	ctx.lr = 0x82C3547C;
	sub_831BC900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c35548
	if (cr6.eq) goto loc_82C35548;
loc_82C35488:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C35498:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c35548
	if (cr6.eq) goto loc_82C35548;
	// lbz r11,169(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82c35504
	if (cr6.eq) goto loc_82C35504;
	// lbz r10,170(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82c35488
	if (!cr6.eq) goto loc_82C35488;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82c35504
	if (cr6.eq) goto loc_82C35504;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82c35488
	if (cr6.eq) goto loc_82C35488;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c35488
	if (cr6.eq) goto loc_82C35488;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c354f4
	if (cr6.eq) goto loc_82C354F4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c35548
	if (!cr6.eq) goto loc_82C35548;
loc_82C354F4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C35504:
	// lbz r11,170(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82c35548
	if (cr6.eq) goto loc_82C35548;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x82c35488
	if (cr6.eq) goto loc_82C35488;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c35488
	if (cr6.eq) goto loc_82C35488;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c35540
	if (cr6.eq) goto loc_82C35540;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c35548
	if (!cr6.eq) goto loc_82C35548;
loc_82C35540:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
loc_82C35548:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35550"))) PPC_WEAK_FUNC(sub_82C35550);
PPC_FUNC_IMPL(__imp__sub_82C35550) {
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
	ctx.lr = 0x82C35558;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3556C;
	sub_82D19A78(ctx, base);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d33db0
	ctx.lr = 0x82C35574;
	sub_82D33DB0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82C35584:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C35590;
	sub_82D33DB0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82c35584
	if (cr6.lt) goto loc_82C35584;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// clrlwi r28,r27,24
	ctx.r28.u64 = ctx.r27.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82C355C4;
	sub_82D1EBF8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82C355D4:
	// lwzu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C355E8;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C355FC;
	sub_82D2B608(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82c355d4
	if (!cr0.eq) goto loc_82C355D4;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82c35704
	if (cr6.gt) goto loc_82C35704;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c356dc
	if (cr6.eq) goto loc_82C356DC;
	// bdz 0x82c3562c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C3562C;
	// bdz 0x82c35634
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C35634;
	// b 0x82c3563c
	goto loc_82C3563C;
loc_82C3562C:
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82c356e0
	goto loc_82C356E0;
loc_82C35634:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82c356e0
	goto loc_82C356E0;
loc_82C3563C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82c35674
	if (!cr6.eq) goto loc_82C35674;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C35658;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C3566C;
	sub_82D2B608(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82c356e0
	goto loc_82C356E0;
loc_82C35674:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// bne cr6,0x82c356ac
	if (!cr6.eq) goto loc_82C356AC;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C35690;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C356A4;
	sub_82D2B608(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82c356e0
	goto loc_82C356E0;
loc_82C356AC:
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bne cr6,0x82c35704
	if (!cr6.eq) goto loc_82C35704;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C356C8;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C356DC;
	sub_82D2B608(ctx, base);
loc_82C356DC:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C356E0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C356F0;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C35704;
	sub_82D2B608(ctx, base);
loc_82C35704:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3570C"))) PPC_WEAK_FUNC(sub_82C3570C);
PPC_FUNC_IMPL(__imp__sub_82C3570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35710"))) PPC_WEAK_FUNC(sub_82C35710);
PPC_FUNC_IMPL(__imp__sub_82C35710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lbz r5,113(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 113);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82c35550
	sub_82C35550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35720"))) PPC_WEAK_FUNC(sub_82C35720);
PPC_FUNC_IMPL(__imp__sub_82C35720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f2,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x82d1ebf8
	sub_82D1EBF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35744"))) PPC_WEAK_FUNC(sub_82C35744);
PPC_FUNC_IMPL(__imp__sub_82C35744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35748"))) PPC_WEAK_FUNC(sub_82C35748);
PPC_FUNC_IMPL(__imp__sub_82C35748) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C35768;
	sub_831156E8(ctx, base);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r10,37444
	ctx.r9.u64 = ctx.r10.u64 | 37444;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x82c35794
	if (!cr6.eq) goto loc_82C35794;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x82c357dc
	goto loc_82C357DC;
loc_82C35794:
	// lis r9,5
	ctx.r9.s64 = 327680;
	// ori r8,r9,37445
	ctx.r8.u64 = ctx.r9.u64 | 37445;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82c357bc
	if (!cr6.eq) goto loc_82C357BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x82c357dc
	goto loc_82C357DC;
loc_82C357BC:
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82c357cc
	if (!cr6.eq) goto loc_82C357CC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82c357d8
	goto loc_82C357D8;
loc_82C357CC:
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82c357dc
	if (!cr6.eq) goto loc_82C357DC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82C357D8:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_82C357DC:
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

__attribute__((alias("__imp__sub_82C357F4"))) PPC_WEAK_FUNC(sub_82C357F4);
PPC_FUNC_IMPL(__imp__sub_82C357F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C357F8"))) PPC_WEAK_FUNC(sub_82C357F8);
PPC_FUNC_IMPL(__imp__sub_82C357F8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C35818;
	sub_831156E8(ctx, base);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r10,37444
	ctx.r9.u64 = ctx.r10.u64 | 37444;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bne cr6,0x82c35844
	if (!cr6.eq) goto loc_82C35844;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x82c35874
	goto loc_82C35874;
loc_82C35844:
	// lis r10,5
	ctx.r10.s64 = 327680;
	// ori r9,r10,37445
	ctx.r9.u64 = ctx.r10.u64 | 37445;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bne cr6,0x82c3586c
	if (!cr6.eq) goto loc_82C3586C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x82c35874
	goto loc_82C35874;
loc_82C3586C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_82C35874:
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

__attribute__((alias("__imp__sub_82C3588C"))) PPC_WEAK_FUNC(sub_82C3588C);
PPC_FUNC_IMPL(__imp__sub_82C3588C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35890"))) PPC_WEAK_FUNC(sub_82C35890);
PPC_FUNC_IMPL(__imp__sub_82C35890) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82c358c0
	if (!cr6.eq) goto loc_82C358C0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// b 0x82c358f4
	goto loc_82C358F4;
loc_82C358C0:
	// bl 0x831156e8
	ctx.lr = 0x82C358C4;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r9,35265
	ctx.r7.u64 = ctx.r9.u64 | 35265;
	// lbzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 ^ 1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
loc_82C358F4:
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

__attribute__((alias("__imp__sub_82C3590C"))) PPC_WEAK_FUNC(sub_82C3590C);
PPC_FUNC_IMPL(__imp__sub_82C3590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35910"))) PPC_WEAK_FUNC(sub_82C35910);
PPC_FUNC_IMPL(__imp__sub_82C35910) {
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
	// lbz r11,97(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 97);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c359e4
	if (!cr6.eq) goto loc_82C359E4;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-22208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82c35954
	if (!cr6.eq) goto loc_82C35954;
	// bl 0x8308e078
	ctx.lr = 0x82C35950;
	sub_8308E078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C35954:
	// bl 0x8308e078
	ctx.lr = 0x82C35958;
	sub_8308E078(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x82c359e4
	if (cr6.eq) goto loc_82C359E4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82C3596C;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c35990
	if (cr6.eq) goto loc_82C35990;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C35984;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c359e4
	if (!cr6.eq) goto loc_82C359E4;
loc_82C35990:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82b5ca98
	ctx.lr = 0x82C35998;
	sub_82B5CA98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c359b4
	if (!cr6.eq) goto loc_82C359B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C359B0;
	sub_82D17DA0(ctx, base);
	// b 0x82c359e4
	goto loc_82C359E4;
loc_82C359B4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,4098
	ctx.r8.u64 = ctx.r10.u64 | 4098;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103068
	ctx.lr = 0x82C359E4;
	sub_83103068(ctx, base);
loc_82C359E4:
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

__attribute__((alias("__imp__sub_82C359FC"))) PPC_WEAK_FUNC(sub_82C359FC);
PPC_FUNC_IMPL(__imp__sub_82C359FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35A00"))) PPC_WEAK_FUNC(sub_82C35A00);
PPC_FUNC_IMPL(__imp__sub_82C35A00) {
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
	// bl 0x8308e078
	ctx.lr = 0x82C35A20;
	sub_8308E078(ctx, base);
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c35a58
	if (!cr6.eq) goto loc_82C35A58;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-22208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82c35a4c
	if (!cr6.eq) goto loc_82C35A4C;
	// bl 0x8308e078
	ctx.lr = 0x82C35A4C;
	sub_8308E078(ctx, base);
loc_82C35A4C:
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x82c35a58
	if (!cr6.lt) goto loc_82C35A58;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C35A58:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82C35A7C"))) PPC_WEAK_FUNC(sub_82C35A7C);
PPC_FUNC_IMPL(__imp__sub_82C35A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35A80"))) PPC_WEAK_FUNC(sub_82C35A80);
PPC_FUNC_IMPL(__imp__sub_82C35A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C35A88;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82595718
	ctx.lr = 0x82C35AC4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c35af8
	if (cr6.eq) goto loc_82C35AF8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stb r24,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r24.u8);
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
	// bl 0x82c34e48
	ctx.lr = 0x82C35AF0;
	sub_82C34E48(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82C35AF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35B04"))) PPC_WEAK_FUNC(sub_82C35B04);
PPC_FUNC_IMPL(__imp__sub_82C35B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35B08"))) PPC_WEAK_FUNC(sub_82C35B08);
PPC_FUNC_IMPL(__imp__sub_82C35B08) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14144
	ctx.r9.s64 = ctx.r11.s64 + 14144;
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
	// bl 0x82d25548
	ctx.lr = 0x82C35B40;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c35b58
	if (cr6.eq) goto loc_82C35B58;
	// bl 0x82416268
	ctx.lr = 0x82C35B54;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C35B58:
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

__attribute__((alias("__imp__sub_82C35B70"))) PPC_WEAK_FUNC(sub_82C35B70);
PPC_FUNC_IMPL(__imp__sub_82C35B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C35B78;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x830ff290
	ctx.lr = 0x82C35B98;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C35B9C;
	sub_830FFAA8(ctx, base);
	// subf r11,r30,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r30.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// bl 0x831156e8
	ctx.lr = 0x82C35BB4;
	sub_831156E8(ctx, base);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r24,r25,24
	ctx.r24.u64 = ctx.r25.u32 & 0xFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// addis r25,r8,6
	ctx.r25.s64 = ctx.r8.s64 + 393216;
	// li r23,0
	ctx.r23.s64 = 0;
	// stb r7,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r7.u8);
	// li r22,2
	ctx.r22.s64 = 2;
	// addi r25,r25,-30316
	ctx.r25.s64 = ctx.r25.s64 + -30316;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82c35bf8
	if (cr6.eq) goto loc_82C35BF8;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c35bf8
	if (!cr6.eq) goto loc_82C35BF8;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c35c58
	if (!cr6.eq) goto loc_82C35C58;
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// b 0x82c35c58
	goto loc_82C35C58;
loc_82C35BF8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r11,45(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c35c14
	if (!cr6.eq) goto loc_82C35C14;
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// b 0x82c35c20
	goto loc_82C35C20;
loc_82C35C14:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82c35c20
	if (!cr6.eq) goto loc_82C35C20;
	// stb r22,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r22.u8);
loc_82C35C20:
	// lbz r11,69(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 69);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82c35c34
	if (!cr6.lt) goto loc_82C35C34;
	// stw r11,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r11.u32);
loc_82C35C34:
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82C35C3C;
	sub_831156E8(ctx, base);
	// lwz r10,104(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,690
	ctx.r3.s64 = ctx.r11.s64 + 690;
	// bl 0x8312a600
	ctx.lr = 0x82C35C54;
	sub_8312A600(ctx, base);
	// stb r3,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r3.u8);
loc_82C35C58:
	// addi r11,r28,-8
	ctx.r11.s64 = ctx.r28.s64 + -8;
	// li r28,4
	ctx.r28.s64 = 4;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82c35d94
	if (cr6.gt) goto loc_82C35D94;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c35d78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C35D78;
	// bdzf 4*cr6+eq,0x82c35d90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C35D90;
	// bdzf 4*cr6+eq,0x82c35c8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C35C8C;
	// bdzf 4*cr6+eq,0x82c35d38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C35D38;
	// bdzf 4*cr6+eq,0x82c35d90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C35D90;
	// bdzf 4*cr6+eq,0x82c35d78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C35D78;
	// bne cr6,0x82c35d90
	if (!cr6.eq) goto loc_82C35D90;
loc_82C35C8C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82c35cb4
	if (cr6.eq) goto loc_82C35CB4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r11,69(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82c35cb4
	if (!cr6.lt) goto loc_82C35CB4;
	// stw r11,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r11.u32);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
loc_82C35CB4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lbz r29,1(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c357f8
	ctx.lr = 0x82C35CCC;
	sub_82C357F8(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x82c35d94
	if (!cr6.eq) goto loc_82C35D94;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c35cf0
	if (!cr6.eq) goto loc_82C35CF0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82c35cfc
	goto loc_82C35CFC;
loc_82C35CF0:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82c35d00
	if (!cr6.eq) goto loc_82C35D00;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C35CFC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82C35D00:
	// stb r29,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r29.u8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c35d94
	if (cr6.eq) goto loc_82C35D94;
	// bl 0x831156e8
	ctx.lr = 0x82C35D10;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83124150
	ctx.lr = 0x82C35D24;
	sub_83124150(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82c35d94
	if (!cr6.eq) goto loc_82C35D94;
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// b 0x82c35d94
	goto loc_82C35D94;
loc_82C35D38:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82c35d60
	if (cr6.eq) goto loc_82C35D60;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r11,69(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82c35d60
	if (!cr6.lt) goto loc_82C35D60;
	// stw r11,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r11.u32);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
loc_82C35D60:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c35748
	ctx.lr = 0x82C35D74;
	sub_82C35748(ctx, base);
	// b 0x82c35d94
	goto loc_82C35D94;
loc_82C35D78:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c35890
	ctx.lr = 0x82C35D8C;
	sub_82C35890(ctx, base);
	// b 0x82c35d94
	goto loc_82C35D94;
loc_82C35D90:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82C35D94:
	// bl 0x830ff290
	ctx.lr = 0x82C35D98;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x82c35db4
	if (cr6.eq) goto loc_82C35DB4;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x82c35dd8
	if (cr6.eq) goto loc_82C35DD8;
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82c35e34
	if (!cr6.eq) goto loc_82C35E34;
loc_82C35DB4:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c35e20
	if (!cr6.eq) goto loc_82C35E20;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r11,45(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c35e14
	if (!cr6.eq) goto loc_82C35E14;
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// b 0x82c35e20
	goto loc_82C35E20;
loc_82C35DD8:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c35e0c
	if (!cr6.eq) goto loc_82C35E0C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r11,45(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c35e00
	if (!cr6.eq) goto loc_82C35E00;
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// b 0x82c35e34
	goto loc_82C35E34;
loc_82C35E00:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82c35e0c
	if (!cr6.eq) goto loc_82C35E0C;
	// stb r22,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r22.u8);
loc_82C35E0C:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// b 0x82c35e34
	goto loc_82C35E34;
loc_82C35E14:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82c35e20
	if (!cr6.eq) goto loc_82C35E20;
	// stb r22,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r22.u8);
loc_82C35E20:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c35890
	ctx.lr = 0x82C35E34;
	sub_82C35890(ctx, base);
loc_82C35E34:
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lbz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 116);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c35e68
	if (!cr6.eq) goto loc_82C35E68;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x82c35e68
	if (!cr6.eq) goto loc_82C35E68;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c35e68
	if (!cr6.eq) goto loc_82C35E68;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c35890
	ctx.lr = 0x82C35E68;
	sub_82C35890(ctx, base);
loc_82C35E68:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c35418
	ctx.lr = 0x82C35E7C;
	sub_82C35418(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35E84"))) PPC_WEAK_FUNC(sub_82C35E84);
PPC_FUNC_IMPL(__imp__sub_82C35E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35E88"))) PPC_WEAK_FUNC(sub_82C35E88);
PPC_FUNC_IMPL(__imp__sub_82C35E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C35E90;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C35EA0;
	sub_82D19A78(ctx, base);
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x82d33db0
	ctx.lr = 0x82C35EA8;
	sub_82D33DB0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r30,r11,13562
	ctx.r30.s64 = ctx.r11.s64 + 13562;
loc_82C35EBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C35EC8;
	sub_82D33DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,454
	ctx.r4.s64 = ctx.r30.s64 + 454;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C35EE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c35ef8
	if (cr6.eq) goto loc_82C35EF8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C35EF8;
	sub_82D2AEC8(ctx, base);
loc_82C35EF8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82c35ebc
	if (cr6.lt) goto loc_82C35EBC;
	// lwz r4,108(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x82c36018
	if (cr6.eq) goto loc_82C36018;
	// lbz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c35f28
	if (!cr6.eq) goto loc_82C35F28;
	// lbz r11,121(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 121);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c36018
	if (cr6.eq) goto loc_82C36018;
loc_82C35F28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C35F30;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c36018
	if (cr6.eq) goto loc_82C36018;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,474
	ctx.r4.s64 = ctx.r30.s64 + 474;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C35F50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,32
	cr6.compare<uint32_t>(ctx.r27.u32, 32, xer);
	// bge cr6,0x82c36018
	if (!cr6.lt) goto loc_82C36018;
	// bl 0x831156e8
	ctx.lr = 0x82C35F60;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r27,2800
	ctx.r10.s64 = ctx.r27.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C35F78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82c35f9c
	if (cr6.eq) goto loc_82C35F9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c35f78
	if (cr6.eq) goto loc_82C35F78;
loc_82C35F9C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82c35fe4
	if (!cr6.eq) goto loc_82C35FE4;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r5,r27,1
	ctx.r5.s64 = ctx.r27.s64 + 1;
	// ori r4,r4,308
	ctx.r4.u64 = ctx.r4.u64 | 308;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82C35FC8;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C35FDC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82c36004
	goto loc_82C36004;
loc_82C35FE4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C35FEC;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C36000;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_82C36004:
	// bl 0x8387e8e0
	ctx.lr = 0x82C36008;
	sub_8387E8E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C36018;
	sub_82D2AEC8(ctx, base);
loc_82C36018:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36020"))) PPC_WEAK_FUNC(sub_82C36020);
PPC_FUNC_IMPL(__imp__sub_82C36020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C36028;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C36034;
	sub_82D19BA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C36040;
	sub_82D19BB0(ctx, base);
	// lbz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 120);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82c360a0
	if (cr6.eq) goto loc_82C360A0;
	// bl 0x82d19840
	ctx.lr = 0x82C3605C;
	sub_82D19840(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c360a8
	if (!cr6.eq) goto loc_82C360A8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c36088
	if (!cr6.eq) goto loc_82C36088;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// beq cr6,0x82c360a8
	if (cr6.eq) goto loc_82C360A8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82c360a4
	goto loc_82C360A4;
loc_82C36088:
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82c360a8
	if (!cr6.eq) goto loc_82C360A8;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x82c360a8
	if (!cr6.eq) goto loc_82C360A8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82C360A0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82C360A4:
	// bl 0x82d19788
	ctx.lr = 0x82C360A8;
	sub_82D19788(ctx, base);
loc_82C360A8:
	// lbz r11,121(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 121);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c36104
	if (cr6.eq) goto loc_82C36104;
	// bl 0x82d19840
	ctx.lr = 0x82C360C0;
	sub_82D19840(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c3611c
	if (!cr6.eq) goto loc_82C3611C;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// beq cr6,0x82c360f4
	if (cr6.eq) goto loc_82C360F4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3611c
	if (!cr6.eq) goto loc_82C3611C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C360EC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82c36110
	goto loc_82C36110;
loc_82C360F4:
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82c3611c
	if (!cr6.eq) goto loc_82C3611C;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82C36104:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82C3610C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82C36110:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3611C;
	sub_82D19788(ctx, base);
loc_82C3611C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x82c35e88
	ctx.lr = 0x82C36128;
	sub_82C35E88(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82c36398
	if (cr6.lt) goto loc_82C36398;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c34d30
	ctx.lr = 0x82C36150;
	sub_82C34D30(ctx, base);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82c36398
	if (cr6.eq) goto loc_82C36398;
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82c36398
	if (cr6.eq) goto loc_82C36398;
	// lbz r11,113(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 113);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82c36398
	if (cr6.eq) goto loc_82C36398;
	// lwz r31,44(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stb r26,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r26.u8);
	// bne cr6,0x82c361e4
	if (!cr6.eq) goto loc_82C361E4;
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c361b8
	if (cr6.eq) goto loc_82C361B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5cda8
	ctx.lr = 0x82C361AC;
	sub_82B5CDA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c362c8
	if (!cr6.eq) goto loc_82C362C8;
loc_82C361B8:
	// lbz r11,113(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 113);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c362c8
	if (!cr6.eq) goto loc_82C362C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5cbe0
	ctx.lr = 0x82C361D0;
	sub_82B5CBE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c362c8
	if (!cr6.eq) goto loc_82C362C8;
	// stb r26,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r26.u8);
	// b 0x82c362c8
	goto loc_82C362C8;
loc_82C361E4:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bne cr6,0x82c36240
	if (!cr6.eq) goto loc_82C36240;
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c36214
	if (cr6.eq) goto loc_82C36214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5cda8
	ctx.lr = 0x82C36208;
	sub_82B5CDA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c362c8
	if (!cr6.eq) goto loc_82C362C8;
loc_82C36214:
	// lbz r11,113(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 113);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c362c8
	if (!cr6.eq) goto loc_82C362C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5cbe0
	ctx.lr = 0x82C3622C;
	sub_82B5CBE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c362c8
	if (!cr6.eq) goto loc_82C362C8;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// b 0x82c362c8
	goto loc_82C362C8;
loc_82C36240:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82c36250
	if (cr6.eq) goto loc_82C36250;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
loc_82C36250:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82c36260
	if (cr6.eq) goto loc_82C36260;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
loc_82C36260:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c36280
	if (cr6.eq) goto loc_82C36280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5cda8
	ctx.lr = 0x82C36274;
	sub_82B5CDA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c362c8
	if (!cr6.eq) goto loc_82C362C8;
loc_82C36280:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5cbe0
	ctx.lr = 0x82C3628C;
	sub_82B5CBE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 & ctx.r29.u64;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x82b5cbe0
	ctx.lr = 0x82C362B0;
	sub_82B5CBE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r7,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r11.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 & ctx.r30.u64;
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
loc_82C362C8:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82C362CC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bne cr6,0x82c362dc
	if (!cr6.eq) goto loc_82C362DC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C362DC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c36308
	if (cr6.eq) goto loc_82C36308;
	// bl 0x82d2aff8
	ctx.lr = 0x82C362F4;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c36328
	if (!cr6.eq) goto loc_82C36328;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c3631c
	goto loc_82C3631C;
loc_82C36308:
	// bl 0x82d2aff8
	ctx.lr = 0x82C3630C;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c36328
	if (!cr6.eq) goto loc_82C36328;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C3631C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C36328;
	sub_82D2AEC8(ctx, base);
loc_82C36328:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82c362cc
	if (cr6.lt) goto loc_82C362CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19638
	ctx.lr = 0x82C3633C;
	sub_82D19638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82C36344;
	sub_8308E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C36350;
	sub_82D19A78(ctx, base);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x82c36380
	if (!cr6.eq) goto loc_82C36380;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r9,14000
	ctx.r11.s64 = ctx.r9.s64 + 14000;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C36378;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82C36380:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C36398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C36398:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C363A0"))) PPC_WEAK_FUNC(sub_82C363A0);
PPC_FUNC_IMPL(__imp__sub_82C363A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C363A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r4,-17300(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17300);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C363D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c363d4
	if (!cr6.eq) goto loc_82C363D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C363F8;
	sub_8259CC28(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C3640C;
	sub_8259CB28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c3642c
	if (cr6.lt) goto loc_82C3642C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C3642C;
	sub_825952B8(ctx, base);
loc_82C3642C:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82d19638
	ctx.lr = 0x82C36440;
	sub_82D19638(ctx, base);
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ori r8,r11,52429
	ctx.r8.u64 = ctx.r11.u64 | 52429;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulhwu r7,r9,r8
	ctx.r7.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r5,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82C36474;
	sub_82B142A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3647C"))) PPC_WEAK_FUNC(sub_82C3647C);
PPC_FUNC_IMPL(__imp__sub_82C3647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C36480"))) PPC_WEAK_FUNC(sub_82C36480);
PPC_FUNC_IMPL(__imp__sub_82C36480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C36488;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C36494;
	sub_82D19A78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C364A0;
	sub_82D19A78(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82C364A4;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x82C364B8;
	sub_83545640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19730
	ctx.lr = 0x82C364C4;
	sub_82D19730(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r28,r11,-17296
	ctx.r28.s64 = ctx.r11.s64 + -17296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,-8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// bl 0x82d19b10
	ctx.lr = 0x82C364DC;
	sub_82D19B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82C364E4;
	sub_82D19638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82C364EC;
	sub_8308E078(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// addi r22,r11,13968
	ctx.r22.s64 = ctx.r11.s64 + 13968;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r22,-28
	ctx.r4.s64 = ctx.r22.s64 + -28;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82C3651C;
	sub_8259CC28(ctx, base);
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r9,r10,52429
	ctx.r9.u64 = ctx.r10.u64 | 52429;
	// mulhwu r8,r30,r9
	ctx.r8.u64 = (uint64_t(ctx.r30.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r8,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r6,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r6.s64;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82C3654C;
	sub_82B142A0(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bge cr6,0x82c36560
	if (!cr6.lt) goto loc_82C36560;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82C36560:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C36578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r31,113
	ctx.r24.s64 = ctx.r31.s64 + 113;
	// bl 0x82d199f0
	ctx.lr = 0x82C36584;
	sub_82D199F0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lbz r7,97(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c35b70
	ctx.lr = 0x82C365A0;
	sub_82C35B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C365A8;
	sub_82D199F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c36604
	if (cr6.eq) goto loc_82C36604;
	// bl 0x8311e3d0
	ctx.lr = 0x82C365B8;
	sub_8311E3D0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c36604
	if (cr6.eq) goto loc_82C36604;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// bl 0x82c363a0
	ctx.lr = 0x82C365DC;
	sub_82C363A0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8311dba8
	ctx.lr = 0x82C365EC;
	sub_8311DBA8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82c365fc
	if (!cr6.lt) goto loc_82C365FC;
	// stb r11,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r11.u8);
loc_82C365FC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82C36604;
	sub_8387E8E0(ctx, base);
loc_82C36604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// lbz r4,114(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// bl 0x82c35550
	ctx.lr = 0x82C36614;
	sub_82C35550(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8353b168
	ctx.lr = 0x82C36620;
	sub_8353B168(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c36654
	if (!cr6.eq) goto loc_82C36654;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C36638;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c34f08
	ctx.lr = 0x82C36640;
	sub_82C34F08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C36650;
	sub_82D19788(ctx, base);
	// b 0x82c36790
	goto loc_82C36790;
loc_82C36654:
	// stb r27,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r27.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C36674;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,121(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 121);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82c366a0
	if (!cr6.eq) goto loc_82C366A0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C36690;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C366A0;
	sub_82D19788(ctx, base);
loc_82C366A0:
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c366c8
	if (!cr6.eq) goto loc_82C366C8;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82c366c8
	if (cr6.eq) goto loc_82C366C8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C366C8;
	sub_82D19788(ctx, base);
loc_82C366C8:
	// cmplw cr6,r30,r23
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, xer);
	// beq cr6,0x82c366dc
	if (cr6.eq) goto loc_82C366DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82c36724
	goto loc_82C36724;
loc_82C366DC:
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c366f8
	if (!cr6.eq) goto loc_82C366F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C366F8;
	sub_82D19788(ctx, base);
loc_82C366F8:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82b5cda8
	ctx.lr = 0x82C36700;
	sub_82B5CDA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c3672c
	if (!cr6.eq) goto loc_82C3672C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3671C;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
loc_82C36724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3672C;
	sub_82D19788(ctx, base);
loc_82C3672C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c35a00
	ctx.lr = 0x82C36738;
	sub_82C35A00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c36754
	if (!cr6.eq) goto loc_82C36754;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C36754;
	sub_82D19788(ctx, base);
loc_82C36754:
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c367a0
	if (cr6.eq) goto loc_82C367A0;
	// bl 0x830ff290
	ctx.lr = 0x82C36764;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x82c36790
	if (cr6.eq) goto loc_82C36790;
	// bl 0x830ff290
	ctx.lr = 0x82C36774;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x82c36790
	if (cr6.eq) goto loc_82C36790;
	// bl 0x830ff290
	ctx.lr = 0x82C36784;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82c367a0
	if (!cr6.eq) goto loc_82C367A0;
loc_82C36790:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C367A0;
	sub_82D19788(ctx, base);
loc_82C367A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82c35e88
	ctx.lr = 0x82C367AC;
	sub_82C35E88(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r4,114(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x82c34d30
	ctx.lr = 0x82C367C8;
	sub_82C34D30(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c367e0
	if (cr6.eq) goto loc_82C367E0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C367E0;
	sub_82D2AEC8(ctx, base);
loc_82C367E0:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c367f8
	if (cr6.eq) goto loc_82C367F8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C367F8;
	sub_82D2AEC8(ctx, base);
loc_82C367F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r30,r23
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r22,-16
	ctx.r4.s64 = ctx.r22.s64 + -16;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82c3681c
	if (cr6.eq) goto loc_82C3681C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82C3681C:
	// bctrl 
	ctx.lr = 0x82C36820;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199b0
	ctx.lr = 0x82C3682C;
	sub_82D199B0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stb r27,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r27.u8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c36850
	if (cr6.lt) goto loc_82C36850;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C36850;
	sub_825952B8(ctx, base);
loc_82C36850:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3685C"))) PPC_WEAK_FUNC(sub_82C3685C);
PPC_FUNC_IMPL(__imp__sub_82C3685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C36860"))) PPC_WEAK_FUNC(sub_82C36860);
PPC_FUNC_IMPL(__imp__sub_82C36860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82C36868;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C36878;
	sub_82D19A78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x82C36884;
	sub_82D19638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82C3688C;
	sub_8308E078(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r21,44(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82C368A0;
	sub_8353B168(ctx, base);
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r24,1
	ctx.r24.s64 = 1;
	// lis r22,-31776
	ctx.r22.s64 = -2082471936;
	// ori r23,r9,4101
	ctx.r23.u64 = ctx.r9.u64 | 4101;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r28,r11,21716
	ctx.r28.s64 = ctx.r11.s64 + 21716;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c36aac
	if (!cr6.eq) goto loc_82C36AAC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c36aac
	if (cr6.eq) goto loc_82C36AAC;
	// stb r24,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r24.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C368EC;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-17296(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17296);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C36908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C36918;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C36928;
	sub_82D19788(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c35a00
	ctx.lr = 0x82C36934;
	sub_82C35A00(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c36950
	if (cr6.eq) goto loc_82C36950;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C36950;
	sub_82D19788(ctx, base);
loc_82C36950:
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3699c
	if (cr6.eq) goto loc_82C3699C;
	// bl 0x830ff290
	ctx.lr = 0x82C36960;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x82c3698c
	if (cr6.eq) goto loc_82C3698C;
	// bl 0x830ff290
	ctx.lr = 0x82C36970;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x82c3698c
	if (cr6.eq) goto loc_82C3698C;
	// bl 0x830ff290
	ctx.lr = 0x82C36980;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82c3699c
	if (!cr6.eq) goto loc_82C3699C;
loc_82C3698C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3699C;
	sub_82D19788(ctx, base);
loc_82C3699C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82c36a70
	if (!cr6.eq) goto loc_82C36A70;
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c369c8
	if (cr6.eq) goto loc_82C369C8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C369C8;
	sub_82D19788(ctx, base);
loc_82C369C8:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c36a00
	if (cr6.eq) goto loc_82C36A00;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82c36a00
	if (cr6.eq) goto loc_82C36A00;
	// stw r25,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82b5cbe0
	ctx.lr = 0x82C369EC;
	sub_82B5CBE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c36a00
	if (!cr6.eq) goto loc_82C36A00;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_82C36A00:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
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
	ctx.lr = 0x82C36A1C;
	sub_82D1EBF8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82b5cda8
	ctx.lr = 0x82C36A24;
	sub_82B5CDA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c36a70
	if (!cr6.eq) goto loc_82C36A70;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C36A40;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C36A50;
	sub_82D19788(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r25,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r25.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x83103068
	ctx.lr = 0x82C36A6C;
	sub_83103068(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
loc_82C36A70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c34db0
	ctx.lr = 0x82C36A78;
	sub_82C34DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x82c36aa0
	if (!cr6.eq) goto loc_82C36AA0;
	// stw r24,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r24.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82c36aa4
	goto loc_82C36AA4;
loc_82C36AA0:
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
loc_82C36AA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82C36AAC;
	sub_82D1EBF8(ctx, base);
loc_82C36AAC:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c36b0c
	if (cr6.eq) goto loc_82C36B0C;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x82c36b0c
	if (!cr6.eq) goto loc_82C36B0C;
	// stb r25,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r25.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C36AD4;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c34f08
	ctx.lr = 0x82C36ADC;
	sub_82C34F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17ea0
	ctx.lr = 0x82C36AE4;
	sub_82D17EA0(ctx, base);
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c36b0c
	if (!cr6.eq) goto loc_82C36B0C;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stb r25,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r25.u8);
	// bl 0x83103068
	ctx.lr = 0x82C36B08;
	sub_83103068(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
loc_82C36B0C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c36b24
	if (!cr6.eq) goto loc_82C36B24;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82b5d1a0
	ctx.lr = 0x82C36B20;
	sub_82B5D1A0(ctx, base);
	// stb r24,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r24.u8);
loc_82C36B24:
	// lbz r11,118(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 118);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c36bb0
	if (!cr6.eq) goto loc_82C36BB0;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// stb r25,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r25.u8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c36bb0
	if (!cr6.eq) goto loc_82C36BB0;
	// lbz r11,117(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c36b78
	if (!cr6.eq) goto loc_82C36B78;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x82C36B58;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c34f08
	ctx.lr = 0x82C36B60;
	sub_82C34F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17ea0
	ctx.lr = 0x82C36B68;
	sub_82D17EA0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r5,4
	ctx.r5.s64 = 4;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82c36ba8
	goto loc_82C36BA8;
loc_82C36B78:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83102db0
	ctx.lr = 0x82C36B80;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-17296(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17296);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C36B9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lbz r5,113(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
loc_82C36BA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c35550
	ctx.lr = 0x82C36BB0;
	sub_82C35550(ctx, base);
loc_82C36BB0:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82c36bc0
	if (cr6.eq) goto loc_82C36BC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c36020
	ctx.lr = 0x82C36BC0;
	sub_82C36020(ctx, base);
loc_82C36BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36BD0"))) PPC_WEAK_FUNC(sub_82C36BD0);
PPC_FUNC_IMPL(__imp__sub_82C36BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C36BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x82C36BE4;
	sub_8311E3D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c36c4c
	if (cr6.eq) goto loc_82C36C4C;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82c363a0
	ctx.lr = 0x82C36C10;
	sub_82C363A0(ctx, base);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x8311e538
	ctx.lr = 0x82C36C2C;
	sub_8311E538(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82c36c4c
	if (cr6.lt) goto loc_82C36C4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C36C4C;
	sub_825952B8(ctx, base);
loc_82C36C4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36C54"))) PPC_WEAK_FUNC(sub_82C36C54);
PPC_FUNC_IMPL(__imp__sub_82C36C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C36C58"))) PPC_WEAK_FUNC(sub_82C36C58);
PPC_FUNC_IMPL(__imp__sub_82C36C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C36C60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c36dcc
	if (cr6.eq) goto loc_82C36DCC;
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c36dcc
	if (cr6.eq) goto loc_82C36DCC;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r28,999
	cr6.compare<uint32_t>(ctx.r28.u32, 999, xer);
	// ble cr6,0x82c36cb4
	if (!cr6.gt) goto loc_82C36CB4;
	// li r28,999
	ctx.r28.s64 = 999;
loc_82C36CB4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82c36cc4
	if (!cr6.gt) goto loc_82C36CC4;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82c36cd8
	goto loc_82C36CD8;
loc_82C36CC4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_82C36CD8:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,-17136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c36d0c
	if (cr6.eq) goto loc_82C36D0C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C36CFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c36d0c
	if (cr6.eq) goto loc_82C36D0C;
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C36D0C;
	sub_82D294D0(ctx, base);
loc_82C36D0C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,-17140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17140);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c36d40
	if (cr6.eq) goto loc_82C36D40;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C36D30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c36d40
	if (cr6.eq) goto loc_82C36D40;
	// clrldi r4,r29,32
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C36D40;
	sub_82D294D0(ctx, base);
loc_82C36D40:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82c36d7c
	if (cr6.eq) goto loc_82C36D7C;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,-17132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17132);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c36d7c
	if (cr6.eq) goto loc_82C36D7C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C36D6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c36d7c
	if (cr6.eq) goto loc_82C36D7C;
	// clrldi r4,r28,32
	ctx.r4.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C36D7C;
	sub_82D294D0(ctx, base);
loc_82C36D7C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-17156(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17156);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C36D98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,-17156(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d3a058
	ctx.lr = 0x82C36DA4;
	sub_82D3A058(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-17152
	ctx.r7.s64 = ctx.r9.s64 + -17152;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C36DCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C36DCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36DD4"))) PPC_WEAK_FUNC(sub_82C36DD4);
PPC_FUNC_IMPL(__imp__sub_82C36DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C36DD8"))) PPC_WEAK_FUNC(sub_82C36DD8);
PPC_FUNC_IMPL(__imp__sub_82C36DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C36DE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82C36DF4;
	sub_82D253F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,15424
	ctx.r9.s64 = ctx.r11.s64 + 15424;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,-17000
	ctx.r29.s64 = ctx.r30.s64 + -17000;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82C36E20;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82C36E2C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-17000(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17000);
	// bl 0x82d23390
	ctx.lr = 0x82C36E3C;
	sub_82D23390(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x82C36E40;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82C36E44;
	sub_83524138(ctx, base);
	// std r3,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

