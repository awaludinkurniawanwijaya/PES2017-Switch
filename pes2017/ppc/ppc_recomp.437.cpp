#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8379EED8"))) PPC_WEAK_FUNC(sub_8379EED8);
PPC_FUNC_IMPL(__imp__sub_8379EED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// lfs f13,-25156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25156);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,74(r3)
	PPC_STORE_U8(ctx.r3.u32 + 74, ctx.r11.u8);
	// stb r11,75(r3)
	PPC_STORE_U8(ctx.r3.u32 + 75, ctx.r11.u8);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r11.u8);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// bgt cr6,0x8379efc8
	if (cr6.gt) goto loc_8379EFC8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8379ef98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8379EF98;
	// bdzf 4*cr6+eq,0x8379efa4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8379EFA4;
	// bdzf 4*cr6+eq,0x8379efb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8379EFB0;
	// bne cr6,0x8379efbc
	if (!cr6.eq) goto loc_8379EFBC;
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// blr 
	return;
loc_8379EF98:
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// blr 
	return;
loc_8379EFA4:
	// li r11,9
	ctx.r11.s64 = 9;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// blr 
	return;
loc_8379EFB0:
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// blr 
	return;
loc_8379EFBC:
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// blr 
	return;
loc_8379EFC8:
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379EFD4"))) PPC_WEAK_FUNC(sub_8379EFD4);
PPC_FUNC_IMPL(__imp__sub_8379EFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379EFD8"))) PPC_WEAK_FUNC(sub_8379EFD8);
PPC_FUNC_IMPL(__imp__sub_8379EFD8) {
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
	// bl 0x8378cba8
	ctx.lr = 0x8379EFF4;
	sub_8378CBA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8379f02c
	if (cr6.eq) goto loc_8379F02C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379f018
	if (cr6.eq) goto loc_8379F018;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8378d2e8
	ctx.lr = 0x8379F018;
	sub_8378D2E8(ctx, base);
loc_8379F018:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8378d268
	ctx.lr = 0x8379F02C;
	sub_8378D268(ctx, base);
loc_8379F02C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F044"))) PPC_WEAK_FUNC(sub_8379F044);
PPC_FUNC_IMPL(__imp__sub_8379F044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F048"))) PPC_WEAK_FUNC(sub_8379F048);
PPC_FUNC_IMPL(__imp__sub_8379F048) {
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
	// bl 0x837ad918
	ctx.lr = 0x8379F058;
	sub_837AD918(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8378cba8
	ctx.lr = 0x8379F064;
	sub_8378CBA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83799a40
	ctx.lr = 0x8379F06C;
	sub_83799A40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F07C"))) PPC_WEAK_FUNC(sub_8379F07C);
PPC_FUNC_IMPL(__imp__sub_8379F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F080"))) PPC_WEAK_FUNC(sub_8379F080);
PPC_FUNC_IMPL(__imp__sub_8379F080) {
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
	// bl 0x8378cba8
	ctx.lr = 0x8379F09C;
	sub_8378CBA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8379f0d4
	if (cr6.eq) goto loc_8379F0D4;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379f0c0
	if (cr6.eq) goto loc_8379F0C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8378d2e8
	ctx.lr = 0x8379F0C0;
	sub_8378D2E8(ctx, base);
loc_8379F0C0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d268
	ctx.lr = 0x8379F0D4;
	sub_8378D268(ctx, base);
loc_8379F0D4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379f0e4
	if (cr6.eq) goto loc_8379F0E4;
	// bl 0x837ad950
	ctx.lr = 0x8379F0E4;
	sub_837AD950(ctx, base);
loc_8379F0E4:
	// bl 0x8378cba8
	ctx.lr = 0x8379F0E8;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8379f100
	if (cr6.eq) goto loc_8379F100;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8378d268
	ctx.lr = 0x8379F100;
	sub_8378D268(ctx, base);
loc_8379F100:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F118"))) PPC_WEAK_FUNC(sub_8379F118);
PPC_FUNC_IMPL(__imp__sub_8379F118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x8379F120;
	__savegprlr_16(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
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
	// bl 0x8378d158
	ctx.lr = 0x8379F14C;
	sub_8378D158(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lbz r10,479(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 479);
	// lbz r9,487(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 487);
	// lbz r8,495(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 495);
	// lwz r7,524(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// lbz r6,503(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 503);
	// lbz r5,511(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 511);
	// lbz r4,519(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 519);
	// lwz r3,532(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r23,540(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r22,548(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r21,468(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lbz r20,591(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 591);
	// lwz r19,556(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r18,564(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r17,572(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r16,580(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,140(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwimi r30,r31,0,0,13
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFC0000) | (ctx.r30.u64 & 0xFFFFFFFF0003FFFF);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// rlwimi r29,r28,0,0,13
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xFFFC0000) | (ctx.r29.u64 & 0xFFFFFFFF0003FFFF);
	// stb r10,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r10.u8);
	// rlwimi r30,r31,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stb r9,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r9.u8);
	// rlwimi r29,r28,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stb r8,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r8.u8);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stb r6,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r6.u8);
	// stb r5,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r5.u8);
	// stb r4,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r4.u8);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// stb r25,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r25.u8);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// stb r20,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r20.u8);
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r18.u32);
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r16,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// bl 0x8378cba8
	ctx.lr = 0x8379F214;
	sub_8378CBA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83799a10
	ctx.lr = 0x8379F21C;
	sub_83799A10(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8379F224"))) PPC_WEAK_FUNC(sub_8379F224);
PPC_FUNC_IMPL(__imp__sub_8379F224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F228"))) PPC_WEAK_FUNC(sub_8379F228);
PPC_FUNC_IMPL(__imp__sub_8379F228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8379F230;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8378cba8
	ctx.lr = 0x8379F244;
	sub_8378CBA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d158
	ctx.lr = 0x8379F250;
	sub_8378D158(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8379f2e0
	if (cr6.eq) goto loc_8379F2E0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378fc88
	ctx.lr = 0x8379F268;
	sub_8378FC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379f2e0
	if (cr6.eq) goto loc_8379F2E0;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// subfc r8,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// and r8,r5,r31
	ctx.r8.u64 = ctx.r5.u64 & ctx.r31.u64;
	// lwz r11,-28780(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28780);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// rlwinm r9,r8,0,24,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// srawi r31,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r7.s32 >> 1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addze r8,r31
	temp.s64 = ctx.r31.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r8.s64 = temp.s64;
	// rlwimi r5,r10,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r11,r5,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// subf r8,r10,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r28.u32);
	// bl 0x8378fc80
	ctx.lr = 0x8379F2E0;
	sub_8378FC80(ctx, base);
loc_8379F2E0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8379F2E8"))) PPC_WEAK_FUNC(sub_8379F2E8);
PPC_FUNC_IMPL(__imp__sub_8379F2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8379F2F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x8378cba8
	ctx.lr = 0x8379F318;
	sub_8378CBA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d158
	ctx.lr = 0x8379F324;
	sub_8378D158(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8379f404
	if (cr6.eq) goto loc_8379F404;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378fc88
	ctx.lr = 0x8379F33C;
	sub_8378FC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379f404
	if (cr6.eq) goto loc_8379F404;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// rlwimi r11,r28,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// rlwimi r10,r31,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r11,r28,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x8379f384
	if (!cr6.eq) goto loc_8379F384;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x8379f390
	goto loc_8379F390;
loc_8379F384:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8379F390:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,423(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 423);
	// addi r9,r1,172
	ctx.r9.s64 = ctx.r1.s64 + 172;
	// lbz r8,431(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 431);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r6,436(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// mulli r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 * 28;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// addi r31,r1,125
	ctx.r31.s64 = ctx.r1.s64 + 125;
	// stwx r25,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r25.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r29,r1,126
	ctx.r29.s64 = ctx.r1.s64 + 126;
	// li r28,1
	ctx.r28.s64 = 1;
	// stwx r26,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r26.u32);
	// stbx r24,r5,r7
	PPC_STORE_U8(ctx.r5.u32 + ctx.r7.u32, ctx.r24.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stbx r28,r5,r3
	PPC_STORE_U8(ctx.r5.u32 + ctx.r3.u32, ctx.r28.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r10,r5,r31
	PPC_STORE_U8(ctx.r5.u32 + ctx.r31.u32, ctx.r10.u8);
	// stbx r8,r5,r29
	PPC_STORE_U8(ctx.r5.u32 + ctx.r29.u32, ctx.r8.u8);
	// stwx r6,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r6.u32);
	// bl 0x8378fc80
	ctx.lr = 0x8379F3F4;
	sub_8378FC80(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d2e8
	ctx.lr = 0x8379F404;
	sub_8378D2E8(ctx, base);
loc_8379F404:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8379F40C"))) PPC_WEAK_FUNC(sub_8379F40C);
PPC_FUNC_IMPL(__imp__sub_8379F40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F410"))) PPC_WEAK_FUNC(sub_8379F410);
PPC_FUNC_IMPL(__imp__sub_8379F410) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,327(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 327);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r31.u8);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stb r30,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r30.u8);
	// stb r31,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r31.u8);
	// stb r31,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r31.u8);
	// stb r31,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r31.u8);
	// stb r31,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r31.u8);
	// bl 0x8379f118
	ctx.lr = 0x8379F474;
	sub_8379F118(ctx, base);
	// bl 0x837ad918
	ctx.lr = 0x8379F478;
	sub_837AD918(ctx, base);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// bl 0x8378cba8
	ctx.lr = 0x8379F480;
	sub_8378CBA8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x83799a40
	ctx.lr = 0x8379F488;
	sub_83799A40(ctx, base);
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
}

__attribute__((alias("__imp__sub_8379F4A0"))) PPC_WEAK_FUNC(sub_8379F4A0);
PPC_FUNC_IMPL(__imp__sub_8379F4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8379F4A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8379F4CC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8379f5c8
	if (cr6.eq) goto loc_8379F5C8;
	// bl 0x833c9398
	ctx.lr = 0x8379F4D8;
	sub_833C9398(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8379f5c8
	if (cr6.eq) goto loc_8379F5C8;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// beq cr6,0x8379f58c
	if (cr6.eq) goto loc_8379F58C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,-32224
	ctx.r26.s64 = ctx.r11.s64 + -32224;
loc_8379F4FC:
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8379F510;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8379f598
	if (cr6.eq) goto loc_8379F598;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x82923710
	ctx.lr = 0x8379F544;
	sub_82923710(ctx, base);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825749e0
	ctx.lr = 0x8379F550;
	sub_825749E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833c9420
	ctx.lr = 0x8379F55C;
	sub_833C9420(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82574b18
	ctx.lr = 0x8379F564;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8379f580
	if (cr6.gt) goto loc_8379F580;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8379F580;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8379F580:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r24
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, xer);
	// blt cr6,0x8379f4fc
	if (cr6.lt) goto loc_8379F4FC;
loc_8379F58C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8379F598:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595150
	ctx.lr = 0x8379F5A8;
	sub_82595150(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8379F5C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595170
	ctx.lr = 0x8379F5C8;
	sub_82595170(ctx, base);
loc_8379F5C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8379F5D4"))) PPC_WEAK_FUNC(sub_8379F5D4);
PPC_FUNC_IMPL(__imp__sub_8379F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F5D8"))) PPC_WEAK_FUNC(sub_8379F5D8);
PPC_FUNC_IMPL(__imp__sub_8379F5D8) {
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
	// bl 0x834ff4d8
	ctx.lr = 0x8379F5E8;
	sub_834FF4D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8257fad0
	ctx.lr = 0x8379F5F8;
	sub_8257FAD0(ctx, base);
	// bl 0x82486828
	ctx.lr = 0x8379F5FC;
	sub_82486828(ctx, base);
	// bl 0x834ff4d8
	ctx.lr = 0x8379F600;
	sub_834FF4D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8257fb60
	ctx.lr = 0x8379F610;
	sub_8257FB60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F620"))) PPC_WEAK_FUNC(sub_8379F620);
PPC_FUNC_IMPL(__imp__sub_8379F620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stb r3,-14644(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14644, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F62C"))) PPC_WEAK_FUNC(sub_8379F62C);
PPC_FUNC_IMPL(__imp__sub_8379F62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F630"))) PPC_WEAK_FUNC(sub_8379F630);
PPC_FUNC_IMPL(__imp__sub_8379F630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lbz r3,-14644(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14644);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F63C"))) PPC_WEAK_FUNC(sub_8379F63C);
PPC_FUNC_IMPL(__imp__sub_8379F63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F640"))) PPC_WEAK_FUNC(sub_8379F640);
PPC_FUNC_IMPL(__imp__sub_8379F640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lbz r3,-14642(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14642);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F64C"))) PPC_WEAK_FUNC(sub_8379F64C);
PPC_FUNC_IMPL(__imp__sub_8379F64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F650"))) PPC_WEAK_FUNC(sub_8379F650);
PPC_FUNC_IMPL(__imp__sub_8379F650) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-14642(r10)
	PPC_STORE_U8(ctx.r10.u32 + -14642, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F660"))) PPC_WEAK_FUNC(sub_8379F660);
PPC_FUNC_IMPL(__imp__sub_8379F660) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-14642(r10)
	PPC_STORE_U8(ctx.r10.u32 + -14642, ctx.r11.u8);
	// stb r3,-14641(r9)
	PPC_STORE_U8(ctx.r9.u32 + -14641, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F678"))) PPC_WEAK_FUNC(sub_8379F678);
PPC_FUNC_IMPL(__imp__sub_8379F678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lbz r3,-14641(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14641);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F684"))) PPC_WEAK_FUNC(sub_8379F684);
PPC_FUNC_IMPL(__imp__sub_8379F684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F688"))) PPC_WEAK_FUNC(sub_8379F688);
PPC_FUNC_IMPL(__imp__sub_8379F688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stb r3,-14643(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14643, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F694"))) PPC_WEAK_FUNC(sub_8379F694);
PPC_FUNC_IMPL(__imp__sub_8379F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F698"))) PPC_WEAK_FUNC(sub_8379F698);
PPC_FUNC_IMPL(__imp__sub_8379F698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lbz r3,-14643(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14643);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F6A4"))) PPC_WEAK_FUNC(sub_8379F6A4);
PPC_FUNC_IMPL(__imp__sub_8379F6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F6A8"))) PPC_WEAK_FUNC(sub_8379F6A8);
PPC_FUNC_IMPL(__imp__sub_8379F6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stb r3,-14640(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14640, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F6B4"))) PPC_WEAK_FUNC(sub_8379F6B4);
PPC_FUNC_IMPL(__imp__sub_8379F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F6B8"))) PPC_WEAK_FUNC(sub_8379F6B8);
PPC_FUNC_IMPL(__imp__sub_8379F6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lbz r3,-14640(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14640);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F6C4"))) PPC_WEAK_FUNC(sub_8379F6C4);
PPC_FUNC_IMPL(__imp__sub_8379F6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F6C8"))) PPC_WEAK_FUNC(sub_8379F6C8);
PPC_FUNC_IMPL(__imp__sub_8379F6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stb r3,-14639(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14639, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F6D4"))) PPC_WEAK_FUNC(sub_8379F6D4);
PPC_FUNC_IMPL(__imp__sub_8379F6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F6D8"))) PPC_WEAK_FUNC(sub_8379F6D8);
PPC_FUNC_IMPL(__imp__sub_8379F6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lbz r3,-14639(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14639);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F6E4"))) PPC_WEAK_FUNC(sub_8379F6E4);
PPC_FUNC_IMPL(__imp__sub_8379F6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F6E8"))) PPC_WEAK_FUNC(sub_8379F6E8);
PPC_FUNC_IMPL(__imp__sub_8379F6E8) {
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
	// bl 0x82583938
	ctx.lr = 0x8379F700;
	sub_82583938(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// addi r10,r11,5260
	ctx.r10.s64 = ctx.r11.s64 + 5260;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8258bee8
	ctx.lr = 0x8379F714;
	sub_8258BEE8(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x8258bee8
	ctx.lr = 0x8379F71C;
	sub_8258BEE8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32213
	ctx.r8.s64 = -2111111168;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r4,r8,5232
	ctx.r4.s64 = ctx.r8.s64 + 5232;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// bl 0x82583c88
	ctx.lr = 0x8379F748;
	sub_82583C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// bl 0x82583338
	ctx.lr = 0x8379F754;
	sub_82583338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,800
	ctx.r4.s64 = 800;
	// bl 0x82583300
	ctx.lr = 0x8379F760;
	sub_82583300(ctx, base);
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

__attribute__((alias("__imp__sub_8379F778"))) PPC_WEAK_FUNC(sub_8379F778);
PPC_FUNC_IMPL(__imp__sub_8379F778) {
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
	// addi r30,r3,124
	ctx.r30.s64 = ctx.r3.s64 + 124;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8258be28
	ctx.lr = 0x8379F7A0;
	sub_8258BE28(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8379f7c4
	if (!cr6.eq) goto loc_8379F7C4;
loc_8379F7AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258bd68
	ctx.lr = 0x8379F7B8;
	sub_8258BD68(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379f7ac
	if (cr6.eq) goto loc_8379F7AC;
loc_8379F7C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be88
	ctx.lr = 0x8379F7D8;
	sub_8258BE88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F7F0"))) PPC_WEAK_FUNC(sub_8379F7F0);
PPC_FUNC_IMPL(__imp__sub_8379F7F0) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// addi r10,r11,5260
	ctx.r10.s64 = ctx.r11.s64 + 5260;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8258bf48
	ctx.lr = 0x8379F820;
	sub_8258BF48(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8258bf48
	ctx.lr = 0x8379F828;
	sub_8258BF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583b60
	ctx.lr = 0x8379F830;
	sub_82583B60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8379f850
	if (cr6.eq) goto loc_8379F850;
	// bl 0x82595188
	ctx.lr = 0x8379F840;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8379F850;
	sub_825952B8(ctx, base);
loc_8379F850:
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

__attribute__((alias("__imp__sub_8379F86C"))) PPC_WEAK_FUNC(sub_8379F86C);
PPC_FUNC_IMPL(__imp__sub_8379F86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F870"))) PPC_WEAK_FUNC(sub_8379F870);
PPC_FUNC_IMPL(__imp__sub_8379F870) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8379F8B0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8379f8c4
	if (cr6.eq) goto loc_8379F8C4;
	// bl 0x8379f6e8
	ctx.lr = 0x8379F8BC;
	sub_8379F6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8379f8c8
	goto loc_8379F8C8;
loc_8379F8C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8379F8C8:
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82583340
	ctx.lr = 0x8379F8D8;
	sub_82583340(ctx, base);
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

__attribute__((alias("__imp__sub_8379F8F4"))) PPC_WEAK_FUNC(sub_8379F8F4);
PPC_FUNC_IMPL(__imp__sub_8379F8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F8F8"))) PPC_WEAK_FUNC(sub_8379F8F8);
PPC_FUNC_IMPL(__imp__sub_8379F8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-14636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14636);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F904"))) PPC_WEAK_FUNC(sub_8379F904);
PPC_FUNC_IMPL(__imp__sub_8379F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F908"))) PPC_WEAK_FUNC(sub_8379F908);
PPC_FUNC_IMPL(__imp__sub_8379F908) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8379F92C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8379f93c
	if (cr6.eq) goto loc_8379F93C;
	// bl 0x8379f870
	ctx.lr = 0x8379F938;
	sub_8379F870(ctx, base);
	// b 0x8379f940
	goto loc_8379F940;
loc_8379F93C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8379F940:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stw r3,-14636(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379F958"))) PPC_WEAK_FUNC(sub_8379F958);
PPC_FUNC_IMPL(__imp__sub_8379F958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-14636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14636);
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

__attribute__((alias("__imp__sub_8379F96C"))) PPC_WEAK_FUNC(sub_8379F96C);
PPC_FUNC_IMPL(__imp__sub_8379F96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F970"))) PPC_WEAK_FUNC(sub_8379F970);
PPC_FUNC_IMPL(__imp__sub_8379F970) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379f9a0
	if (cr6.eq) goto loc_8379F9A0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8379f778
	ctx.lr = 0x8379F998;
	sub_8379F778(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_8379F9A0:
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

__attribute__((alias("__imp__sub_8379F9B4"))) PPC_WEAK_FUNC(sub_8379F9B4);
PPC_FUNC_IMPL(__imp__sub_8379F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379F9B8"))) PPC_WEAK_FUNC(sub_8379F9B8);
PPC_FUNC_IMPL(__imp__sub_8379F9B8) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8379fa3c
	if (cr6.eq) goto loc_8379FA3C;
	// bl 0x833e7228
	ctx.lr = 0x8379F9DC;
	sub_833E7228(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8379f778
	ctx.lr = 0x8379F9E4;
	sub_8379F778(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825833a0
	ctx.lr = 0x8379F9F4;
	sub_825833A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379fa3c
	if (cr6.eq) goto loc_8379FA3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8379FA14;
	sub_82595150(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8379fa34
	if (cr6.eq) goto loc_8379FA34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8379FA34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8379FA34:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8379FA3C;
	sub_82595170(ctx, base);
loc_8379FA3C:
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

__attribute__((alias("__imp__sub_8379FA50"))) PPC_WEAK_FUNC(sub_8379FA50);
PPC_FUNC_IMPL(__imp__sub_8379FA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8379FA58;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x8379fa84
	if (cr6.lt) goto loc_8379FA84;
	// bne cr6,0x8379faa8
	if (!cr6.eq) goto loc_8379FAA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// b 0x8379faa8
	goto loc_8379FAA8;
loc_8379FA84:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379faa0
	if (cr6.eq) goto loc_8379FAA0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8379f778
	ctx.lr = 0x8379FA98;
	sub_8379F778(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_8379FAA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_8379FAA8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-28744
	ctx.r9.s64 = ctx.r11.s64 + -28744;
	// addi r29,r31,120
	ctx.r29.s64 = ctx.r31.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8258be28
	ctx.lr = 0x8379FACC;
	sub_8258BE28(ctx, base);
	// stfs f31,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x8379fae8
	if (cr6.lt) goto loc_8379FAE8;
	// bne cr6,0x8379faf0
	if (!cr6.eq) goto loc_8379FAF0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8379faec
	goto loc_8379FAEC;
loc_8379FAE8:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8379FAEC:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_8379FAF0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258bdc8
	ctx.lr = 0x8379FAFC;
	sub_8258BDC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be88
	ctx.lr = 0x8379FB08;
	sub_8258BE88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8379FB14"))) PPC_WEAK_FUNC(sub_8379FB14);
PPC_FUNC_IMPL(__imp__sub_8379FB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379FB18"))) PPC_WEAK_FUNC(sub_8379FB18);
PPC_FUNC_IMPL(__imp__sub_8379FB18) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-14636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14636);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379fb74
	if (cr6.eq) goto loc_8379FB74;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8379FB50;
	sub_82595150(ctx, base);
	// lwz r30,-14636(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14636);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8379fb6c
	if (cr6.eq) goto loc_8379FB6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8379f9b8
	ctx.lr = 0x8379FB64;
	sub_8379F9B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x8379FB6C;
	sub_82416268(ctx, base);
loc_8379FB6C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8379FB74;
	sub_82595170(ctx, base);
loc_8379FB74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-14636(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14636, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8379FB94"))) PPC_WEAK_FUNC(sub_8379FB94);
PPC_FUNC_IMPL(__imp__sub_8379FB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379FB98"))) PPC_WEAK_FUNC(sub_8379FB98);
PPC_FUNC_IMPL(__imp__sub_8379FB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8379FBA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-14616
	ctx.r28.s64 = ctx.r11.s64 + -14616;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8379FBB8;
	sub_82596FE8(ctx, base);
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// lwz r11,-14628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -14628);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x8379fc10
	if (cr6.eq) goto loc_8379FC10;
loc_8379FBCC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8379fbe8
	if (cr6.lt) goto loc_8379FBE8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8379fbec
	goto loc_8379FBEC;
loc_8379FBE8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8379FBEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x8379FBF8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8379fc58
	if (cr6.eq) goto loc_8379FC58;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,-14628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -14628);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x8379fbcc
	if (!cr6.eq) goto loc_8379FBCC;
loc_8379FC10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x8379FC18;
	sub_82597088(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8379fc38
	if (cr6.lt) goto loc_8379FC38;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8379FC38;
	sub_825952B8(ctx, base);
loc_8379FC38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8379FC3C:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8379FC58:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x8379FC60;
	sub_82597088(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8379fc80
	if (cr6.lt) goto loc_8379FC80;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8379FC80;
	sub_825952B8(ctx, base);
loc_8379FC80:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8379fc3c
	goto loc_8379FC3C;
}

__attribute__((alias("__imp__sub_8379FC88"))) PPC_WEAK_FUNC(sub_8379FC88);
PPC_FUNC_IMPL(__imp__sub_8379FC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8379FC90;
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
	// beq cr6,0x8379fd1c
	if (cr6.eq) goto loc_8379FD1C;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r31,r5,24
	ctx.r31.s64 = ctx.r5.s64 + 24;
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
	// lwz r7,44(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8379fcec
	if (cr6.lt) goto loc_8379FCEC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8379FCEC;
	sub_825952B8(ctx, base);
loc_8379FCEC:
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
	ctx.lr = 0x8379FD10;
	sub_825952B8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
loc_8379FD1C:
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

__attribute__((alias("__imp__sub_8379FD2C"))) PPC_WEAK_FUNC(sub_8379FD2C);
PPC_FUNC_IMPL(__imp__sub_8379FD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8379FD30"))) PPC_WEAK_FUNC(sub_8379FD30);
PPC_FUNC_IMPL(__imp__sub_8379FD30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8379FD38;
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
	// beq cr6,0x8379fdc0
	if (cr6.eq) goto loc_8379FDC0;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r25,15
	ctx.r25.s64 = 15;
loc_8379FD70:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8379fd94
	if (cr6.lt) goto loc_8379FD94;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8379FD94;
	sub_825952B8(ctx, base);
loc_8379FD94:
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
	ctx.lr = 0x8379FDB0;
	sub_825952B8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x8379fd70
	if (!cr6.eq) goto loc_8379FD70;
loc_8379FDC0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8379FDC8"))) PPC_WEAK_FUNC(sub_8379FDC8);
PPC_FUNC_IMPL(__imp__sub_8379FDC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8379FDD0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x834ff4d8
	ctx.lr = 0x8379FDD8;
	sub_834FF4D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8379feec
	if (cr6.eq) goto loc_8379FEEC;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r25,r11,-14616
	ctx.r25.s64 = ctx.r11.s64 + -14616;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8379FDF4;
	sub_82596FE8(ctx, base);
	// addi r24,r27,56
	ctx.r24.s64 = ctx.r27.s64 + 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8257fad0
	ctx.lr = 0x8379FE04;
	sub_8257FAD0(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r28,r11,-14628
	ctx.r28.s64 = ctx.r11.s64 + -14628;
	// lwz r11,-14628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14628);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x8379fe88
	if (cr6.eq) goto loc_8379FE88;
	// li r26,3
	ctx.r26.s64 = 3;
loc_8379FE20:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8379fef4
	if (!cr6.eq) goto loc_8379FEF4;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8379fe44
	if (cr6.lt) goto loc_8379FE44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8379FE44:
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x8379e1a0
	ctx.lr = 0x8379FE54;
	sub_8379E1A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8379fe74
	if (!cr6.eq) goto loc_8379FE74;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9410
	ctx.lr = 0x8379FE6C;
	sub_82DF9410(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8379fe7c
	goto loc_8379FE7C;
loc_8379FE74:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_8379FE78:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8379FE7C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x8379fe20
	if (!cr6.eq) goto loc_8379FE20;
loc_8379FE88:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8379fed8
	if (!cr6.eq) goto loc_8379FED8;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r30,r11,-14584
	ctx.r30.s64 = ctx.r11.s64 + -14584;
	// lwz r11,-14584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14584);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8379fed8
	if (cr6.eq) goto loc_8379FED8;
loc_8379FEAC:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83500db0
	ctx.lr = 0x8379FEB8;
	sub_83500DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8379fc88
	ctx.lr = 0x8379FEC8;
	sub_8379FC88(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8379feac
	if (!cr6.eq) goto loc_8379FEAC;
loc_8379FED8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257fb60
	ctx.lr = 0x8379FEE4;
	sub_8257FB60(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82597088
	ctx.lr = 0x8379FEEC;
	sub_82597088(ctx, base);
loc_8379FEEC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8379FEF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8379d700
	ctx.lr = 0x8379FEFC;
	sub_8379D700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379fe78
	if (cr6.eq) goto loc_8379FE78;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8379ff60
	if (!cr6.eq) goto loc_8379FF60;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8379ff60
	if (cr6.eq) goto loc_8379FF60;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x8379ff30
	if (!cr6.eq) goto loc_8379FF30;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
loc_8379FF30:
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
loc_8379FF60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8379d698
	ctx.lr = 0x8379FF68;
	sub_8379D698(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82df9410
	ctx.lr = 0x8379FF78;
	sub_82DF9410(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8379fe7c
	goto loc_8379FE7C;
}

__attribute__((alias("__imp__sub_8379FF80"))) PPC_WEAK_FUNC(sub_8379FF80);
PPC_FUNC_IMPL(__imp__sub_8379FF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8379FF88;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832d22f8
	ctx.lr = 0x8379FF94;
	sub_832D22F8(ctx, base);
	// addi r29,r30,120
	ctx.r29.s64 = ctx.r30.s64 + 120;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// lis r28,-31766
	ctx.r28.s64 = -2081816576;
loc_8379FFA4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be28
	ctx.lr = 0x8379FFB0;
	sub_8258BE28(ctx, base);
	// lwz r31,128(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8379ffd4
	if (!cr6.eq) goto loc_8379FFD4;
loc_8379FFBC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8258bd68
	ctx.lr = 0x8379FFC8;
	sub_8258BD68(ctx, base);
	// lwz r31,128(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8379ffbc
	if (cr6.eq) goto loc_8379FFBC;
loc_8379FFD4:
	// stw r27,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8258be88
	ctx.lr = 0x8379FFE4;
	sub_8258BE88(ctx, base);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// beq cr6,0x837a0064
	if (cr6.eq) goto loc_837A0064;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bne cr6,0x837a0034
	if (!cr6.eq) goto loc_837A0034;
	// bl 0x834ff4d8
	ctx.lr = 0x8379FFF8;
	sub_834FF4D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8257fad0
	ctx.lr = 0x837A0008;
	sub_8257FAD0(ctx, base);
	// bl 0x82486828
	ctx.lr = 0x837A000C;
	sub_82486828(ctx, base);
	// bl 0x834ff4d8
	ctx.lr = 0x837A0010;
	sub_834FF4D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8257fb60
	ctx.lr = 0x837A0020;
	sub_8257FB60(ctx, base);
	// lwz r3,-17544(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17544);
	// bl 0x82581eb8
	ctx.lr = 0x837A0028;
	sub_82581EB8(ctx, base);
	// lwz r3,-17544(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17544);
	// bl 0x825811b0
	ctx.lr = 0x837A0030;
	sub_825811B0(ctx, base);
	// bl 0x8379fdc8
	ctx.lr = 0x837A0034;
	sub_8379FDC8(ctx, base);
loc_837A0034:
	// addi r31,r30,124
	ctx.r31.s64 = ctx.r30.s64 + 124;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258be28
	ctx.lr = 0x837A0044;
	sub_8258BE28(ctx, base);
	// stw r26,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8258bdc8
	ctx.lr = 0x837A0054;
	sub_8258BDC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8258be88
	ctx.lr = 0x837A0060;
	sub_8258BE88(ctx, base);
	// b 0x8379ffa4
	goto loc_8379FFA4;
loc_837A0064:
	// addi r31,r30,124
	ctx.r31.s64 = ctx.r30.s64 + 124;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258be28
	ctx.lr = 0x837A0074;
	sub_8258BE28(ctx, base);
	// stw r26,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8258bdc8
	ctx.lr = 0x837A0084;
	sub_8258BDC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8258be88
	ctx.lr = 0x837A0090;
	sub_8258BE88(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A0098"))) PPC_WEAK_FUNC(sub_837A0098);
PPC_FUNC_IMPL(__imp__sub_837A0098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837A00A0;
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
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837A00CC;
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
	// beq 0x837a00e8
	if (cr0.eq) goto loc_837A00E8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a6a438
	ctx.lr = 0x837A00E8;
	sub_82A6A438(ctx, base);
loc_837A00E8:
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// ori r9,r10,29126
	ctx.r9.u64 = ctx.r10.u64 | 29126;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x837a010c
	if (!cr6.lt) goto loc_837A010C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x837A010C;
	sub_831CC150(ctx, base);
loc_837A010C:
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

__attribute__((alias("__imp__sub_837A0128"))) PPC_WEAK_FUNC(sub_837A0128);
PPC_FUNC_IMPL(__imp__sub_837A0128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837A0130;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,5124
	ctx.r4.s64 = ctx.r11.s64 + 5124;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574d38
	ctx.lr = 0x837A0154;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x837a0198
	if (cr6.eq) goto loc_837A0198;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a017c
	if (cr6.lt) goto loc_837A017C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837A017C;
	sub_825952B8(ctx, base);
loc_837A017C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837A0198:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8259cb28
	ctx.lr = 0x837A01C8;
	sub_8259CB28(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r28,r11,-14616
	ctx.r28.s64 = ctx.r11.s64 + -14616;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A01D8;
	sub_82596FE8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r10,-14628
	ctx.r3.s64 = ctx.r10.s64 + -14628;
	// lwz r4,-14628(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14628);
	// bl 0x837a0098
	ctx.lr = 0x837A01EC;
	sub_837A0098(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837A01F4;
	sub_82597088(ctx, base);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837a0214
	if (cr6.lt) goto loc_837A0214;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x837A0214;
	sub_825952B8(ctx, base);
loc_837A0214:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// blt cr6,0x837a023c
	if (cr6.lt) goto loc_837A023C;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837A023C;
	sub_825952B8(ctx, base);
loc_837A023C:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A0250"))) PPC_WEAK_FUNC(sub_837A0250);
PPC_FUNC_IMPL(__imp__sub_837A0250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837A0258;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16618
	ctx.r11.s64 = -1089077248;
	// std r3,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r3.u64);
	// lis r10,0
	ctx.r10.s64 = 0;
	// std r4,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r4.u64);
	// ori r9,r11,40856
	ctx.r9.u64 = ctx.r11.u64 | 40856;
	// ori r8,r10,47264
	ctx.r8.u64 = ctx.r10.u64 | 47264;
	// li r27,0
	ctx.r27.s64 = 0;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// li r23,15
	ctx.r23.s64 = 15;
	// stb r27,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r27.u8);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x837A02B0;
	sub_8259CB28(ctx, base);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r25,r11,-14616
	ctx.r25.s64 = ctx.r11.s64 + -14616;
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// bl 0x82596fe8
	ctx.lr = 0x837A02D8;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,-14628
	ctx.r29.s64 = ctx.r11.s64 + -14628;
	// lwz r11,-14628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14628);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x837a0334
	if (cr6.eq) goto loc_837A0334;
loc_837A02F0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a030c
	if (cr6.lt) goto loc_837A030C;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x837a0310
	goto loc_837A0310;
loc_837A030C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_837A0310:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x837A031C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837a03d8
	if (cr6.eq) goto loc_837A03D8;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x837a02f0
	if (!cr6.eq) goto loc_837A02F0;
loc_837A0334:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,-14584(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14584);
	// addi r28,r11,-14584
	ctx.r28.s64 = ctx.r11.s64 + -14584;
	// lwz r22,4(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x82595718
	ctx.lr = 0x837A035C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r22,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r22.u32);
	// beq 0x837a03b4
	if (cr0.eq) goto loc_837A03B4;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r23,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r23.u32);
	// stw r27,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r27.u32);
	// stb r27,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r27.u8);
	// bl 0x8259cb28
	ctx.lr = 0x837A03B4;
	sub_8259CB28(ctx, base);
loc_837A03B4:
	// lis r10,1365
	ctx.r10.s64 = 89456640;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ori r9,r10,21844
	ctx.r9.u64 = ctx.r10.u64 | 21844;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x837a043c
	if (!cr6.lt) goto loc_837A043C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x837A03D8;
	sub_831CC150(ctx, base);
loc_837A03D8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8379d698
	ctx.lr = 0x837A03E0;
	sub_8379D698(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82df9410
	ctx.lr = 0x837A03F0;
	sub_82DF9410(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82597088
	ctx.lr = 0x837A03F8;
	sub_82597088(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a0418
	if (cr6.lt) goto loc_837A0418;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x837A0418;
	sub_825952B8(ctx, base);
loc_837A0418:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// blt cr6,0x837a049c
	if (cr6.lt) goto loc_837A049C;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x837a0494
	goto loc_837A0494;
loc_837A043C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x82597088
	ctx.lr = 0x837A0458;
	sub_82597088(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837a0474
	if (cr6.lt) goto loc_837A0474;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x837A0474;
	sub_825952B8(ctx, base);
loc_837A0474:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// blt cr6,0x837a049c
	if (cr6.lt) goto loc_837A049C;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_837A0494:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837A049C;
	sub_825952B8(ctx, base);
loc_837A049C:
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A04B0"))) PPC_WEAK_FUNC(sub_837A04B0);
PPC_FUNC_IMPL(__imp__sub_837A04B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837A04B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_837A04D8:
	// addi r11,r31,77
	ctx.r11.s64 = ctx.r31.s64 + 77;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a0524
	if (cr6.eq) goto loc_837A0524;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x837a051c
	if (!cr6.eq) goto loc_837A051C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0510
	if (cr6.eq) goto loc_837A0510;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a0514
	if (!cr6.eq) goto loc_837A0514;
loc_837A0510:
	// li r4,0
	ctx.r4.s64 = 0;
loc_837A0514:
	// lwz r3,312(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// b 0x837a0520
	goto loc_837A0520;
loc_837A051C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_837A0520:
	// bl 0x837c53d0
	ctx.lr = 0x837A0524;
	sub_837C53D0(ctx, base);
loc_837A0524:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// blt cr6,0x837a04d8
	if (cr6.lt) goto loc_837A04D8;
	// lwz r3,356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a0544
	if (cr6.eq) goto loc_837A0544;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x837b3fa8
	ctx.lr = 0x837A0544;
	sub_837B3FA8(ctx, base);
loc_837A0544:
	// lwz r3,352(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a0558
	if (cr6.eq) goto loc_837A0558;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x837c4cf8
	ctx.lr = 0x837A0558;
	sub_837C4CF8(ctx, base);
loc_837A0558:
	// lwz r3,348(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a056c
	if (cr6.eq) goto loc_837A056C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x837b3cc8
	ctx.lr = 0x837A056C;
	sub_837B3CC8(ctx, base);
loc_837A056C:
	// lwz r3,344(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a0580
	if (cr6.eq) goto loc_837A0580;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x837a5fb8
	ctx.lr = 0x837A0580;
	sub_837A5FB8(ctx, base);
loc_837A0580:
	// addi r31,r29,372
	ctx.r31.s64 = ctx.r29.s64 + 372;
	// li r30,2
	ctx.r30.s64 = 2;
loc_837A0588:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a059c
	if (cr6.eq) goto loc_837A059C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x837a56f8
	ctx.lr = 0x837A059C;
	sub_837A56F8(ctx, base);
loc_837A059C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x837a0588
	if (!cr0.eq) goto loc_837A0588;
	// lwz r3,360(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a05c8
	if (cr6.eq) goto loc_837A05C8;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a05c8
	if (!cr6.eq) goto loc_837A05C8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x837c4a30
	ctx.lr = 0x837A05C8;
	sub_837C4A30(ctx, base);
loc_837A05C8:
	// lwz r3,364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a05e8
	if (cr6.eq) goto loc_837A05E8;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a05e8
	if (!cr6.eq) goto loc_837A05E8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x837c4a30
	ctx.lr = 0x837A05E8;
	sub_837C4A30(ctx, base);
loc_837A05E8:
	// lwz r3,368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a05fc
	if (cr6.eq) goto loc_837A05FC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x837b3f30
	ctx.lr = 0x837A05FC;
	sub_837B3F30(ctx, base);
loc_837A05FC:
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0620
	if (cr6.eq) goto loc_837A0620;
	// lwz r3,348(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a0620
	if (cr6.eq) goto loc_837A0620;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x837b3ed8
	ctx.lr = 0x837A0620;
	sub_837B3ED8(ctx, base);
loc_837A0620:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0640
	if (cr6.eq) goto loc_837A0640;
	// lwz r3,388(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a0640
	if (cr6.eq) goto loc_837A0640;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837c2d58
	ctx.lr = 0x837A0640;
	sub_837C2D58(ctx, base);
loc_837A0640:
	// stb r26,392(r29)
	PPC_STORE_U8(ctx.r29.u32 + 392, ctx.r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A064C"))) PPC_WEAK_FUNC(sub_837A064C);
PPC_FUNC_IMPL(__imp__sub_837A064C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A0650"))) PPC_WEAK_FUNC(sub_837A0650);
PPC_FUNC_IMPL(__imp__sub_837A0650) {
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
	// lwz r3,360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a067c
	if (cr6.eq) goto loc_837A067C;
	// bl 0x837c4a30
	ctx.lr = 0x837A067C;
	sub_837C4A30(ctx, base);
loc_837A067C:
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a0690
	if (cr6.eq) goto loc_837A0690;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837c4a30
	ctx.lr = 0x837A0690;
	sub_837C4A30(ctx, base);
loc_837A0690:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A06A8"))) PPC_WEAK_FUNC(sub_837A06A8);
PPC_FUNC_IMPL(__imp__sub_837A06A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x837a56f8
	sub_837A56F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A06C8"))) PPC_WEAK_FUNC(sub_837A06C8);
PPC_FUNC_IMPL(__imp__sub_837A06C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A06CC"))) PPC_WEAK_FUNC(sub_837A06CC);
PPC_FUNC_IMPL(__imp__sub_837A06CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A06D0"))) PPC_WEAK_FUNC(sub_837A06D0);
PPC_FUNC_IMPL(__imp__sub_837A06D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x837c2d58
	sub_837C2D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A06E4"))) PPC_WEAK_FUNC(sub_837A06E4);
PPC_FUNC_IMPL(__imp__sub_837A06E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A06E8"))) PPC_WEAK_FUNC(sub_837A06E8);
PPC_FUNC_IMPL(__imp__sub_837A06E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837A06F0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,380(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837a07b0
	if (cr6.eq) goto loc_837A07B0;
	// lbz r11,385(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 385);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a075c
	if (!cr6.eq) goto loc_837A075C;
	// bl 0x830ffbc0
	ctx.lr = 0x837A0724;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830ffea0
	ctx.lr = 0x837A072C;
	sub_830FFEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a075c
	if (cr6.eq) goto loc_837A075C;
	// lwz r30,380(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bl 0x830ffbc0
	ctx.lr = 0x837A0740;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831004c8
	ctx.lr = 0x837A0748;
	sub_831004C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x837c4d10
	ctx.lr = 0x837A0758;
	sub_837C4D10(ctx, base);
	// stb r29,385(r31)
	PPC_STORE_U8(ctx.r31.u32 + 385, ctx.r29.u8);
loc_837A075C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 384);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x837a0790
	if (!cr6.gt) goto loc_837A0790;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a07b0
	if (!cr6.eq) goto loc_837A07B0;
	// lwz r30,380(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bl 0x830ffbc0
	ctx.lr = 0x837A0780;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830ffdf8
	ctx.lr = 0x837A0788;
	sub_830FFDF8(ctx, base);
	// stb r29,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r29.u8);
	// b 0x837a07b0
	goto loc_837A07B0;
loc_837A0790:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a07b0
	if (cr6.eq) goto loc_837A07B0;
	// lwz r30,380(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bl 0x830ffbc0
	ctx.lr = 0x837A07A0;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830ffd50
	ctx.lr = 0x837A07A8;
	sub_830FFD50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r11.u8);
loc_837A07B0:
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a07c4
	if (cr6.eq) goto loc_837A07C4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x837b3fc0
	ctx.lr = 0x837A07C4;
	sub_837B3FC0(ctx, base);
loc_837A07C4:
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a07dc
	if (cr6.eq) goto loc_837A07DC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x837b3d70
	ctx.lr = 0x837A07DC;
	sub_837B3D70(ctx, base);
loc_837A07DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A07E8"))) PPC_WEAK_FUNC(sub_837A07E8);
PPC_FUNC_IMPL(__imp__sub_837A07E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837c53e8
	sub_837C53E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A07F8"))) PPC_WEAK_FUNC(sub_837A07F8);
PPC_FUNC_IMPL(__imp__sub_837A07F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A07FC"))) PPC_WEAK_FUNC(sub_837A07FC);
PPC_FUNC_IMPL(__imp__sub_837A07FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A0800"))) PPC_WEAK_FUNC(sub_837A0800);
PPC_FUNC_IMPL(__imp__sub_837A0800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r4,r10,5852
	ctx.r4.s64 = ctx.r10.s64 + 5852;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x8255b5d8
	ctx.lr = 0x837A0840;
	sub_8255B5D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837a0874
	if (!cr6.eq) goto loc_837A0874;
loc_837A0848:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255b728
	ctx.lr = 0x837A0854;
	sub_8255B728(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837a0848
	if (cr6.eq) goto loc_837A0848;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x837a086c
	if (!cr6.eq) goto loc_837A086C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255cfb8
	ctx.lr = 0x837A086C;
	sub_8255CFB8(ctx, base);
loc_837A086C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837a089c
	if (cr6.eq) goto loc_837A089C;
loc_837A0874:
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x837a089c
	if (cr6.gt) goto loc_837A089C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837a089c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A089C;
	// bdzf 4*cr6+eq,0x837a089c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A089C;
	// bdzf 4*cr6+eq,0x837a089c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A089C;
	// bdzf 4*cr6+eq,0x837a089c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A089C;
	// bne cr6,0x837a089c
	if (!cr6.eq) goto loc_837A089C;
loc_837A089C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A08AC"))) PPC_WEAK_FUNC(sub_837A08AC);
PPC_FUNC_IMPL(__imp__sub_837A08AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A08B0"))) PPC_WEAK_FUNC(sub_837A08B0);
PPC_FUNC_IMPL(__imp__sub_837A08B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837A08B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,476(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837a09b8
	if (cr6.eq) goto loc_837A09B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83113618
	ctx.lr = 0x837A08D8;
	sub_83113618(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831136b0
	ctx.lr = 0x837A08E0;
	sub_831136B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83113700
	ctx.lr = 0x837A08EC;
	sub_83113700(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83113680
	ctx.lr = 0x837A08F8;
	sub_83113680(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831136a0
	ctx.lr = 0x837A090C;
	sub_831136A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837a099c
	if (cr6.eq) goto loc_837A099C;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837A0928;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a0980
	if (cr6.eq) goto loc_837A0980;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837a0800
	ctx.lr = 0x837A094C;
	sub_837A0800(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837a0964
	if (!cr6.eq) goto loc_837A0964;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// stw r29,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x837a09a8
	goto loc_837A09A8;
loc_837A0964:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837A0970;
	sub_825952B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a5c688
	ctx.lr = 0x837A0978;
	sub_82A5C688(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837A0980:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837A098C;
	sub_825952B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a5c688
	ctx.lr = 0x837A0994;
	sub_82A5C688(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837A099C:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// stw r27,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_837A09A8:
	// stb r10,484(r31)
	PPC_STORE_U8(ctx.r31.u32 + 484, ctx.r10.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 488, ctx.r11.u64);
	// bl 0x82a5c688
	ctx.lr = 0x837A09B8;
	sub_82A5C688(ctx, base);
loc_837A09B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A09C0"))) PPC_WEAK_FUNC(sub_837A09C0);
PPC_FUNC_IMPL(__imp__sub_837A09C0) {
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
	// lbz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 484);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0a08
	if (cr6.eq) goto loc_837A0A08;
	// lwz r4,480(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837a0a0c
	if (cr6.eq) goto loc_837A0A0C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837A0A08;
	sub_825952B8(ctx, base);
loc_837A0A08:
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
loc_837A0A0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A0A24"))) PPC_WEAK_FUNC(sub_837A0A24);
PPC_FUNC_IMPL(__imp__sub_837A0A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A0A28"))) PPC_WEAK_FUNC(sub_837A0A28);
PPC_FUNC_IMPL(__imp__sub_837A0A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// ble cr6,0x837a0a38
	if (!cr6.gt) goto loc_837A0A38;
	// li r8,5
	ctx.r8.s64 = 5;
loc_837A0A38:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x837a0a7c
	if (cr6.eq) goto loc_837A0A7C;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837a0a84
	if (cr6.eq) goto loc_837A0A84;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r10,r3,448
	ctx.r10.s64 = ctx.r3.s64 + 448;
loc_837A0A54:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x837a0a54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837A0A54;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stb r6,449(r3)
	PPC_STORE_U8(ctx.r3.u32 + 449, ctx.r6.u8);
	// stb r7,448(r3)
	PPC_STORE_U8(ctx.r3.u32 + 448, ctx.r7.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,450(r3)
	PPC_STORE_U8(ctx.r3.u32 + 450, ctx.r11.u8);
	// blr 
	return;
loc_837A0A7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,450(r3)
	PPC_STORE_U8(ctx.r3.u32 + 450, ctx.r11.u8);
loc_837A0A84:
	// stb r7,448(r3)
	PPC_STORE_U8(ctx.r3.u32 + 448, ctx.r7.u8);
	// stb r6,449(r3)
	PPC_STORE_U8(ctx.r3.u32 + 449, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A0A90"))) PPC_WEAK_FUNC(sub_837A0A90);
PPC_FUNC_IMPL(__imp__sub_837A0A90) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x837a04b0
	sub_837A04B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A0AA4"))) PPC_WEAK_FUNC(sub_837A0AA4);
PPC_FUNC_IMPL(__imp__sub_837A0AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A0AA8"))) PPC_WEAK_FUNC(sub_837A0AA8);
PPC_FUNC_IMPL(__imp__sub_837A0AA8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-14192
	ctx.r31.s64 = ctx.r11.s64 + -14192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A0AD8;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-14568(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14568);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a0af4
	if (cr6.eq) goto loc_837A0AF4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x837a06e8
	ctx.lr = 0x837A0AF4;
	sub_837A06E8(ctx, base);
loc_837A0AF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837A0AFC;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_837A0B18"))) PPC_WEAK_FUNC(sub_837A0B18);
PPC_FUNC_IMPL(__imp__sub_837A0B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A0B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-14192
	ctx.r29.s64 = ctx.r11.s64 + -14192;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A0B3C;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-14568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0b68
	if (cr6.eq) goto loc_837A0B68;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0b68
	if (cr6.eq) goto loc_837A0B68;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83b46578
	ctx.lr = 0x837A0B68;
	sub_83B46578(ctx, base);
loc_837A0B68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837A0B70;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A0B78"))) PPC_WEAK_FUNC(sub_837A0B78);
PPC_FUNC_IMPL(__imp__sub_837A0B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A0B80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-14192
	ctx.r29.s64 = ctx.r11.s64 + -14192;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A0B9C;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-14568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0bc8
	if (cr6.eq) goto loc_837A0BC8;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0bc8
	if (cr6.eq) goto loc_837A0BC8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83b465d8
	ctx.lr = 0x837A0BC8;
	sub_83B465D8(ctx, base);
loc_837A0BC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837A0BD0;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A0BD8"))) PPC_WEAK_FUNC(sub_837A0BD8);
PPC_FUNC_IMPL(__imp__sub_837A0BD8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-14192
	ctx.r31.s64 = ctx.r11.s64 + -14192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A0C00;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-14568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0c24
	if (cr6.eq) goto loc_837A0C24;
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837a0c24
	if (cr6.eq) goto loc_837A0C24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837c4f60
	ctx.lr = 0x837A0C24;
	sub_837C4F60(ctx, base);
loc_837A0C24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837A0C2C;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A0C44"))) PPC_WEAK_FUNC(sub_837A0C44);
PPC_FUNC_IMPL(__imp__sub_837A0C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A0C48"))) PPC_WEAK_FUNC(sub_837A0C48);
PPC_FUNC_IMPL(__imp__sub_837A0C48) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-14192
	ctx.r31.s64 = ctx.r11.s64 + -14192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A0C70;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-14568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0ca8
	if (cr6.eq) goto loc_837A0CA8;
	// addi r10,r30,77
	ctx.r10.s64 = ctx.r30.s64 + 77;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837a0ca8
	if (cr6.eq) goto loc_837A0CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82597088
	ctx.lr = 0x837A0CA0;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x837a0cb4
	goto loc_837A0CB4;
loc_837A0CA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837A0CB0;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_837A0CB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A0CCC"))) PPC_WEAK_FUNC(sub_837A0CCC);
PPC_FUNC_IMPL(__imp__sub_837A0CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A0CD0"))) PPC_WEAK_FUNC(sub_837A0CD0);
PPC_FUNC_IMPL(__imp__sub_837A0CD0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// vor128 v126,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// addi r31,r11,-14192
	ctx.r31.s64 = ctx.r11.s64 + -14192;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A0D18;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-14568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0d4c
	if (cr6.eq) goto loc_837A0D4C;
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0d4c
	if (cr6.eq) goto loc_837A0D4C;
	// vor128 v2,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83102db0
	ctx.lr = 0x837A0D4C;
	sub_83102DB0(ctx, base);
loc_837A0D4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837A0D54;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_837A0D80"))) PPC_WEAK_FUNC(sub_837A0D80);
PPC_FUNC_IMPL(__imp__sub_837A0D80) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r31,r11,-14192
	ctx.r31.s64 = ctx.r11.s64 + -14192;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A0DC4;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-14568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0df8
	if (cr6.eq) goto loc_837A0DF8;
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0df8
	if (cr6.eq) goto loc_837A0DF8;
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83102db0
	ctx.lr = 0x837A0DF8;
	sub_83102DB0(ctx, base);
loc_837A0DF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837A0E00;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A0E28"))) PPC_WEAK_FUNC(sub_837A0E28);
PPC_FUNC_IMPL(__imp__sub_837A0E28) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,-14192
	ctx.r31.s64 = ctx.r11.s64 + -14192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A0E48;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-14568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0e6c
	if (cr6.eq) goto loc_837A0E6C;
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a0e6c
	if (cr6.eq) goto loc_837A0E6C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83102db0
	ctx.lr = 0x837A0E6C;
	sub_83102DB0(ctx, base);
loc_837A0E6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837A0E74;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_837A0E88"))) PPC_WEAK_FUNC(sub_837A0E88);
PPC_FUNC_IMPL(__imp__sub_837A0E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837A0E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x837a0f94
	if (!cr6.eq) goto loc_837A0F94;
	// lwz r3,496(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a0eb8
	if (cr6.eq) goto loc_837A0EB8;
	// bl 0x833bbd78
	ctx.lr = 0x837A0EB8;
	sub_833BBD78(ctx, base);
loc_837A0EB8:
	// lwz r4,480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837a0f94
	if (cr6.eq) goto loc_837A0F94;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831049a8
	ctx.lr = 0x837A0ECC;
	sub_831049A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83104a50
	ctx.lr = 0x837A0ED8;
	sub_83104A50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83104ab8
	ctx.lr = 0x837A0EE8;
	sub_83104AB8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835ecbd0
	ctx.lr = 0x837A0EF4;
	sub_835ECBD0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835ecaf8
	ctx.lr = 0x837A0EFC;
	sub_835ECAF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825832f8
	ctx.lr = 0x837A0F08;
	sub_825832F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83131d70
	ctx.lr = 0x837A0F14;
	sub_83131D70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8307e038
	ctx.lr = 0x837A0F20;
	sub_8307E038(ctx, base);
	// clrldi r6,r28,32
	ctx.r6.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835ed120
	ctx.lr = 0x837A0F34;
	sub_835ED120(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x835ebe48
	ctx.lr = 0x837A0F4C;
	sub_835EBE48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833bcae8
	ctx.lr = 0x837A0F64;
	sub_833BCAE8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x837A0F7C;
	sub_82572FA0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835ecaa8
	ctx.lr = 0x837A0F84;
	sub_835ECAA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835f3ab0
	ctx.lr = 0x837A0F8C;
	sub_835F3AB0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a5c688
	ctx.lr = 0x837A0F94;
	sub_82A5C688(ctx, base);
loc_837A0F94:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A0F9C"))) PPC_WEAK_FUNC(sub_837A0F9C);
PPC_FUNC_IMPL(__imp__sub_837A0F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A0FA0"))) PPC_WEAK_FUNC(sub_837A0FA0);
PPC_FUNC_IMPL(__imp__sub_837A0FA0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x837a100c
	if (cr6.gt) goto loc_837A100C;
	// blt cr6,0x837a0ff4
	if (cr6.lt) goto loc_837A0FF4;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837a0fdc
	if (cr6.lt) goto loc_837A0FDC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837A0FDC:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x837A0FEC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a100c
	if (cr6.lt) goto loc_837A100C;
loc_837A0FF4:
	// li r11,0
	ctx.r11.s64 = 0;
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
loc_837A100C:
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_837A1024"))) PPC_WEAK_FUNC(sub_837A1024);
PPC_FUNC_IMPL(__imp__sub_837A1024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A1028"))) PPC_WEAK_FUNC(sub_837A1028);
PPC_FUNC_IMPL(__imp__sub_837A1028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837A1030;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// addi r10,r11,5944
	ctx.r10.s64 = ctx.r11.s64 + 5944;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-14568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14568);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x837a1078
	if (!cr6.eq) goto loc_837A1078;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r28,r11,-14192
	ctx.r28.s64 = ctx.r11.s64 + -14192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A1068;
	sub_82596FE8(ctx, base);
	// stw r29,-14568(r30)
	PPC_STORE_U32(ctx.r30.u32 + -14568, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837A1078;
	sub_82597088(ctx, base);
loc_837A1078:
	// bl 0x8378b870
	ctx.lr = 0x837A107C;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a108c
	if (cr6.eq) goto loc_837A108C;
	// bl 0x8378b870
	ctx.lr = 0x837A1088;
	sub_8378B870(ctx, base);
	// bl 0x8378b030
	ctx.lr = 0x837A108C;
	sub_8378B030(ctx, base);
loc_837A108C:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a10d4
	if (cr6.eq) goto loc_837A10D4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837A10A8;
	sub_82595150(ctx, base);
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a10c8
	if (cr6.eq) goto loc_837A10C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A10C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A10C8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837A10D0;
	sub_82595170(ctx, base);
	// stw r29,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r29.u32);
loc_837A10D4:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a111c
	if (cr6.eq) goto loc_837A111C;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837A10F0;
	sub_82595150(ctx, base);
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a1110
	if (cr6.eq) goto loc_837A1110;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A1110;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A1110:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837A1118;
	sub_82595170(ctx, base);
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
loc_837A111C:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a1164
	if (cr6.eq) goto loc_837A1164;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837A1138;
	sub_82595150(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a1158
	if (cr6.eq) goto loc_837A1158;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A1158;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A1158:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837A1160;
	sub_82595170(ctx, base);
	// stw r29,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
loc_837A1164:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a11ac
	if (cr6.eq) goto loc_837A11AC;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837A1180;
	sub_82595150(ctx, base);
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a11a0
	if (cr6.eq) goto loc_837A11A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A11A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A11A0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837A11A8;
	sub_82595170(ctx, base);
	// stw r29,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r29.u32);
loc_837A11AC:
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a11f4
	if (cr6.eq) goto loc_837A11F4;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837A11C8;
	sub_82595150(ctx, base);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a11e8
	if (cr6.eq) goto loc_837A11E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A11E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A11E8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837A11F0;
	sub_82595170(ctx, base);
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
loc_837A11F4:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a123c
	if (cr6.eq) goto loc_837A123C;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837A1210;
	sub_82595150(ctx, base);
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a1230
	if (cr6.eq) goto loc_837A1230;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A1230;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A1230:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837A1238;
	sub_82595170(ctx, base);
	// stw r29,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r29.u32);
loc_837A123C:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a1284
	if (cr6.eq) goto loc_837A1284;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837A1258;
	sub_82595150(ctx, base);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a1278
	if (cr6.eq) goto loc_837A1278;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A1278;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A1278:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837A1280;
	sub_82595170(ctx, base);
	// stw r29,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r29.u32);
loc_837A1284:
	// addi r30,r31,372
	ctx.r30.s64 = ctx.r31.s64 + 372;
	// li r28,2
	ctx.r28.s64 = 2;
loc_837A128C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a12d4
	if (cr6.eq) goto loc_837A12D4;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837A12A8;
	sub_82595150(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a12c8
	if (cr6.eq) goto loc_837A12C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A12C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A12C8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837A12D0;
	sub_82595170(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_837A12D4:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x837a128c
	if (!cr0.eq) goto loc_837A128C;
	// addi r30,r31,308
	ctx.r30.s64 = ctx.r31.s64 + 308;
	// li r28,9
	ctx.r28.s64 = 9;
loc_837A12E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a1330
	if (cr6.eq) goto loc_837A1330;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837A1304;
	sub_82595150(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a1324
	if (cr6.eq) goto loc_837A1324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A1324;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A1324:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837A132C;
	sub_82595170(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_837A1330:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x837a12e8
	if (!cr0.eq) goto loc_837A12E8;
	// lwz r30,380(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837a1358
	if (cr6.eq) goto loc_837A1358;
	// bl 0x830ffbc0
	ctx.lr = 0x837A134C;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831016c8
	ctx.lr = 0x837A1354;
	sub_831016C8(ctx, base);
	// stw r29,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r29.u32);
loc_837A1358:
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a13a0
	if (cr6.eq) goto loc_837A13A0;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837A1374;
	sub_82595150(ctx, base);
	// lwz r3,388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a1394
	if (cr6.eq) goto loc_837A1394;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A1394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A1394:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837A139C;
	sub_82595170(ctx, base);
	// stw r29,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
loc_837A13A0:
	// bl 0x8378b870
	ctx.lr = 0x837A13A4;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a13c0
	if (cr6.eq) goto loc_837A13C0;
	// bl 0x8378b870
	ctx.lr = 0x837A13B0;
	sub_8378B870(ctx, base);
	// stw r29,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r29.u32);
	// bl 0x8378b870
	ctx.lr = 0x837A13B8;
	sub_8378B870(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1960, ctx.r11.u32);
loc_837A13C0:
	// lwz r3,496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a13d0
	if (cr6.eq) goto loc_837A13D0;
	// bl 0x833bbd78
	ctx.lr = 0x837A13D0;
	sub_833BBD78(ctx, base);
loc_837A13D0:
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// addi r30,r31,500
	ctx.r30.s64 = ctx.r31.s64 + 500;
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837a141c
	if (cr0.eq) goto loc_837A141C;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_837A13F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x833bbd78
	ctx.lr = 0x837A13FC;
	sub_833BBD78(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, xer);
	// blt cr6,0x837a13f0
	if (cr6.lt) goto loc_837A13F0;
loc_837A141C:
	// lbz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 484);
	// stw r29,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a1448
	if (cr6.eq) goto loc_837A1448;
	// lwz r4,480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837a144c
	if (cr6.eq) goto loc_837A144C;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x825952b8
	ctx.lr = 0x837A1448;
	sub_825952B8(ctx, base);
loc_837A1448:
	// stw r29,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r29.u32);
loc_837A144C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837a1468
	if (cr6.eq) goto loc_837A1468;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837A1468;
	sub_825952B8(ctx, base);
loc_837A1468:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A147C"))) PPC_WEAK_FUNC(sub_837A147C);
PPC_FUNC_IMPL(__imp__sub_837A147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A1480"))) PPC_WEAK_FUNC(sub_837A1480);
PPC_FUNC_IMPL(__imp__sub_837A1480) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x837b4228
	ctx.lr = 0x837A14A8;
	sub_837B4228(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837A14C0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a14d0
	if (cr6.eq) goto loc_837A14D0;
	// bl 0x837b3fe0
	ctx.lr = 0x837A14CC;
	sub_837B3FE0(ctx, base);
	// b 0x837a14d4
	goto loc_837A14D4;
loc_837A14D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837A14D4:
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x837b3f48
	ctx.lr = 0x837A14E4;
	sub_837B3F48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// bl 0x837b3fa8
	ctx.lr = 0x837A14F0;
	sub_837B3FA8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a1510
	if (cr6.lt) goto loc_837A1510;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837A1510;
	sub_825952B8(ctx, base);
loc_837A1510:
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

__attribute__((alias("__imp__sub_837A1524"))) PPC_WEAK_FUNC(sub_837A1524);
PPC_FUNC_IMPL(__imp__sub_837A1524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A1528"))) PPC_WEAK_FUNC(sub_837A1528);
PPC_FUNC_IMPL(__imp__sub_837A1528) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lbz r8,137(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 137);
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// beq cr6,0x837a15e0
	if (cr6.eq) goto loc_837A15E0;
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837c4ab8
	ctx.lr = 0x837A157C;
	sub_837C4AB8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837A1594;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a15a4
	if (cr6.eq) goto loc_837A15A4;
	// bl 0x837c49b0
	ctx.lr = 0x837A15A0;
	sub_837C49B0(ctx, base);
	// b 0x837a15a8
	goto loc_837A15A8;
loc_837A15A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_837A15A8:
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x837c49d0
	ctx.lr = 0x837A15B4;
	sub_837C49D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// bl 0x837c4a30
	ctx.lr = 0x837A15C0;
	sub_837C4A30(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a15e0
	if (cr6.lt) goto loc_837A15E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837A15E0;
	sub_825952B8(ctx, base);
loc_837A15E0:
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

__attribute__((alias("__imp__sub_837A15F8"))) PPC_WEAK_FUNC(sub_837A15F8);
PPC_FUNC_IMPL(__imp__sub_837A15F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837A1600;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,372
	ctx.r31.s64 = ctx.r3.s64 + 372;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r27,15
	ctx.r27.s64 = 15;
loc_837A1620:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837A1634;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a1644
	if (cr6.eq) goto loc_837A1644;
	// bl 0x837a56d0
	ctx.lr = 0x837A1640;
	sub_837A56D0(ctx, base);
	// b 0x837a1648
	goto loc_837A1648;
loc_837A1644:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_837A1648:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,108(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r7,104(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r6,100(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x837a5b88
	ctx.lr = 0x837A1668;
	sub_837A5B88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x837a5808
	ctx.lr = 0x837A1674;
	sub_837A5808(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x837a56f8
	ctx.lr = 0x837A1680;
	sub_837A56F8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a169c
	if (cr6.lt) goto loc_837A169C;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x837A169C;
	sub_825952B8(ctx, base);
loc_837A169C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// blt cr6,0x837a16c4
	if (cr6.lt) goto loc_837A16C4;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x837A16C4;
	sub_825952B8(ctx, base);
loc_837A16C4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r28,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r28.u8);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x837a1620
	if (cr6.lt) goto loc_837A1620;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A16E8"))) PPC_WEAK_FUNC(sub_837A16E8);
PPC_FUNC_IMPL(__imp__sub_837A16E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837A16F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837a181c
	if (cr6.eq) goto loc_837A181C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x837a1720
	if (!cr6.eq) goto loc_837A1720;
	// stw r30,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r30.u32);
loc_837A1720:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r28,68(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r26,80(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r25,84(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r24,88(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r23,128(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// bl 0x837a68f0
	ctx.lr = 0x837A1790;
	sub_837A68F0(ctx, base);
	// lbz r4,449(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 449);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// beq cr6,0x837a17c4
	if (cr6.eq) goto loc_837A17C4;
	// li r10,100
	ctx.r10.s64 = 100;
	// stb r11,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r11.u8);
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
loc_837A17C4:
	// lbz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 448);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,76
	ctx.r4.s64 = 76;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r8.u32);
	// bl 0x82595718
	ctx.lr = 0x837A17E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a17f8
	if (cr6.eq) goto loc_837A17F8;
	// bl 0x837a67a8
	ctx.lr = 0x837A17F4;
	sub_837A67A8(ctx, base);
	// b 0x837a17fc
	goto loc_837A17FC;
loc_837A17F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837A17FC:
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x837a5f40
	ctx.lr = 0x837A1808;
	sub_837A5F40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x837a5fb8
	ctx.lr = 0x837A1814;
	sub_837A5FB8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8378e240
	ctx.lr = 0x837A181C;
	sub_8378E240(ctx, base);
loc_837A181C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A1824"))) PPC_WEAK_FUNC(sub_837A1824);
PPC_FUNC_IMPL(__imp__sub_837A1824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A1828"))) PPC_WEAK_FUNC(sub_837A1828);
PPC_FUNC_IMPL(__imp__sub_837A1828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837A1830;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,5944
	ctx.r9.s64 = ctx.r11.s64 + 5944;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r30.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stb r30,385(r31)
	PPC_STORE_U8(ctx.r31.u32 + 385, ctx.r30.u8);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stb r30,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r30.u8);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stb r30,484(r31)
	PPC_STORE_U8(ctx.r31.u32 + 484, ctx.r30.u8);
	// std r30,488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 488, ctx.r30.u64);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stb r28,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r28.u8);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x837A18BC;
	sub_831CDCF0(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837A18D8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837a18d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837A18D8;
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// addi r11,r31,372
	ctx.r11.s64 = ctx.r31.s64 + 372;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// bl 0x8378b870
	ctx.lr = 0x837A18F0;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a1900
	if (cr6.eq) goto loc_837A1900;
	// bl 0x8378b870
	ctx.lr = 0x837A18FC;
	sub_8378B870(ctx, base);
	// stw r31,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r31.u32);
loc_837A1900:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,-14192
	ctx.r29.s64 = ctx.r11.s64 + -14192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A1910;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r10,-14568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14568);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837a1924
	if (!cr6.eq) goto loc_837A1924;
	// stw r31,-14568(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14568, ctx.r31.u32);
loc_837A1924:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,392
	ctx.r11.s64 = ctx.r31.s64 + 392;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837A1934:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x837a1934
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837A1934;
	// stb r28,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r28.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 449, ctx.r30.u8);
	// addi r11,r31,452
	ctx.r11.s64 = ctx.r31.s64 + 452;
	// stb r30,450(r31)
	PPC_STORE_U8(ctx.r31.u32 + 450, ctx.r30.u8);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// bl 0x82597088
	ctx.lr = 0x837A1968;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A1974"))) PPC_WEAK_FUNC(sub_837A1974);
PPC_FUNC_IMPL(__imp__sub_837A1974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A1978"))) PPC_WEAK_FUNC(sub_837A1978);
PPC_FUNC_IMPL(__imp__sub_837A1978) {
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
	// bl 0x837a1028
	ctx.lr = 0x837A1998;
	sub_837A1028(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a19b8
	if (cr6.eq) goto loc_837A19B8;
	// bl 0x82595188
	ctx.lr = 0x837A19A8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837A19B8;
	sub_825952B8(ctx, base);
loc_837A19B8:
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

__attribute__((alias("__imp__sub_837A19D4"))) PPC_WEAK_FUNC(sub_837A19D4);
PPC_FUNC_IMPL(__imp__sub_837A19D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A19D8"))) PPC_WEAK_FUNC(sub_837A19D8);
PPC_FUNC_IMPL(__imp__sub_837A19D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837A19E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// bge cr6,0x837a1ab0
	if (!cr6.lt) goto loc_837A1AB0;
loc_837A1A0C:
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r31,r10,r28
	ctx.r31.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x837a1a64
	if (cr6.gt) goto loc_837A1A64;
	// blt cr6,0x837a1a5c
	if (cr6.lt) goto loc_837A1A5C;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwz r7,20(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837a1a44
	if (cr6.lt) goto loc_837A1A44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837A1A44:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x837A1A54;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a1a64
	if (cr6.lt) goto loc_837A1A64;
loc_837A1A5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837a1a68
	goto loc_837A1A68;
loc_837A1A64:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A1A68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a1ab0
	if (cr6.eq) goto loc_837A1AB0;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A1A98;
	sub_8259CB28(ctx, base);
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r26,r30
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, xer);
	// addze r30,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r30.s64 = temp.s64;
	// blt cr6,0x837a1a0c
	if (cr6.lt) goto loc_837A1A0C;
loc_837A1AB0:
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A1AD4;
	sub_8259CB28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A1ADC"))) PPC_WEAK_FUNC(sub_837A1ADC);
PPC_FUNC_IMPL(__imp__sub_837A1ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A1AE0"))) PPC_WEAK_FUNC(sub_837A1AE0);
PPC_FUNC_IMPL(__imp__sub_837A1AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837A1AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x837a1b28
	if (cr6.eq) goto loc_837A1B28;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_837A1B04:
	// lwzu r11,-32(r31)
	ea = -32 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stwu r11,-32(r30)
	ea = -32 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x837A1B20;
	sub_8259CB28(ctx, base);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x837a1b04
	if (!cr6.eq) goto loc_837A1B04;
loc_837A1B28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A1B34"))) PPC_WEAK_FUNC(sub_837A1B34);
PPC_FUNC_IMPL(__imp__sub_837A1B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A1B38"))) PPC_WEAK_FUNC(sub_837A1B38);
PPC_FUNC_IMPL(__imp__sub_837A1B38) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a1b90
	if (!cr6.eq) goto loc_837A1B90;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837A1B78;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a1b88
	if (cr6.eq) goto loc_837A1B88;
	// bl 0x837c3b88
	ctx.lr = 0x837A1B84;
	sub_837C3B88(ctx, base);
	// b 0x837a1b8c
	goto loc_837A1B8C;
loc_837A1B88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_837A1B8C:
	// stw r3,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
loc_837A1B90:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x837c3c08
	ctx.lr = 0x837A1BA8;
	sub_837C3C08(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x837A1BCC;
	sub_8259CB28(ctx, base);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bl 0x837c38a0
	ctx.lr = 0x837A1BE8;
	sub_837C38A0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x837a1c08
	if (cr6.lt) goto loc_837A1C08;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837A1C08;
	sub_825952B8(ctx, base);
loc_837A1C08:
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

__attribute__((alias("__imp__sub_837A1C20"))) PPC_WEAK_FUNC(sub_837A1C20);
PPC_FUNC_IMPL(__imp__sub_837A1C20) {
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
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a1cf8
	if (cr6.eq) goto loc_837A1CF8;
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a1cf8
	if (!cr6.eq) goto loc_837A1CF8;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,5792
	ctx.r4.s64 = ctx.r11.s64 + 5792;
	// bl 0x837b0c10
	ctx.lr = 0x837A1C60;
	sub_837B0C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x837c4e58
	ctx.lr = 0x837A1C80;
	sub_837C4E58(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837a1ce8
	if (cr6.eq) goto loc_837A1CE8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x837A1CA0;
	sub_825A1DA8(ctx, base);
	// bl 0x830ffbc0
	ctx.lr = 0x837A1CA4;
	sub_830FFBC0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83101530
	ctx.lr = 0x837A1CBC;
	sub_83101530(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// bge cr6,0x837a1cd8
	if (!cr6.lt) goto loc_837A1CD8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_837A1CD8:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83101ba0
	ctx.lr = 0x837A1CE8;
	sub_83101BA0(ctx, base);
loc_837A1CE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837A1CF0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x837A1CF8;
	sub_8387E8E0(ctx, base);
loc_837A1CF8:
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

__attribute__((alias("__imp__sub_837A1D10"))) PPC_WEAK_FUNC(sub_837A1D10);
PPC_FUNC_IMPL(__imp__sub_837A1D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837A1D18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x837a1df8
	if (!cr6.lt) goto loc_837A1DF8;
loc_837A1D44:
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,-32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837a1da0
	if (cr6.gt) goto loc_837A1DA0;
	// blt cr6,0x837a1d98
	if (cr6.lt) goto loc_837A1D98;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a1d80
	if (cr6.lt) goto loc_837A1D80;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_837A1D80:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x837A1D90;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a1da0
	if (cr6.lt) goto loc_837A1DA0;
loc_837A1D98:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837a1da4
	goto loc_837A1DA4;
loc_837A1DA0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A1DA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a1db4
	if (cr6.eq) goto loc_837A1DB4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_837A1DB4:
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A1DE0;
	sub_8259CB28(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x837a1d44
	if (cr6.lt) goto loc_837A1D44;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_837A1DF8:
	// bne cr6,0x837a1e30
	if (!cr6.eq) goto loc_837A1E30;
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A1E2C;
	sub_8259CB28(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_837A1E30:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a19d8
	ctx.lr = 0x837A1E44;
	sub_837A19D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A1E4C"))) PPC_WEAK_FUNC(sub_837A1E4C);
PPC_FUNC_IMPL(__imp__sub_837A1E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A1E50"))) PPC_WEAK_FUNC(sub_837A1E50);
PPC_FUNC_IMPL(__imp__sub_837A1E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837A1E58;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,480(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837a1fc8
	if (cr6.eq) goto loc_837A1FC8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831049a8
	ctx.lr = 0x837A1E78;
	sub_831049A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825832e8
	ctx.lr = 0x837A1E80;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83104a50
	ctx.lr = 0x837A1E90;
	sub_83104A50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83104a50
	ctx.lr = 0x837A1EA0;
	sub_83104A50(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83104ab8
	ctx.lr = 0x837A1EB0;
	sub_83104AB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83104ab8
	ctx.lr = 0x837A1EC0;
	sub_83104AB8(ctx, base);
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r3,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// stw r27,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r27.u32);
	// stw r26,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r26.u32);
	// ble cr6,0x837a1fc0
	if (!cr6.gt) goto loc_837A1FC0;
	// addi r29,r29,500
	ctx.r29.s64 = ctx.r29.s64 + 500;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// li r27,0
	ctx.r27.s64 = 0;
loc_837A1EE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83104a50
	ctx.lr = 0x837A1EF4;
	sub_83104A50(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83104ab8
	ctx.lr = 0x837A1F04;
	sub_83104AB8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835ecbd0
	ctx.lr = 0x837A1F10;
	sub_835ECBD0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835ecaf8
	ctx.lr = 0x837A1F18;
	sub_835ECAF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825832f8
	ctx.lr = 0x837A1F24;
	sub_825832F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83131d70
	ctx.lr = 0x837A1F30;
	sub_83131D70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8307e038
	ctx.lr = 0x837A1F3C;
	sub_8307E038(ctx, base);
	// clrldi r6,r25,32
	ctx.r6.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835ed120
	ctx.lr = 0x837A1F50;
	sub_835ED120(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x835ebe48
	ctx.lr = 0x837A1F64;
	sub_835EBE48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833bcae8
	ctx.lr = 0x837A1F7C;
	sub_833BCAE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835977d8
	ctx.lr = 0x837A1F8C;
	sub_835977D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x837A1F98;
	sub_835977D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x837A1FA4;
	sub_82572FA0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835ecaa8
	ctx.lr = 0x837A1FAC;
	sub_835ECAA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835f3ab0
	ctx.lr = 0x837A1FB4;
	sub_835F3AB0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x837a1ee8
	if (cr6.lt) goto loc_837A1EE8;
loc_837A1FC0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a5c688
	ctx.lr = 0x837A1FC8;
	sub_82A5C688(ctx, base);
loc_837A1FC8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A1FD0"))) PPC_WEAK_FUNC(sub_837A1FD0);
PPC_FUNC_IMPL(__imp__sub_837A1FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837A1FD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x837a2044
	if (cr6.eq) goto loc_837A2044;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r5,4
	ctx.r31.s64 = ctx.r5.s64 + 4;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_837A2000:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837a2030
	if (cr6.eq) goto loc_837A2030;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x8259cb28
	ctx.lr = 0x837A2030;
	sub_8259CB28(ctx, base);
loc_837A2030:
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x837a2000
	if (!cr6.eq) goto loc_837A2000;
loc_837A2044:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A2050"))) PPC_WEAK_FUNC(sub_837A2050);
PPC_FUNC_IMPL(__imp__sub_837A2050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837A2058;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// srawi r25,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 5;
	// srawi r10,r25,1
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 1;
	// addze. r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble 0x837a20fc
	if (!cr0.gt) goto loc_837A20FC;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r28,15
	ctx.r28.s64 = 15;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r24,2
	ctx.r24.s64 = 2;
loc_837A208C:
	// lwzu r11,-32(r29)
	ea = -32 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A20B8;
	sub_8259CB28(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837a1d10
	ctx.lr = 0x837A20CC;
	sub_837A1D10(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837a20e8
	if (cr6.lt) goto loc_837A20E8;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x837A20E8;
	sub_825952B8(ctx, base);
loc_837A20E8:
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// bgt cr6,0x837a208c
	if (cr6.gt) goto loc_837A208C;
loc_837A20FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A2104"))) PPC_WEAK_FUNC(sub_837A2104);
PPC_FUNC_IMPL(__imp__sub_837A2104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A2108"))) PPC_WEAK_FUNC(sub_837A2108);
PPC_FUNC_IMPL(__imp__sub_837A2108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x837A2110;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x837a22d8
	if (cr6.eq) goto loc_837A22D8;
	// addi r28,r3,32
	ctx.r28.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, xer);
	// beq cr6,0x837a22d8
	if (cr6.eq) goto loc_837A22D8;
	// lbz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r24,r28,4
	ctx.r24.s64 = ctx.r28.s64 + 4;
	// li r23,15
	ctx.r23.s64 = 15;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r20,2
	ctx.r20.s64 = 2;
loc_837A2148:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A2174;
	sub_8259CB28(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x837a21c4
	if (cr6.gt) goto loc_837A21C4;
	// blt cr6,0x837a21bc
	if (cr6.lt) goto loc_837A21BC;
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// lwz r7,20(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837a21a0
	if (cr6.lt) goto loc_837A21A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837A21A0:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x827a8810
	ctx.lr = 0x837A21B4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a21c4
	if (cr6.lt) goto loc_837A21C4;
loc_837A21BC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x837a21c8
	goto loc_837A21C8;
loc_837A21C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A21C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a21f8
	if (cr6.eq) goto loc_837A21F8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r24,28
	ctx.r5.s64 = ctx.r24.s64 + 28;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x837a1ae0
	ctx.lr = 0x837A21E8;
	sub_837A1AE0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x837a2290
	goto loc_837A2290;
loc_837A21F8:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_837A21FC:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x837a2254
	if (cr6.gt) goto loc_837A2254;
	// blt cr6,0x837a224c
	if (cr6.lt) goto loc_837A224C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a2230
	if (cr6.lt) goto loc_837A2230;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837a2234
	goto loc_837A2234;
loc_837A2230:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_837A2234:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x827a8810
	ctx.lr = 0x837A2244;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a2254
	if (cr6.lt) goto loc_837A2254;
loc_837A224C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x837a2258
	goto loc_837A2258;
loc_837A2254:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A2258:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a2288
	if (cr6.eq) goto loc_837A2288;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A2280;
	sub_8259CB28(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x837a21fc
	goto loc_837A21FC;
loc_837A2288:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_837A2290:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x837A22A0;
	sub_8259CB28(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a22bc
	if (cr6.lt) goto loc_837A22BC;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x837A22BC;
	sub_825952B8(ctx, base);
loc_837A22BC:
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
	// cmplw cr6,r28,r21
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, xer);
	// bne cr6,0x837a2148
	if (!cr6.eq) goto loc_837A2148;
loc_837A22D8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A22E0"))) PPC_WEAK_FUNC(sub_837A22E0);
PPC_FUNC_IMPL(__imp__sub_837A22E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837A22E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,-32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r11,r4,-32
	ctx.r11.s64 = ctx.r4.s64 + -32;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x837A2330;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r7,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r7.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A234C;
	sub_8259CB28(ctx, base);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-32
	ctx.r5.s64 = ctx.r11.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r5,r5,5
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a1d10
	ctx.lr = 0x837A2368;
	sub_837A1D10(ctx, base);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x837a2388
	if (cr6.lt) goto loc_837A2388;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837A2388;
	sub_825952B8(ctx, base);
loc_837A2388:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A2390"))) PPC_WEAK_FUNC(sub_837A2390);
PPC_FUNC_IMPL(__imp__sub_837A2390) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// sth r7,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r7.u16);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bl 0x837c5068
	ctx.lr = 0x837A23F8;
	sub_837C5068(ctx, base);
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x837a2410
	if (!cr6.eq) goto loc_837A2410;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837a1e50
	ctx.lr = 0x837A2410;
	sub_837A1E50(ctx, base);
loc_837A2410:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837A2428;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a2438
	if (cr6.eq) goto loc_837A2438;
	// bl 0x837c4dc8
	ctx.lr = 0x837A2434;
	sub_837C4DC8(ctx, base);
	// b 0x837a243c
	goto loc_837A243C;
loc_837A2438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837A243C:
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x837c4c98
	ctx.lr = 0x837A244C;
	sub_837C4C98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x837c4cf8
	ctx.lr = 0x837A2458;
	sub_837C4CF8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8378f088
	ctx.lr = 0x837A2460;
	sub_8378F088(ctx, base);
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

__attribute__((alias("__imp__sub_837A2478"))) PPC_WEAK_FUNC(sub_837A2478);
PPC_FUNC_IMPL(__imp__sub_837A2478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A2480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r30,r3,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r30,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x837a24c0
	if (!cr6.gt) goto loc_837A24C0;
loc_837A249C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837a22e0
	ctx.lr = 0x837A24AC;
	sub_837A22E0(ctx, base);
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// rlwinm r11,r30,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x837a249c
	if (cr6.gt) goto loc_837A249C;
loc_837A24C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A24C8"))) PPC_WEAK_FUNC(sub_837A24C8);
PPC_FUNC_IMPL(__imp__sub_837A24C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A24D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x837a0fa0
	ctx.lr = 0x837A24EC;
	sub_837A0FA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a251c
	if (cr6.eq) goto loc_837A251C;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x837a251c
	if (cr6.eq) goto loc_837A251C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82af6620
	ctx.lr = 0x837A251C;
	sub_82AF6620(ctx, base);
loc_837A251C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837a0fa0
	ctx.lr = 0x837A2528;
	sub_837A0FA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a2558
	if (cr6.eq) goto loc_837A2558;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// beq cr6,0x837a2558
	if (cr6.eq) goto loc_837A2558;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82af6620
	ctx.lr = 0x837A2558;
	sub_82AF6620(ctx, base);
loc_837A2558:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837a0fa0
	ctx.lr = 0x837A2564;
	sub_837A0FA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a2594
	if (cr6.eq) goto loc_837A2594;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x837a2594
	if (cr6.eq) goto loc_837A2594;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82af6620
	ctx.lr = 0x837A2594;
	sub_82AF6620(ctx, base);
loc_837A2594:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A259C"))) PPC_WEAK_FUNC(sub_837A259C);
PPC_FUNC_IMPL(__imp__sub_837A259C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A25A0"))) PPC_WEAK_FUNC(sub_837A25A0);
PPC_FUNC_IMPL(__imp__sub_837A25A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837A25A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x837a2624
	if (!cr6.gt) goto loc_837A2624;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r31,r11,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r27,r11,6,0,25
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r28,r31,r3
	ctx.r28.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r5,r27,r3
	ctx.r5.u64 = ctx.r27.u64 + ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x837a24c8
	ctx.lr = 0x837A25E8;
	sub_837A24C8(ctx, base);
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x837a24c8
	ctx.lr = 0x837A25F8;
	sub_837A24C8(ctx, base);
	// subf r31,r31,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r27,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r27.s64;
	// bl 0x837a24c8
	ctx.lr = 0x837A260C;
	sub_837A24C8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837a24c8
	ctx.lr = 0x837A261C;
	sub_837A24C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837A2624:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837a24c8
	ctx.lr = 0x837A2630;
	sub_837A24C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A2638"))) PPC_WEAK_FUNC(sub_837A2638);
PPC_FUNC_IMPL(__imp__sub_837A2638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x837A2640;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r23,r3,200
	ctx.r23.s64 = ctx.r3.s64 + 200;
	// addi r25,r3,232
	ctx.r25.s64 = ctx.r3.s64 + 232;
	// addi r22,r3,216
	ctx.r22.s64 = ctx.r3.s64 + 216;
	// addi r24,r3,248
	ctx.r24.s64 = ctx.r3.s64 + 248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r4,144
	ctx.r29.s64 = ctx.r4.s64 + 144;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r21,2
	ctx.r21.s64 = 2;
loc_837A2670:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_837A2680:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837a2680
	if (!cr6.eq) goto loc_837A2680;
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
	ctx.lr = 0x837A26A8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x837A26B4;
	sub_8291FDC8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837a26d0
	if (cr6.lt) goto loc_837A26D0;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x837A26D0;
	sub_825952B8(ctx, base);
loc_837A26D0:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x835977d8
	ctx.lr = 0x837A26E8;
	sub_835977D8(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_837A26FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837a26fc
	if (!cr6.eq) goto loc_837A26FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837A2720;
	sub_8259CC28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x837A272C;
	sub_8291FDC8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837a2748
	if (cr6.lt) goto loc_837A2748;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x837A2748;
	sub_825952B8(ctx, base);
loc_837A2748:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x835977d8
	ctx.lr = 0x837A2760;
	sub_835977D8(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x837a2670
	if (!cr0.eq) goto loc_837A2670;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x837a279c
	if (!cr0.eq) goto loc_837A279C;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x837a27a4
	if (cr0.eq) goto loc_837A27A4;
loc_837A279C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r11.u32);
loc_837A27A4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A27AC"))) PPC_WEAK_FUNC(sub_837A27AC);
PPC_FUNC_IMPL(__imp__sub_837A27AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A27B0"))) PPC_WEAK_FUNC(sub_837A27B0);
PPC_FUNC_IMPL(__imp__sub_837A27B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x837A27B8;
	__savegprlr_19(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r5,r5,-32
	ctx.r5.s64 = ctx.r5.s64 + -32;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837a25a0
	ctx.lr = 0x837A27F0;
	sub_837A25A0(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r23,r31,32
	ctx.r23.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r21,r31
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r31.u32, xer);
	// bge cr6,0x837a28dc
	if (!cr6.lt) goto loc_837A28DC;
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
loc_837A2808:
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x837a2858
	if (cr6.gt) goto loc_837A2858;
	// blt cr6,0x837a2850
	if (cr6.lt) goto loc_837A2850;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a2834
	if (cr6.lt) goto loc_837A2834;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x837a2838
	goto loc_837A2838;
loc_837A2834:
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
loc_837A2838:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x827a8810
	ctx.lr = 0x837A2848;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a2858
	if (cr6.lt) goto loc_837A2858;
loc_837A2850:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x837a285c
	goto loc_837A285C;
loc_837A2858:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A285C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a28dc
	if (!cr6.eq) goto loc_837A28DC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,-20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x837a28b8
	if (cr6.gt) goto loc_837A28B8;
	// blt cr6,0x837a28b0
	if (cr6.lt) goto loc_837A28B0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a2894
	if (cr6.lt) goto loc_837A2894;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// b 0x837a2898
	goto loc_837A2898;
loc_837A2894:
	// addi r6,r31,-16
	ctx.r6.s64 = ctx.r31.s64 + -16;
loc_837A2898:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x827a8810
	ctx.lr = 0x837A28A8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a28b8
	if (cr6.lt) goto loc_837A28B8;
loc_837A28B0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x837a28bc
	goto loc_837A28BC;
loc_837A28B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A28BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a28dc
	if (!cr6.eq) goto loc_837A28DC;
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, xer);
	// blt cr6,0x837a2808
	if (cr6.lt) goto loc_837A2808;
loc_837A28DC:
	// cmplw cr6,r23,r20
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, xer);
	// bge cr6,0x837a29b8
	if (!cr6.lt) goto loc_837A29B8;
	// addi r31,r23,4
	ctx.r31.s64 = ctx.r23.s64 + 4;
loc_837A28E8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x837a2938
	if (cr6.gt) goto loc_837A2938;
	// blt cr6,0x837a2930
	if (cr6.lt) goto loc_837A2930;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837a2914
	if (cr6.lt) goto loc_837A2914;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837A2914:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x837A2928;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a2938
	if (cr6.lt) goto loc_837A2938;
loc_837A2930:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x837a293c
	goto loc_837A293C;
loc_837A2938:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A293C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a29b8
	if (!cr6.eq) goto loc_837A29B8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x837a2998
	if (cr6.gt) goto loc_837A2998;
	// blt cr6,0x837a2990
	if (cr6.lt) goto loc_837A2990;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a2978
	if (cr6.lt) goto loc_837A2978;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837a297c
	goto loc_837A297C;
loc_837A2978:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_837A297C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x837A2988;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a2998
	if (cr6.lt) goto loc_837A2998;
loc_837A2990:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x837a299c
	goto loc_837A299C;
loc_837A2998:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A299C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a29b8
	if (!cr6.eq) goto loc_837A29B8;
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r23,r20
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, xer);
	// blt cr6,0x837a28e8
	if (cr6.lt) goto loc_837A28E8;
loc_837A29B8:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r22,2
	ctx.r22.s64 = 2;
loc_837A29CC:
	// cmplw cr6,r27,r20
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, xer);
	// bge cr6,0x837a2b38
	if (!cr6.lt) goto loc_837A2B38;
loc_837A29D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x837a2a24
	if (cr6.gt) goto loc_837A2A24;
	// blt cr6,0x837a2a1c
	if (cr6.lt) goto loc_837A2A1C;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwz r7,20(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837a2a04
	if (cr6.lt) goto loc_837A2A04;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837A2A04:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x837A2A14;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a2a24
	if (cr6.lt) goto loc_837A2A24;
loc_837A2A1C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x837a2a28
	goto loc_837A2A28;
loc_837A2A24:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A2A28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a2b2c
	if (!cr6.eq) goto loc_837A2B2C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x837a2a84
	if (cr6.gt) goto loc_837A2A84;
	// blt cr6,0x837a2a7c
	if (cr6.lt) goto loc_837A2A7C;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837a2a60
	if (cr6.lt) goto loc_837A2A60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837A2A60:
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// lwz r5,20(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x837A2A74;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a2a84
	if (cr6.lt) goto loc_837A2A84;
loc_837A2A7C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x837a2a88
	goto loc_837A2A88;
loc_837A2A84:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A2A88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a2b38
	if (!cr6.eq) goto loc_837A2B38;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x837a2b2c
	if (cr6.eq) goto loc_837A2B2C;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A2AD8;
	sub_8259CB28(ctx, base);
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2AF0;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2B04;
	sub_8259CB28(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x837a2b20
	if (cr6.lt) goto loc_837A2B20;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x837A2B20;
	sub_825952B8(ctx, base);
loc_837A2B20:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
loc_837A2B2C:
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// cmplw cr6,r27,r20
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, xer);
	// blt cr6,0x837a29d4
	if (cr6.lt) goto loc_837A29D4;
loc_837A2B38:
	// cmplw cr6,r24,r21
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, xer);
	// ble cr6,0x837a2cb8
	if (!cr6.gt) goto loc_837A2CB8;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// addi r31,r24,-28
	ctx.r31.s64 = ctx.r24.s64 + -28;
loc_837A2B48:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x837a2b98
	if (cr6.gt) goto loc_837A2B98;
	// blt cr6,0x837a2b90
	if (cr6.lt) goto loc_837A2B90;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a2b74
	if (cr6.lt) goto loc_837A2B74;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x837a2b78
	goto loc_837A2B78;
loc_837A2B74:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_837A2B78:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x837A2B88;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a2b98
	if (cr6.lt) goto loc_837A2B98;
loc_837A2B90:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x837a2b9c
	goto loc_837A2B9C;
loc_837A2B98:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A2B9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a2ca0
	if (!cr6.eq) goto loc_837A2CA0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x837a2bf8
	if (cr6.gt) goto loc_837A2BF8;
	// blt cr6,0x837a2bf0
	if (cr6.lt) goto loc_837A2BF0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a2bd4
	if (cr6.lt) goto loc_837A2BD4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837a2bd8
	goto loc_837A2BD8;
loc_837A2BD4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_837A2BD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x837A2BE8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837a2bf8
	if (cr6.lt) goto loc_837A2BF8;
loc_837A2BF0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x837a2bfc
	goto loc_837A2BFC;
loc_837A2BF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837A2BFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a2cb4
	if (!cr6.eq) goto loc_837A2CB4;
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837a2ca0
	if (cr6.eq) goto loc_837A2CA0;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r25,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r25.u8);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A2C50;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2C64;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2C78;
	sub_8259CB28(ctx, base);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837a2c94
	if (cr6.lt) goto loc_837A2C94;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x837A2C94;
	sub_825952B8(ctx, base);
loc_837A2C94:
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// stb r25,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r25.u8);
loc_837A2CA0:
	// addi r11,r24,-32
	ctx.r11.s64 = ctx.r24.s64 + -32;
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, xer);
	// blt cr6,0x837a2b48
	if (cr6.lt) goto loc_837A2B48;
loc_837A2CB4:
	// cmplw cr6,r24,r21
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, xer);
loc_837A2CB8:
	// bne cr6,0x837a2e04
	if (!cr6.eq) goto loc_837A2E04;
	// cmplw cr6,r27,r20
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, xer);
	// beq cr6,0x837a2f74
	if (cr6.eq) goto loc_837A2F74;
	// cmplw cr6,r23,r27
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r27.u32, xer);
	// beq cr6,0x837a2d5c
	if (cr6.eq) goto loc_837A2D5C;
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// beq cr6,0x837a2d5c
	if (cr6.eq) goto loc_837A2D5C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r25,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r25.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r30,r23,4
	ctx.r30.s64 = ctx.r23.s64 + 4;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A2D0C;
	sub_8259CB28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2D20;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2D34;
	sub_8259CB28(ctx, base);
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837a2d50
	if (cr6.lt) goto loc_837A2D50;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x837A2D50;
	sub_825952B8(ctx, base);
loc_837A2D50:
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// stb r25,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r25.u8);
loc_837A2D5C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837a29cc
	if (cr6.eq) goto loc_837A29CC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r25,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r25.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A2DB0;
	sub_8259CB28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2DC4;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2DD8;
	sub_8259CB28(ctx, base);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x837a2df4
	if (cr6.lt) goto loc_837A2DF4;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x837A2DF4;
	sub_825952B8(ctx, base);
loc_837A2DF4:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// stb r25,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r25.u8);
	// b 0x837a29cc
	goto loc_837A29CC;
loc_837A2E04:
	// cmplw cr6,r27,r20
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, xer);
	// bne cr6,0x837a2f44
	if (!cr6.eq) goto loc_837A2F44;
	// addi r11,r24,-32
	ctx.r11.s64 = ctx.r24.s64 + -32;
	// addi r10,r29,-32
	ctx.r10.s64 = ctx.r29.s64 + -32;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837a2eac
	if (cr6.eq) goto loc_837A2EAC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r31,r24,4
	ctx.r31.s64 = ctx.r24.s64 + 4;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r25,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r25.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A2E5C;
	sub_8259CB28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2E70;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2E84;
	sub_8259CB28(ctx, base);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837a2ea0
	if (cr6.lt) goto loc_837A2EA0;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x837A2EA0;
	sub_825952B8(ctx, base);
loc_837A2EA0:
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// stb r25,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r25.u8);
loc_837A2EAC:
	// addi r23,r23,-32
	ctx.r23.s64 = ctx.r23.s64 + -32;
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// beq cr6,0x837a29cc
	if (cr6.eq) goto loc_837A29CC;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r25,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r25,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r25.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r30,r23,4
	ctx.r30.s64 = ctx.r23.s64 + 4;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A2EF0;
	sub_8259CB28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2F04;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A2F18;
	sub_8259CB28(ctx, base);
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837a2f34
	if (cr6.lt) goto loc_837A2F34;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x837A2F34;
	sub_825952B8(ctx, base);
loc_837A2F34:
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// stw r25,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r25.u32);
	// stb r25,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r25.u8);
	// b 0x837a29cc
	goto loc_837A29CC;
loc_837A2F44:
	// addi r24,r24,-32
	ctx.r24.s64 = ctx.r24.s64 + -32;
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, xer);
	// beq cr6,0x837a2f6c
	if (cr6.eq) goto loc_837A2F6C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r24,4
	ctx.r4.s64 = ctx.r24.s64 + 4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// bl 0x82af6620
	ctx.lr = 0x837A2F6C;
	sub_82AF6620(ctx, base);
loc_837A2F6C:
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// b 0x837a29cc
	goto loc_837A29CC;
loc_837A2F74:
	// stw r29,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r29.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r23,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r23.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A2F88"))) PPC_WEAK_FUNC(sub_837A2F88);
PPC_FUNC_IMPL(__imp__sub_837A2F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837A2F90;
	__savegprlr_25(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// addi r30,r11,5540
	ctx.r30.s64 = ctx.r11.s64 + 5540;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r30,-204
	ctx.r4.s64 = ctx.r30.s64 + -204;
	// bl 0x8259cc28
	ctx.lr = 0x837A2FC8;
	sub_8259CC28(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r30,-218
	ctx.r4.s64 = ctx.r30.s64 + -218;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x837A2FE4;
	sub_8259CC28(ctx, base);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// addi r4,r30,-217
	ctx.r4.s64 = ctx.r30.s64 + -217;
	// stb r29,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8259cc28
	ctx.lr = 0x837A3000;
	sub_8259CC28(ctx, base);
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// stw r29,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r29.u32);
	// addi r4,r30,-194
	ctx.r4.s64 = ctx.r30.s64 + -194;
	// stb r29,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8259cc28
	ctx.lr = 0x837A301C;
	sub_8259CC28(ctx, base);
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r29,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r29.u32);
	// addi r4,r30,-193
	ctx.r4.s64 = ctx.r30.s64 + -193;
	// stb r29,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8259cc28
	ctx.lr = 0x837A3038;
	sub_8259CC28(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x837A3054;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x837a3164
	if (cr6.gt) goto loc_837A3164;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837a30a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A30A0;
	// bdzf 4*cr6+eq,0x837a30bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A30BC;
	// bdzf 4*cr6+eq,0x837a30d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A30D8;
	// bdzf 4*cr6+eq,0x837a30f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A30F4;
	// bdzf 4*cr6+eq,0x837a3110
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A3110;
	// bdzf 4*cr6+eq,0x837a312c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A312C;
	// bdzf 4*cr6+eq,0x837a3144
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A3144;
	// bne cr6,0x837a3164
	if (!cr6.eq) goto loc_837A3164;
	// addi r4,r30,-188
	ctx.r4.s64 = ctx.r30.s64 + -188;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837A3098;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-176
	ctx.r4.s64 = ctx.r30.s64 + -176;
	// b 0x837a3158
	goto loc_837A3158;
loc_837A30A0:
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837A30B0;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x837a315c
	goto loc_837A315C;
loc_837A30BC:
	// addi r4,r30,-156
	ctx.r4.s64 = ctx.r30.s64 + -156;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837A30CC;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// li r5,10
	ctx.r5.s64 = 10;
	// b 0x837a315c
	goto loc_837A315C;
loc_837A30D8:
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837A30E8;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x837a315c
	goto loc_837A315C;
loc_837A30F4:
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837A3104;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x837a315c
	goto loc_837A315C;
loc_837A3110:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837A3120;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x837a315c
	goto loc_837A315C;
loc_837A312C:
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837A313C;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// b 0x837a3158
	goto loc_837A3158;
loc_837A3144:
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837A3154;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
loc_837A3158:
	// li r5,3
	ctx.r5.s64 = 3;
loc_837A315C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x837A3164;
	sub_825A1EB8(ctx, base);
loc_837A3164:
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825a1da8
	ctx.lr = 0x837A317C;
	sub_825A1DA8(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r8,99
	cr6.compare<uint32_t>(ctx.r8.u32, 99, xer);
	// ble cr6,0x837a3198
	if (!cr6.gt) goto loc_837A3198;
	// li r8,99
	ctx.r8.s64 = 99;
loc_837A3198:
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,5324
	ctx.r9.s64 = ctx.r10.s64 + 5324;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_837A31A8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// ble cr6,0x837a31c8
	if (!cr6.gt) goto loc_837A31C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x837a31a8
	if (cr6.lt) goto loc_837A31A8;
	// b 0x837a3210
	goto loc_837A3210;
loc_837A31C8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,-60
	ctx.r5.s64 = ctx.r30.s64 + -60;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x831d0b08
	ctx.lr = 0x837A31E0;
	sub_831D0B08(ctx, base);
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837A31E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837a31e8
	if (!cr6.eq) goto loc_837A31E8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837A3210;
	sub_8259CC28(ctx, base);
loc_837A3210:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r25,2
	ctx.r25.s64 = 2;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x837a3224
	if (!cr6.eq) goto loc_837A3224;
	// stw r25,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r25.u32);
loc_837A3224:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x831d0b08
	ctx.lr = 0x837A3238;
	sub_831D0B08(ctx, base);
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837A3240:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837a3240
	if (!cr6.eq) goto loc_837A3240;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837A3268;
	sub_8259CC28(ctx, base);
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x831d0b08
	ctx.lr = 0x837A327C;
	sub_831D0B08(ctx, base);
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837A3284:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837a3284
	if (!cr6.eq) goto loc_837A3284;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837A32AC;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837a32c8
	if (cr6.eq) goto loc_837A32C8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x837a32f0
	if (!cr6.eq) goto loc_837A32F0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// b 0x837a32e0
	goto loc_837A32E0;
loc_837A32C8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x837A32DC;
	sub_825A1DA8(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
loc_837A32E0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x837A32F0;
	sub_825A1DA8(ctx, base);
loc_837A32F0:
	// addi r5,r30,-36
	ctx.r5.s64 = ctx.r30.s64 + -36;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x831d0b08
	ctx.lr = 0x837A3304;
	sub_831D0B08(ctx, base);
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r29,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r29.u8);
loc_837A3318:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837a3318
	if (!cr6.eq) goto loc_837A3318;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837A3340;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x837a3354
	if (cr6.lt) goto loc_837A3354;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x837a3378
	if (!cr6.eq) goto loc_837A3378;
loc_837A3354:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825a1da8
	ctx.lr = 0x837A3368;
	sub_825A1DA8(ctx, base);
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825a1eb8
	ctx.lr = 0x837A3378;
	sub_825A1EB8(ctx, base);
loc_837A3378:
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// addi r4,r30,-191
	ctx.r4.s64 = ctx.r30.s64 + -191;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x837A3394;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837a33a8
	if (!cr6.eq) goto loc_837A33A8;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// b 0x837a33b4
	goto loc_837A33B4;
loc_837A33A8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837a33c0
	if (!cr6.eq) goto loc_837A33C0;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
loc_837A33B4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x837A33C0;
	sub_825A1EB8(ctx, base);
loc_837A33C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837a33d4
	if (!cr6.eq) goto loc_837A33D4;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// b 0x837a33e0
	goto loc_837A33E0;
loc_837A33D4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837a33ec
	if (!cr6.eq) goto loc_837A33EC;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
loc_837A33E0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x837A33EC;
	sub_825A1EB8(ctx, base);
loc_837A33EC:
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// addi r4,r30,-190
	ctx.r4.s64 = ctx.r30.s64 + -190;
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r29.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cc28
	ctx.lr = 0x837A3408;
	sub_8259CC28(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// beq cr6,0x837a3424
	if (cr6.eq) goto loc_837A3424;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
loc_837A3424:
	// bl 0x825a1eb8
	ctx.lr = 0x837A3428;
	sub_825A1EB8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8379d020
	ctx.lr = 0x837A3430;
	sub_8379D020(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r28,112
	ctx.r3.s64 = ctx.r28.s64 + 112;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r7.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// stw r9,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r9.u32);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r8,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r8.u32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r7,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r7.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A34A0;
	sub_8259CB28(ctx, base);
	// addi r3,r28,84
	ctx.r3.s64 = ctx.r28.s64 + 84;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x8259cb28
	ctx.lr = 0x837A34B4;
	sub_8259CB28(ctx, base);
	// addi r3,r28,140
	ctx.r3.s64 = ctx.r28.s64 + 140;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x8259cb28
	ctx.lr = 0x837A34C8;
	sub_8259CB28(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r9,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r9.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r8,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r8.u32);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r7,264(r28)
	PPC_STORE_U32(ctx.r28.u32 + 264, ctx.r7.u32);
	// bl 0x825a1da8
	ctx.lr = 0x837A34F4;
	sub_825A1DA8(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x837a3514
	if (!cr6.eq) goto loc_837A3514;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825a1da8
	ctx.lr = 0x837A3514;
	sub_825A1DA8(ctx, base);
loc_837A3514:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x837a3558
	if (cr6.gt) goto loc_837A3558;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837a3544
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A3544;
	// bdzf 4*cr6+eq,0x837a3558
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A3558;
	// bdzf 4*cr6+eq,0x837a3544
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A3544;
	// bdzf 4*cr6+eq,0x837a3544
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A3544;
	// bdzf 4*cr6+eq,0x837a3558
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A3558;
	// bdzf 4*cr6+eq,0x837a3544
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837A3544;
	// bne cr6,0x837a3544
	if (!cr6.eq) goto loc_837A3544;
loc_837A3544:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825a1da8
	ctx.lr = 0x837A3558;
	sub_825A1DA8(ctx, base);
loc_837A3558:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825a1eb8
	ctx.lr = 0x837A3568;
	sub_825A1EB8(ctx, base);
	// addi r3,r28,168
	ctx.r3.s64 = ctx.r28.s64 + 168;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cb28
	ctx.lr = 0x837A357C;
	sub_8259CB28(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r11.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r9,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r9.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r8,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r8.u32);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r7,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r7.u32);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r6,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r6.u32);
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// stb r5,76(r28)
	PPC_STORE_U8(ctx.r28.u32 + 76, ctx.r5.u8);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r4,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r4.u32);
	// blt cr6,0x837a35d0
	if (cr6.lt) goto loc_837A35D0;
	// stw r25,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r25.u32);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x837A35D0;
	sub_825952B8(ctx, base);
loc_837A35D0:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r29.u8);
	// blt cr6,0x837a35f8
	if (cr6.lt) goto loc_837A35F8;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x837A35F8;
	sub_825952B8(ctx, base);
loc_837A35F8:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// blt cr6,0x837a3620
	if (cr6.lt) goto loc_837A3620;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x837A3620;
	sub_825952B8(ctx, base);
loc_837A3620:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r29.u8);
	// blt cr6,0x837a3648
	if (cr6.lt) goto loc_837A3648;
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x837A3648;
	sub_825952B8(ctx, base);
loc_837A3648:
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// blt cr6,0x837a3670
	if (cr6.lt) goto loc_837A3670;
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x837A3670;
	sub_825952B8(ctx, base);
loc_837A3670:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r29,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r29.u8);
	// blt cr6,0x837a3698
	if (cr6.lt) goto loc_837A3698;
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x837A3698;
	sub_825952B8(ctx, base);
loc_837A3698:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// stw r29,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r29.u8);
	// blt cr6,0x837a36c0
	if (cr6.lt) goto loc_837A36C0;
	// stw r25,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r25.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x837A36C0;
	sub_825952B8(ctx, base);
loc_837A36C0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r29.u8);
	// blt cr6,0x837a36e8
	if (cr6.lt) goto loc_837A36E8;
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x837A36E8;
	sub_825952B8(ctx, base);
loc_837A36E8:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// blt cr6,0x837a3710
	if (cr6.lt) goto loc_837A3710;
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x837A3710;
	sub_825952B8(ctx, base);
loc_837A3710:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A371C"))) PPC_WEAK_FUNC(sub_837A371C);
PPC_FUNC_IMPL(__imp__sub_837A371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A3720"))) PPC_WEAK_FUNC(sub_837A3720);
PPC_FUNC_IMPL(__imp__sub_837A3720) {
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
	// bl 0x837a2f88
	ctx.lr = 0x837A3738;
	sub_837A2F88(ctx, base);
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

__attribute__((alias("__imp__sub_837A3750"))) PPC_WEAK_FUNC(sub_837A3750);
PPC_FUNC_IMPL(__imp__sub_837A3750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837A3758;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x837a37fc
	if (!cr6.gt) goto loc_837A37FC;
loc_837A3778:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x837a381c
	if (!cr6.gt) goto loc_837A381C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837a27b0
	ctx.lr = 0x837A3790;
	sub_837A27B0(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r28,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r28.s64;
	// subf r8,r30,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r30.s64;
	// rlwinm r7,r9,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r6,r8,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bge cr6,0x837a37dc
	if (!cr6.lt) goto loc_837A37DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a3750
	ctx.lr = 0x837A37D4;
	sub_837A3750(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x837a37ec
	goto loc_837A37EC;
loc_837A37DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837a3750
	ctx.lr = 0x837A37E8;
	sub_837A3750(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_837A37EC:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x837a3778
	if (cr6.gt) goto loc_837A3778;
loc_837A37FC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x837a3814
	if (!cr6.gt) goto loc_837A3814;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a2108
	ctx.lr = 0x837A3814;
	sub_837A2108(ctx, base);
loc_837A3814:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837A381C:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x837a37fc
	if (!cr6.gt) goto loc_837A37FC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x837a3840
	if (!cr6.gt) goto loc_837A3840;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a2050
	ctx.lr = 0x837A3840;
	sub_837A2050(ctx, base);
loc_837A3840:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a2478
	ctx.lr = 0x837A384C;
	sub_837A2478(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A3854"))) PPC_WEAK_FUNC(sub_837A3854);
PPC_FUNC_IMPL(__imp__sub_837A3854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A3858"))) PPC_WEAK_FUNC(sub_837A3858);
PPC_FUNC_IMPL(__imp__sub_837A3858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837A3860;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x837A3870;
	sub_831156E8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r26,56(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r29,r30,452
	ctx.r29.s64 = ctx.r30.s64 + 452;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r24,2
	ctx.r24.s64 = 2;
loc_837A3898:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8312b750
	ctx.lr = 0x837A38A8;
	sub_8312B750(ctx, base);
	// addi r4,r3,102
	ctx.r4.s64 = ctx.r3.s64 + 102;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_837A38BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837a38bc
	if (!cr6.eq) goto loc_837A38BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837A38E0;
	sub_8259CC28(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a3a08
	if (cr6.eq) goto loc_837A3A08;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8259cb28
	ctx.lr = 0x837A3910;
	sub_8259CB28(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830f6558
	ctx.lr = 0x837A391C;
	sub_830F6558(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a3938
	if (cr6.lt) goto loc_837A3938;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x825952b8
	ctx.lr = 0x837A3938;
	sub_825952B8(ctx, base);
loc_837A3938:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// blt cr6,0x837a3960
	if (cr6.lt) goto loc_837A3960;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x837A3960;
	sub_825952B8(ctx, base);
loc_837A3960:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// cmplwi cr6,r27,5
	cr6.compare<uint32_t>(ctx.r27.u32, 5, xer);
	// blt cr6,0x837a3898
	if (cr6.lt) goto loc_837A3898;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srawi r5,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 5;
	// bl 0x837a3750
	ctx.lr = 0x837A3998;
	sub_837A3750(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x837A39A4;
	sub_8291FDC8(ctx, base);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x837A39B0;
	sub_8291FDC8(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x837A39BC;
	sub_8291FDC8(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x837A39C8;
	sub_8291FDC8(ctx, base);
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x837A39D4;
	sub_8291FDC8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837a3a00
	if (cr6.eq) goto loc_837A3A00;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f6290
	ctx.lr = 0x837A39F0;
	sub_830F6290(ctx, base);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x837A3A00;
	sub_825952B8(ctx, base);
loc_837A3A00:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837A3A08:
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x837a3a3c
	if (cr6.eq) goto loc_837A3A3C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x837A3A24;
	sub_83915A50(ctx, base);
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x837A3A38;
	sub_838ADAB0(ctx, base);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
loc_837A3A3C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837a3a58
	if (cr6.lt) goto loc_837A3A58;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x837A3A58;
	sub_825952B8(ctx, base);
loc_837A3A58:
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// beq cr6,0x837a3a00
	if (cr6.eq) goto loc_837A3A00;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x830f6290
	ctx.lr = 0x837A3A84;
	sub_830F6290(ctx, base);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x837A3A94;
	sub_825952B8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A3A9C"))) PPC_WEAK_FUNC(sub_837A3A9C);
PPC_FUNC_IMPL(__imp__sub_837A3A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A3AA0"))) PPC_WEAK_FUNC(sub_837A3AA0);
PPC_FUNC_IMPL(__imp__sub_837A3AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x837A3AA8;
	__savegprlr_15(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bne cr6,0x837a3ac8
	if (!cr6.eq) goto loc_837A3AC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_837A3AC8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r28,68(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r27,40(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r26,48(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r25,52(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r24,60(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r23,92(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r22,96(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r21,116(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r20,120(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r19,124(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r18,132(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lbz r17,136(r31)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// lwz r16,108(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r15,140(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// stw r20,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// stw r18,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r18.u32);
	// stb r17,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r17.u8);
	// stw r16,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r16.u32);
	// stw r15,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r15.u32);
	// bl 0x837a2f88
	ctx.lr = 0x837A3B84;
	sub_837A2F88(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bne cr6,0x837a3bac
	if (!cr6.eq) goto loc_837A3BAC;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// bne cr6,0x837a3bac
	if (!cr6.eq) goto loc_837A3BAC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837a0e88
	ctx.lr = 0x837A3BA8;
	sub_837A0E88(ctx, base);
	// b 0x837a3bf8
	goto loc_837A3BF8;
loc_837A3BAC:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x837a3bf8
	if (!cr6.eq) goto loc_837A3BF8;
	// lbz r11,450(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 450);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a3bec
	if (cr6.eq) goto loc_837A3BEC;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837a3858
	ctx.lr = 0x837A3BCC;
	sub_837A3858(ctx, base);
	// lwz r10,396(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r9,392(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// li r11,28
	ctx.r11.s64 = 28;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x837a3bf8
	if (cr0.eq) goto loc_837A3BF8;
	// stw r29,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// b 0x837a3bf8
	goto loc_837A3BF8;
loc_837A3BEC:
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837a2638
	ctx.lr = 0x837A3BF8;
	sub_837A2638(ctx, base);
loc_837A3BF8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837A3C0C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a3c20
	if (cr6.eq) goto loc_837A3C20;
	// bl 0x837c5328
	ctx.lr = 0x837A3C18;
	sub_837C5328(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x837a3c24
	goto loc_837A3C24;
loc_837A3C20:
	// li r30,0
	ctx.r30.s64 = 0;
loc_837A3C24:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x837c5468
	ctx.lr = 0x837A3C38;
	sub_837C5468(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837c53d0
	ctx.lr = 0x837A3C44;
	sub_837C53D0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8379ce88
	ctx.lr = 0x837A3C4C;
	sub_8379CE88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A3C58"))) PPC_WEAK_FUNC(sub_837A3C58);
PPC_FUNC_IMPL(__imp__sub_837A3C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837A3C60;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,16
	ctx.r27.s64 = ctx.r3.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// bl 0x82a552d8
	ctx.lr = 0x837A3C8C;
	sub_82A552D8(ctx, base);
	// stw r29,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r29.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// li r5,160
	ctx.r5.s64 = 160;
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// bne cr6,0x837a3cac
	if (!cr6.eq) goto loc_837A3CAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x837A3CA8;
	sub_831CDCF0(ctx, base);
	// b 0x837a3cb4
	goto loc_837A3CB4;
loc_837A3CAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x837A3CB4;
	sub_831CE980(ctx, base);
loc_837A3CB4:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x837a3d08
	if (!cr6.eq) goto loc_837A3D08;
	// bl 0x831156e8
	ctx.lr = 0x837A3CC0;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a3cf4
	if (cr6.eq) goto loc_837A3CF4;
	// bl 0x831156e8
	ctx.lr = 0x837A3CCC;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r31,r11,14904
	ctx.r31.u64 = ctx.r11.u64 | 14904;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bl 0x83124240
	ctx.lr = 0x837A3CE0;
	sub_83124240(ctx, base);
	// stw r3,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x837A3CE8;
	sub_831156E8(ctx, base);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + ctx.r31.u64;
	// bl 0x83124250
	ctx.lr = 0x837A3CF4;
	sub_83124250(ctx, base);
loc_837A3CF4:
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a3d08
	if (cr6.eq) goto loc_837A3D08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a08b0
	ctx.lr = 0x837A3D08;
	sub_837A08B0(ctx, base);
loc_837A3D08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a1b38
	ctx.lr = 0x837A3D10;
	sub_837A1B38(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_837A3D18:
	// clrlwi r11,r29,23
	ctx.r11.u64 = ctx.r29.u32 & 0x1FF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837a3d9c
	if (cr6.eq) goto loc_837A3D9C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x837a3d40
	if (!cr6.eq) goto loc_837A3D40;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// beq cr6,0x837a3d40
	if (cr6.eq) goto loc_837A3D40;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x837a3d9c
	if (!cr6.eq) goto loc_837A3D9C;
loc_837A3D40:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// beq cr6,0x837a3d50
	if (cr6.eq) goto loc_837A3D50;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x837a3d5c
	if (!cr6.eq) goto loc_837A3D5C;
loc_837A3D50:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a3d9c
	if (!cr6.eq) goto loc_837A3D9C;
loc_837A3D5C:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bne cr6,0x837a3d6c
	if (!cr6.eq) goto loc_837A3D6C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// b 0x837a3d7c
	goto loc_837A3D7C;
loc_837A3D6C:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x837a3d80
	if (!cr6.eq) goto loc_837A3D80;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
loc_837A3D7C:
	// bne cr6,0x837a3d9c
	if (!cr6.eq) goto loc_837A3D9C;
loc_837A3D80:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a3aa0
	ctx.lr = 0x837A3D90;
	sub_837A3AA0(ctx, base);
	// addi r11,r31,77
	ctx.r11.s64 = ctx.r31.s64 + 77;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
loc_837A3D9C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// blt cr6,0x837a3d18
	if (cr6.lt) goto loc_837A3D18;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x837a3dc0
	if (cr6.eq) goto loc_837A3DC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a1480
	ctx.lr = 0x837A3DC0;
	sub_837A1480(ctx, base);
loc_837A3DC0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x837a3dd4
	if (cr6.eq) goto loc_837A3DD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a1528
	ctx.lr = 0x837A3DD4;
	sub_837A1528(ctx, base);
loc_837A3DD4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x837a3df8
	if (cr6.eq) goto loc_837A3DF8;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a3df8
	if (!cr6.eq) goto loc_837A3DF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a2390
	ctx.lr = 0x837A3DF8;
	sub_837A2390(ctx, base);
loc_837A3DF8:
	// bl 0x8378b870
	ctx.lr = 0x837A3DFC;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a3e24
	if (cr6.eq) goto loc_837A3E24;
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8378b870
	ctx.lr = 0x837A3E14;
	sub_8378B870(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8378b1f0
	ctx.lr = 0x837A3E24;
	sub_8378B1F0(ctx, base);
loc_837A3E24:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x837a3e38
	if (cr6.eq) goto loc_837A3E38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a15f8
	ctx.lr = 0x837A3E38;
	sub_837A15F8(ctx, base);
loc_837A3E38:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x837a3e50
	if (cr6.eq) goto loc_837A3E50;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a16e8
	ctx.lr = 0x837A3E50;
	sub_837A16E8(ctx, base);
loc_837A3E50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A3E5C"))) PPC_WEAK_FUNC(sub_837A3E5C);
PPC_FUNC_IMPL(__imp__sub_837A3E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A3E60"))) PPC_WEAK_FUNC(sub_837A3E60);
PPC_FUNC_IMPL(__imp__sub_837A3E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x1)));
	// lvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// vsubfp128 v11,v63,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v60,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v59,-1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// vcsxwfp128 v0,v62,1
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vpermwi128 v6,v60,99
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x9C));
	// vpermwi128 v8,v60,135
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x78));
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// vslw128 v57,v59,v59
	ctx.v57.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v57.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v57.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v57.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// vslw128 v58,v59,v59
	ctx.v58.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v58.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v58.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v58.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
	// vslw128 v56,v59,v59
	ctx.v56.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v56.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v56.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v56.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// lfs f0,-26260(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f0,-84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// vmsum3fp128 v55,v11,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vspltw128 v54,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// vrsqrtefp128 v12,v54
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v54.f32))));
	// vmulfp128 v10,v54,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v9,v12,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v7,v10,v9,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v12,v12,v7,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v11,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v53,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vpermwi128 v11,v53,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0x78));
	// vmsum3fp128 v52,v53,v63
	simde_mm_store_ps(ctx.v52.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v63.f32), 0xEF));
	// vpermwi128 v7,v53,99
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0x9C));
	// vspltw128 v51,v53,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0x55));
	// vspltw128 v38,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// vmaddfp v10,v6,v11,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v37,v53,1
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xAA));
	// stvx128 v51,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// vnmsubfp v10,v8,v7,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v50,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// vxor128 v49,v50,v57
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v49,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// lfs f13,-128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// vmsum3fp128 v48,v10,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vspltw128 v47,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// vrsqrtefp128 v12,v47
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v47.f32))));
	// vmulfp128 v9,v47,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v8,v12,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v6,v9,v8,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v12,v12,v6,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v10,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v46,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vpermwi128 v10,v46,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0x78));
	// vmsum3fp128 v45,v46,v63
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v63.f32), 0xEF));
	// vpermwi128 v12,v46,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0x9C));
	// vspltw128 v44,v46,2
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0x55));
	// vspltw128 v43,v46,1
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0xAA));
	// vmaddfp v10,v7,v10,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v44,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// vnmsubfp v9,v11,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v42,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// vxor128 v41,v42,v58
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// stvx128 v41,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,-128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// vmsum3fp128 v40,v9,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v40.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vspltw128 v39,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xFF));
	// vrsqrtefp128 v12,v39
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v39.f32))));
	// vmulfp128 v10,v39,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v12,v12
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v0,v10,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v9,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v43,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// vmsum3fp128 v36,v0,v63
	simde_mm_store_ps(ctx.v36.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32), 0xEF));
	// vspltw128 v34,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvx128 v34,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// stvx128 v38,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// lfs f9,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f9.f64 = double(temp.f32);
	// vspltw128 v33,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// stvx128 v33,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v63,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), 0xFF));
	// lfs f5,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f5.f64 = double(temp.f32);
	// vspltw128 v35,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// stvx128 v37,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v32,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0xFF));
	// lfs f0,9008(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,-112
	ctx.r5.s64 = ctx.r1.s64 + -112;
	// vxor128 v62,v63,v56
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// stvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,-112
	ctx.r4.s64 = ctx.r1.s64 + -112;
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// lfs f8,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f10.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stfs f9,-128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// li r31,48
	ctx.r31.s64 = 48;
	// lfs f4,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f4.f64 = double(temp.f32);
	// stvx128 v32,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f3,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,-120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f6,-124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// lvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f4,-92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// lvx128 v58,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f5,-108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// lvx128 v60,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f10,-104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// stfs f3,-112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f8,-108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// lvx128 v59,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r3,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A408C"))) PPC_WEAK_FUNC(sub_837A408C);
PPC_FUNC_IMPL(__imp__sub_837A408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A4090"))) PPC_WEAK_FUNC(sub_837A4090);
PPC_FUNC_IMPL(__imp__sub_837A4090) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x837A40A4;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f30,f2
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// lfs f31,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x831d2588
	ctx.lr = 0x837A40C8;
	sub_831D2588(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fsubs f9,f28,f29
	ctx.f9.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmuls f8,f29,f28
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f13,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f12,-11416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11416);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f11,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f0,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fdivs f6,f28,f9
	ctx.f6.f64 = double(float(ctx.f28.f64 / ctx.f9.f64));
	// fdivs f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f4,f7,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmuls f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f2,f7,f31
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fneg f1,f6
	ctx.f1.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fneg f0,f5
	ctx.f0.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f11,f4,f31
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fsubs f10,f2,f3
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fadds f9,f2,f3
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fsubs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fdivs f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fdivs f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// lvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fdivs f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fdivs f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v60,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7c4
	ctx.lr = 0x837A41C8;
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

__attribute__((alias("__imp__sub_837A41D8"))) PPC_WEAK_FUNC(sub_837A41D8);
PPC_FUNC_IMPL(__imp__sub_837A41D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
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
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A41F8"))) PPC_WEAK_FUNC(sub_837A41F8);
PPC_FUNC_IMPL(__imp__sub_837A41F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_837A4218"))) PPC_WEAK_FUNC(sub_837A4218);
PPC_FUNC_IMPL(__imp__sub_837A4218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A421C"))) PPC_WEAK_FUNC(sub_837A421C);
PPC_FUNC_IMPL(__imp__sub_837A421C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A4220"))) PPC_WEAK_FUNC(sub_837A4220);
PPC_FUNC_IMPL(__imp__sub_837A4220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_837A4244"))) PPC_WEAK_FUNC(sub_837A4244);
PPC_FUNC_IMPL(__imp__sub_837A4244) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A4248"))) PPC_WEAK_FUNC(sub_837A4248);
PPC_FUNC_IMPL(__imp__sub_837A4248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v62,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,208
	ctx.r11.s64 = 208;
	// lfs f0,64(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f13,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f12,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f11,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,76(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f10,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,80(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lwz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// lbz r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 88);
	// stb r9,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r9.u8);
	// lbz r8,89(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 89);
	// stb r8,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r8.u8);
	// lbz r7,90(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 90);
	// stb r7,90(r3)
	PPC_STORE_U8(ctx.r3.u32 + 90, ctx.r7.u8);
	// lfs f9,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,92(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f8,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,96(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f7,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,100(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f6,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,104(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f5,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,108(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f4,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,112(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lbz r6,116(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 116);
	// stb r6,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r6.u8);
	// lbz r5,117(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 117);
	// stb r5,117(r3)
	PPC_STORE_U8(ctx.r3.u32 + 117, ctx.r5.u8);
	// lbz r10,118(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 118);
	// stb r10,118(r3)
	PPC_STORE_U8(ctx.r3.u32 + 118, ctx.r10.u8);
	// lbz r9,119(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 119);
	// stb r9,119(r3)
	PPC_STORE_U8(ctx.r3.u32 + 119, ctx.r9.u8);
	// lbz r8,120(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 120);
	// stb r8,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r8.u8);
	// lbz r7,121(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 121);
	// stb r7,121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 121, ctx.r7.u8);
	// lbz r6,122(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 122);
	// stb r6,122(r3)
	PPC_STORE_U8(ctx.r3.u32 + 122, ctx.r6.u8);
	// lbz r5,123(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 123);
	// stb r5,123(r3)
	PPC_STORE_U8(ctx.r3.u32 + 123, ctx.r5.u8);
	// lbz r10,124(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 124);
	// stb r10,124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 124, ctx.r10.u8);
	// lfs f3,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,128(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfs f2,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,132(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lfs f1,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,136(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lfs f0,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// lfs f13,144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lfs f12,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,148(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lbz r9,152(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 152);
	// stb r9,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r9.u8);
	// lfs f11,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f10,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,160(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f9,164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,164(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lbz r8,168(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 168);
	// stb r8,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r8.u8);
	// lfs f8,172(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,172(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f7,176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,176(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lwz r7,180(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r7,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r7.u32);
	// lwz r6,184(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// stw r6,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r6.u32);
	// lwz r5,188(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// stw r5,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r5.u32);
	// lwz r10,192(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// lbz r9,196(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 196);
	// stb r9,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r9.u8);
	// lvx128 v59,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A43D4"))) PPC_WEAK_FUNC(sub_837A43D4);
PPC_FUNC_IMPL(__imp__sub_837A43D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A43D8"))) PPC_WEAK_FUNC(sub_837A43D8);
PPC_FUNC_IMPL(__imp__sub_837A43D8) {
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
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// addi r4,r5,16
	ctx.r4.s64 = ctx.r5.s64 + 16;
	// bl 0x8349bd68
	ctx.lr = 0x837A4400;
	sub_8349BD68(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// lfs f2,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lbz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// lfs f1,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8349bda8
	ctx.lr = 0x837A441C;
	sub_8349BDA8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8349c128
	ctx.lr = 0x837A4424;
	sub_8349C128(ctx, base);
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

__attribute__((alias("__imp__sub_837A4438"))) PPC_WEAK_FUNC(sub_837A4438);
PPC_FUNC_IMPL(__imp__sub_837A4438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A4444"))) PPC_WEAK_FUNC(sub_837A4444);
PPC_FUNC_IMPL(__imp__sub_837A4444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A4448"))) PPC_WEAK_FUNC(sub_837A4448);
PPC_FUNC_IMPL(__imp__sub_837A4448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A4458"))) PPC_WEAK_FUNC(sub_837A4458);
PPC_FUNC_IMPL(__imp__sub_837A4458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A4464"))) PPC_WEAK_FUNC(sub_837A4464);
PPC_FUNC_IMPL(__imp__sub_837A4464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A4468"))) PPC_WEAK_FUNC(sub_837A4468);
PPC_FUNC_IMPL(__imp__sub_837A4468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a4484
	if (cr6.eq) goto loc_837A4484;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_837A4484:
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A448C"))) PPC_WEAK_FUNC(sub_837A448C);
PPC_FUNC_IMPL(__imp__sub_837A448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A4490"))) PPC_WEAK_FUNC(sub_837A4490);
PPC_FUNC_IMPL(__imp__sub_837A4490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f1,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A449C"))) PPC_WEAK_FUNC(sub_837A449C);
PPC_FUNC_IMPL(__imp__sub_837A449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A44A0"))) PPC_WEAK_FUNC(sub_837A44A0);
PPC_FUNC_IMPL(__imp__sub_837A44A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r4,118(r11)
	PPC_STORE_U8(ctx.r11.u32 + 118, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A44AC"))) PPC_WEAK_FUNC(sub_837A44AC);
PPC_FUNC_IMPL(__imp__sub_837A44AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A44B0"))) PPC_WEAK_FUNC(sub_837A44B0);
PPC_FUNC_IMPL(__imp__sub_837A44B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A44C0"))) PPC_WEAK_FUNC(sub_837A44C0);
PPC_FUNC_IMPL(__imp__sub_837A44C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a44dc
	if (cr6.eq) goto loc_837A44DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_837A44DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A44E4"))) PPC_WEAK_FUNC(sub_837A44E4);
PPC_FUNC_IMPL(__imp__sub_837A44E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A44E8"))) PPC_WEAK_FUNC(sub_837A44E8);
PPC_FUNC_IMPL(__imp__sub_837A44E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vspltw128 v57,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vspltw128 v59,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vspltw128 v58,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v56,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v60,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// stvx128 v57,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v59,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x825ca560
	ctx.lr = 0x837A4588;
	sub_825CA560(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A4598"))) PPC_WEAK_FUNC(sub_837A4598);
PPC_FUNC_IMPL(__imp__sub_837A4598) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-14128
	ctx.r4.s64 = ctx.r11.s64 + -14128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x837A45C8;
	sub_8257FAD0(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r10,-14144
	ctx.r8.s64 = ctx.r10.s64 + -14144;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stb r31,-14158(r9)
	PPC_STORE_U8(ctx.r9.u32 + -14158, ctx.r31.u8);
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x837a45f8
	if (cr6.lt) goto loc_837A45F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837A45F8;
	sub_8257FB60(ctx, base);
loc_837A45F8:
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

__attribute__((alias("__imp__sub_837A4610"))) PPC_WEAK_FUNC(sub_837A4610);
PPC_FUNC_IMPL(__imp__sub_837A4610) {
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
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837a4648
	if (cr6.eq) goto loc_837A4648;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8349bda0
	ctx.lr = 0x837A4644;
	sub_8349BDA0(ctx, base);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
loc_837A4648:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lbz r10,-14160(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14160);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837a46b8
	if (cr6.eq) goto loc_837A46B8;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a46a0
	if (!cr6.eq) goto loc_837A46A0;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r31,r11,6052
	ctx.r31.s64 = ctx.r11.s64 + 6052;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r31,-40
	ctx.r3.s64 = ctx.r31.s64 + -40;
	// lfs f1,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833c7fc8
	ctx.lr = 0x837A4680;
	sub_833C7FC8(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x833c7f20
	ctx.lr = 0x837A4690;
	sub_833C7F20(ctx, base);
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-14159(r9)
	PPC_STORE_U8(ctx.r9.u32 + -14159, ctx.r11.u8);
	// b 0x837a46b8
	goto loc_837A46B8;
loc_837A46A0:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lbz r10,-14159(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14159);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837a46b8
	if (cr6.eq) goto loc_837A46B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-14159(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14159, ctx.r10.u8);
loc_837A46B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A46D0"))) PPC_WEAK_FUNC(sub_837A46D0);
PPC_FUNC_IMPL(__imp__sub_837A46D0) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x830ff290
	ctx.lr = 0x837A46EC;
	sub_830FF290(ctx, base);
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a4760
	if (cr6.eq) goto loc_837A4760;
	// bl 0x830ff290
	ctx.lr = 0x837A46FC;
	sub_830FF290(ctx, base);
	// addi r31,r3,76
	ctx.r31.s64 = ctx.r3.s64 + 76;
	// bl 0x830ff290
	ctx.lr = 0x837A4704;
	sub_830FF290(ctx, base);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x837a473c
	if (cr6.eq) goto loc_837A473C;
	// bl 0x830ff290
	ctx.lr = 0x837A4728;
	sub_830FF290(ctx, base);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x837a4750
	goto loc_837A4750;
loc_837A473C:
	// bl 0x830ff290
	ctx.lr = 0x837A4740;
	sub_830FF290(ctx, base);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_837A4750:
	// fcfid f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmuls f31,f10,f31
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
loc_837A4760:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-28476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16668);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f31,f1
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bgt cr6,0x837a4788
	if (cr6.gt) goto loc_837A4788;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fsel f1,f31,f31,f0
	ctx.f1.f64 = ctx.f31.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
loc_837A4788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_837A47A0"))) PPC_WEAK_FUNC(sub_837A47A0);
PPC_FUNC_IMPL(__imp__sub_837A47A0) {
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
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837A47D0;
	sub_82595718(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a47f8
	if (cr6.eq) goto loc_837A47F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// b 0x837a47fc
	goto loc_837A47FC;
loc_837A47F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_837A47FC:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x828e1760
	ctx.lr = 0x837A4804;
	sub_828E1760(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A483C"))) PPC_WEAK_FUNC(sub_837A483C);
PPC_FUNC_IMPL(__imp__sub_837A483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A4840"))) PPC_WEAK_FUNC(sub_837A4840);
PPC_FUNC_IMPL(__imp__sub_837A4840) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a4868
	if (cr6.eq) goto loc_837A4868;
	// bl 0x834ca948
	ctx.lr = 0x837A4868;
	sub_834CA948(ctx, base);
loc_837A4868:
	// bl 0x8349c0d0
	ctx.lr = 0x837A486C;
	sub_8349C0D0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x830ff290
	ctx.lr = 0x837A4874;
	sub_830FF290(ctx, base);
	// bl 0x830ff7f8
	ctx.lr = 0x837A4878;
	sub_830FF7F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f1,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837a46d0
	ctx.lr = 0x837A4888;
	sub_837A46D0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8349bd70
	ctx.lr = 0x837A4894;
	sub_8349BD70(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,68(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d06f98
	ctx.lr = 0x837A48A4;
	sub_82D06F98(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,72(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835b0138
	ctx.lr = 0x837A48B4;
	sub_835B0138(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_837A48CC"))) PPC_WEAK_FUNC(sub_837A48CC);
PPC_FUNC_IMPL(__imp__sub_837A48CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A48D0"))) PPC_WEAK_FUNC(sub_837A48D0);
PPC_FUNC_IMPL(__imp__sub_837A48D0) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x837A48FC;
	sub_830FF290(ctx, base);
	// bl 0x830ff7f8
	ctx.lr = 0x837A4900;
	sub_830FF7F8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f30,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f29.f64 = double(temp.f32);
	// lfs f1,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837a46d0
	ctx.lr = 0x837A4914;
	sub_837A46D0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// bl 0x837a4090
	ctx.lr = 0x837A4928;
	sub_837A4090(ctx, base);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837a3e60
	ctx.lr = 0x837A493C;
	sub_837A3E60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// vspltw128 v9,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v8,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v4,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// lvx128 v60,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v5,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vmaddfp v30,v13,v9,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v6,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vmaddfp v29,v12,v8,v0
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v7,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vspltw128 v8,v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xAA));
	// vmaddfp v28,v13,v4,v0
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v9,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vmaddfp v31,v12,v5,v0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v1,v13,v6,v0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// vmaddfp v2,v12,v7,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v5,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vmaddfp v3,v13,v8,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v6,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vmaddfp v4,v12,v9,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v7,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vspltw128 v8,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// lvx128 v11,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v9,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// lvx128 v10,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v12,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// li r3,16
	ctx.r3.s64 = 16;
	// vspltw128 v13,v60,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x0));
	// li r11,32
	ctx.r11.s64 = 32;
	// vspltw128 v0,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x55));
	// vmaddfp v5,v11,v5,v30
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vmaddfp v6,v10,v6,v29
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// li r10,48
	ctx.r10.s64 = 48;
	// vmaddfp v7,v11,v7,v28
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// vmaddfp v8,v10,v8,v31
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v9,v11,v9,v1
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v12,v10,v12,v2
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v13,v11,v13,v3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v0,v10,v0,v4
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vaddfp128 v63,v6,v5
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vaddfp128 v62,v8,v7
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vaddfp128 v61,v12,v9
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vaddfp128 v60,v0,v13
	simde_mm_store_ps(ctx.v60.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r30,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r30,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r30,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A4A50"))) PPC_WEAK_FUNC(sub_837A4A50);
PPC_FUNC_IMPL(__imp__sub_837A4A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A4A58;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x837a48d0
	ctx.lr = 0x837A4A70;
	sub_837A48D0(ctx, base);
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// vupkd3d128 v63,v13,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v63 = vTemp;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v6,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v4,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vspltw128 v8,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v11,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v9,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v5,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// vspltw128 v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r3,r10,-26260
	ctx.r3.s64 = ctx.r10.s64 + -26260;
	// vmaddfp v11,v10,v9,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// addi r10,r4,-24912
	ctx.r10.s64 = ctx.r4.s64 + -24912;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvlx128 v60,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v59,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vmaddfp v0,v4,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lfs f13,20056(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// vmaddfp v12,v6,v5,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v7,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vaddfp128 v58,v0,v12
	simde_mm_store_ps(ctx.v58.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v10,v58,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0x0));
	// vrefp v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v10.f32)));
	// vnmsubfp v6,v10,v0,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v6,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v8,v10,v0,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v11,v12,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v58,v11
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vspltw128 v57,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v56,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v0,v56,v59
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vmaddfp v0,v0,v7,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v55,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v54,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v55,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v54,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A4B90"))) PPC_WEAK_FUNC(sub_837A4B90);
PPC_FUNC_IMPL(__imp__sub_837A4B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x837a48d0
	sub_837A48D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A4B98"))) PPC_WEAK_FUNC(sub_837A4B98);
PPC_FUNC_IMPL(__imp__sub_837A4B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f9,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// fsel f6,f12,f12,f13
	ctx.f6.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f7,f0,f0,f13
	ctx.f7.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lfs f0,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// lfs f10,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fsel f11,f4,f6,f0
	ctx.f11.f64 = ctx.f4.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// stfs f11,-12(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fsel f12,f5,f7,f0
	ctx.f12.f64 = ctx.f5.f64 >= 0.0 ? ctx.f7.f64 : ctx.f0.f64;
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fnmsubs f1,f11,f10,f8
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f10.f64 - ctx.f8.f64)));
	// ld r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,188(r3)
	PPC_STORE_U64(ctx.r3.u32 + 188, ctx.r7.u64);
	// fnmsubs f3,f12,f10,f9
	ctx.f3.f64 = double(float(-(ctx.f12.f64 * ctx.f10.f64 - ctx.f9.f64)));
	// fsubs f2,f0,f12
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f11,f1,f1,f13
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fsel f12,f3,f3,f13
	ctx.f12.f64 = ctx.f3.f64 >= 0.0 ? ctx.f3.f64 : ctx.f13.f64;
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f10,f2,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fsel f7,f9,f11,f0
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// stfs f7,-12(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fsel f8,f10,f12,f2
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f2.f64;
	// stfs f8,-16(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// ld r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,180(r3)
	PPC_STORE_U64(ctx.r3.u32 + 180, ctx.r6.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A4C2C"))) PPC_WEAK_FUNC(sub_837A4C2C);
PPC_FUNC_IMPL(__imp__sub_837A4C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A4C30"))) PPC_WEAK_FUNC(sub_837A4C30);
PPC_FUNC_IMPL(__imp__sub_837A4C30) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a4cf8
	if (cr6.eq) goto loc_837A4CF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r3,208
	ctx.r5.s64 = ctx.r3.s64 + 208;
	// stb r11,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r11.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x837a4a50
	ctx.lr = 0x837A4C68;
	sub_837A4A50(ctx, base);
	// ld r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 188);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f7,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsel f11,f0,f0,f13
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f9,f12,f12,f13
	ctx.f9.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// lfs f0,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,-24912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24912);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f0,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsel f12,f8,f11,f0
	ctx.f12.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsel f11,f5,f9,f0
	ctx.f11.f64 = ctx.f5.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmsubs f4,f12,f10,f7
	ctx.f4.f64 = double(float(-(ctx.f12.f64 * ctx.f10.f64 - ctx.f7.f64)));
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fsubs f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// std r6,188(r31)
	PPC_STORE_U64(ctx.r31.u32 + 188, ctx.r6.u64);
	// fnmsubs f2,f11,f10,f6
	ctx.f2.f64 = double(float(-(ctx.f11.f64 * ctx.f10.f64 - ctx.f6.f64)));
	// fsubs f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f4,f4,f13
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f4.f64 : ctx.f13.f64;
	// fsel f13,f2,f2,f13
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f2.f64 : ctx.f13.f64;
	// fsubs f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsel f10,f12,f0,f3
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsel f9,f11,f13,f1
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,180(r31)
	PPC_STORE_U64(ctx.r31.u32 + 180, ctx.r5.u64);
loc_837A4CF8:
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

__attribute__((alias("__imp__sub_837A4D0C"))) PPC_WEAK_FUNC(sub_837A4D0C);
PPC_FUNC_IMPL(__imp__sub_837A4D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A4D10"))) PPC_WEAK_FUNC(sub_837A4D10);
PPC_FUNC_IMPL(__imp__sub_837A4D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,208
	ctx.r10.s64 = 208;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r8.u32);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r6,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r6.u8);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r11.u8);
	// b 0x837a4c30
	sub_837A4C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A4D48"))) PPC_WEAK_FUNC(sub_837A4D48);
PPC_FUNC_IMPL(__imp__sub_837A4D48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A4D4C"))) PPC_WEAK_FUNC(sub_837A4D4C);
PPC_FUNC_IMPL(__imp__sub_837A4D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A4D50"))) PPC_WEAK_FUNC(sub_837A4D50);
PPC_FUNC_IMPL(__imp__sub_837A4D50) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-14080
	ctx.r11.s64 = ctx.r11.s64 + -14080;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837a4ff4
	if (cr6.eq) goto loc_837A4FF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x837a4ff4
	if (!cr6.eq) goto loc_837A4FF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a4ff4
	if (cr6.eq) goto loc_837A4FF4;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r11,-14064
	ctx.r31.s64 = ctx.r11.s64 + -14064;
	// lwz r11,-13840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13840);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837a4ddc
	if (!cr6.eq) goto loc_837A4DDC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f31,184(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f31,188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r11,-13840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13840, ctx.r11.u32);
	// stfs f31,192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
loc_837A4DDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x837a4248
	ctx.lr = 0x837A4DE8;
	sub_837A4248(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x837a4ee4
	if (cr6.eq) goto loc_837A4EE4;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r6,180(r31)
	PPC_STORE_U64(ctx.r31.u32 + 180, ctx.r6.u64);
	// lfs f0,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r11,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r11.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r10,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r10.u8);
	// stb r9,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r9.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r11.u8);
	// stb r8,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r8.u8);
	// stb r7,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r7.u8);
	// std r5,188(r31)
	PPC_STORE_U64(ctx.r31.u32 + 188, ctx.r5.u64);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x837A4E64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r4,119(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 119);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83102db0
	ctx.lr = 0x837A4E70;
	sub_83102DB0(ctx, base);
	// lbz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 124);
	// lfs f6,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// lbz r7,123(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 123);
	// lfs f5,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lbz r6,122(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 122);
	// lfs f4,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// lbz r5,121(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 121);
	// lfs f3,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// lbz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// lfs f2,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83102db0
	ctx.lr = 0x837A4EA4;
	sub_83102DB0(ctx, base);
	// lbz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// lfs f3,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f2,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83102db0
	ctx.lr = 0x837A4EBC;
	sub_83102DB0(ctx, base);
	// lbz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// lfs f2,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8349be70
	ctx.lr = 0x837A4ED0;
	sub_8349BE70(ctx, base);
	// lbz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8349bda0
	ctx.lr = 0x837A4EDC;
	sub_8349BDA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_837A4EE4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A4EF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x830ff290
	ctx.lr = 0x837A4EFC;
	sub_830FF290(ctx, base);
	// bl 0x830ff7f8
	ctx.lr = 0x837A4F00;
	sub_830FF7F8(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x837a46d0
	ctx.lr = 0x837A4F10;
	sub_837A46D0(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8349bd70
	ctx.lr = 0x837A4F1C;
	sub_8349BD70(ctx, base);
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d06f98
	ctx.lr = 0x837A4F28;
	sub_82D06F98(ctx, base);
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x835b0138
	ctx.lr = 0x837A4F34;
	sub_835B0138(ctx, base);
	// lbz r4,90(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 90);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8349be50
	ctx.lr = 0x837A4F40;
	sub_8349BE50(ctx, base);
	// lfs f4,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f3,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8349be58
	ctx.lr = 0x837A4F58;
	sub_8349BE58(ctx, base);
	// lbz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r4,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82927060
	ctx.lr = 0x837A4F6C;
	sub_82927060(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f11,-11376(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11376);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f11
	cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bge cr6,0x837a4fcc
	if (!cr6.lt) goto loc_837A4FCC;
	// lbz r11,117(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a4fcc
	if (!cr6.eq) goto loc_837A4FCC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a4610
	ctx.lr = 0x837A4FC8;
	sub_837A4610(ctx, base);
	// b 0x837a4fe0
	goto loc_837A4FE0;
loc_837A4FCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a4610
	ctx.lr = 0x837A4FD8;
	sub_837A4610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r11.u8);
loc_837A4FE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x837a4248
	ctx.lr = 0x837A4FEC;
	sub_837A4248(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a43d8
	ctx.lr = 0x837A4FF4;
	sub_837A43D8(ctx, base);
loc_837A4FF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_837A5010"))) PPC_WEAK_FUNC(sub_837A5010);
PPC_FUNC_IMPL(__imp__sub_837A5010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837A5018;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x837a5104
	if (cr6.eq) goto loc_837A5104;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r25,0(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// beq cr6,0x837a50e0
	if (cr6.eq) goto loc_837A50E0;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r27,r11,65534
	ctx.r27.u64 = ctx.r11.u64 | 65534;
loc_837A5050:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// beq cr6,0x837a5104
	if (cr6.eq) goto loc_837A5104;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bctrl 
	ctx.lr = 0x837A5068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a50d4
	if (cr6.eq) goto loc_837A50D4;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// blt cr6,0x837a510c
	if (cr6.lt) goto loc_837A510C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x837a50d8
	goto loc_837A50D8;
loc_837A50D4:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_837A50D8:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x837a5050
	if (!cr6.eq) goto loc_837A5050;
loc_837A50E0:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// beq cr6,0x837a5104
	if (cr6.eq) goto loc_837A5104;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f8c468
	ctx.lr = 0x837A5104;
	sub_82F8C468(ctx, base);
loc_837A5104:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837A510C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x837A5118;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_837A5118"))) PPC_WEAK_FUNC(sub_837A5118);
PPC_FUNC_IMPL(__imp__sub_837A5118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a512c
	if (cr6.eq) goto loc_837A512C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_837A512C:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837a4d50
	sub_837A4D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A513C"))) PPC_WEAK_FUNC(sub_837A513C);
PPC_FUNC_IMPL(__imp__sub_837A513C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A5140"))) PPC_WEAK_FUNC(sub_837A5140);
PPC_FUNC_IMPL(__imp__sub_837A5140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A5148;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-14128
	ctx.r4.s64 = ctx.r11.s64 + -14128;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x837A5164;
	sub_8257FAD0(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-14080
	ctx.r31.s64 = ctx.r11.s64 + -14080;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a51cc
	if (cr6.eq) goto loc_837A51CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x837a51cc
	if (!cr6.eq) goto loc_837A51CC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83795180
	ctx.lr = 0x837A51A0;
	sub_83795180(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a51dc
	if (cr6.eq) goto loc_837A51DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837a51dc
	if (cr6.eq) goto loc_837A51DC;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x837a51dc
	goto loc_837A51DC;
loc_837A51CC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83795180
	ctx.lr = 0x837A51DC;
	sub_83795180(ctx, base);
loc_837A51DC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837a51f8
	if (cr6.lt) goto loc_837A51F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8257fb60
	ctx.lr = 0x837A51F4;
	sub_8257FB60(ctx, base);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
loc_837A51F8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a5214
	if (cr6.eq) goto loc_837A5214;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A5214;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A5214:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a5224
	if (cr6.eq) goto loc_837A5224;
	// bl 0x834ca948
	ctx.lr = 0x837A5224;
	sub_834CA948(ctx, base);
loc_837A5224:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a5268
	if (cr6.eq) goto loc_837A5268;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x837A5244;
	sub_82595150(ctx, base);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82595188
	ctx.lr = 0x837A524C;
	sub_82595188(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x837A525C;
	sub_825952B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x837A5264;
	sub_82595170(ctx, base);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
loc_837A5268:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5270"))) PPC_WEAK_FUNC(sub_837A5270);
PPC_FUNC_IMPL(__imp__sub_837A5270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837A5278;
	__savegprlr_23(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x837a557c
	if (cr6.lt) goto loc_837A557C;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595718
	ctx.lr = 0x837A52B0;
	sub_82595718(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,25
	ctx.r31.s64 = 25;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r11,-12
	ctx.r30.s64 = ctx.r11.s64 + -12;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
loc_837A52CC:
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x837A52E4;
	sub_82595718(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stwu r3,12(r30)
	ea = 12 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// bge 0x837a52cc
	if (!cr0.lt) goto loc_837A52CC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// ori r24,r10,65534
	ctx.r24.u64 = ctx.r10.u64 | 65534;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a5468
	if (cr6.eq) goto loc_837A5468;
loc_837A5310:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r9,r27
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x837a5350
	if (cr6.eq) goto loc_837A5350;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r7,r24
	ctx.r8.s64 = ctx.r24.s64 - ctx.r7.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x837a54ec
	if (cr6.lt) goto loc_837A54EC;
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
loc_837A5350:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// beq cr6,0x837a5410
	if (cr6.eq) goto loc_837A5410;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
loc_837A5390:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a53f0
	if (cr6.eq) goto loc_837A53F0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837a5010
	ctx.lr = 0x837A53AC;
	sub_837A5010(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x837a53dc
	if (cr6.eq) goto loc_837A53DC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x837a53e0
	goto loc_837A53E0;
loc_837A53DC:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_837A53E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x837a5390
	if (cr6.lt) goto loc_837A5390;
loc_837A53F0:
	// cmplwi cr6,r30,25
	cr6.compare<uint32_t>(ctx.r30.u32, 25, xer);
	// bne cr6,0x837a5410
	if (!cr6.eq) goto loc_837A5410;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x837a5010
	ctx.lr = 0x837A5408;
	sub_837A5010(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x837a545c
	goto loc_837A545C;
loc_837A5410:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837a5450
	if (cr6.eq) goto loc_837A5450;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_837A5450:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x837a545c
	if (!cr6.eq) goto loc_837A545C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_837A545C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a5310
	if (!cr6.eq) goto loc_837A5310;
loc_837A5468:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// ble cr6,0x837a5494
	if (!cr6.gt) goto loc_837A5494;
	// addi r31,r1,124
	ctx.r31.s64 = ctx.r1.s64 + 124;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_837A5478:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837a5010
	ctx.lr = 0x837A5488;
	sub_837A5010(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x837a5478
	if (!cr0.eq) goto loc_837A5478;
loc_837A5494:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,-12
	ctx.r7.s64 = ctx.r11.s64 + -12;
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, xer);
	// beq cr6,0x837a5538
	if (cr6.eq) goto loc_837A5538;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837a5538
	if (cr6.eq) goto loc_837A5538;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r5,r6,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r6.s64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bge cr6,0x837a54f8
	if (!cr6.lt) goto loc_837A54F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x837A54EC;
	sub_831CC150(ctx, base);
loc_837A54EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x837A54F8;
	sub_831CC150(ctx, base);
loc_837A54F8:
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r5,r8,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r8.s64;
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_837A5538:
	// addi r31,r1,424
	ctx.r31.s64 = ctx.r1.s64 + 424;
	// li r30,25
	ctx.r30.s64 = 25;
loc_837A5540:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e62630
	ctx.lr = 0x837A554C;
	sub_82E62630(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x837A555C;
	sub_825952B8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x837a5540
	if (!cr0.lt) goto loc_837A5540;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62630
	ctx.lr = 0x837A556C;
	sub_82E62630(ctx, base);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x837A557C;
	sub_825952B8(ctx, base);
loc_837A557C:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5584"))) PPC_WEAK_FUNC(sub_837A5584);
PPC_FUNC_IMPL(__imp__sub_837A5584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A5588"))) PPC_WEAK_FUNC(sub_837A5588);
PPC_FUNC_IMPL(__imp__sub_837A5588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837A5590;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r11,-14128
	ctx.r4.s64 = ctx.r11.s64 + -14128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x837A55B0;
	sub_8257FAD0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a55cc
	if (cr6.eq) goto loc_837A55CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A55CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837A55CC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,-14080
	ctx.r31.s64 = ctx.r11.s64 + -14080;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a55f8
	if (cr6.eq) goto loc_837A55F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_837A55F8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837a5668
	if (cr6.eq) goto loc_837A5668;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x837a56b0
	if (cr6.eq) goto loc_837A56B0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83795180
	ctx.lr = 0x837A5618;
	sub_83795180(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x837A562C;
	sub_8378D870(ctx, base);
	// lis r11,-31878
	ctx.r11.s64 = -2089156608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16856
	ctx.r4.s64 = ctx.r11.s64 + 16856;
	// bl 0x837a5270
	ctx.lr = 0x837A563C;
	sub_837A5270(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// beq cr6,0x837a56b0
	if (cr6.eq) goto loc_837A56B0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837a56b0
	if (cr6.eq) goto loc_837A56B0;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x837a56b0
	goto loc_837A56B0;
loc_837A5668:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x837a56ac
	if (!cr6.eq) goto loc_837A56AC;
	// bl 0x83795180
	ctx.lr = 0x837A5680;
	sub_83795180(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a56b0
	if (cr6.eq) goto loc_837A56B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837a56b0
	if (cr6.eq) goto loc_837A56B0;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x837a56b0
	goto loc_837A56B0;
loc_837A56AC:
	// bl 0x83795180
	ctx.lr = 0x837A56B0;
	sub_83795180(ctx, base);
loc_837A56B0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837a56c8
	if (cr6.lt) goto loc_837A56C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837A56C8;
	sub_8257FB60(ctx, base);
loc_837A56C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A56D0"))) PPC_WEAK_FUNC(sub_837A56D0);
PPC_FUNC_IMPL(__imp__sub_837A56D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6476
	ctx.r9.s64 = ctx.r10.s64 + 6476;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A56F8"))) PPC_WEAK_FUNC(sub_837A56F8);
PPC_FUNC_IMPL(__imp__sub_837A56F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83b46ba8
	sub_83B46BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5708"))) PPC_WEAK_FUNC(sub_837A5708);
PPC_FUNC_IMPL(__imp__sub_837A5708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A570C"))) PPC_WEAK_FUNC(sub_837A570C);
PPC_FUNC_IMPL(__imp__sub_837A570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A5710"))) PPC_WEAK_FUNC(sub_837A5710);
PPC_FUNC_IMPL(__imp__sub_837A5710) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A5740"))) PPC_WEAK_FUNC(sub_837A5740);
PPC_FUNC_IMPL(__imp__sub_837A5740) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A5760"))) PPC_WEAK_FUNC(sub_837A5760);
PPC_FUNC_IMPL(__imp__sub_837A5760) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// addi r8,r11,6476
	ctx.r8.s64 = ctx.r11.s64 + 6476;
	// addi r11,r9,-13816
	ctx.r11.s64 = ctx.r9.s64 + -13816;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rotlwi r10,r10,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A57A0;
	sub_82596FE8(ctx, base);
	// lbz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// rotlwi r11,r6,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// addi r10,r7,-13832
	ctx.r10.s64 = ctx.r7.s64 + -13832;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// bne cr6,0x837a57c4
	if (!cr6.eq) goto loc_837A57C4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_837A57C4:
	// bl 0x8378cba8
	ctx.lr = 0x837A57C8;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a57e8
	if (cr6.eq) goto loc_837A57E8;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8378cba8
	ctx.lr = 0x837A57D8;
	sub_8378CBA8(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8378d268
	ctx.lr = 0x837A57E8;
	sub_8378D268(ctx, base);
loc_837A57E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837A57F0;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A5808"))) PPC_WEAK_FUNC(sub_837A5808);
PPC_FUNC_IMPL(__imp__sub_837A5808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A5810;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r10,-13816
	ctx.r11.s64 = ctx.r10.s64 + -13816;
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// rlwinm r10,r9,5,19,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1FE0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A5840;
	sub_82596FE8(ctx, base);
	// lbz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// addi r7,r8,-13832
	ctx.r7.s64 = ctx.r8.s64 + -13832;
	// stwx r31,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r31.u32);
	// bl 0x8378cba8
	ctx.lr = 0x837A5858;
	sub_8378CBA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8379c230
	ctx.lr = 0x837A5860;
	sub_8379C230(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837A586C;
	sub_8378CBA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// bl 0x8378fcc8
	ctx.lr = 0x837A5878;
	sub_8378FCC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837A5880;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A588C"))) PPC_WEAK_FUNC(sub_837A588C);
PPC_FUNC_IMPL(__imp__sub_837A588C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A5890"))) PPC_WEAK_FUNC(sub_837A5890);
PPC_FUNC_IMPL(__imp__sub_837A5890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837A5898;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x837a58cc
	if (cr6.lt) goto loc_837A58CC;
	// beq cr6,0x837a58c4
	if (cr6.eq) goto loc_837A58C4;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x837a58f8
	if (!cr6.lt) goto loc_837A58F8;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x837a58d0
	goto loc_837A58D0;
loc_837A58C4:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x837a58d0
	goto loc_837A58D0;
loc_837A58CC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_837A58D0:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x837a0c48
	ctx.lr = 0x837A58D8;
	sub_837A0C48(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x837A58DC;
	sub_83102DB0(ctx, base);
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subfe r7,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83b46b30
	ctx.lr = 0x837A58F8;
	sub_83B46B30(ctx, base);
loc_837A58F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5900"))) PPC_WEAK_FUNC(sub_837A5900);
PPC_FUNC_IMPL(__imp__sub_837A5900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837A5908;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-13816
	ctx.r11.s64 = ctx.r11.s64 + -13816;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A593C;
	sub_82596FE8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-13832
	ctx.r8.s64 = ctx.r10.s64 + -13832;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a59ac
	if (cr6.eq) goto loc_837A59AC;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x837a59ac
	if (cr6.eq) goto loc_837A59AC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83b46a08
	ctx.lr = 0x837A59AC;
	sub_83B46A08(ctx, base);
loc_837A59AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837A59B4;
	sub_82597088(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A59C0"))) PPC_WEAK_FUNC(sub_837A59C0);
PPC_FUNC_IMPL(__imp__sub_837A59C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837A59C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-13816
	ctx.r11.s64 = ctx.r11.s64 + -13816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A59F0;
	sub_82596FE8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-13832
	ctx.r8.s64 = ctx.r10.s64 + -13832;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a5a18
	if (cr6.eq) goto loc_837A5A18;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837a5890
	ctx.lr = 0x837A5A18;
	sub_837A5890(ctx, base);
loc_837A5A18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837A5A20;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5A28"))) PPC_WEAK_FUNC(sub_837A5A28);
PPC_FUNC_IMPL(__imp__sub_837A5A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A5A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-13816
	ctx.r11.s64 = ctx.r11.s64 + -13816;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A5A54;
	sub_82596FE8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-13832
	ctx.r8.s64 = ctx.r10.s64 + -13832;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a5aac
	if (cr6.eq) goto loc_837A5AAC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// beq cr6,0x837a5aac
	if (cr6.eq) goto loc_837A5AAC;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x837a5a9c
	if (!cr6.eq) goto loc_837A5A9C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83b46a10
	ctx.lr = 0x837A5A8C;
	sub_83B46A10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837A5A94;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837A5A9C:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x837a5aac
	if (!cr6.eq) goto loc_837A5AAC;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83b46a70
	ctx.lr = 0x837A5AAC;
	sub_83B46A70(ctx, base);
loc_837A5AAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837A5AB4;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5ABC"))) PPC_WEAK_FUNC(sub_837A5ABC);
PPC_FUNC_IMPL(__imp__sub_837A5ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A5AC0"))) PPC_WEAK_FUNC(sub_837A5AC0);
PPC_FUNC_IMPL(__imp__sub_837A5AC0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-13816
	ctx.r11.s64 = ctx.r11.s64 + -13816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A5AF0;
	sub_82596FE8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-13832
	ctx.r8.s64 = ctx.r10.s64 + -13832;
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837a5b18
	if (cr6.eq) goto loc_837A5B18;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83b46ad0
	ctx.lr = 0x837A5B10;
	sub_83B46AD0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_837A5B18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837A5B20;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A5B38"))) PPC_WEAK_FUNC(sub_837A5B38);
PPC_FUNC_IMPL(__imp__sub_837A5B38) {
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
	// bl 0x837a5760
	ctx.lr = 0x837A5B58;
	sub_837A5760(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a5b70
	if (cr6.eq) goto loc_837A5B70;
	// bl 0x82416268
	ctx.lr = 0x837A5B6C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837A5B70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A5B88"))) PPC_WEAK_FUNC(sub_837A5B88);
PPC_FUNC_IMPL(__imp__sub_837A5B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837A5B90;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// addi r8,r9,-28376
	ctx.r8.s64 = ctx.r9.s64 + -28376;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// rlwinm r7,r4,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// clrlwi r28,r4,24
	ctx.r28.u64 = ctx.r4.u32 & 0xFF;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837A5BF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837a5bf4
	if (!cr6.eq) goto loc_837A5BF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837A5C18;
	sub_8259CC28(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// addi r28,r11,6388
	ctx.r28.s64 = ctx.r11.s64 + 6388;
	// addi r4,r28,-124
	ctx.r4.s64 = ctx.r28.s64 + -124;
	// beq cr6,0x837a5c30
	if (cr6.eq) goto loc_837A5C30;
	// addi r4,r28,-80
	ctx.r4.s64 = ctx.r28.s64 + -80;
loc_837A5C30:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837A5C34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837a5c34
	if (!cr6.eq) goto loc_837A5C34;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837A5C58;
	sub_8259CC28(ctx, base);
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// blt cr6,0x837a5cf4
	if (cr6.lt) goto loc_837A5CF4;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bgt cr6,0x837a5cf4
	if (cr6.gt) goto loc_837A5CF4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x837A5C80;
	sub_837B0C10(ctx, base);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837a5c9c
	if (!cr6.lt) goto loc_837A5C9C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_837A5C9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574d38
	ctx.lr = 0x837A5CA8;
	sub_82574D38(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-28388
	ctx.r11.s64 = ctx.r11.s64 + -28388;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_837A5CC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837a5cc4
	if (!cr6.eq) goto loc_837A5CC4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a84c0
	ctx.lr = 0x837A5CEC;
	sub_827A84C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837A5CF4;
	sub_8387E8E0(ctx, base);
loc_837A5CF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5D00"))) PPC_WEAK_FUNC(sub_837A5D00);
PPC_FUNC_IMPL(__imp__sub_837A5D00) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,6612
	ctx.r8.s64 = ctx.r9.s64 + 6612;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A5D28"))) PPC_WEAK_FUNC(sub_837A5D28);
PPC_FUNC_IMPL(__imp__sub_837A5D28) {
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
	// bl 0x8378cba8
	ctx.lr = 0x837A5D48;
	sub_8378CBA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8379c260
	ctx.lr = 0x837A5D50;
	sub_8379C260(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837A5D5C;
	sub_8378CBA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// bl 0x8378fcd0
	ctx.lr = 0x837A5D68;
	sub_8378FCD0(ctx, base);
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

__attribute__((alias("__imp__sub_837A5D84"))) PPC_WEAK_FUNC(sub_837A5D84);
PPC_FUNC_IMPL(__imp__sub_837A5D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A5D88"))) PPC_WEAK_FUNC(sub_837A5D88);
PPC_FUNC_IMPL(__imp__sub_837A5D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a5dd0
	if (cr6.eq) goto loc_837A5DD0;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// vspltw128 v62,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v60,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmrghw128 v59,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vmrghw128 v58,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83b47040
	ctx.lr = 0x837A5DD0;
	sub_83B47040(ctx, base);
loc_837A5DD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A5DE0"))) PPC_WEAK_FUNC(sub_837A5DE0);
PPC_FUNC_IMPL(__imp__sub_837A5DE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83b47038
	sub_83B47038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5DE8"))) PPC_WEAK_FUNC(sub_837A5DE8);
PPC_FUNC_IMPL(__imp__sub_837A5DE8) {
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
	// lbz r10,13(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837a5e1c
	if (cr6.eq) goto loc_837A5E1C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82dfa5b8
	ctx.lr = 0x837A5E1C;
	sub_82DFA5B8(ctx, base);
loc_837A5E1C:
	// stb r30,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A5E38"))) PPC_WEAK_FUNC(sub_837A5E38);
PPC_FUNC_IMPL(__imp__sub_837A5E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A5E40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6612
	ctx.r10.s64 = ctx.r11.s64 + 6612;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8378cba8
	ctx.lr = 0x837A5E5C;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a5e7c
	if (cr6.eq) goto loc_837A5E7C;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8378cba8
	ctx.lr = 0x837A5E6C;
	sub_8378CBA8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8378d268
	ctx.lr = 0x837A5E7C;
	sub_8378D268(ctx, base);
loc_837A5E7C:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a5e9c
	if (cr6.eq) goto loc_837A5E9C;
	// bl 0x82595188
	ctx.lr = 0x837A5E8C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837A5E9C;
	sub_825952B8(ctx, base);
loc_837A5E9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5EA8"))) PPC_WEAK_FUNC(sub_837A5EA8);
PPC_FUNC_IMPL(__imp__sub_837A5EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A5EB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// clrlwi r29,r4,24
	ctx.r29.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x837a5ed4
	if (cr6.eq) goto loc_837A5ED4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83b46fc8
	ctx.lr = 0x837A5ED4;
	sub_83B46FC8(ctx, base);
loc_837A5ED4:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bne cr6,0x837a5f30
	if (!cr6.eq) goto loc_837A5F30;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// bne cr6,0x837a5f14
	if (!cr6.eq) goto loc_837A5F14;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a5f00
	if (cr6.eq) goto loc_837A5F00;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82dfa5b8
	ctx.lr = 0x837A5F00;
	sub_82DFA5B8(ctx, base);
loc_837A5F00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837A5F14:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837a5f28
	if (cr6.eq) goto loc_837A5F28;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82dfa5b8
	ctx.lr = 0x837A5F28;
	sub_82DFA5B8(ctx, base);
loc_837A5F28:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
loc_837A5F30:
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5F3C"))) PPC_WEAK_FUNC(sub_837A5F3C);
PPC_FUNC_IMPL(__imp__sub_837A5F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A5F40"))) PPC_WEAK_FUNC(sub_837A5F40);
PPC_FUNC_IMPL(__imp__sub_837A5F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A5F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837A5F58;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a5fac
	if (cr6.eq) goto loc_837A5FAC;
	// bl 0x8378cba8
	ctx.lr = 0x837A5F64;
	sub_8378CBA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8379c290
	ctx.lr = 0x837A5F6C;
	sub_8379C290(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bl 0x8378cba8
	ctx.lr = 0x837A5F7C;
	sub_8378CBA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8378fd58
	ctx.lr = 0x837A5F88;
	sub_8378FD58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837a5fac
	if (!cr6.eq) goto loc_837A5FAC;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8378cba8
	ctx.lr = 0x837A5F9C;
	sub_8378CBA8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8378d268
	ctx.lr = 0x837A5FAC;
	sub_8378D268(ctx, base);
loc_837A5FAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5FB4"))) PPC_WEAK_FUNC(sub_837A5FB4);
PPC_FUNC_IMPL(__imp__sub_837A5FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A5FB8"))) PPC_WEAK_FUNC(sub_837A5FB8);
PPC_FUNC_IMPL(__imp__sub_837A5FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83497b28
	sub_83497B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A5FC8"))) PPC_WEAK_FUNC(sub_837A5FC8);
PPC_FUNC_IMPL(__imp__sub_837A5FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A5FCC"))) PPC_WEAK_FUNC(sub_837A5FCC);
PPC_FUNC_IMPL(__imp__sub_837A5FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A5FD0"))) PPC_WEAK_FUNC(sub_837A5FD0);
PPC_FUNC_IMPL(__imp__sub_837A5FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837A5FD8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a60a8
	if (cr6.eq) goto loc_837A60A8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x837a60a8
	if (cr6.eq) goto loc_837A60A8;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// addi r27,r3,12
	ctx.r27.s64 = ctx.r3.s64 + 12;
loc_837A600C:
	// sraw r11,r23,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r23.s32 < 0) & (((ctx.r23.s32 >> temp.u32) << temp.u32) != ctx.r23.s32);
	ctx.r11.s64 = ctx.r23.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x837a6094
	if (cr6.eq) goto loc_837A6094;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8291d710
	ctx.lr = 0x837A6028;
	sub_8291D710(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a6094
	if (cr6.eq) goto loc_837A6094;
	// li r28,0
	ctx.r28.s64 = 0;
loc_837A6038:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x837a6084
	if (!cr6.gt) goto loc_837A6084;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x837a6078
	if (cr6.eq) goto loc_837A6078;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83497dd0
	ctx.lr = 0x837A6068;
	sub_83497DD0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a6078
	if (cr6.eq) goto loc_837A6078;
	// bl 0x833c9190
	ctx.lr = 0x837A6078;
	sub_833C9190(ctx, base);
loc_837A6078:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_837A6084:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// blt cr6,0x837a6038
	if (cr6.lt) goto loc_837A6038;
loc_837A6094:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x837a600c
	if (cr6.lt) goto loc_837A600C;
loc_837A60A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A60B4"))) PPC_WEAK_FUNC(sub_837A60B4);
PPC_FUNC_IMPL(__imp__sub_837A60B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A60B8"))) PPC_WEAK_FUNC(sub_837A60B8);
PPC_FUNC_IMPL(__imp__sub_837A60B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837A60C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-13732
	ctx.r27.s64 = ctx.r11.s64 + -13732;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A60E4;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-13744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6114
	if (cr6.eq) goto loc_837A6114;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a6114
	if (cr6.eq) goto loc_837A6114;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83497c00
	ctx.lr = 0x837A6114;
	sub_83497C00(ctx, base);
loc_837A6114:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x837A611C;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A6124"))) PPC_WEAK_FUNC(sub_837A6124);
PPC_FUNC_IMPL(__imp__sub_837A6124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A6128"))) PPC_WEAK_FUNC(sub_837A6128);
PPC_FUNC_IMPL(__imp__sub_837A6128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837A6130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,-13732
	ctx.r28.s64 = ctx.r11.s64 + -13732;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A6150;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-13744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6198
	if (cr6.eq) goto loc_837A6198;
	// rlwinm r9,r30,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
loc_837A6198:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837A61A0;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A61A8"))) PPC_WEAK_FUNC(sub_837A61A8);
PPC_FUNC_IMPL(__imp__sub_837A61A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A61B0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,-13732
	ctx.r29.s64 = ctx.r11.s64 + -13732;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A61D4;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-13744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a61f4
	if (cr6.eq) goto loc_837A61F4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x837a5fd0
	ctx.lr = 0x837A61F4;
	sub_837A5FD0(ctx, base);
loc_837A61F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837A61FC;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A6208"))) PPC_WEAK_FUNC(sub_837A6208);
PPC_FUNC_IMPL(__imp__sub_837A6208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837A6210;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-13732
	ctx.r28.s64 = ctx.r11.s64 + -13732;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A6230;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-13744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a625c
	if (cr6.eq) goto loc_837A625C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a625c
	if (cr6.eq) goto loc_837A625C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83497b98
	ctx.lr = 0x837A625C;
	sub_83497B98(ctx, base);
loc_837A625C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837A6264;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A626C"))) PPC_WEAK_FUNC(sub_837A626C);
PPC_FUNC_IMPL(__imp__sub_837A626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A6270"))) PPC_WEAK_FUNC(sub_837A6270);
PPC_FUNC_IMPL(__imp__sub_837A6270) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,-13732
	ctx.r31.s64 = ctx.r11.s64 + -13732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A6290;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-13744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a62b0
	if (cr6.eq) goto loc_837A62B0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a62b0
	if (cr6.eq) goto loc_837A62B0;
	// bl 0x83497c70
	ctx.lr = 0x837A62B0;
	sub_83497C70(ctx, base);
loc_837A62B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837A62B8;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_837A62CC"))) PPC_WEAK_FUNC(sub_837A62CC);
PPC_FUNC_IMPL(__imp__sub_837A62CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A62D0"))) PPC_WEAK_FUNC(sub_837A62D0);
PPC_FUNC_IMPL(__imp__sub_837A62D0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,-13732
	ctx.r31.s64 = ctx.r11.s64 + -13732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A62F0;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-13744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6314
	if (cr6.eq) goto loc_837A6314;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a6314
	if (cr6.eq) goto loc_837A6314;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83102db0
	ctx.lr = 0x837A6314;
	sub_83102DB0(ctx, base);
loc_837A6314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837A631C;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_837A6330"))) PPC_WEAK_FUNC(sub_837A6330);
PPC_FUNC_IMPL(__imp__sub_837A6330) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-13732
	ctx.r31.s64 = ctx.r11.s64 + -13732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A6358;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-13744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a637c
	if (cr6.eq) goto loc_837A637C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a637c
	if (cr6.eq) goto loc_837A637C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x837A637C;
	sub_83102DB0(ctx, base);
loc_837A637C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837A6384;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A639C"))) PPC_WEAK_FUNC(sub_837A639C);
PPC_FUNC_IMPL(__imp__sub_837A639C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A63A0"))) PPC_WEAK_FUNC(sub_837A63A0);
PPC_FUNC_IMPL(__imp__sub_837A63A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837A63A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// addi r10,r11,7068
	ctx.r10.s64 = ctx.r11.s64 + 7068;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-13744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13744);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x837a63f0
	if (!cr6.eq) goto loc_837A63F0;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r28,r11,-13732
	ctx.r28.s64 = ctx.r11.s64 + -13732;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A63E0;
	sub_82596FE8(ctx, base);
	// stw r29,-13744(r30)
	PPC_STORE_U32(ctx.r30.u32 + -13744, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837A63F0;
	sub_82597088(ctx, base);
loc_837A63F0:
	// bl 0x8378cba8
	ctx.lr = 0x837A63F4;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a641c
	if (cr6.eq) goto loc_837A641C;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x837a641c
	if (cr6.eq) goto loc_837A641C;
	// bl 0x8378cba8
	ctx.lr = 0x837A640C;
	sub_8378CBA8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8378d268
	ctx.lr = 0x837A641C;
	sub_8378D268(ctx, base);
loc_837A641C:
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r28,2
	ctx.r28.s64 = 2;
loc_837A6428:
	// lwzu r4,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837a6440
	if (cr6.eq) goto loc_837A6440;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837A6440;
	sub_825952B8(ctx, base);
loc_837A6440:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bge 0x837a6428
	if (!cr0.lt) goto loc_837A6428;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A645C"))) PPC_WEAK_FUNC(sub_837A645C);
PPC_FUNC_IMPL(__imp__sub_837A645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A6460"))) PPC_WEAK_FUNC(sub_837A6460);
PPC_FUNC_IMPL(__imp__sub_837A6460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837A6468;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
	// addi r28,r11,6804
	ctx.r28.s64 = ctx.r11.s64 + 6804;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r28,-140
	ctx.r4.s64 = ctx.r28.s64 + -140;
	// bl 0x8259cc28
	ctx.lr = 0x837A64A0;
	sub_8259CC28(ctx, base);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x837A64D0;
	sub_8259CB28(ctx, base);
	// addi r4,r28,-124
	ctx.r4.s64 = ctx.r28.s64 + -124;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x837A64E0;
	sub_825A1EB8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x837A64F4;
	sub_8259CB28(ctx, base);
	// addi r5,r28,-116
	ctx.r5.s64 = ctx.r28.s64 + -116;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x831d0b08
	ctx.lr = 0x837A6508;
	sub_831D0B08(ctx, base);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
loc_837A651C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837a651c
	if (!cr6.eq) goto loc_837A651C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837A6544;
	sub_8259CC28(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x837A6558;
	sub_825A1DA8(ctx, base);
	// addi r4,r28,-108
	ctx.r4.s64 = ctx.r28.s64 + -108;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x837A6568;
	sub_825A1EB8(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x837a6590
	if (!cr6.eq) goto loc_837A6590;
	// addi r4,r28,-92
	ctx.r4.s64 = ctx.r28.s64 + -92;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x825a1eb8
	ctx.lr = 0x837A6584;
	sub_825A1EB8(ctx, base);
	// addi r4,r28,-84
	ctx.r4.s64 = ctx.r28.s64 + -84;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x837a65f4
	goto loc_837A65F4;
loc_837A6590:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r5,7
	ctx.r5.s64 = 7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x837a65b4
	if (cr6.lt) goto loc_837A65B4;
	// beq cr6,0x837a65ac
	if (cr6.eq) goto loc_837A65AC;
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
	// b 0x837a65b8
	goto loc_837A65B8;
loc_837A65AC:
	// addi r4,r28,-60
	ctx.r4.s64 = ctx.r28.s64 + -60;
	// b 0x837a65b8
	goto loc_837A65B8;
loc_837A65B4:
	// addi r4,r28,-68
	ctx.r4.s64 = ctx.r28.s64 + -68;
loc_837A65B8:
	// bl 0x825a1eb8
	ctx.lr = 0x837A65BC;
	sub_825A1EB8(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837a65ec
	if (cr6.eq) goto loc_837A65EC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x837a65e0
	if (cr6.eq) goto loc_837A65E0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x837a65f8
	goto loc_837A65F8;
loc_837A65E0:
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// li r5,20
	ctx.r5.s64 = 20;
	// b 0x837a65f8
	goto loc_837A65F8;
loc_837A65EC:
	// addi r4,r28,-44
	ctx.r4.s64 = ctx.r28.s64 + -44;
	// li r5,16
	ctx.r5.s64 = 16;
loc_837A65F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_837A65F8:
	// bl 0x825a1eb8
	ctx.lr = 0x837A65FC;
	sub_825A1EB8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
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
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837A6680;
	sub_8259CB28(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837A6694;
	sub_8259CB28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// lwz r6,40(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r4,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x837a66fc
	if (!cr6.eq) goto loc_837A66FC;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// b 0x837a6700
	goto loc_837A6700;
loc_837A66FC:
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_837A6700:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// blt cr6,0x837a6724
	if (cr6.lt) goto loc_837A6724;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x837A6724;
	sub_825952B8(ctx, base);
loc_837A6724:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// blt cr6,0x837a674c
	if (cr6.lt) goto loc_837A674C;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x837A674C;
	sub_825952B8(ctx, base);
loc_837A674C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// blt cr6,0x837a6774
	if (cr6.lt) goto loc_837A6774;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x837A6774;
	sub_825952B8(ctx, base);
loc_837A6774:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// blt cr6,0x837a679c
	if (cr6.lt) goto loc_837A679C;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x837A679C;
	sub_825952B8(ctx, base);
loc_837A679C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A67A8"))) PPC_WEAK_FUNC(sub_837A67A8);
PPC_FUNC_IMPL(__imp__sub_837A67A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837A67B0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,7068
	ctx.r10.s64 = ctx.r11.s64 + 7068;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r31.u32);
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stw r31,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_837A6818:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8291d710
	ctx.lr = 0x837A6820;
	sub_8291D710(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837a6854
	if (cr6.eq) goto loc_837A6854;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_837A682C:
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x831b0e08
	ctx.lr = 0x837A684C;
	sub_831B0E08(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x837a682c
	if (!cr0.eq) goto loc_837A682C;
loc_837A6854:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// blt cr6,0x837a6818
	if (cr6.lt) goto loc_837A6818;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,-13732
	ctx.r31.s64 = ctx.r11.s64 + -13732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837A6874;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r10,-13744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13744);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837a6888
	if (!cr6.eq) goto loc_837A6888;
	// stw r30,-13744(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13744, ctx.r30.u32);
loc_837A6888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837A6890;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A68A0"))) PPC_WEAK_FUNC(sub_837A68A0);
PPC_FUNC_IMPL(__imp__sub_837A68A0) {
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
	// bl 0x837a63a0
	ctx.lr = 0x837A68C0;
	sub_837A63A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a68d8
	if (cr6.eq) goto loc_837A68D8;
	// bl 0x82416268
	ctx.lr = 0x837A68D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837A68D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A68F0"))) PPC_WEAK_FUNC(sub_837A68F0);
PPC_FUNC_IMPL(__imp__sub_837A68F0) {
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
	// bl 0x837a6460
	ctx.lr = 0x837A6908;
	sub_837A6460(ctx, base);
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

__attribute__((alias("__imp__sub_837A6920"))) PPC_WEAK_FUNC(sub_837A6920);
PPC_FUNC_IMPL(__imp__sub_837A6920) {
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
	// bl 0x837a9388
	ctx.lr = 0x837A6938;
	sub_837A9388(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32213
	ctx.r7.s64 = -2111111168;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r6,r7,7396
	ctx.r6.s64 = ctx.r7.s64 + 7396;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// sth r11,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r11.u16);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// sth r11,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// sth r11,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r11.u16);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stb r5,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r5.u8);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
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

__attribute__((alias("__imp__sub_837A69CC"))) PPC_WEAK_FUNC(sub_837A69CC);
PPC_FUNC_IMPL(__imp__sub_837A69CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A69D0"))) PPC_WEAK_FUNC(sub_837A69D0);
PPC_FUNC_IMPL(__imp__sub_837A69D0) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,7376
	ctx.r9.s64 = ctx.r11.s64 + 7376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x837a6a04
	if (cr6.eq) goto loc_837A6A04;
	// bl 0x82416268
	ctx.lr = 0x837A6A00;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837A6A04:
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

__attribute__((alias("__imp__sub_837A6A18"))) PPC_WEAK_FUNC(sub_837A6A18);
PPC_FUNC_IMPL(__imp__sub_837A6A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,19
	cr6.compare<int32_t>(ctx.r4.s32, 19, xer);
	// blt cr6,0x837a6a28
	if (cr6.lt) goto loc_837A6A28;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837A6A28:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r10,r11,-28056
	ctx.r10.s64 = ctx.r11.s64 + -28056;
	// lbzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A6A38"))) PPC_WEAK_FUNC(sub_837A6A38);
PPC_FUNC_IMPL(__imp__sub_837A6A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r3,1052
	ctx.r3.s64 = ctx.r3.s64 + 1052;
	// lwz r4,2316(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	// bl 0x837a93d0
	ctx.lr = 0x837A6A60;
	sub_837A93D0(ctx, base);
	// addi r3,r31,1160
	ctx.r3.s64 = ctx.r31.s64 + 1160;
	// lwz r4,2316(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	// bl 0x837a93d0
	ctx.lr = 0x837A6A6C;
	sub_837A93D0(ctx, base);
	// addi r3,r31,1212
	ctx.r3.s64 = ctx.r31.s64 + 1212;
	// lwz r4,2316(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	// bl 0x837a93d0
	ctx.lr = 0x837A6A78;
	sub_837A93D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837A6A8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x834ef9e8
	ctx.lr = 0x837A6A98;
	sub_834EF9E8(ctx, base);
	// lwz r3,2316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x837A6AAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f31,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// stb r7,2313(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2313, ctx.r7.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A6AD0"))) PPC_WEAK_FUNC(sub_837A6AD0);
PPC_FUNC_IMPL(__imp__sub_837A6AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A6AD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2312(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2312);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6b34
	if (cr6.eq) goto loc_837A6B34;
	// lbz r11,2313(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2313);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6b34
	if (cr6.eq) goto loc_837A6B34;
	// lwz r11,2316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6b64
	if (cr6.eq) goto loc_837A6B64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x837c5598
	ctx.lr = 0x837A6B14;
	sub_837C5598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,2316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x834f15d0
	ctx.lr = 0x837A6B2C;
	sub_834F15D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837A6B34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f13,12(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_837A6B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837A6B6C"))) PPC_WEAK_FUNC(sub_837A6B6C);
PPC_FUNC_IMPL(__imp__sub_837A6B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837A6B70"))) PPC_WEAK_FUNC(sub_837A6B70);
PPC_FUNC_IMPL(__imp__sub_837A6B70) {
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
	// lbz r11,2312(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2312);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6bd0
	if (cr6.eq) goto loc_837A6BD0;
	// lbz r11,2313(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2313);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6bd0
	if (cr6.eq) goto loc_837A6BD0;
	// lwz r11,2316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6bf0
	if (cr6.eq) goto loc_837A6BF0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x837c5598
	ctx.lr = 0x837A6BB8;
	sub_837C5598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,2316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x834f1248
	ctx.lr = 0x837A6BCC;
	sub_834F1248(ctx, base);
	// b 0x837a6bf0
	goto loc_837A6BF0;
loc_837A6BD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_837A6BF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A6C08"))) PPC_WEAK_FUNC(sub_837A6C08);
PPC_FUNC_IMPL(__imp__sub_837A6C08) {
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
	// lbz r11,2312(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2312);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6c68
	if (cr6.eq) goto loc_837A6C68;
	// lbz r11,2313(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2313);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6c68
	if (cr6.eq) goto loc_837A6C68;
	// lwz r11,2316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837a6c88
	if (cr6.eq) goto loc_837A6C88;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x837c5598
	ctx.lr = 0x837A6C50;
	sub_837C5598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,2316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x834f12f0
	ctx.lr = 0x837A6C64;
	sub_834F12F0(ctx, base);
	// b 0x837a6c88
	goto loc_837A6C88;
loc_837A6C68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_837A6C88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A6CA0"))) PPC_WEAK_FUNC(sub_837A6CA0);
PPC_FUNC_IMPL(__imp__sub_837A6CA0) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-13700
	ctx.r31.s64 = ctx.r11.s64 + -13700;
	// lwz r11,-13688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13688);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837a6cf8
	if (!cr6.eq) goto loc_837A6CF8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-13688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13688, ctx.r11.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_837A6CF8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,2316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2316);
	// bl 0x834f1d30
	ctx.lr = 0x837A6D04;
	sub_834F1D30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624408
	ctx.lr = 0x837A6D10;
	sub_82624408(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837A6D28"))) PPC_WEAK_FUNC(sub_837A6D28);
PPC_FUNC_IMPL(__imp__sub_837A6D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837A6D30;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x837c5598
	ctx.lr = 0x837A6D48;
	sub_837C5598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x834f1248
	ctx.lr = 0x837A6D5C;
	sub_834F1248(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82a59ca0
	ctx.lr = 0x837A6D84;
	sub_82A59CA0(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

