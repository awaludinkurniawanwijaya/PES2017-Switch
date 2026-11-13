#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83283E70"))) PPC_WEAK_FUNC(sub_83283E70);
PPC_FUNC_IMPL(__imp__sub_83283E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83283E78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r9,r11,-2068
	ctx.r9.s64 = ctx.r11.s64 + -2068;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r28,r8,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x83283eb4
	if (cr6.eq) goto loc_83283EB4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x83283EAC;
	sub_8320D088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83283EB4:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83283ecc
	if (!cr6.eq) goto loc_83283ECC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_83283ECC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832133d0
	ctx.lr = 0x83283EF4;
	sub_832133D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83283f24
	if (!cr6.eq) goto loc_83283F24;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,-29404
	ctx.r5.s64 = ctx.r11.s64 + -29404;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d428
	ctx.lr = 0x83283F1C;
	sub_8320D428(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83283F24:
	// li r3,615
	ctx.r3.s64 = 615;
	// bl 0x832277f8
	ctx.lr = 0x83283F2C;
	sub_832277F8(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83283f64
	if (cr6.eq) goto loc_83283F64;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x83237ad0
	ctx.lr = 0x83283F48;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83283f64
	if (!cr6.eq) goto loc_83283F64;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83283f64
	if (cr6.eq) goto loc_83283F64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83283F64:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83283f80
	if (cr6.eq) goto loc_83283F80;
	// bl 0x83219c48
	ctx.lr = 0x83283F78;
	sub_83219C48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83283F80:
	// bl 0x83219d48
	ctx.lr = 0x83283F84;
	sub_83219D48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83283F8C"))) PPC_WEAK_FUNC(sub_83283F8C);
PPC_FUNC_IMPL(__imp__sub_83283F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283F90"))) PPC_WEAK_FUNC(sub_83283F90);
PPC_FUNC_IMPL(__imp__sub_83283F90) {
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
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83296d08
	ctx.lr = 0x83283FB0;
	sub_83296D08(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83283fc0
	if (cr6.eq) goto loc_83283FC0;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
loc_83283FC0:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296d08
	ctx.lr = 0x83283FCC;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83283fd8
	if (cr6.eq) goto loc_83283FD8;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
loc_83283FD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83283FF0"))) PPC_WEAK_FUNC(sub_83283FF0);
PPC_FUNC_IMPL(__imp__sub_83283FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83283FF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x8328402c
	if (!cr6.eq) goto loc_8328402C;
	// bl 0x83222578
	ctx.lr = 0x8328401C;
	sub_83222578(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8328402C:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x83284064
	if (!cr6.eq) goto loc_83284064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221558
	ctx.lr = 0x8328403C;
	sub_83221558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83284064
	if (cr6.eq) goto loc_83284064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83284050;
	sub_83222578(ctx, base);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83284064:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x83284078;
	sub_83222BE8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83283f90
	ctx.lr = 0x83284080;
	sub_83283F90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213da0
	ctx.lr = 0x83284088;
	sub_83213DA0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// bl 0x83259608
	ctx.lr = 0x832840A4;
	sub_83259608(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832840b8
	if (!cr6.eq) goto loc_832840B8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_832840B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832840C4"))) PPC_WEAK_FUNC(sub_832840C4);
PPC_FUNC_IMPL(__imp__sub_832840C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832840C8"))) PPC_WEAK_FUNC(sub_832840C8);
PPC_FUNC_IMPL(__imp__sub_832840C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832840D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8328410c
	if (cr6.eq) goto loc_8328410C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x83284100;
	sub_8320D088(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8328410C:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83284124
	if (!cr6.eq) goto loc_83284124;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_83284124:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832133d0
	ctx.lr = 0x8328414C;
	sub_832133D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83284180
	if (!cr6.eq) goto loc_83284180;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,-29404
	ctx.r5.s64 = ctx.r11.s64 + -29404;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d428
	ctx.lr = 0x83284174;
	sub_8320D428(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83284180:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83284198
	if (cr6.eq) goto loc_83284198;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// b 0x8328419c
	goto loc_8328419C;
loc_83284198:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
loc_8328419C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83283ff0
	ctx.lr = 0x832841B0;
	sub_83283FF0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x832841e8
	if (!cr6.eq) goto loc_832841E8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x8328429c
	if (!cr6.eq) goto loc_8328429C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,14768
	ctx.r5.s64 = ctx.r11.s64 + 14768;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d548
	ctx.lr = 0x832841DC;
	sub_8320D548(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832841E8:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x8328429c
	if (!cr6.eq) goto loc_8328429C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832181c8
	ctx.lr = 0x832841FC;
	sub_832181C8(ctx, base);
	// clrlwi r30,r26,24
	ctx.r30.u64 = ctx.r26.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83284214
	if (cr6.eq) goto loc_83284214;
	// bl 0x83219c00
	ctx.lr = 0x83284210;
	sub_83219C00(ctx, base);
	// b 0x83284218
	goto loc_83284218;
loc_83284214:
	// bl 0x83219cf0
	ctx.lr = 0x83284218;
	sub_83219CF0(ctx, base);
loc_83284218:
	// li r3,615
	ctx.r3.s64 = 615;
	// bl 0x832277f8
	ctx.lr = 0x83284220;
	sub_832277F8(ctx, base);
	// lwz r31,56(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8328429c
	if (cr6.eq) goto loc_8328429C;
loc_83284230:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83284290
	if (cr6.eq) goto loc_83284290;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83284290
	if (cr6.eq) goto loc_83284290;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x83237ad0
	ctx.lr = 0x83284258;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83284290
	if (!cr6.eq) goto loc_83284290;
	// lhz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 232);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,86(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 86);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x832181c8
	ctx.lr = 0x83284278;
	sub_832181C8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8328428c
	if (cr6.eq) goto loc_8328428C;
	// bl 0x83219c00
	ctx.lr = 0x83284288;
	sub_83219C00(ctx, base);
	// b 0x83284290
	goto loc_83284290;
loc_8328428C:
	// bl 0x83219cf0
	ctx.lr = 0x83284290;
	sub_83219CF0(ctx, base);
loc_83284290:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83284230
	if (!cr6.eq) goto loc_83284230;
loc_8328429C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832842A8"))) PPC_WEAK_FUNC(sub_832842A8);
PPC_FUNC_IMPL(__imp__sub_832842A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832842B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// xori r11,r10,2104
	ctx.r11.u64 = ctx.r10.u64 ^ 2104;
	// xori r10,r10,2070
	ctx.r10.u64 = ctx.r10.u64 ^ 2070;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// srawi r6,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// clrlwi r27,r4,31
	ctx.r27.u64 = ctx.r4.u32 & 0x1;
	// beq cr6,0x83284308
	if (cr6.eq) goto loc_83284308;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x832842FC;
	sub_8320D088(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83284308:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83284320
	if (!cr6.eq) goto loc_83284320;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_83284320:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832133d0
	ctx.lr = 0x83284348;
	sub_832133D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328437c
	if (!cr6.eq) goto loc_8328437C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,-29404
	ctx.r5.s64 = ctx.r11.s64 + -29404;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d428
	ctx.lr = 0x83284370;
	sub_8320D428(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8328437C:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83284394
	if (!cr6.eq) goto loc_83284394;
	// addi r31,r30,-8
	ctx.r31.s64 = ctx.r30.s64 + -8;
loc_83284394:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221558
	ctx.lr = 0x8328439C;
	sub_83221558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832843bc
	if (cr6.eq) goto loc_832843BC;
	// bl 0x83222578
	ctx.lr = 0x832843B0;
	sub_83222578(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83284404
	goto loc_83284404;
loc_832843BC:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83222be8
	ctx.lr = 0x832843CC;
	sub_83222BE8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83283f90
	ctx.lr = 0x832843D4;
	sub_83283F90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213da0
	ctx.lr = 0x832843DC;
	sub_83213DA0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,268(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// bl 0x83259608
	ctx.lr = 0x832843F8;
	sub_83259608(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83284434
	if (!cr6.eq) goto loc_83284434;
loc_83284404:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832182d0
	ctx.lr = 0x83284410;
	sub_832182D0(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83284430
	if (cr6.eq) goto loc_83284430;
	// bl 0x83219c48
	ctx.lr = 0x83284424;
	sub_83219C48(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83284430:
	// bl 0x83219d48
	ctx.lr = 0x83284434;
	sub_83219D48(ctx, base);
loc_83284434:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83284440"))) PPC_WEAK_FUNC(sub_83284440);
PPC_FUNC_IMPL(__imp__sub_83284440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83284448;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83284474
	if (cr6.eq) goto loc_83284474;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x8328446C;
	sub_8320D088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83284474:
	// lbz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 36);
	// li r10,5
	ctx.r10.s64 = 5;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328448c
	if (!cr6.eq) goto loc_8328448C;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_8328448C:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832133d0
	ctx.lr = 0x832844B4;
	sub_832133D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832844e4
	if (!cr6.eq) goto loc_832844E4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,12932
	ctx.r5.s64 = ctx.r11.s64 + 12932;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d428
	ctx.lr = 0x832844DC;
	sub_8320D428(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832844E4:
	// li r3,615
	ctx.r3.s64 = 615;
	// bl 0x832277f8
	ctx.lr = 0x832844EC;
	sub_832277F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8320b098
	ctx.lr = 0x832844F8;
	sub_8320B098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83284504
	if (cr6.eq) goto loc_83284504;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83284504:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x8328450C;
	sub_83209AA8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,23216
	ctx.r29.s64 = ctx.r11.s64 + 23216;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8328451C:
	// lbz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83284530
	if (cr6.eq) goto loc_83284530;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// b 0x83284534
	goto loc_83284534;
loc_83284530:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
loc_83284534:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220448
	ctx.lr = 0x8328453C;
	sub_83220448(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// stfsx f1,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x8328451c
	if (cr6.lt) goto loc_8328451C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322c600
	ctx.lr = 0x8328456C;
	sub_8322C600(ctx, base);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// oris r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 16777216;
	// stw r10,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83284580"))) PPC_WEAK_FUNC(sub_83284580);
PPC_FUNC_IMPL(__imp__sub_83284580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83284588;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x832845b0
	if (cr6.eq) goto loc_832845B0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x832845B0;
	sub_8320D088(ctx, base);
loc_832845B0:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83284680
	if (cr6.lt) goto loc_83284680;
	// lbz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832845d4
	if (!cr6.eq) goto loc_832845D4;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832845D4:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x832133d0
	ctx.lr = 0x83284600;
	sub_832133D0(ctx, base);
	// lbz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bne cr6,0x83284618
	if (!cr6.eq) goto loc_83284618;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
loc_83284618:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83222be8
	ctx.lr = 0x83284628;
	sub_83222BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83284654
	if (!cr6.eq) goto loc_83284654;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r11,12460
	ctx.r5.s64 = ctx.r11.s64 + 12460;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d428
	ctx.lr = 0x83284650;
	sub_8320D428(ctx, base);
	// b 0x83284664
	goto loc_83284664;
loc_83284654:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8324fe88
	ctx.lr = 0x83284660;
	sub_8324FE88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83284664:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83284680
	if (cr6.eq) goto loc_83284680;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83284680
	if (cr6.eq) goto loc_83284680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x83284680;
	sub_83209D68(ctx, base);
loc_83284680:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328468C"))) PPC_WEAK_FUNC(sub_8328468C);
PPC_FUNC_IMPL(__imp__sub_8328468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284690"))) PPC_WEAK_FUNC(sub_83284690);
PPC_FUNC_IMPL(__imp__sub_83284690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83284698;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x832846c0
	if (cr6.eq) goto loc_832846C0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x832846C0;
	sub_8320D088(ctx, base);
loc_832846C0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x832847bc
	if (cr6.lt) goto loc_832847BC;
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832846e4
	if (!cr6.eq) goto loc_832846E4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832846E4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832133d0
	ctx.lr = 0x8328470C;
	sub_832133D0(ctx, base);
	// lbz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bne cr6,0x83284724
	if (!cr6.eq) goto loc_83284724;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
loc_83284724:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83222be8
	ctx.lr = 0x83284734;
	sub_83222BE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83284760
	if (!cr6.eq) goto loc_83284760;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,12460
	ctx.r5.s64 = ctx.r11.s64 + 12460;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d428
	ctx.lr = 0x8328475C;
	sub_8320D428(ctx, base);
	// b 0x832847a0
	goto loc_832847A0;
loc_83284760:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83284788
	if (!cr6.eq) goto loc_83284788;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x83284774;
	sub_832277F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83284788
	if (!cr6.eq) goto loc_83284788;
	// bl 0x83227908
	ctx.lr = 0x83284784;
	sub_83227908(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_83284788:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832501e8
	ctx.lr = 0x8328479C;
	sub_832501E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_832847A0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x832847bc
	if (cr6.eq) goto loc_832847BC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832847bc
	if (cr6.eq) goto loc_832847BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83209d68
	ctx.lr = 0x832847BC;
	sub_83209D68(ctx, base);
loc_832847BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832847C8"))) PPC_WEAK_FUNC(sub_832847C8);
PPC_FUNC_IMPL(__imp__sub_832847C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832847D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832847f8
	if (!cr6.eq) goto loc_832847F8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832847F8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8328480c
	if (!cr6.eq) goto loc_8328480C;
loc_83284800:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8328480C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83284800
	if (cr6.eq) goto loc_83284800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,23224
	ctx.r4.s64 = ctx.r11.s64 + 23224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83296de8
	ctx.lr = 0x8328482C;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832848cc
	if (!cr6.eq) goto loc_832848CC;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r28,52(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8328484c
	if (!cr6.eq) goto loc_8328484C;
	// li r27,3
	ctx.r27.s64 = 3;
loc_8328484C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255980
	ctx.lr = 0x83284854;
	sub_83255980(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r29,r11,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// ble cr6,0x83284874
	if (!cr6.gt) goto loc_83284874;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328486C;
	sub_83209AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83284878
	goto loc_83284878;
loc_83284874:
	// li r29,32
	ctx.r29.s64 = 32;
loc_83284878:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r27,r30
	ctx.r4.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83254ec0
	ctx.lr = 0x8328488C;
	sub_83254EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x83284894;
	sub_83255A88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832847c8
	ctx.lr = 0x832848A0;
	sub_832847C8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x832848c0
	if (cr6.eq) goto loc_832848C0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832848c0
	if (cr6.eq) goto loc_832848C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x832848C0;
	sub_83209D68(ctx, base);
loc_832848C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832848CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255980
	ctx.lr = 0x832848D4;
	sub_83255980(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83296d40
	ctx.lr = 0x832848E4;
	sub_83296D40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83284980
	if (cr6.eq) goto loc_83284980;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// rlwinm r29,r11,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// ble cr6,0x83284910
	if (!cr6.gt) goto loc_83284910;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83284908;
	sub_83209AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83284914
	goto loc_83284914;
loc_83284910:
	// li r29,32
	ctx.r29.s64 = 32;
loc_83284914:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255c58
	ctx.lr = 0x83284928;
	sub_83255C58(ctx, base);
	// subf r10,r30,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r30.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r10,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r10.s64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x83284940;
	sub_83294018(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832847c8
	ctx.lr = 0x8328494C;
	sub_832847C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x83284960;
	sub_83294018(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83254ec0
	ctx.lr = 0x83284974;
	sub_83254EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x8328497C;
	sub_83255A88(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83284980:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8328499c
	if (cr6.eq) goto loc_8328499C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320b0f8
	ctx.lr = 0x83284998;
	sub_8320B0F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328499C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x832849b8
	if (cr6.eq) goto loc_832849B8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832849b8
	if (cr6.eq) goto loc_832849B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x832849B8;
	sub_83209D68(ctx, base);
loc_832849B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832849C4"))) PPC_WEAK_FUNC(sub_832849C4);
PPC_FUNC_IMPL(__imp__sub_832849C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832849C8"))) PPC_WEAK_FUNC(sub_832849C8);
PPC_FUNC_IMPL(__imp__sub_832849C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832849D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x832849f4
	if (cr6.eq) goto loc_832849F4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x832849F4;
	sub_8320D088(ctx, base);
loc_832849F4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83284b58
	if (cr6.lt) goto loc_83284B58;
	// lbz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83284a1c
	if (!cr6.eq) goto loc_83284A1C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83284A1C:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x832133d0
	ctx.lr = 0x83284A48;
	sub_832133D0(ctx, base);
	// lbz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bne cr6,0x83284a60
	if (!cr6.eq) goto loc_83284A60;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
loc_83284A60:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83222be8
	ctx.lr = 0x83284A70;
	sub_83222BE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83255980
	ctx.lr = 0x83284A78;
	sub_83255980(ctx, base);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x83284aa4
	if (!cr6.eq) goto loc_83284AA4;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83254f98
	ctx.lr = 0x83284AA0;
	sub_83254F98(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_83284AA4:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// bne cr6,0x83284ab8
	if (!cr6.eq) goto loc_83284AB8;
	// stb r26,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r26.u8);
loc_83284AB8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83284ae0
	if (!cr6.eq) goto loc_83284AE0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r5,r11,12460
	ctx.r5.s64 = ctx.r11.s64 + 12460;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d428
	ctx.lr = 0x83284ADC;
	sub_8320D428(ctx, base);
	// b 0x83284b44
	goto loc_83284B44;
loc_83284AE0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832847c8
	ctx.lr = 0x83284AEC;
	sub_832847C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83284b04
	if (!cr6.eq) goto loc_83284B04;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x83284B00;
	sub_83213150(ctx, base);
	// b 0x83284b44
	goto loc_83284B44;
loc_83284B04:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83284b34
	if (cr6.eq) goto loc_83284B34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83284B34;
	sub_83222030(ctx, base);
loc_83284B34:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_83284B44:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x83284b58
	if (cr6.eq) goto loc_83284B58;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83209d68
	ctx.lr = 0x83284B58;
	sub_83209D68(ctx, base);
loc_83284B58:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83284B60"))) PPC_WEAK_FUNC(sub_83284B60);
PPC_FUNC_IMPL(__imp__sub_83284B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83284B68;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83284b90
	if (cr6.eq) goto loc_83284B90;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x83284B90;
	sub_8320D088(ctx, base);
loc_83284B90:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83284d0c
	if (cr6.lt) goto loc_83284D0C;
	// lbz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83284bb4
	if (!cr6.eq) goto loc_83284BB4;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83284BB4:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x832133d0
	ctx.lr = 0x83284BE0;
	sub_832133D0(ctx, base);
	// lbz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bne cr6,0x83284bf8
	if (!cr6.eq) goto loc_83284BF8;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
loc_83284BF8:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83222be8
	ctx.lr = 0x83284C08;
	sub_83222BE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83255980
	ctx.lr = 0x83284C10;
	sub_83255980(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x83284c3c
	if (!cr6.eq) goto loc_83284C3C;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83254f98
	ctx.lr = 0x83284C38;
	sub_83254F98(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_83284C3C:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// bne cr6,0x83284c50
	if (!cr6.eq) goto loc_83284C50;
	// stb r26,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r26.u8);
loc_83284C50:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83284c78
	if (!cr6.eq) goto loc_83284C78;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r5,r11,12460
	ctx.r5.s64 = ctx.r11.s64 + 12460;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d428
	ctx.lr = 0x83284C74;
	sub_8320D428(ctx, base);
	// b 0x83284cf8
	goto loc_83284CF8;
loc_83284C78:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r11,23228
	ctx.r7.s64 = ctx.r11.s64 + 23228;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324f9c0
	ctx.lr = 0x83284C98;
	sub_8324F9C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83284cb4
	if (!cr6.eq) goto loc_83284CB4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x83284CB0;
	sub_83213150(ctx, base);
	// b 0x83284cf8
	goto loc_83284CF8;
loc_83284CB4:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lhz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83284ce8
	if (cr6.eq) goto loc_83284CE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83284CE8;
	sub_83222030(ctx, base);
loc_83284CE8:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_83284CF8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x83284d0c
	if (cr6.eq) goto loc_83284D0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209d68
	ctx.lr = 0x83284D0C;
	sub_83209D68(ctx, base);
loc_83284D0C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83284D18"))) PPC_WEAK_FUNC(sub_83284D18);
PPC_FUNC_IMPL(__imp__sub_83284D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83284D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83284d4c
	if (cr6.eq) goto loc_83284D4C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x83284D44;
	sub_8320D088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83284D4C:
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83284d64
	if (!cr6.eq) goto loc_83284D64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_83284D64:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832133d0
	ctx.lr = 0x83284D8C;
	sub_832133D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83284dbc
	if (!cr6.eq) goto loc_83284DBC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,12460
	ctx.r5.s64 = ctx.r11.s64 + 12460;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d428
	ctx.lr = 0x83284DB4;
	sub_8320D428(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83284DBC:
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83284dd0
	if (!cr6.eq) goto loc_83284DD0;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
loc_83284DD0:
	// bl 0x83222578
	ctx.lr = 0x83284DD4;
	sub_83222578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,77
	ctx.r4.s64 = 77;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322bf60
	ctx.lr = 0x83284DE4;
	sub_8322BF60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83284DEC"))) PPC_WEAK_FUNC(sub_83284DEC);
PPC_FUNC_IMPL(__imp__sub_83284DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284DF0"))) PPC_WEAK_FUNC(sub_83284DF0);
PPC_FUNC_IMPL(__imp__sub_83284DF0) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83284e28
	if (!cr6.eq) goto loc_83284E28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83284e80
	goto loc_83284E80;
loc_83284E28:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,75
	ctx.r4.s64 = 75;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322c870
	ctx.lr = 0x83284E38;
	sub_8322C870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83284e70
	if (!cr6.eq) goto loc_83284E70;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,86(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// adde r11,r7,r9
	temp.u8 = (ctx.r7.u32 + ctx.r9.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83217170
	ctx.lr = 0x83284E6C;
	sub_83217170(ctx, base);
	// b 0x83284e7c
	goto loc_83284E7C;
loc_83284E70:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_83284E7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83284E80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83284E98"))) PPC_WEAK_FUNC(sub_83284E98);
PPC_FUNC_IMPL(__imp__sub_83284E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83284EA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83284ecc
	if (cr6.eq) goto loc_83284ECC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x83284EC4;
	sub_8320D088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83284ECC:
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83284ee4
	if (!cr6.eq) goto loc_83284EE4;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_83284EE4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832133d0
	ctx.lr = 0x83284F10;
	sub_832133D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83284f38
	if (!cr6.eq) goto loc_83284F38;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,12932
	ctx.r5.s64 = ctx.r11.s64 + 12932;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d428
	ctx.lr = 0x83284F38;
	sub_8320D428(ctx, base);
loc_83284F38:
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83284f4c
	if (cr6.eq) goto loc_83284F4C;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x83284f50
	goto loc_83284F50;
loc_83284F4C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
loc_83284F50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83284F58;
	sub_83222578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83284f90
	if (cr6.eq) goto loc_83284F90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214078
	ctx.lr = 0x83284F6C;
	sub_83214078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83284f90
	if (!cr6.eq) goto loc_83284F90;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-29924
	ctx.r5.s64 = ctx.r11.s64 + -29924;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d548
	ctx.lr = 0x83284F90;
	sub_8320D548(ctx, base);
loc_83284F90:
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83284fa4
	if (!cr6.eq) goto loc_83284FA4;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
loc_83284FA4:
	// bl 0x83222578
	ctx.lr = 0x83284FA8;
	sub_83222578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83284fd4
	if (cr6.eq) goto loc_83284FD4;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r4,75
	ctx.r4.s64 = 75;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// oris r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 8388608;
	// stw r10,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r10.u32);
	// bl 0x8322bf60
	ctx.lr = 0x83284FCC;
	sub_8322BF60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83284df0
	ctx.lr = 0x83284FD4;
	sub_83284DF0(ctx, base);
loc_83284FD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83284FDC"))) PPC_WEAK_FUNC(sub_83284FDC);
PPC_FUNC_IMPL(__imp__sub_83284FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83284FE0"))) PPC_WEAK_FUNC(sub_83284FE0);
PPC_FUNC_IMPL(__imp__sub_83284FE0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2101
	cr6.compare<uint32_t>(ctx.r11.u32, 2101, xer);
	// bgt cr6,0x83285268
	if (cr6.gt) goto loc_83285268;
	// beq cr6,0x832852dc
	if (cr6.eq) goto loc_832852DC;
	// cmplwi cr6,r11,2070
	cr6.compare<uint32_t>(ctx.r11.u32, 2070, xer);
	// bgt cr6,0x83285130
	if (cr6.gt) goto loc_83285130;
	// cmplwi cr6,r11,2069
	cr6.compare<uint32_t>(ctx.r11.u32, 2069, xer);
	// bge cr6,0x832852bc
	if (!cr6.lt) goto loc_832852BC;
	// cmplwi cr6,r11,1090
	cr6.compare<uint32_t>(ctx.r11.u32, 1090, xer);
	// bgt cr6,0x832850d0
	if (cr6.gt) goto loc_832850D0;
	// beq cr6,0x832850a8
	if (cr6.eq) goto loc_832850A8;
	// cmplwi cr6,r11,478
	cr6.compare<uint32_t>(ctx.r11.u32, 478, xer);
	// beq cr6,0x83285054
	if (cr6.eq) goto loc_83285054;
	// cmplwi cr6,r11,1087
	cr6.compare<uint32_t>(ctx.r11.u32, 1087, xer);
	// ble cr6,0x8328541c
	if (!cr6.gt) goto loc_8328541C;
	// cmplwi cr6,r11,1089
	cr6.compare<uint32_t>(ctx.r11.u32, 1089, xer);
	// bgt cr6,0x8328541c
	if (cr6.gt) goto loc_8328541C;
	// bl 0x83283ce0
	ctx.lr = 0x8328503C;
	sub_83283CE0(ctx, base);
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
loc_83285054:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83285080
	if (cr6.eq) goto loc_83285080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83285080;
	sub_83222030(ctx, base);
loc_83285080:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
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
loc_832850A8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832840c8
	ctx.lr = 0x832850B8;
	sub_832840C8(ctx, base);
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
loc_832850D0:
	// cmplwi cr6,r11,1091
	cr6.compare<uint32_t>(ctx.r11.u32, 1091, xer);
	// beq cr6,0x83285108
	if (cr6.eq) goto loc_83285108;
	// cmplwi cr6,r11,2066
	cr6.compare<uint32_t>(ctx.r11.u32, 2066, xer);
	// ble cr6,0x8328541c
	if (!cr6.gt) goto loc_8328541C;
	// cmplwi cr6,r11,2068
	cr6.compare<uint32_t>(ctx.r11.u32, 2068, xer);
	// bgt cr6,0x8328541c
	if (cr6.gt) goto loc_8328541C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83283e70
	ctx.lr = 0x832850F0;
	sub_83283E70(ctx, base);
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
loc_83285108:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832840c8
	ctx.lr = 0x83285118;
	sub_832840C8(ctx, base);
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
loc_83285130:
	// cmplwi cr6,r11,2089
	cr6.compare<uint32_t>(ctx.r11.u32, 2089, xer);
	// bgt cr6,0x83285218
	if (cr6.gt) goto loc_83285218;
	// beq cr6,0x832851d4
	if (cr6.eq) goto loc_832851D4;
	// cmplwi cr6,r11,2074
	cr6.compare<uint32_t>(ctx.r11.u32, 2074, xer);
	// beq cr6,0x83285190
	if (cr6.eq) goto loc_83285190;
	// cmplwi cr6,r11,2075
	cr6.compare<uint32_t>(ctx.r11.u32, 2075, xer);
	// bne cr6,0x8328541c
	if (!cr6.eq) goto loc_8328541C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83285168
	if (cr6.eq) goto loc_83285168;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x83285168;
	sub_8320D088(ctx, base);
loc_83285168:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,23196
	ctx.r3.s64 = ctx.r11.s64 + 23196;
	// bl 0x8328edb0
	ctx.lr = 0x83285178;
	sub_8328EDB0(ctx, base);
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
loc_83285190:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832851ac
	if (cr6.eq) goto loc_832851AC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x832851AC;
	sub_8320D088(ctx, base);
loc_832851AC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,23196
	ctx.r3.s64 = ctx.r11.s64 + 23196;
	// bl 0x8328ed30
	ctx.lr = 0x832851BC;
	sub_8328ED30(ctx, base);
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
loc_832851D4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832851f0
	if (cr6.eq) goto loc_832851F0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x832851F0;
	sub_8320D088(ctx, base);
loc_832851F0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,23196
	ctx.r3.s64 = ctx.r11.s64 + 23196;
	// bl 0x8328ee08
	ctx.lr = 0x83285200;
	sub_8328EE08(ctx, base);
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
loc_83285218:
	// cmplwi cr6,r11,2098
	cr6.compare<uint32_t>(ctx.r11.u32, 2098, xer);
	// beq cr6,0x83285248
	if (cr6.eq) goto loc_83285248;
	// cmplwi cr6,r11,2099
	cr6.compare<uint32_t>(ctx.r11.u32, 2099, xer);
	// bne cr6,0x8328541c
	if (!cr6.eq) goto loc_8328541C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284440
	ctx.lr = 0x83285230;
	sub_83284440(ctx, base);
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
loc_83285248:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284e98
	ctx.lr = 0x83285250;
	sub_83284E98(ctx, base);
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
loc_83285268:
	// addi r11,r11,-2102
	ctx.r11.s64 = ctx.r11.s64 + -2102;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8328541c
	if (cr6.gt) goto loc_8328541C;
	// lis r12,-31960
	ctx.r12.s64 = -2094530560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21132
	ctx.r12.s64 = ctx.r12.s64 + 21132;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_832852FC;
	case 1:
		goto loc_832852BC;
	case 2:
		goto loc_832852BC;
	case 3:
		goto loc_8328531C;
	case 4:
		goto loc_83285344;
	case 5:
		goto loc_8328536C;
	case 6:
		goto loc_83285394;
	case 7:
		goto loc_8328541C;
	case 8:
		goto loc_832852DC;
	case 9:
		goto loc_832853BC;
	case 10:
		goto loc_832853DC;
	case 11:
		goto loc_832853FC;
	default:
		return;
	}
	// lwz r25,21244(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21244);
	// lwz r25,21180(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21180);
	// lwz r25,21180(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21180);
	// lwz r25,21276(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21276);
	// lwz r25,21316(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21316);
	// lwz r25,21356(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21356);
	// lwz r25,21396(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21396);
	// lwz r25,21532(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21532);
	// lwz r25,21212(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21212);
	// lwz r25,21436(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21436);
	// lwz r25,21468(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21468);
	// lwz r25,21500(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21500);
loc_832852BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832842a8
	ctx.lr = 0x832852C4;
	sub_832842A8(ctx, base);
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
loc_832852DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832849c8
	ctx.lr = 0x832852E4;
	sub_832849C8(ctx, base);
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
loc_832852FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284d18
	ctx.lr = 0x83285304;
	sub_83284D18(ctx, base);
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
loc_8328531C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832840c8
	ctx.lr = 0x8328532C;
	sub_832840C8(ctx, base);
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
loc_83285344:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832840c8
	ctx.lr = 0x83285354;
	sub_832840C8(ctx, base);
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
loc_8328536C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832840c8
	ctx.lr = 0x8328537C;
	sub_832840C8(ctx, base);
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
loc_83285394:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832840c8
	ctx.lr = 0x832853A4;
	sub_832840C8(ctx, base);
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
loc_832853BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284580
	ctx.lr = 0x832853C4;
	sub_83284580(ctx, base);
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
loc_832853DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284690
	ctx.lr = 0x832853E4;
	sub_83284690(ctx, base);
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
loc_832853FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83284b60
	ctx.lr = 0x83285404;
	sub_83284B60(ctx, base);
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
loc_8328541C:
	// li r3,-4
	ctx.r3.s64 = -4;
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

__attribute__((alias("__imp__sub_83285434"))) PPC_WEAK_FUNC(sub_83285434);
PPC_FUNC_IMPL(__imp__sub_83285434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285438"))) PPC_WEAK_FUNC(sub_83285438);
PPC_FUNC_IMPL(__imp__sub_83285438) {
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
	// bl 0x83235198
	ctx.lr = 0x8328544C;
	sub_83235198(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,182
	ctx.r10.s64 = 182;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322c208
	ctx.lr = 0x8328546C;
	sub_8322C208(ctx, base);
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

__attribute__((alias("__imp__sub_83285484"))) PPC_WEAK_FUNC(sub_83285484);
PPC_FUNC_IMPL(__imp__sub_83285484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285488"))) PPC_WEAK_FUNC(sub_83285488);
PPC_FUNC_IMPL(__imp__sub_83285488) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83285500
	if (cr6.lt) goto loc_83285500;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83285500
	if (cr6.eq) goto loc_83285500;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1810
	ctx.r10.s64 = 1810;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// bl 0x8322dfb0
	ctx.lr = 0x83285500;
	sub_8322DFB0(ctx, base);
loc_83285500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285510"))) PPC_WEAK_FUNC(sub_83285510);
PPC_FUNC_IMPL(__imp__sub_83285510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83285518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83285538
	if (!cr6.lt) goto loc_83285538;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83285538
	if (!cr6.gt) goto loc_83285538;
	// bl 0x8320e738
	ctx.lr = 0x83285538;
	sub_8320E738(ctx, base);
loc_83285538:
	// bl 0x83235198
	ctx.lr = 0x8328553C;
	sub_83235198(ctx, base);
	// li r11,182
	ctx.r11.s64 = 182;
	// li r28,48
	ctx.r28.s64 = 48;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r28,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r28.u16);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322c208
	ctx.lr = 0x8328555C;
	sub_8322C208(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83285588
	if (cr6.eq) goto loc_83285588;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83285588;
	sub_83222030(ctx, base);
loc_83285588:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285488
	ctx.lr = 0x832855A4;
	sub_83285488(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832855AC"))) PPC_WEAK_FUNC(sub_832855AC);
PPC_FUNC_IMPL(__imp__sub_832855AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832855B0"))) PPC_WEAK_FUNC(sub_832855B0);
PPC_FUNC_IMPL(__imp__sub_832855B0) {
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
	// bl 0x83235198
	ctx.lr = 0x832855C4;
	sub_83235198(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,182
	ctx.r10.s64 = 182;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322c208
	ctx.lr = 0x832855E4;
	sub_8322C208(ctx, base);
	// li r9,72
	ctx.r9.s64 = 72;
	// li r8,206
	ctx.r8.s64 = 206;
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
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

__attribute__((alias("__imp__sub_8328560C"))) PPC_WEAK_FUNC(sub_8328560C);
PPC_FUNC_IMPL(__imp__sub_8328560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285610"))) PPC_WEAK_FUNC(sub_83285610);
PPC_FUNC_IMPL(__imp__sub_83285610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83285618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83285638
	if (!cr6.lt) goto loc_83285638;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83285638
	if (!cr6.gt) goto loc_83285638;
	// bl 0x8320e738
	ctx.lr = 0x83285638;
	sub_8320E738(ctx, base);
loc_83285638:
	// bl 0x83235198
	ctx.lr = 0x8328563C;
	sub_83235198(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,182
	ctx.r10.s64 = 182;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322c208
	ctx.lr = 0x8328565C;
	sub_8322C208(ctx, base);
	// li r28,72
	ctx.r28.s64 = 72;
	// li r9,206
	ctx.r9.s64 = 206;
	// sth r28,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r28.u16);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// ori r7,r8,8400
	ctx.r7.u64 = ctx.r8.u64 | 8400;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sraw r4,r7,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r4.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83285698
	if (cr6.eq) goto loc_83285698;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83285698;
	sub_83222030(ctx, base);
loc_83285698:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285488
	ctx.lr = 0x832856B4;
	sub_83285488(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832856BC"))) PPC_WEAK_FUNC(sub_832856BC);
PPC_FUNC_IMPL(__imp__sub_832856BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832856C0"))) PPC_WEAK_FUNC(sub_832856C0);
PPC_FUNC_IMPL(__imp__sub_832856C0) {
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
	// bl 0x83235198
	ctx.lr = 0x832856D4;
	sub_83235198(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,182
	ctx.r10.s64 = 182;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322c208
	ctx.lr = 0x832856F4;
	sub_8322C208(ctx, base);
	// li r9,74
	ctx.r9.s64 = 74;
	// li r8,208
	ctx.r8.s64 = 208;
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
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

__attribute__((alias("__imp__sub_8328571C"))) PPC_WEAK_FUNC(sub_8328571C);
PPC_FUNC_IMPL(__imp__sub_8328571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285720"))) PPC_WEAK_FUNC(sub_83285720);
PPC_FUNC_IMPL(__imp__sub_83285720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83285728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83285748
	if (!cr6.lt) goto loc_83285748;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83285748
	if (!cr6.gt) goto loc_83285748;
	// bl 0x8320e738
	ctx.lr = 0x83285748;
	sub_8320E738(ctx, base);
loc_83285748:
	// bl 0x83235198
	ctx.lr = 0x8328574C;
	sub_83235198(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,182
	ctx.r10.s64 = 182;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322c208
	ctx.lr = 0x8328576C;
	sub_8322C208(ctx, base);
	// li r28,74
	ctx.r28.s64 = 74;
	// li r9,208
	ctx.r9.s64 = 208;
	// sth r28,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r28.u16);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// ori r7,r8,8400
	ctx.r7.u64 = ctx.r8.u64 | 8400;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sraw r4,r7,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r4.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832857a8
	if (cr6.eq) goto loc_832857A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x832857A8;
	sub_83222030(ctx, base);
loc_832857A8:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285488
	ctx.lr = 0x832857C4;
	sub_83285488(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832857CC"))) PPC_WEAK_FUNC(sub_832857CC);
PPC_FUNC_IMPL(__imp__sub_832857CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832857D0"))) PPC_WEAK_FUNC(sub_832857D0);
PPC_FUNC_IMPL(__imp__sub_832857D0) {
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
	// bl 0x83235198
	ctx.lr = 0x832857E4;
	sub_83235198(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,182
	ctx.r10.s64 = 182;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322c208
	ctx.lr = 0x83285804;
	sub_8322C208(ctx, base);
	// li r9,80
	ctx.r9.s64 = 80;
	// li r8,214
	ctx.r8.s64 = 214;
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
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

__attribute__((alias("__imp__sub_8328582C"))) PPC_WEAK_FUNC(sub_8328582C);
PPC_FUNC_IMPL(__imp__sub_8328582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285830"))) PPC_WEAK_FUNC(sub_83285830);
PPC_FUNC_IMPL(__imp__sub_83285830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83285838;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83285858
	if (!cr6.lt) goto loc_83285858;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83285858
	if (!cr6.gt) goto loc_83285858;
	// bl 0x8320e738
	ctx.lr = 0x83285858;
	sub_8320E738(ctx, base);
loc_83285858:
	// bl 0x83235198
	ctx.lr = 0x8328585C;
	sub_83235198(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,182
	ctx.r10.s64 = 182;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322c208
	ctx.lr = 0x8328587C;
	sub_8322C208(ctx, base);
	// li r28,80
	ctx.r28.s64 = 80;
	// li r9,214
	ctx.r9.s64 = 214;
	// sth r28,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r28.u16);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// ori r7,r8,8400
	ctx.r7.u64 = ctx.r8.u64 | 8400;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sraw r4,r7,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r4.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832858b8
	if (cr6.eq) goto loc_832858B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x832858B8;
	sub_83222030(ctx, base);
loc_832858B8:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285488
	ctx.lr = 0x832858D4;
	sub_83285488(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832858DC"))) PPC_WEAK_FUNC(sub_832858DC);
PPC_FUNC_IMPL(__imp__sub_832858DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832858E0"))) PPC_WEAK_FUNC(sub_832858E0);
PPC_FUNC_IMPL(__imp__sub_832858E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832858E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83285908
	if (!cr6.lt) goto loc_83285908;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83285908
	if (!cr6.gt) goto loc_83285908;
	// bl 0x8320e738
	ctx.lr = 0x83285908;
	sub_8320E738(ctx, base);
loc_83285908:
	// bl 0x83235198
	ctx.lr = 0x8328590C;
	sub_83235198(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,182
	ctx.r10.s64 = 182;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322c208
	ctx.lr = 0x8328592C;
	sub_8322C208(ctx, base);
	// li r28,82
	ctx.r28.s64 = 82;
	// li r9,216
	ctx.r9.s64 = 216;
	// sth r28,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r28.u16);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// ori r7,r8,8400
	ctx.r7.u64 = ctx.r8.u64 | 8400;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sraw r4,r7,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r4.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83285968
	if (cr6.eq) goto loc_83285968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83285968;
	sub_83222030(ctx, base);
loc_83285968:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285488
	ctx.lr = 0x83285984;
	sub_83285488(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328598C"))) PPC_WEAK_FUNC(sub_8328598C);
PPC_FUNC_IMPL(__imp__sub_8328598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285990"))) PPC_WEAK_FUNC(sub_83285990);
PPC_FUNC_IMPL(__imp__sub_83285990) {
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
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,803
	ctx.r30.s64 = 803;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,208
	cr6.compare<int32_t>(ctx.r11.s32, 208, xer);
	// beq cr6,0x832859dc
	if (cr6.eq) goto loc_832859DC;
	// cmpwi cr6,r11,214
	cr6.compare<int32_t>(ctx.r11.s32, 214, xer);
	// beq cr6,0x832859d4
	if (cr6.eq) goto loc_832859D4;
	// cmpwi cr6,r11,216
	cr6.compare<int32_t>(ctx.r11.s32, 216, xer);
	// bne cr6,0x832859e0
	if (!cr6.eq) goto loc_832859E0;
	// li r30,904
	ctx.r30.s64 = 904;
	// b 0x832859e0
	goto loc_832859E0;
loc_832859D4:
	// li r30,900
	ctx.r30.s64 = 900;
	// b 0x832859e0
	goto loc_832859E0;
loc_832859DC:
	// li r30,891
	ctx.r30.s64 = 891;
loc_832859E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ab20
	ctx.lr = 0x832859E8;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x83285a04
	if (!cr6.eq) goto loc_83285A04;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x83223c38
	ctx.lr = 0x83285A00;
	sub_83223C38(ctx, base);
	// b 0x83285a10
	goto loc_83285A10;
loc_83285A04:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x83285A10;
	sub_832240B8(ctx, base);
loc_83285A10:
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

__attribute__((alias("__imp__sub_83285A2C"))) PPC_WEAK_FUNC(sub_83285A2C);
PPC_FUNC_IMPL(__imp__sub_83285A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285A30"))) PPC_WEAK_FUNC(sub_83285A30);
PPC_FUNC_IMPL(__imp__sub_83285A30) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1809
	cr6.compare<uint32_t>(ctx.r11.u32, 1809, xer);
	// beq cr6,0x83285b14
	if (cr6.eq) goto loc_83285B14;
	// cmplwi cr6,r11,1810
	cr6.compare<uint32_t>(ctx.r11.u32, 1810, xer);
	// beq cr6,0x83285ae0
	if (cr6.eq) goto loc_83285AE0;
	// cmplwi cr6,r11,1939
	cr6.compare<uint32_t>(ctx.r11.u32, 1939, xer);
	// beq cr6,0x83285a78
	if (cr6.eq) goto loc_83285A78;
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_83285A78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ab20
	ctx.lr = 0x83285A80;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83285acc
	if (!cr6.eq) goto loc_83285ACC;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83285ab8
	if (cr6.eq) goto loc_83285AB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83285AB8;
	sub_83222030(ctx, base);
loc_83285AB8:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x83285b1c
	goto loc_83285B1C;
loc_83285ACC:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x83285ADC;
	sub_832240B8(ctx, base);
	// b 0x83285b1c
	goto loc_83285B1C;
loc_83285AE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ab20
	ctx.lr = 0x83285AE8;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x83285b04
	if (!cr6.eq) goto loc_83285B04;
	// li r4,595
	ctx.r4.s64 = 595;
	// bl 0x83223c38
	ctx.lr = 0x83285B00;
	sub_83223C38(ctx, base);
	// b 0x83285b1c
	goto loc_83285B1C;
loc_83285B04:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x83285B10;
	sub_832240B8(ctx, base);
	// b 0x83285b1c
	goto loc_83285B1C;
loc_83285B14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83285990
	ctx.lr = 0x83285B1C;
	sub_83285990(ctx, base);
loc_83285B1C:
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

__attribute__((alias("__imp__sub_83285B34"))) PPC_WEAK_FUNC(sub_83285B34);
PPC_FUNC_IMPL(__imp__sub_83285B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285B38"))) PPC_WEAK_FUNC(sub_83285B38);
PPC_FUNC_IMPL(__imp__sub_83285B38) {
	PPC_FUNC_PROLOGUE();
	// b 0x83285a30
	sub_83285A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285B3C"))) PPC_WEAK_FUNC(sub_83285B3C);
PPC_FUNC_IMPL(__imp__sub_83285B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285B40"))) PPC_WEAK_FUNC(sub_83285B40);
PPC_FUNC_IMPL(__imp__sub_83285B40) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1809
	cr6.compare<uint32_t>(ctx.r11.u32, 1809, xer);
	// blt cr6,0x83285b84
	if (cr6.lt) goto loc_83285B84;
	// cmplwi cr6,r11,1810
	cr6.compare<uint32_t>(ctx.r11.u32, 1810, xer);
	// bgt cr6,0x83285b84
	if (cr6.gt) goto loc_83285B84;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8322dfb0
	ctx.lr = 0x83285B70;
	sub_8322DFB0(ctx, base);
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
loc_83285B84:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285B98"))) PPC_WEAK_FUNC(sub_83285B98);
PPC_FUNC_IMPL(__imp__sub_83285B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83285BA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r11,1810
	ctx.r11.s64 = 1810;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x8322ab20
	ctx.lr = 0x83285BDC;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bne cr6,0x83285bf8
	if (!cr6.eq) goto loc_83285BF8;
	// li r4,595
	ctx.r4.s64 = 595;
	// bl 0x83223c38
	ctx.lr = 0x83285BF4;
	sub_83223C38(ctx, base);
	// b 0x83285c04
	goto loc_83285C04;
loc_83285BF8:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x83285C04;
	sub_832240B8(ctx, base);
loc_83285C04:
	// li r11,1809
	ctx.r11.s64 = 1809;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r11.u16);
	// stb r31,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// bl 0x83285990
	ctx.lr = 0x83285C3C;
	sub_83285990(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222be8
	ctx.lr = 0x83285C50;
	sub_83222BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222be8
	ctx.lr = 0x83285C68;
	sub_83222BE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255980
	ctx.lr = 0x83285C74;
	sub_83255980(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83255980
	ctx.lr = 0x83285C80;
	sub_83255980(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83285c9c
	if (!cr6.eq) goto loc_83285C9C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832240b8
	ctx.lr = 0x83285C98;
	sub_832240B8(ctx, base);
	// b 0x83285ce0
	goto loc_83285CE0;
loc_83285C9C:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r29,r11,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83285CB0;
	sub_83209AA8(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r10,23552
	ctx.r5.s64 = ctx.r10.s64 + 23552;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83297a40
	ctx.lr = 0x83285CCC;
	sub_83297A40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83255a88
	ctx.lr = 0x83285CD4;
	sub_83255A88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83223bd0
	ctx.lr = 0x83285CE0;
	sub_83223BD0(ctx, base);
loc_83285CE0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x83285CE8;
	sub_83222030(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83285d04
	if (cr6.eq) goto loc_83285D04;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83285d04
	if (cr6.eq) goto loc_83285D04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x83285D04;
	sub_83209D68(ctx, base);
loc_83285D04:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x83285d20
	if (cr6.eq) goto loc_83285D20;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83285d20
	if (cr6.eq) goto loc_83285D20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83209d68
	ctx.lr = 0x83285D20;
	sub_83209D68(ctx, base);
loc_83285D20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285D28"))) PPC_WEAK_FUNC(sub_83285D28);
PPC_FUNC_IMPL(__imp__sub_83285D28) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83285d58
	if (cr6.eq) goto loc_83285D58;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83285d84
	goto loc_83285D84;
loc_83285D58:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83285d74
	if (cr6.eq) goto loc_83285D74;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,23560
	ctx.r3.s64 = ctx.r11.s64 + 23560;
	// bl 0x8320d088
	ctx.lr = 0x83285D74;
	sub_8320D088(ctx, base);
loc_83285D74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83285b98
	ctx.lr = 0x83285D80;
	sub_83285B98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83285D84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285D9C"))) PPC_WEAK_FUNC(sub_83285D9C);
PPC_FUNC_IMPL(__imp__sub_83285D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285DA0"))) PPC_WEAK_FUNC(sub_83285DA0);
PPC_FUNC_IMPL(__imp__sub_83285DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1065
	cr6.compare<int32_t>(ctx.r3.s32, -1065, xer);
	// bgt cr6,0x83285dd8
	if (cr6.gt) goto loc_83285DD8;
	// beq cr6,0x83285e04
	if (cr6.eq) goto loc_83285E04;
	// cmpwi cr6,r3,-2090
	cr6.compare<int32_t>(ctx.r3.s32, -2090, xer);
	// blt cr6,0x83285de8
	if (cr6.lt) goto loc_83285DE8;
	// cmpwi cr6,r3,-2088
	cr6.compare<int32_t>(ctx.r3.s32, -2088, xer);
	// ble cr6,0x83285dd0
	if (!cr6.gt) goto loc_83285DD0;
	// cmpwi cr6,r3,-2030
	cr6.compare<int32_t>(ctx.r3.s32, -2030, xer);
	// bne cr6,0x83285de8
	if (!cr6.eq) goto loc_83285DE8;
	// li r3,228
	ctx.r3.s64 = 228;
	// blr 
	return;
loc_83285DD0:
	// li r3,206
	ctx.r3.s64 = 206;
	// blr 
	return;
loc_83285DD8:
	// cmpwi cr6,r5,-1014
	cr6.compare<int32_t>(ctx.r5.s32, -1014, xer);
	// beq cr6,0x83285e04
	if (cr6.eq) goto loc_83285E04;
	// cmpwi cr6,r5,-1009
	cr6.compare<int32_t>(ctx.r5.s32, -1009, xer);
	// beq cr6,0x83285dfc
	if (cr6.eq) goto loc_83285DFC;
loc_83285DE8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,23580
	ctx.r4.s64 = ctx.r11.s64 + 23580;
	// addi r3,r10,23568
	ctx.r3.s64 = ctx.r10.s64 + 23568;
	// b 0x83208568
	sub_83208568(ctx, base);
	return;
loc_83285DFC:
	// li r3,214
	ctx.r3.s64 = 214;
	// blr 
	return;
loc_83285E04:
	// li r3,208
	ctx.r3.s64 = 208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83285E0C"))) PPC_WEAK_FUNC(sub_83285E0C);
PPC_FUNC_IMPL(__imp__sub_83285E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83285E10"))) PPC_WEAK_FUNC(sub_83285E10);
PPC_FUNC_IMPL(__imp__sub_83285E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83285E18;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1065
	cr6.compare<int32_t>(ctx.r3.s32, -1065, xer);
	// bgt cr6,0x83285e58
	if (cr6.gt) goto loc_83285E58;
	// beq cr6,0x83285e88
	if (cr6.eq) goto loc_83285E88;
	// cmpwi cr6,r3,-2090
	cr6.compare<int32_t>(ctx.r3.s32, -2090, xer);
	// blt cr6,0x83285e68
	if (cr6.lt) goto loc_83285E68;
	// cmpwi cr6,r3,-2088
	cr6.compare<int32_t>(ctx.r3.s32, -2088, xer);
	// ble cr6,0x83285e50
	if (!cr6.gt) goto loc_83285E50;
	// cmpwi cr6,r3,-2030
	cr6.compare<int32_t>(ctx.r3.s32, -2030, xer);
	// bne cr6,0x83285e68
	if (!cr6.eq) goto loc_83285E68;
	// li r11,228
	ctx.r11.s64 = 228;
	// b 0x83285e8c
	goto loc_83285E8C;
loc_83285E50:
	// li r11,206
	ctx.r11.s64 = 206;
	// b 0x83285e8c
	goto loc_83285E8C;
loc_83285E58:
	// cmpwi cr6,r27,-1014
	cr6.compare<int32_t>(ctx.r27.s32, -1014, xer);
	// beq cr6,0x83285e88
	if (cr6.eq) goto loc_83285E88;
	// cmpwi cr6,r27,-1009
	cr6.compare<int32_t>(ctx.r27.s32, -1009, xer);
	// beq cr6,0x83285e80
	if (cr6.eq) goto loc_83285E80;
loc_83285E68:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,23580
	ctx.r4.s64 = ctx.r11.s64 + 23580;
	// addi r3,r10,23568
	ctx.r3.s64 = ctx.r10.s64 + 23568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83208568
	ctx.lr = 0x83285E80;
	sub_83208568(ctx, base);
loc_83285E80:
	// li r11,214
	ctx.r11.s64 = 214;
	// b 0x83285e8c
	goto loc_83285E8C;
loc_83285E88:
	// li r11,208
	ctx.r11.s64 = 208;
loc_83285E8C:
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r6,214
	cr6.compare<int32_t>(ctx.r6.s32, 214, xer);
	// bgt cr6,0x83285ed0
	if (cr6.gt) goto loc_83285ED0;
	// beq cr6,0x83285ec4
	if (cr6.eq) goto loc_83285EC4;
	// cmpwi cr6,r6,206
	cr6.compare<int32_t>(ctx.r6.s32, 206, xer);
	// beq cr6,0x83285eb8
	if (cr6.eq) goto loc_83285EB8;
	// cmpwi cr6,r6,208
	cr6.compare<int32_t>(ctx.r6.s32, 208, xer);
	// bne cr6,0x83285ed8
	if (!cr6.eq) goto loc_83285ED8;
	// bl 0x832856c0
	ctx.lr = 0x83285EB0;
	sub_832856C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83285f28
	goto loc_83285F28;
loc_83285EB8:
	// bl 0x832855b0
	ctx.lr = 0x83285EBC;
	sub_832855B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83285f28
	goto loc_83285F28;
loc_83285EC4:
	// bl 0x832857d0
	ctx.lr = 0x83285EC8;
	sub_832857D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83285f28
	goto loc_83285F28;
loc_83285ED0:
	// cmpwi cr6,r6,228
	cr6.compare<int32_t>(ctx.r6.s32, 228, xer);
	// beq cr6,0x83285ef0
	if (cr6.eq) goto loc_83285EF0;
loc_83285ED8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,23624
	ctx.r4.s64 = ctx.r11.s64 + 23624;
	// addi r3,r10,23568
	ctx.r3.s64 = ctx.r10.s64 + 23568;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83208568
	ctx.lr = 0x83285EF0;
	sub_83208568(ctx, base);
loc_83285EF0:
	// bl 0x83235198
	ctx.lr = 0x83285EF4;
	sub_83235198(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,182
	ctx.r10.s64 = 182;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322c208
	ctx.lr = 0x83285F14;
	sub_8322C208(ctx, base);
	// li r9,94
	ctx.r9.s64 = 94;
	// li r8,228
	ctx.r8.s64 = 228;
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
loc_83285F28:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lhz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83285f54
	if (cr6.eq) goto loc_83285F54;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222030
	ctx.lr = 0x83285F54;
	sub_83222030(ctx, base);
loc_83285F54:
	// li r31,0
	ctx.r31.s64 = 0;
	// sth r29,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r29.u16);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// li r10,1939
	ctx.r10.s64 = 1939;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// neg r5,r27
	ctx.r5.s64 = -ctx.r27.s64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// bl 0x8322bef0
	ctx.lr = 0x83285F8C;
	sub_8322BEF0(ctx, base);
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// addi r8,r9,24688
	ctx.r8.s64 = ctx.r9.s64 + 24688;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83285fcc
	if (cr6.eq) goto loc_83285FCC;
	// lwz r5,392(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83285fcc
	if (cr6.eq) goto loc_83285FCC;
	// li r11,1810
	ctx.r11.s64 = 1810;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// bl 0x8322c0e8
	ctx.lr = 0x83285FCC;
	sub_8322C0E8(ctx, base);
loc_83285FCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83285FD8"))) PPC_WEAK_FUNC(sub_83285FD8);
PPC_FUNC_IMPL(__imp__sub_83285FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83285FE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x83286018
	if (!cr6.eq) goto loc_83286018;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83222be8
	ctx.lr = 0x83286004;
	sub_83222BE8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x832860c8
	goto loc_832860C8;
loc_83286018:
	// li r31,803
	ctx.r31.s64 = 803;
	// bl 0x83285da0
	ctx.lr = 0x83286020;
	sub_83285DA0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,208
	cr6.compare<int32_t>(ctx.r11.s32, 208, xer);
	// beq cr6,0x8328604c
	if (cr6.eq) goto loc_8328604C;
	// cmpwi cr6,r11,214
	cr6.compare<int32_t>(ctx.r11.s32, 214, xer);
	// beq cr6,0x83286044
	if (cr6.eq) goto loc_83286044;
	// cmpwi cr6,r11,216
	cr6.compare<int32_t>(ctx.r11.s32, 216, xer);
	// bne cr6,0x83286050
	if (!cr6.eq) goto loc_83286050;
	// li r31,904
	ctx.r31.s64 = 904;
	// b 0x83286050
	goto loc_83286050;
loc_83286044:
	// li r31,900
	ctx.r31.s64 = 900;
	// b 0x83286050
	goto loc_83286050;
loc_8328604C:
	// li r31,891
	ctx.r31.s64 = 891;
loc_83286050:
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x832277f8
	ctx.lr = 0x83286058;
	sub_832277F8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,24688
	ctx.r28.s64 = ctx.r11.s64 + 24688;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83286078
	if (cr6.eq) goto loc_83286078;
	// lwz r30,392(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
loc_83286078:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255980
	ctx.lr = 0x83286080;
	sub_83255980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83255980
	ctx.lr = 0x8328608C;
	sub_83255980(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r27,r11,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83209aa8
	ctx.lr = 0x832860A0;
	sub_83209AA8(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r10,23552
	ctx.r5.s64 = ctx.r10.s64 + 23552;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83297a40
	ctx.lr = 0x832860BC;
	sub_83297A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x832860C4;
	sub_83255A88(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
loc_832860C8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x832860d8
	if (cr6.eq) goto loc_832860D8;
	// lwz r4,396(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
loc_832860D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83207fc0
	ctx.lr = 0x832860E0;
	sub_83207FC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832860f0
	if (cr6.eq) goto loc_832860F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x832860F0;
	sub_83209D68(ctx, base);
loc_832860F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832860F8"))) PPC_WEAK_FUNC(sub_832860F8);
PPC_FUNC_IMPL(__imp__sub_832860F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83286100;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r10,224
	ctx.r10.s64 = 224;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// bl 0x8325b4d8
	ctx.lr = 0x8328612C;
	sub_8325B4D8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r31.u16);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328614C"))) PPC_WEAK_FUNC(sub_8328614C);
PPC_FUNC_IMPL(__imp__sub_8328614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286150"))) PPC_WEAK_FUNC(sub_83286150);
PPC_FUNC_IMPL(__imp__sub_83286150) {
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
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83286184
	if (cr6.eq) goto loc_83286184;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// b 0x832861a0
	goto loc_832861A0;
loc_83286184:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x8328619c
	if (!cr6.eq) goto loc_8328619C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832356e0
	ctx.lr = 0x8328619C;
	sub_832356E0(ctx, base);
loc_8328619C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_832861A0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832861c8
	if (cr6.eq) goto loc_832861C8;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,224
	ctx.r10.s64 = 224;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// bl 0x8325b658
	ctx.lr = 0x832861C8;
	sub_8325B658(ctx, base);
loc_832861C8:
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

__attribute__((alias("__imp__sub_832861DC"))) PPC_WEAK_FUNC(sub_832861DC);
PPC_FUNC_IMPL(__imp__sub_832861DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832861E0"))) PPC_WEAK_FUNC(sub_832861E0);
PPC_FUNC_IMPL(__imp__sub_832861E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832861E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83286220
	if (cr6.eq) goto loc_83286220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83286220;
	sub_83222030(ctx, base);
loc_83286220:
	// li r11,15
	ctx.r11.s64 = 15;
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328623C"))) PPC_WEAK_FUNC(sub_8328623C);
PPC_FUNC_IMPL(__imp__sub_8328623C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286240"))) PPC_WEAK_FUNC(sub_83286240);
PPC_FUNC_IMPL(__imp__sub_83286240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r11,r9,2348
	ctx.r11.u64 = ctx.r9.u64 ^ 2348;
	// xori r10,r9,2375
	ctx.r10.u64 = ctx.r9.u64 ^ 2375;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,2347
	ctx.r11.u64 = ctx.r9.u64 ^ 2347;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,1254
	ctx.r11.u64 = ctx.r9.u64 ^ 1254;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,1250
	ctx.r11.u64 = ctx.r9.u64 ^ 1250;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 | ctx.r4.u64;
	// xori r11,r9,1152
	ctx.r11.u64 = ctx.r9.u64 ^ 1152;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328629c
	if (cr6.eq) goto loc_8328629C;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
loc_8328629C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832862A4"))) PPC_WEAK_FUNC(sub_832862A4);
PPC_FUNC_IMPL(__imp__sub_832862A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832862A8"))) PPC_WEAK_FUNC(sub_832862A8);
PPC_FUNC_IMPL(__imp__sub_832862A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r11,r9,2365
	ctx.r11.u64 = ctx.r9.u64 ^ 2365;
	// xori r10,r9,2385
	ctx.r10.u64 = ctx.r9.u64 ^ 2385;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,2342
	ctx.r11.u64 = ctx.r9.u64 ^ 2342;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,2321
	ctx.r11.u64 = ctx.r9.u64 ^ 2321;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// xori r11,r9,2320
	ctx.r11.u64 = ctx.r9.u64 ^ 2320;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832862f8
	if (cr6.eq) goto loc_832862F8;
	// li r4,56
	ctx.r4.s64 = 56;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
loc_832862F8:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832862FC"))) PPC_WEAK_FUNC(sub_832862FC);
PPC_FUNC_IMPL(__imp__sub_832862FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286300"))) PPC_WEAK_FUNC(sub_83286300);
PPC_FUNC_IMPL(__imp__sub_83286300) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r10,r11,-1120
	ctx.r10.s64 = ctx.r11.s64 + -1120;
	// cmplwi cr6,r10,26
	cr6.compare<uint32_t>(ctx.r10.u32, 26, xer);
	// bgt cr6,0x832863b8
	if (cr6.gt) goto loc_832863B8;
	// lis r12,-31960
	ctx.r12.s64 = -2094530560;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25396
	ctx.r12.s64 = ctx.r12.s64 + 25396;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_832863A0;
	case 1:
		goto loc_832863B8;
	case 2:
		goto loc_832863B8;
	case 3:
		goto loc_832863A0;
	case 4:
		goto loc_832863A0;
	case 5:
		goto loc_832863B8;
	case 6:
		goto loc_832863B8;
	case 7:
		goto loc_832863A0;
	case 8:
		goto loc_832863B8;
	case 9:
		goto loc_832863B8;
	case 10:
		goto loc_832863B8;
	case 11:
		goto loc_832863B8;
	case 12:
		goto loc_832863B8;
	case 13:
		goto loc_832863B8;
	case 14:
		goto loc_832863B8;
	case 15:
		goto loc_832863B8;
	case 16:
		goto loc_832863B8;
	case 17:
		goto loc_832863A0;
	case 18:
		goto loc_832863A0;
	case 19:
		goto loc_832863B8;
	case 20:
		goto loc_832863B8;
	case 21:
		goto loc_832863B8;
	case 22:
		goto loc_832863B8;
	case 23:
		goto loc_832863B8;
	case 24:
		goto loc_832863B8;
	case 25:
		goto loc_832863A0;
	case 26:
		goto loc_832863A0;
	default:
		return;
	}
	// lwz r25,25504(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25504);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25504(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25504);
	// lwz r25,25504(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25504);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25504(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25504);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25504(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25504);
	// lwz r25,25504(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25504);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25528(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25528);
	// lwz r25,25504(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25504);
	// lwz r25,25504(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25504);
loc_832863A0:
	// li r4,124
	ctx.r4.s64 = 124;
	// bl 0x832861e0
	ctx.lr = 0x832863A8;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832863B8:
	// xori r10,r11,2365
	ctx.r10.u64 = ctx.r11.u64 ^ 2365;
	// xori r9,r11,2385
	ctx.r9.u64 = ctx.r11.u64 ^ 2385;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2342
	ctx.r10.u64 = ctx.r11.u64 ^ 2342;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2321
	ctx.r10.u64 = ctx.r11.u64 ^ 2321;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// xori r11,r11,2320
	ctx.r11.u64 = ctx.r11.u64 ^ 2320;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83286414
	if (cr6.eq) goto loc_83286414;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x832861e0
	ctx.lr = 0x83286404;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83286414:
	// bl 0x83286240
	ctx.lr = 0x83286418;
	sub_83286240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286428"))) PPC_WEAK_FUNC(sub_83286428);
PPC_FUNC_IMPL(__imp__sub_83286428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1258
	cr6.compare<uint32_t>(ctx.r11.u32, 1258, xer);
	// bgt cr6,0x8328649c
	if (cr6.gt) goto loc_8328649C;
	// beq cr6,0x83286494
	if (cr6.eq) goto loc_83286494;
	// addi r11,r11,-1130
	ctx.r11.s64 = ctx.r11.s64 + -1130;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x8328649c
	if (cr6.gt) goto loc_8328649C;
	// lis r12,-31960
	ctx.r12.s64 = -2094530560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25692
	ctx.r12.s64 = ctx.r12.s64 + 25692;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83286494;
	case 1:
		goto loc_83286494;
	case 2:
		goto loc_83286494;
	case 3:
		goto loc_83286494;
	case 4:
		goto loc_83286494;
	case 5:
		goto loc_83286494;
	case 6:
		goto loc_8328649C;
	case 7:
		goto loc_8328649C;
	case 8:
		goto loc_8328649C;
	case 9:
		goto loc_83286494;
	case 10:
		goto loc_83286494;
	case 11:
		goto loc_83286494;
	case 12:
		goto loc_83286494;
	case 13:
		goto loc_83286494;
	default:
		return;
	}
	// lwz r25,25748(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25748);
	// lwz r25,25748(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25748);
	// lwz r25,25748(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25748);
	// lwz r25,25748(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25748);
	// lwz r25,25748(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25748);
	// lwz r25,25748(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25748);
	// lwz r25,25756(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25756);
	// lwz r25,25756(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25756);
	// lwz r25,25756(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25756);
	// lwz r25,25748(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25748);
	// lwz r25,25748(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25748);
	// lwz r25,25748(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25748);
	// lwz r25,25748(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25748);
	// lwz r25,25748(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25748);
loc_83286494:
	// li r4,125
	ctx.r4.s64 = 125;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
loc_8328649C:
	// b 0x83286300
	sub_83286300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832864A0"))) PPC_WEAK_FUNC(sub_832864A0);
PPC_FUNC_IMPL(__imp__sub_832864A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r10,r11,1103
	ctx.r10.u64 = ctx.r11.u64 ^ 1103;
	// xori r11,r11,1102
	ctx.r11.u64 = ctx.r11.u64 ^ 1102;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x832864cc
	if (cr6.eq) goto loc_832864CC;
	// li r4,127
	ctx.r4.s64 = 127;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
loc_832864CC:
	// b 0x83286428
	sub_83286428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832864D0"))) PPC_WEAK_FUNC(sub_832864D0);
PPC_FUNC_IMPL(__imp__sub_832864D0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1091
	cr6.compare<uint32_t>(ctx.r11.u32, 1091, xer);
	// bgt cr6,0x83286510
	if (cr6.gt) goto loc_83286510;
	// beq cr6,0x83286580
	if (cr6.eq) goto loc_83286580;
	// cmplwi cr6,r11,1089
	cr6.compare<uint32_t>(ctx.r11.u32, 1089, xer);
	// bgt cr6,0x83286508
	if (cr6.gt) goto loc_83286508;
	// beq cr6,0x83286580
	if (cr6.eq) goto loc_83286580;
	// cmplwi cr6,r11,1068
	cr6.compare<uint32_t>(ctx.r11.u32, 1068, xer);
	// beq cr6,0x83286580
	if (cr6.eq) goto loc_83286580;
	// cmplwi cr6,r11,1088
	cr6.compare<uint32_t>(ctx.r11.u32, 1088, xer);
	// b 0x83286530
	goto loc_83286530;
loc_83286508:
	// cmplwi cr6,r11,1090
	cr6.compare<uint32_t>(ctx.r11.u32, 1090, xer);
	// b 0x83286530
	goto loc_83286530;
loc_83286510:
	// cmplwi cr6,r11,1128
	cr6.compare<uint32_t>(ctx.r11.u32, 1128, xer);
	// bgt cr6,0x8328652c
	if (cr6.gt) goto loc_8328652C;
	// beq cr6,0x83286580
	if (cr6.eq) goto loc_83286580;
	// cmplwi cr6,r11,1092
	cr6.compare<uint32_t>(ctx.r11.u32, 1092, xer);
	// beq cr6,0x83286580
	if (cr6.eq) goto loc_83286580;
	// cmplwi cr6,r11,1093
	cr6.compare<uint32_t>(ctx.r11.u32, 1093, xer);
	// b 0x83286530
	goto loc_83286530;
loc_8328652C:
	// cmplwi cr6,r11,1129
	cr6.compare<uint32_t>(ctx.r11.u32, 1129, xer);
loc_83286530:
	// beq cr6,0x83286580
	if (cr6.eq) goto loc_83286580;
	// xori r10,r11,1103
	ctx.r10.u64 = ctx.r11.u64 ^ 1103;
	// xori r11,r11,1102
	ctx.r11.u64 = ctx.r11.u64 ^ 1102;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8328656c
	if (cr6.eq) goto loc_8328656C;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x832861e0
	ctx.lr = 0x8328655C;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8328656C:
	// bl 0x83286428
	ctx.lr = 0x83286570;
	sub_83286428(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83286580:
	// li r4,122
	ctx.r4.s64 = 122;
	// bl 0x832861e0
	ctx.lr = 0x83286588;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286598"))) PPC_WEAK_FUNC(sub_83286598);
PPC_FUNC_IMPL(__imp__sub_83286598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r11,r9,2345
	ctx.r11.u64 = ctx.r9.u64 ^ 2345;
	// xori r10,r9,2346
	ctx.r10.u64 = ctx.r9.u64 ^ 2346;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,2344
	ctx.r11.u64 = ctx.r9.u64 ^ 2344;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,1234
	ctx.r11.u64 = ctx.r9.u64 ^ 1234;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// xori r11,r9,1233
	ctx.r11.u64 = ctx.r9.u64 ^ 1233;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832865e8
	if (cr6.eq) goto loc_832865E8;
	// li r4,123
	ctx.r4.s64 = 123;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
loc_832865E8:
	// b 0x83286300
	sub_83286300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832865EC"))) PPC_WEAK_FUNC(sub_832865EC);
PPC_FUNC_IMPL(__imp__sub_832865EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832865F0"))) PPC_WEAK_FUNC(sub_832865F0);
PPC_FUNC_IMPL(__imp__sub_832865F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1243
	cr6.compare<uint32_t>(ctx.r11.u32, 1243, xer);
	// bgt cr6,0x83286660
	if (cr6.gt) goto loc_83286660;
	// beq cr6,0x832866b0
	if (cr6.eq) goto loc_832866B0;
	// cmplwi cr6,r11,1236
	cr6.compare<uint32_t>(ctx.r11.u32, 1236, xer);
	// bgt cr6,0x8328663c
	if (cr6.gt) goto loc_8328663C;
	// beq cr6,0x832866b0
	if (cr6.eq) goto loc_832866B0;
	// cmplwi cr6,r11,1188
	cr6.compare<uint32_t>(ctx.r11.u32, 1188, xer);
	// bgt cr6,0x8328662c
	if (cr6.gt) goto loc_8328662C;
	// beq cr6,0x832866b0
	if (cr6.eq) goto loc_832866B0;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x832866b0
	if (cr6.eq) goto loc_832866B0;
	// cmplwi cr6,r11,1187
	cr6.compare<uint32_t>(ctx.r11.u32, 1187, xer);
loc_83286624:
	// beq cr6,0x832866b0
	if (cr6.eq) goto loc_832866B0;
loc_83286628:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_8328662C:
	// cmplwi cr6,r11,1192
	cr6.compare<uint32_t>(ctx.r11.u32, 1192, xer);
	// beq cr6,0x832866b0
	if (cr6.eq) goto loc_832866B0;
	// cmplwi cr6,r11,1235
	cr6.compare<uint32_t>(ctx.r11.u32, 1235, xer);
	// b 0x83286624
	goto loc_83286624;
loc_8328663C:
	// addi r11,r11,-1237
	ctx.r11.s64 = ctx.r11.s64 + -1237;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83286628
	if (cr6.gt) goto loc_83286628;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832866b0
	if (cr6.eq) goto loc_832866B0;
	// bdz 0x832866b0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832866B0;
	// bdz 0x832866b0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832866B0;
	// b 0x832866b0
	goto loc_832866B0;
loc_83286660:
	// cmplwi cr6,r11,2389
	cr6.compare<uint32_t>(ctx.r11.u32, 2389, xer);
	// bgt cr6,0x83286690
	if (cr6.gt) goto loc_83286690;
	// beq cr6,0x832866b0
	if (cr6.eq) goto loc_832866B0;
	// cmplwi cr6,r11,1277
	cr6.compare<uint32_t>(ctx.r11.u32, 1277, xer);
	// bgt cr6,0x83286688
	if (cr6.gt) goto loc_83286688;
	// beq cr6,0x832866b0
	if (cr6.eq) goto loc_832866B0;
	// cmplwi cr6,r11,1244
	cr6.compare<uint32_t>(ctx.r11.u32, 1244, xer);
	// beq cr6,0x832866b0
	if (cr6.eq) goto loc_832866B0;
	// cmplwi cr6,r11,1272
	cr6.compare<uint32_t>(ctx.r11.u32, 1272, xer);
	// b 0x83286624
	goto loc_83286624;
loc_83286688:
	// cmplwi cr6,r11,2375
	cr6.compare<uint32_t>(ctx.r11.u32, 2375, xer);
	// b 0x83286624
	goto loc_83286624;
loc_83286690:
	// addi r11,r11,-2390
	ctx.r11.s64 = ctx.r11.s64 + -2390;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83286628
	if (cr6.gt) goto loc_83286628;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832866b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832866B0;
	// bdzf 4*cr6+eq,0x832866b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832866B0;
	// bne cr6,0x832866b0
	if (!cr6.eq) goto loc_832866B0;
loc_832866B0:
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832866B8"))) PPC_WEAK_FUNC(sub_832866B8);
PPC_FUNC_IMPL(__imp__sub_832866B8) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1089
	cr6.compare<uint32_t>(ctx.r11.u32, 1089, xer);
	// beq cr6,0x83286740
	if (cr6.eq) goto loc_83286740;
	// xori r10,r11,2365
	ctx.r10.u64 = ctx.r11.u64 ^ 2365;
	// xori r9,r11,2385
	ctx.r9.u64 = ctx.r11.u64 ^ 2385;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2342
	ctx.r10.u64 = ctx.r11.u64 ^ 2342;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2321
	ctx.r10.u64 = ctx.r11.u64 ^ 2321;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// xori r11,r11,2320
	ctx.r11.u64 = ctx.r11.u64 ^ 2320;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328672c
	if (cr6.eq) goto loc_8328672C;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x832861e0
	ctx.lr = 0x8328671C;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8328672C:
	// bl 0x83286240
	ctx.lr = 0x83286730;
	sub_83286240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83286740:
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x832861e0
	ctx.lr = 0x83286748;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286758"))) PPC_WEAK_FUNC(sub_83286758);
PPC_FUNC_IMPL(__imp__sub_83286758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2331
	cr6.compare<uint32_t>(ctx.r11.u32, 2331, xer);
	// bgt cr6,0x832867bc
	if (cr6.gt) goto loc_832867BC;
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// cmplwi cr6,r11,1156
	cr6.compare<uint32_t>(ctx.r11.u32, 1156, xer);
	// bgt cr6,0x83286798
	if (cr6.gt) goto loc_83286798;
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// cmplwi cr6,r11,1154
	cr6.compare<uint32_t>(ctx.r11.u32, 1154, xer);
	// bgt cr6,0x83286790
	if (cr6.gt) goto loc_83286790;
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// cmplwi cr6,r11,536
	cr6.compare<uint32_t>(ctx.r11.u32, 536, xer);
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// b 0x83286800
	goto loc_83286800;
loc_83286790:
	// cmplwi cr6,r11,1155
	cr6.compare<uint32_t>(ctx.r11.u32, 1155, xer);
	// b 0x83286800
	goto loc_83286800;
loc_83286798:
	// cmplwi cr6,r11,1192
	cr6.compare<uint32_t>(ctx.r11.u32, 1192, xer);
	// bgt cr6,0x832867b4
	if (cr6.gt) goto loc_832867B4;
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// cmplwi cr6,r11,1157
	cr6.compare<uint32_t>(ctx.r11.u32, 1157, xer);
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// cmplwi cr6,r11,1158
	cr6.compare<uint32_t>(ctx.r11.u32, 1158, xer);
	// b 0x83286800
	goto loc_83286800;
loc_832867B4:
	// cmplwi cr6,r11,1218
	cr6.compare<uint32_t>(ctx.r11.u32, 1218, xer);
	// b 0x83286800
	goto loc_83286800;
loc_832867BC:
	// cmplwi cr6,r11,2416
	cr6.compare<uint32_t>(ctx.r11.u32, 2416, xer);
	// bgt cr6,0x832867ec
	if (cr6.gt) goto loc_832867EC;
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// cmplwi cr6,r11,2412
	cr6.compare<uint32_t>(ctx.r11.u32, 2412, xer);
	// bgt cr6,0x832867e4
	if (cr6.gt) goto loc_832867E4;
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// cmplwi cr6,r11,2356
	cr6.compare<uint32_t>(ctx.r11.u32, 2356, xer);
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// cmplwi cr6,r11,2411
	cr6.compare<uint32_t>(ctx.r11.u32, 2411, xer);
	// b 0x83286800
	goto loc_83286800;
loc_832867E4:
	// cmplwi cr6,r11,2415
	cr6.compare<uint32_t>(ctx.r11.u32, 2415, xer);
	// b 0x83286800
	goto loc_83286800;
loc_832867EC:
	// cmplwi cr6,r11,2421
	cr6.compare<uint32_t>(ctx.r11.u32, 2421, xer);
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// cmplwi cr6,r11,2422
	cr6.compare<uint32_t>(ctx.r11.u32, 2422, xer);
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// cmplwi cr6,r11,2423
	cr6.compare<uint32_t>(ctx.r11.u32, 2423, xer);
loc_83286800:
	// beq cr6,0x83286808
	if (cr6.eq) goto loc_83286808;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286808:
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286810"))) PPC_WEAK_FUNC(sub_83286810);
PPC_FUNC_IMPL(__imp__sub_83286810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1261
	cr6.compare<uint32_t>(ctx.r11.u32, 1261, xer);
	// bgt cr6,0x83286844
	if (cr6.gt) goto loc_83286844;
	// beq cr6,0x8328686c
	if (cr6.eq) goto loc_8328686C;
	// cmplwi cr6,r11,1157
	cr6.compare<uint32_t>(ctx.r11.u32, 1157, xer);
	// bgt cr6,0x8328683c
	if (cr6.gt) goto loc_8328683C;
	// beq cr6,0x8328686c
	if (cr6.eq) goto loc_8328686C;
	// cmplwi cr6,r11,534
	cr6.compare<uint32_t>(ctx.r11.u32, 534, xer);
	// beq cr6,0x8328686c
	if (cr6.eq) goto loc_8328686C;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// b 0x83286864
	goto loc_83286864;
loc_8328683C:
	// cmplwi cr6,r11,1159
	cr6.compare<uint32_t>(ctx.r11.u32, 1159, xer);
	// b 0x83286864
	goto loc_83286864;
loc_83286844:
	// cmplwi cr6,r11,2368
	cr6.compare<uint32_t>(ctx.r11.u32, 2368, xer);
	// bgt cr6,0x83286860
	if (cr6.gt) goto loc_83286860;
	// beq cr6,0x8328686c
	if (cr6.eq) goto loc_8328686C;
	// cmplwi cr6,r11,1267
	cr6.compare<uint32_t>(ctx.r11.u32, 1267, xer);
	// beq cr6,0x8328686c
	if (cr6.eq) goto loc_8328686C;
	// cmplwi cr6,r11,2356
	cr6.compare<uint32_t>(ctx.r11.u32, 2356, xer);
	// b 0x83286864
	goto loc_83286864;
loc_83286860:
	// cmplwi cr6,r11,2421
	cr6.compare<uint32_t>(ctx.r11.u32, 2421, xer);
loc_83286864:
	// beq cr6,0x8328686c
	if (cr6.eq) goto loc_8328686C;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_8328686C:
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286874"))) PPC_WEAK_FUNC(sub_83286874);
PPC_FUNC_IMPL(__imp__sub_83286874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286878"))) PPC_WEAK_FUNC(sub_83286878);
PPC_FUNC_IMPL(__imp__sub_83286878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r11,r9,2375
	ctx.r11.u64 = ctx.r9.u64 ^ 2375;
	// xori r10,r9,2348
	ctx.r10.u64 = ctx.r9.u64 ^ 2348;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,2347
	ctx.r11.u64 = ctx.r9.u64 ^ 2347;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,1254
	ctx.r11.u64 = ctx.r9.u64 ^ 1254;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,1250
	ctx.r11.u64 = ctx.r9.u64 ^ 1250;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 | ctx.r4.u64;
	// xori r11,r9,1152
	ctx.r11.u64 = ctx.r9.u64 ^ 1152;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832868d4
	if (cr6.eq) goto loc_832868D4;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
loc_832868D4:
	// li r3,-4
	ctx.r3.s64 = -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832868DC"))) PPC_WEAK_FUNC(sub_832868DC);
PPC_FUNC_IMPL(__imp__sub_832868DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832868E0"))) PPC_WEAK_FUNC(sub_832868E0);
PPC_FUNC_IMPL(__imp__sub_832868E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1157
	cr6.compare<uint32_t>(ctx.r11.u32, 1157, xer);
	// beq cr6,0x832868f0
	if (cr6.eq) goto loc_832868F0;
	// b 0x83286878
	sub_83286878(ctx, base);
	return;
loc_832868F0:
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832868F8"))) PPC_WEAK_FUNC(sub_832868F8);
PPC_FUNC_IMPL(__imp__sub_832868F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2427
	cr6.compare<uint32_t>(ctx.r11.u32, 2427, xer);
	// bgt cr6,0x8328693c
	if (cr6.gt) goto loc_8328693C;
	// beq cr6,0x8328695c
	if (cr6.eq) goto loc_8328695C;
	// cmplwi cr6,r11,2424
	cr6.compare<uint32_t>(ctx.r11.u32, 2424, xer);
	// bgt cr6,0x8328692c
	if (cr6.gt) goto loc_8328692C;
	// beq cr6,0x8328695c
	if (cr6.eq) goto loc_8328695C;
	// cmplwi cr6,r11,1114
	cr6.compare<uint32_t>(ctx.r11.u32, 1114, xer);
	// beq cr6,0x8328695c
	if (cr6.eq) goto loc_8328695C;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
loc_83286920:
	// beq cr6,0x8328695c
	if (cr6.eq) goto loc_8328695C;
loc_83286924:
	// li r3,-4
	ctx.r3.s64 = -4;
	// blr 
	return;
loc_8328692C:
	// cmplwi cr6,r11,2425
	cr6.compare<uint32_t>(ctx.r11.u32, 2425, xer);
	// beq cr6,0x8328695c
	if (cr6.eq) goto loc_8328695C;
	// cmplwi cr6,r11,2426
	cr6.compare<uint32_t>(ctx.r11.u32, 2426, xer);
	// b 0x83286920
	goto loc_83286920;
loc_8328693C:
	// addi r11,r11,-2428
	ctx.r11.s64 = ctx.r11.s64 + -2428;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83286924
	if (cr6.gt) goto loc_83286924;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8328695c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8328695C;
	// bdzf 4*cr6+eq,0x8328695c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8328695C;
	// bne cr6,0x8328695c
	if (!cr6.eq) goto loc_8328695C;
loc_8328695C:
	// li r4,68
	ctx.r4.s64 = 68;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286964"))) PPC_WEAK_FUNC(sub_83286964);
PPC_FUNC_IMPL(__imp__sub_83286964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286968"))) PPC_WEAK_FUNC(sub_83286968);
PPC_FUNC_IMPL(__imp__sub_83286968) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1237
	cr6.compare<uint32_t>(ctx.r11.u32, 1237, xer);
	// bgt cr6,0x832869e8
	if (cr6.gt) goto loc_832869E8;
	// beq cr6,0x832869d0
	if (cr6.eq) goto loc_832869D0;
	// addi r10,r11,-1183
	ctx.r10.s64 = ctx.r11.s64 + -1183;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bgt cr6,0x832869e8
	if (cr6.gt) goto loc_832869E8;
	// lis r12,-31960
	ctx.r12.s64 = -2094530560;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27048
	ctx.r12.s64 = ctx.r12.s64 + 27048;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_832869D0;
	case 1:
		goto loc_832869D0;
	case 2:
		goto loc_832869D0;
	case 3:
		goto loc_832869D0;
	case 4:
		goto loc_832869D0;
	case 5:
		goto loc_832869D0;
	case 6:
		goto loc_832869D0;
	case 7:
		goto loc_832869D0;
	case 8:
		goto loc_832869D0;
	case 9:
		goto loc_832869D0;
	default:
		return;
	}
	// lwz r25,27088(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
	// lwz r25,27088(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
	// lwz r25,27088(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
	// lwz r25,27088(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
	// lwz r25,27088(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
	// lwz r25,27088(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
	// lwz r25,27088(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
	// lwz r25,27088(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
	// lwz r25,27088(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
	// lwz r25,27088(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27088);
loc_832869D0:
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x832861e0
	ctx.lr = 0x832869D8;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832869E8:
	// xori r10,r11,2348
	ctx.r10.u64 = ctx.r11.u64 ^ 2348;
	// xori r9,r11,2375
	ctx.r9.u64 = ctx.r11.u64 ^ 2375;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2347
	ctx.r10.u64 = ctx.r11.u64 ^ 2347;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,1254
	ctx.r10.u64 = ctx.r11.u64 ^ 1254;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,1250
	ctx.r10.u64 = ctx.r11.u64 ^ 1250;
	// or r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 | ctx.r6.u64;
	// xori r11,r11,1152
	ctx.r11.u64 = ctx.r11.u64 ^ 1152;
	// or r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 | ctx.r4.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83286a50
	if (cr6.eq) goto loc_83286A50;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x832861e0
	ctx.lr = 0x83286A40;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83286A50:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286A64"))) PPC_WEAK_FUNC(sub_83286A64);
PPC_FUNC_IMPL(__imp__sub_83286A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286A68"))) PPC_WEAK_FUNC(sub_83286A68);
PPC_FUNC_IMPL(__imp__sub_83286A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r10,r11,1192
	ctx.r10.u64 = ctx.r11.u64 ^ 1192;
	// xori r11,r11,1152
	ctx.r11.u64 = ctx.r11.u64 ^ 1152;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83286a94
	if (cr6.eq) goto loc_83286A94;
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
loc_83286A94:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1264
	cr6.compare<uint32_t>(ctx.r11.u32, 1264, xer);
	// bgt cr6,0x83286ae8
	if (cr6.gt) goto loc_83286AE8;
	// beq cr6,0x83286b44
	if (cr6.eq) goto loc_83286B44;
	// cmplwi cr6,r11,1259
	cr6.compare<uint32_t>(ctx.r11.u32, 1259, xer);
	// bgt cr6,0x83286ad0
	if (cr6.gt) goto loc_83286AD0;
	// beq cr6,0x83286b44
	if (cr6.eq) goto loc_83286B44;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286b44
	if (cr6.eq) goto loc_83286B44;
	// cmplwi cr6,r11,1157
	cr6.compare<uint32_t>(ctx.r11.u32, 1157, xer);
	// beq cr6,0x83286b44
	if (cr6.eq) goto loc_83286B44;
	// cmplwi cr6,r11,1258
	cr6.compare<uint32_t>(ctx.r11.u32, 1258, xer);
loc_83286AC8:
	// beq cr6,0x83286b44
	if (cr6.eq) goto loc_83286B44;
loc_83286ACC:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286AD0:
	// cmplwi cr6,r11,1261
	cr6.compare<uint32_t>(ctx.r11.u32, 1261, xer);
	// beq cr6,0x83286b44
	if (cr6.eq) goto loc_83286B44;
	// cmplwi cr6,r11,1262
	cr6.compare<uint32_t>(ctx.r11.u32, 1262, xer);
	// beq cr6,0x83286b44
	if (cr6.eq) goto loc_83286B44;
	// cmplwi cr6,r11,1263
	cr6.compare<uint32_t>(ctx.r11.u32, 1263, xer);
	// b 0x83286ac8
	goto loc_83286AC8;
loc_83286AE8:
	// addi r11,r11,-1265
	ctx.r11.s64 = ctx.r11.s64 + -1265;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x83286acc
	if (cr6.gt) goto loc_83286ACC;
	// lis r12,-31960
	ctx.r12.s64 = -2094530560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27404
	ctx.r12.s64 = ctx.r12.s64 + 27404;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83286B44;
	case 1:
		goto loc_83286B44;
	case 2:
		goto loc_83286B44;
	case 3:
		goto loc_83286B44;
	case 4:
		goto loc_83286B44;
	case 5:
		goto loc_83286B44;
	case 6:
		goto loc_83286ACC;
	case 7:
		goto loc_83286ACC;
	case 8:
		goto loc_83286ACC;
	case 9:
		goto loc_83286ACC;
	case 10:
		goto loc_83286ACC;
	case 11:
		goto loc_83286ACC;
	case 12:
		goto loc_83286ACC;
	case 13:
		goto loc_83286B44;
	default:
		return;
	}
	// lwz r25,27460(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27460);
	// lwz r25,27460(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27460);
	// lwz r25,27460(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27460);
	// lwz r25,27460(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27460);
	// lwz r25,27460(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27460);
	// lwz r25,27460(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27460);
	// lwz r25,27340(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27340);
	// lwz r25,27340(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27340);
	// lwz r25,27340(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27340);
	// lwz r25,27340(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27340);
	// lwz r25,27340(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27340);
	// lwz r25,27340(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27340);
	// lwz r25,27340(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27340);
	// lwz r25,27460(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27460);
loc_83286B44:
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286B4C"))) PPC_WEAK_FUNC(sub_83286B4C);
PPC_FUNC_IMPL(__imp__sub_83286B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286B50"))) PPC_WEAK_FUNC(sub_83286B50);
PPC_FUNC_IMPL(__imp__sub_83286B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286b60
	if (cr6.eq) goto loc_83286B60;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286B60:
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286B68"))) PPC_WEAK_FUNC(sub_83286B68);
PPC_FUNC_IMPL(__imp__sub_83286B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1240
	cr6.compare<uint32_t>(ctx.r11.u32, 1240, xer);
	// bgt cr6,0x83286bd0
	if (cr6.gt) goto loc_83286BD0;
	// beq cr6,0x83286c20
	if (cr6.eq) goto loc_83286C20;
	// cmplwi cr6,r11,1235
	cr6.compare<uint32_t>(ctx.r11.u32, 1235, xer);
	// bgt cr6,0x83286bac
	if (cr6.gt) goto loc_83286BAC;
	// beq cr6,0x83286c20
	if (cr6.eq) goto loc_83286C20;
	// cmplwi cr6,r11,1188
	cr6.compare<uint32_t>(ctx.r11.u32, 1188, xer);
	// bgt cr6,0x83286ba4
	if (cr6.gt) goto loc_83286BA4;
	// beq cr6,0x83286c20
	if (cr6.eq) goto loc_83286C20;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286c20
	if (cr6.eq) goto loc_83286C20;
	// cmplwi cr6,r11,1187
	cr6.compare<uint32_t>(ctx.r11.u32, 1187, xer);
loc_83286B9C:
	// beq cr6,0x83286c20
	if (cr6.eq) goto loc_83286C20;
loc_83286BA0:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286BA4:
	// cmplwi cr6,r11,1192
	cr6.compare<uint32_t>(ctx.r11.u32, 1192, xer);
	// b 0x83286b9c
	goto loc_83286B9C;
loc_83286BAC:
	// addi r11,r11,-1236
	ctx.r11.s64 = ctx.r11.s64 + -1236;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83286ba0
	if (cr6.gt) goto loc_83286BA0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83286c20
	if (cr6.eq) goto loc_83286C20;
	// bdz 0x83286c20
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83286C20;
	// bdz 0x83286c20
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83286C20;
	// b 0x83286c20
	goto loc_83286C20;
loc_83286BD0:
	// cmplwi cr6,r11,2389
	cr6.compare<uint32_t>(ctx.r11.u32, 2389, xer);
	// bgt cr6,0x83286c00
	if (cr6.gt) goto loc_83286C00;
	// beq cr6,0x83286c20
	if (cr6.eq) goto loc_83286C20;
	// cmplwi cr6,r11,1272
	cr6.compare<uint32_t>(ctx.r11.u32, 1272, xer);
	// bgt cr6,0x83286bf8
	if (cr6.gt) goto loc_83286BF8;
	// beq cr6,0x83286c20
	if (cr6.eq) goto loc_83286C20;
	// cmplwi cr6,r11,1243
	cr6.compare<uint32_t>(ctx.r11.u32, 1243, xer);
	// beq cr6,0x83286c20
	if (cr6.eq) goto loc_83286C20;
	// cmplwi cr6,r11,1244
	cr6.compare<uint32_t>(ctx.r11.u32, 1244, xer);
	// b 0x83286b9c
	goto loc_83286B9C;
loc_83286BF8:
	// cmplwi cr6,r11,2375
	cr6.compare<uint32_t>(ctx.r11.u32, 2375, xer);
	// b 0x83286b9c
	goto loc_83286B9C;
loc_83286C00:
	// addi r11,r11,-2390
	ctx.r11.s64 = ctx.r11.s64 + -2390;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83286ba0
	if (cr6.gt) goto loc_83286BA0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83286c20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83286C20;
	// bdzf 4*cr6+eq,0x83286c20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83286C20;
	// bne cr6,0x83286c20
	if (!cr6.eq) goto loc_83286C20;
loc_83286C20:
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286C28"))) PPC_WEAK_FUNC(sub_83286C28);
PPC_FUNC_IMPL(__imp__sub_83286C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286c38
	if (cr6.eq) goto loc_83286C38;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286C38:
	// li r4,50
	ctx.r4.s64 = 50;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286C40"))) PPC_WEAK_FUNC(sub_83286C40);
PPC_FUNC_IMPL(__imp__sub_83286C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286c50
	if (cr6.eq) goto loc_83286C50;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286C50:
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286C58"))) PPC_WEAK_FUNC(sub_83286C58);
PPC_FUNC_IMPL(__imp__sub_83286C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286c68
	if (cr6.eq) goto loc_83286C68;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286C68:
	// li r4,61
	ctx.r4.s64 = 61;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286C70"))) PPC_WEAK_FUNC(sub_83286C70);
PPC_FUNC_IMPL(__imp__sub_83286C70) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r10,r11,1152
	ctx.r10.u64 = ctx.r11.u64 ^ 1152;
	// xori r9,r11,1157
	ctx.r9.u64 = ctx.r11.u64 ^ 1157;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,1056
	ctx.r10.u64 = ctx.r11.u64 ^ 1056;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r10,r4,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83286cc4
	if (cr6.eq) goto loc_83286CC4;
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x832861e0
	ctx.lr = 0x83286CB4;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83286CC4:
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286ce0
	if (cr6.eq) goto loc_83286CE0;
	// bl 0x83286240
	ctx.lr = 0x83286CD0;
	sub_83286240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83286CE0:
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x832861e0
	ctx.lr = 0x83286CE8;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286CF8"))) PPC_WEAK_FUNC(sub_83286CF8);
PPC_FUNC_IMPL(__imp__sub_83286CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286d08
	if (cr6.eq) goto loc_83286D08;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286D08:
	// li r4,65
	ctx.r4.s64 = 65;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286D10"))) PPC_WEAK_FUNC(sub_83286D10);
PPC_FUNC_IMPL(__imp__sub_83286D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286d20
	if (cr6.eq) goto loc_83286D20;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286D20:
	// li r4,70
	ctx.r4.s64 = 70;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286D28"))) PPC_WEAK_FUNC(sub_83286D28);
PPC_FUNC_IMPL(__imp__sub_83286D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286d38
	if (cr6.eq) goto loc_83286D38;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286D38:
	// li r4,71
	ctx.r4.s64 = 71;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286D40"))) PPC_WEAK_FUNC(sub_83286D40);
PPC_FUNC_IMPL(__imp__sub_83286D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286d50
	if (cr6.eq) goto loc_83286D50;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286D50:
	// li r4,66
	ctx.r4.s64 = 66;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286D58"))) PPC_WEAK_FUNC(sub_83286D58);
PPC_FUNC_IMPL(__imp__sub_83286D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286d68
	if (cr6.eq) goto loc_83286D68;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286D68:
	// li r4,81
	ctx.r4.s64 = 81;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286D70"))) PPC_WEAK_FUNC(sub_83286D70);
PPC_FUNC_IMPL(__imp__sub_83286D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83286d80
	if (cr6.eq) goto loc_83286D80;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286D80:
	// li r4,104
	ctx.r4.s64 = 104;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286D88"))) PPC_WEAK_FUNC(sub_83286D88);
PPC_FUNC_IMPL(__imp__sub_83286D88) {
	PPC_FUNC_PROLOGUE();
	// b 0x83286300
	sub_83286300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286D8C"))) PPC_WEAK_FUNC(sub_83286D8C);
PPC_FUNC_IMPL(__imp__sub_83286D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286D90"))) PPC_WEAK_FUNC(sub_83286D90);
PPC_FUNC_IMPL(__imp__sub_83286D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2336
	cr6.compare<uint32_t>(ctx.r11.u32, 2336, xer);
	// bgt cr6,0x83286e10
	if (cr6.gt) goto loc_83286E10;
	// beq cr6,0x83286e70
	if (cr6.eq) goto loc_83286E70;
	// cmplwi cr6,r11,2329
	cr6.compare<uint32_t>(ctx.r11.u32, 2329, xer);
	// bgt cr6,0x83286de4
	if (cr6.gt) goto loc_83286DE4;
	// beq cr6,0x83286e70
	if (cr6.eq) goto loc_83286E70;
	// cmplwi cr6,r11,2326
	cr6.compare<uint32_t>(ctx.r11.u32, 2326, xer);
	// bgt cr6,0x83286dd4
	if (cr6.gt) goto loc_83286DD4;
	// beq cr6,0x83286e70
	if (cr6.eq) goto loc_83286E70;
	// cmplwi cr6,r11,536
	cr6.compare<uint32_t>(ctx.r11.u32, 536, xer);
	// beq cr6,0x83286e70
	if (cr6.eq) goto loc_83286E70;
	// cmplwi cr6,r11,1157
	cr6.compare<uint32_t>(ctx.r11.u32, 1157, xer);
	// beq cr6,0x83286e70
	if (cr6.eq) goto loc_83286E70;
	// cmplwi cr6,r11,2325
	cr6.compare<uint32_t>(ctx.r11.u32, 2325, xer);
loc_83286DCC:
	// beq cr6,0x83286e70
	if (cr6.eq) goto loc_83286E70;
loc_83286DD0:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286DD4:
	// cmplwi cr6,r11,2327
	cr6.compare<uint32_t>(ctx.r11.u32, 2327, xer);
	// beq cr6,0x83286e70
	if (cr6.eq) goto loc_83286E70;
	// cmplwi cr6,r11,2328
	cr6.compare<uint32_t>(ctx.r11.u32, 2328, xer);
	// b 0x83286dcc
	goto loc_83286DCC;
loc_83286DE4:
	// addi r11,r11,-2330
	ctx.r11.s64 = ctx.r11.s64 + -2330;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x83286dd0
	if (cr6.gt) goto loc_83286DD0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83286e70
	if (cr6.eq) goto loc_83286E70;
	// bdz 0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83286E70;
	// bdz 0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83286E70;
	// bdz 0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83286E70;
	// bdz 0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83286E70;
	// b 0x83286e70
	goto loc_83286E70;
loc_83286E10:
	// cmplwi cr6,r11,2356
	cr6.compare<uint32_t>(ctx.r11.u32, 2356, xer);
	// bgt cr6,0x83286e44
	if (cr6.gt) goto loc_83286E44;
	// beq cr6,0x83286e70
	if (cr6.eq) goto loc_83286E70;
	// addi r11,r11,-2337
	ctx.r11.s64 = ctx.r11.s64 + -2337;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x83286dd0
	if (cr6.gt) goto loc_83286DD0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83286e70
	if (cr6.eq) goto loc_83286E70;
	// bdz 0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83286E70;
	// bdz 0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83286E70;
	// bdz 0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83286E70;
	// b 0x83286e70
	goto loc_83286E70;
loc_83286E44:
	// addi r11,r11,-2411
	ctx.r11.s64 = ctx.r11.s64 + -2411;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x83286dd0
	if (cr6.gt) goto loc_83286DD0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83286E70;
	// bdzf 4*cr6+eq,0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83286E70;
	// bdzf 4*cr6+eq,0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83286E70;
	// bdzf 4*cr6+eq,0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83286E70;
	// bdzf 4*cr6+eq,0x83286e70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83286E70;
	// bne cr6,0x83286e70
	if (!cr6.eq) goto loc_83286E70;
loc_83286E70:
	// li r4,52
	ctx.r4.s64 = 52;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r11,r10,1192
	ctx.r11.u64 = ctx.r10.u64 ^ 1192;
	// xori r10,r10,1152
	ctx.r10.u64 = ctx.r10.u64 ^ 1152;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83286ea4
	if (cr6.eq) goto loc_83286EA4;
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
loc_83286EA4:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2402
	cr6.compare<uint32_t>(ctx.r11.u32, 2402, xer);
	// bgt cr6,0x83286f04
	if (cr6.gt) goto loc_83286F04;
	// beq cr6,0x83286f74
	if (cr6.eq) goto loc_83286F74;
	// cmplwi cr6,r11,1261
	cr6.compare<uint32_t>(ctx.r11.u32, 1261, xer);
	// bgt cr6,0x83286eec
	if (cr6.gt) goto loc_83286EEC;
	// beq cr6,0x83286f74
	if (cr6.eq) goto loc_83286F74;
	// cmplwi cr6,r11,1157
	cr6.compare<uint32_t>(ctx.r11.u32, 1157, xer);
	// bgt cr6,0x83286ee4
	if (cr6.gt) goto loc_83286EE4;
	// beq cr6,0x83286f74
	if (cr6.eq) goto loc_83286F74;
	// cmplwi cr6,r11,534
	cr6.compare<uint32_t>(ctx.r11.u32, 534, xer);
	// beq cr6,0x83286f74
	if (cr6.eq) goto loc_83286F74;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
loc_83286EDC:
	// beq cr6,0x83286f74
	if (cr6.eq) goto loc_83286F74;
loc_83286EE0:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286EE4:
	// cmplwi cr6,r11,1159
	cr6.compare<uint32_t>(ctx.r11.u32, 1159, xer);
	// b 0x83286edc
	goto loc_83286EDC;
loc_83286EEC:
	// cmplwi cr6,r11,2356
	cr6.compare<uint32_t>(ctx.r11.u32, 2356, xer);
	// beq cr6,0x83286f74
	if (cr6.eq) goto loc_83286F74;
	// cmplwi cr6,r11,2368
	cr6.compare<uint32_t>(ctx.r11.u32, 2368, xer);
	// beq cr6,0x83286f74
	if (cr6.eq) goto loc_83286F74;
	// cmplwi cr6,r11,2401
	cr6.compare<uint32_t>(ctx.r11.u32, 2401, xer);
	// b 0x83286edc
	goto loc_83286EDC;
loc_83286F04:
	// addi r11,r11,-2403
	ctx.r11.s64 = ctx.r11.s64 + -2403;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x83286ee0
	if (cr6.gt) goto loc_83286EE0;
	// lis r12,-31960
	ctx.r12.s64 = -2094530560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28456
	ctx.r12.s64 = ctx.r12.s64 + 28456;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83286F74;
	case 1:
		goto loc_83286F74;
	case 2:
		goto loc_83286F74;
	case 3:
		goto loc_83286F74;
	case 4:
		goto loc_83286F74;
	case 5:
		goto loc_83286F74;
	case 6:
		goto loc_83286EE0;
	case 7:
		goto loc_83286EE0;
	case 8:
		goto loc_83286EE0;
	case 9:
		goto loc_83286EE0;
	case 10:
		goto loc_83286EE0;
	case 11:
		goto loc_83286EE0;
	case 12:
		goto loc_83286EE0;
	case 13:
		goto loc_83286EE0;
	case 14:
		goto loc_83286EE0;
	case 15:
		goto loc_83286EE0;
	case 16:
		goto loc_83286EE0;
	case 17:
		goto loc_83286EE0;
	case 18:
		goto loc_83286F74;
	default:
		return;
	}
	// lwz r25,28532(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28532);
	// lwz r25,28532(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28532);
	// lwz r25,28532(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28532);
	// lwz r25,28532(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28532);
	// lwz r25,28532(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28532);
	// lwz r25,28532(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28532);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28384(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28384);
	// lwz r25,28532(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28532);
loc_83286F74:
	// li r4,58
	ctx.r4.s64 = 58;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286F7C"))) PPC_WEAK_FUNC(sub_83286F7C);
PPC_FUNC_IMPL(__imp__sub_83286F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286F80"))) PPC_WEAK_FUNC(sub_83286F80);
PPC_FUNC_IMPL(__imp__sub_83286F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2343
	cr6.compare<uint32_t>(ctx.r11.u32, 2343, xer);
	// beq cr6,0x83286f90
	if (cr6.eq) goto loc_83286F90;
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83286F90:
	// li r4,57
	ctx.r4.s64 = 57;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286F98"))) PPC_WEAK_FUNC(sub_83286F98);
PPC_FUNC_IMPL(__imp__sub_83286F98) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1088
	cr6.compare<uint32_t>(ctx.r11.u32, 1088, xer);
	// beq cr6,0x83287020
	if (cr6.eq) goto loc_83287020;
	// xori r10,r11,2365
	ctx.r10.u64 = ctx.r11.u64 ^ 2365;
	// xori r9,r11,2385
	ctx.r9.u64 = ctx.r11.u64 ^ 2385;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2342
	ctx.r10.u64 = ctx.r11.u64 ^ 2342;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2321
	ctx.r10.u64 = ctx.r11.u64 ^ 2321;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// xori r11,r11,2320
	ctx.r11.u64 = ctx.r11.u64 ^ 2320;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328700c
	if (cr6.eq) goto loc_8328700C;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x832861e0
	ctx.lr = 0x83286FFC;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8328700C:
	// bl 0x83286240
	ctx.lr = 0x83287010;
	sub_83286240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83287020:
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x832861e0
	ctx.lr = 0x83287028;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287038"))) PPC_WEAK_FUNC(sub_83287038);
PPC_FUNC_IMPL(__imp__sub_83287038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1213
	cr6.compare<uint32_t>(ctx.r11.u32, 1213, xer);
	// bgt cr6,0x83287080
	if (cr6.gt) goto loc_83287080;
	// beq cr6,0x83287094
	if (cr6.eq) goto loc_83287094;
	// addi r11,r11,-1132
	ctx.r11.s64 = ctx.r11.s64 + -1132;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x83287090
	if (cr6.gt) goto loc_83287090;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83287094
	if (cr6.eq) goto loc_83287094;
	// bdz 0x83287094
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83287094;
	// bdz 0x83287090
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83287090;
	// bdz 0x83287094
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83287094;
	// bdz 0x83287090
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83287090;
	// bdz 0x83287090
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83287090;
	// bdz 0x83287090
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83287090;
	// bdz 0x83287094
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83287094;
	// b 0x83287094
	goto loc_83287094;
loc_83287080:
	// cmplwi cr6,r11,2434
	cr6.compare<uint32_t>(ctx.r11.u32, 2434, xer);
	// beq cr6,0x83287094
	if (cr6.eq) goto loc_83287094;
	// cmplwi cr6,r11,2435
	cr6.compare<uint32_t>(ctx.r11.u32, 2435, xer);
	// beq cr6,0x83287094
	if (cr6.eq) goto loc_83287094;
loc_83287090:
	// b 0x83286428
	sub_83286428(ctx, base);
	return;
loc_83287094:
	// li r4,126
	ctx.r4.s64 = 126;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328709C"))) PPC_WEAK_FUNC(sub_8328709C);
PPC_FUNC_IMPL(__imp__sub_8328709C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832870A0"))) PPC_WEAK_FUNC(sub_832870A0);
PPC_FUNC_IMPL(__imp__sub_832870A0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r10,r11,1228
	ctx.r10.u64 = ctx.r11.u64 ^ 1228;
	// xori r9,r11,2381
	ctx.r9.u64 = ctx.r11.u64 ^ 2381;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,1088
	ctx.r10.u64 = ctx.r11.u64 ^ 1088;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r10,r4,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832870f4
	if (cr6.eq) goto loc_832870F4;
	// li r4,62
	ctx.r4.s64 = 62;
	// bl 0x832861e0
	ctx.lr = 0x832870E4;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832870F4:
	// xori r10,r11,2365
	ctx.r10.u64 = ctx.r11.u64 ^ 2365;
	// xori r9,r11,2385
	ctx.r9.u64 = ctx.r11.u64 ^ 2385;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2342
	ctx.r10.u64 = ctx.r11.u64 ^ 2342;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2321
	ctx.r10.u64 = ctx.r11.u64 ^ 2321;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// xori r11,r11,2320
	ctx.r11.u64 = ctx.r11.u64 ^ 2320;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83287150
	if (cr6.eq) goto loc_83287150;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x832861e0
	ctx.lr = 0x83287140;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83287150:
	// bl 0x83286240
	ctx.lr = 0x83287154;
	sub_83286240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287164"))) PPC_WEAK_FUNC(sub_83287164);
PPC_FUNC_IMPL(__imp__sub_83287164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287168"))) PPC_WEAK_FUNC(sub_83287168);
PPC_FUNC_IMPL(__imp__sub_83287168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r10,r11,1210
	ctx.r10.u64 = ctx.r11.u64 ^ 1210;
	// xori r11,r11,1152
	ctx.r11.u64 = ctx.r11.u64 ^ 1152;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83287194
	if (cr6.eq) goto loc_83287194;
	// li r4,77
	ctx.r4.s64 = 77;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
loc_83287194:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287198"))) PPC_WEAK_FUNC(sub_83287198);
PPC_FUNC_IMPL(__imp__sub_83287198) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2726
	cr6.compare<uint32_t>(ctx.r11.u32, 2726, xer);
	// beq cr6,0x83287220
	if (cr6.eq) goto loc_83287220;
	// xori r10,r11,2365
	ctx.r10.u64 = ctx.r11.u64 ^ 2365;
	// xori r9,r11,2385
	ctx.r9.u64 = ctx.r11.u64 ^ 2385;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2342
	ctx.r10.u64 = ctx.r11.u64 ^ 2342;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2321
	ctx.r10.u64 = ctx.r11.u64 ^ 2321;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// xori r11,r11,2320
	ctx.r11.u64 = ctx.r11.u64 ^ 2320;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328720c
	if (cr6.eq) goto loc_8328720C;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x832861e0
	ctx.lr = 0x832871FC;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8328720C:
	// bl 0x83286240
	ctx.lr = 0x83287210;
	sub_83286240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83287220:
	// li r4,76
	ctx.r4.s64 = 76;
	// bl 0x832861e0
	ctx.lr = 0x83287228;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287238"))) PPC_WEAK_FUNC(sub_83287238);
PPC_FUNC_IMPL(__imp__sub_83287238) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r9,r11,2320
	ctx.r9.u64 = ctx.r11.u64 ^ 2320;
	// xori r10,r11,1213
	ctx.r10.u64 = ctx.r11.u64 ^ 1213;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83287280
	if (cr6.eq) goto loc_83287280;
	// li r4,67
	ctx.r4.s64 = 67;
	// bl 0x832861e0
	ctx.lr = 0x83287270;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83287280:
	// xori r10,r11,2365
	ctx.r10.u64 = ctx.r11.u64 ^ 2365;
	// xori r9,r11,2385
	ctx.r9.u64 = ctx.r11.u64 ^ 2385;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2342
	ctx.r10.u64 = ctx.r11.u64 ^ 2342;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,2321
	ctx.r10.u64 = ctx.r11.u64 ^ 2321;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// xori r11,r11,2320
	ctx.r11.u64 = ctx.r11.u64 ^ 2320;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832872dc
	if (cr6.eq) goto loc_832872DC;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x832861e0
	ctx.lr = 0x832872CC;
	sub_832861E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832872DC:
	// bl 0x83286240
	ctx.lr = 0x832872E0;
	sub_83286240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1157
	cr6.compare<uint32_t>(ctx.r11.u32, 1157, xer);
	// beq cr6,0x83287300
	if (cr6.eq) goto loc_83287300;
	// b 0x83286878
	sub_83286878(ctx, base);
	return;
loc_83287300:
	// li r4,83
	ctx.r4.s64 = 83;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r10,r11,2410
	ctx.r10.u64 = ctx.r11.u64 ^ 2410;
	// xori r11,r11,1152
	ctx.r11.u64 = ctx.r11.u64 ^ 1152;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83287334
	if (cr6.eq) goto loc_83287334;
	// li r4,85
	ctx.r4.s64 = 85;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
loc_83287334:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1907
	cr6.compare<uint32_t>(ctx.r11.u32, 1907, xer);
	// bgt cr6,0x83287378
	if (cr6.gt) goto loc_83287378;
	// beq cr6,0x832873c8
	if (cr6.eq) goto loc_832873C8;
	// cmplwi cr6,r11,1484
	cr6.compare<uint32_t>(ctx.r11.u32, 1484, xer);
	// bgt cr6,0x83287368
	if (cr6.gt) goto loc_83287368;
	// beq cr6,0x832873c8
	if (cr6.eq) goto loc_832873C8;
	// cmplwi cr6,r11,476
	cr6.compare<uint32_t>(ctx.r11.u32, 476, xer);
	// beq cr6,0x832873c8
	if (cr6.eq) goto loc_832873C8;
	// cmplwi cr6,r11,485
	cr6.compare<uint32_t>(ctx.r11.u32, 485, xer);
loc_83287360:
	// beq cr6,0x832873c8
	if (cr6.eq) goto loc_832873C8;
loc_83287364:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
loc_83287368:
	// cmplwi cr6,r11,1809
	cr6.compare<uint32_t>(ctx.r11.u32, 1809, xer);
	// beq cr6,0x832873c8
	if (cr6.eq) goto loc_832873C8;
	// cmplwi cr6,r11,1906
	cr6.compare<uint32_t>(ctx.r11.u32, 1906, xer);
	// b 0x83287360
	goto loc_83287360;
loc_83287378:
	// addi r11,r11,-2369
	ctx.r11.s64 = ctx.r11.s64 + -2369;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x83287364
	if (cr6.gt) goto loc_83287364;
	// lis r12,-31960
	ctx.r12.s64 = -2094530560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29596
	ctx.r12.s64 = ctx.r12.s64 + 29596;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_832873C8;
	case 1:
		goto loc_832873C8;
	case 2:
		goto loc_832873C8;
	case 3:
		goto loc_832873C8;
	case 4:
		goto loc_83287364;
	case 5:
		goto loc_83287364;
	case 6:
		goto loc_83287364;
	case 7:
		goto loc_83287364;
	case 8:
		goto loc_83287364;
	case 9:
		goto loc_83287364;
	case 10:
		goto loc_832873C8;
	default:
		return;
	}
	// lwz r25,29640(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29640);
	// lwz r25,29640(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29640);
	// lwz r25,29640(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29640);
	// lwz r25,29640(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29640);
	// lwz r25,29540(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29540);
	// lwz r25,29540(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29540);
	// lwz r25,29540(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29540);
	// lwz r25,29540(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29540);
	// lwz r25,29540(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29540);
	// lwz r25,29540(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29540);
	// lwz r25,29640(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29640);
loc_832873C8:
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832873D0"))) PPC_WEAK_FUNC(sub_832873D0);
PPC_FUNC_IMPL(__imp__sub_832873D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// xori r11,r9,2385
	ctx.r11.u64 = ctx.r9.u64 ^ 2385;
	// xori r10,r9,2365
	ctx.r10.u64 = ctx.r9.u64 ^ 2365;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,2342
	ctx.r11.u64 = ctx.r9.u64 ^ 2342;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// xori r11,r9,2321
	ctx.r11.u64 = ctx.r9.u64 ^ 2321;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// xori r11,r9,2320
	ctx.r11.u64 = ctx.r9.u64 ^ 2320;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83287420
	if (cr6.eq) goto loc_83287420;
	// li r4,56
	ctx.r4.s64 = 56;
	// b 0x832861e0
	sub_832861E0(ctx, base);
	return;
loc_83287420:
	// b 0x83286240
	sub_83286240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287424"))) PPC_WEAK_FUNC(sub_83287424);
PPC_FUNC_IMPL(__imp__sub_83287424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287428"))) PPC_WEAK_FUNC(sub_83287428);
PPC_FUNC_IMPL(__imp__sub_83287428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8328743c
	if (!cr6.eq) goto loc_8328743C;
loc_83287434:
	// li r3,-4
	ctx.r3.s64 = -4;
	// blr 
	return;
loc_8328743C:
	// addi r11,r11,-163
	ctx.r11.s64 = ctx.r11.s64 + -163;
	// cmplwi cr6,r11,105
	cr6.compare<uint32_t>(ctx.r11.u32, 105, xer);
	// bge cr6,0x83287434
	if (!cr6.lt) goto loc_83287434;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,11776
	ctx.r8.s64 = ctx.r10.s64 + 11776;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83287464"))) PPC_WEAK_FUNC(sub_83287464);
PPC_FUNC_IMPL(__imp__sub_83287464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287468"))) PPC_WEAK_FUNC(sub_83287468);
PPC_FUNC_IMPL(__imp__sub_83287468) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83287498
	if (!cr6.eq) goto loc_83287498;
loc_83287490:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832874ec
	goto loc_832874EC;
loc_83287498:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,31,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3FF;
	// cmplwi cr6,r11,121
	cr6.compare<uint32_t>(ctx.r11.u32, 121, xer);
	// beq cr6,0x83287490
	if (cr6.eq) goto loc_83287490;
	// cmplwi cr6,r11,131
	cr6.compare<uint32_t>(ctx.r11.u32, 131, xer);
	// bne cr6,0x832874bc
	if (!cr6.eq) goto loc_832874BC;
	// bl 0x831fbd90
	ctx.lr = 0x832874B4;
	sub_831FBD90(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// beq cr6,0x83287490
	if (cr6.eq) goto loc_83287490;
loc_832874BC:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83287490
	if (cr6.eq) goto loc_83287490;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83259198
	ctx.lr = 0x832874D0;
	sub_83259198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83287490
	if (cr6.eq) goto loc_83287490;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,21,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FE;
	// addi r11,r11,-242
	ctx.r11.s64 = ctx.r11.s64 + -242;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_832874EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287504"))) PPC_WEAK_FUNC(sub_83287504);
PPC_FUNC_IMPL(__imp__sub_83287504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287508"))) PPC_WEAK_FUNC(sub_83287508);
PPC_FUNC_IMPL(__imp__sub_83287508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83287510;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83287534
	if (!cr6.eq) goto loc_83287534;
loc_83287528:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83287534:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83287528
	if (cr6.eq) goto loc_83287528;
	// lhz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 76);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne cr6,0x83287570
	if (!cr6.eq) goto loc_83287570;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_83287570:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ab20
	ctx.lr = 0x83287578;
	sub_8322AB20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83287620
	if (cr6.eq) goto loc_83287620;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832875d8
	if (cr6.eq) goto loc_832875D8;
	// li r10,12288
	ctx.r10.s64 = 12288;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832875d8
	if (!cr6.eq) goto loc_832875D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832260e8
	ctx.lr = 0x832875B4;
	sub_832260E8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,23688
	ctx.r4.s64 = ctx.r10.s64 + 23688;
	// addi r3,r9,23676
	ctx.r3.s64 = ctx.r9.s64 + 23676;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x832085e8
	ctx.lr = 0x832875D8;
	sub_832085E8(ctx, base);
loc_832875D8:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lhz r29,18(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 18);
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83287604
	if (cr6.eq) goto loc_83287604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83287604;
	sub_83222030(ctx, base);
loc_83287604:
	// li r11,13
	ctx.r11.s64 = 13;
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r10.u16);
loc_83287620:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328762C"))) PPC_WEAK_FUNC(sub_8328762C);
PPC_FUNC_IMPL(__imp__sub_8328762C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287630"))) PPC_WEAK_FUNC(sub_83287630);
PPC_FUNC_IMPL(__imp__sub_83287630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83287638;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce774
	ctx.lr = 0x83287640;
	__savefpr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,4(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// lhz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 4);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
	// cmplwi cr6,r4,12288
	cr6.compare<uint32_t>(ctx.r4.u32, 12288, xer);
	// bne cr6,0x83287684
	if (!cr6.eq) goto loc_83287684;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,23800
	ctx.r4.s64 = ctx.r11.s64 + 23800;
	// addi r3,r10,23676
	ctx.r3.s64 = ctx.r10.s64 + 23676;
	// bl 0x83208568
	ctx.lr = 0x83287684;
	sub_83208568(ctx, base);
loc_83287684:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83214078
	ctx.lr = 0x8328768C;
	sub_83214078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r23,8
	ctx.r31.s64 = ctx.r23.s64 + 8;
	// dcbt r0,r31
	// lwz r11,268(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 268);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// sth r28,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r28.u16);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// sth r28,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r28.u16);
	// stb r28,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r28.u8);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// sth r28,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r28.u16);
	// bl 0x831fe158
	ctx.lr = 0x832876D8;
	sub_831FE158(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831fbe28
	ctx.lr = 0x832876E0;
	sub_831FBE28(ctx, base);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r31
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287714
	if (cr6.eq) goto loc_83287714;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
loc_83287714:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x83287748
	if (cr6.eq) goto loc_83287748;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// xori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 ^ 2;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287748:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83287770
	if (cr6.eq) goto loc_83287770;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// xori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 ^ 16;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// sth r10,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r10.u16);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287770:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832877f0
	if (cr6.eq) goto loc_832877F0;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// rlwimi r5,r8,16,14,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0x30000) | (ctx.r5.u64 & 0xFFFFFFFFFFFCFFFF);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r5,r5,0,14,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x3FFFC;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lhz r6,34(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x832877d8
	if (!cr6.gt) goto loc_832877D8;
	// lwz r5,100(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_832877BC:
	// lhzx r3,r5,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// beq cr6,0x8328783c
	if (cr6.eq) goto loc_8328783C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// blt cr6,0x832877bc
	if (cr6.lt) goto loc_832877BC;
loc_832877D8:
	// sth r25,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r25.u16);
loc_832877DC:
	// xori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 ^ 32;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_832877F0:
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83287818
	if (cr6.eq) goto loc_83287818;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// xori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 ^ 64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287818:
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832878ac
	if (cr6.eq) goto loc_832878AC;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,14
	cr6.compare<uint32_t>(ctx.r8.u32, 14, xer);
	// bgt cr6,0x83287850
	if (cr6.gt) goto loc_83287850;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x83287868
	goto loc_83287868;
loc_8328783C:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// b 0x832877dc
	goto loc_832877DC;
loc_83287850:
	// cmplwi cr6,r6,53
	cr6.compare<uint32_t>(ctx.r6.u32, 53, xer);
	// bge cr6,0x83287860
	if (!cr6.lt) goto loc_83287860;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x83287868
	goto loc_83287868;
loc_83287860:
	// subfic r10,r6,86
	xer.ca = ctx.r6.u32 <= 86;
	ctx.r10.s64 = 86 - ctx.r6.s64;
	// subfze r10,r29
	temp.u8 = ~ctx.r29.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r29.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83287868:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83287890
	if (!cr6.eq) goto loc_83287890;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,23712
	ctx.r4.s64 = ctx.r10.s64 + 23712;
	// addi r3,r9,23676
	ctx.r3.s64 = ctx.r9.s64 + 23676;
	// bl 0x83208568
	ctx.lr = 0x83287890;
	sub_83208568(ctx, base);
loc_83287890:
	// xoris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 ^ 131072;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// sth r10,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r10.u16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_832878AC:
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// addi r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 3;
	// rlwinm r6,r11,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// rlwinm r10,r7,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfs f12,23280(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23280);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x83287920
	if (cr6.eq) goto loc_83287920;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 ^ 256;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// stb r28,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r28.u8);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287920:
	// rlwinm r8,r11,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287984
	if (cr6.eq) goto loc_83287984;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 ^ 512;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stb r28,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r28.u8);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,160(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287984:
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// rlwinm r7,r11,0,21,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lfs f13,21212(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21212);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x832879f0
	if (cr6.eq) goto loc_832879F0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 ^ 1024;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,192(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stb r28,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r28.u8);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f5,196(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_832879F0:
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// rlwinm r7,r11,0,20,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// addi r6,r8,5696
	ctx.r6.s64 = ctx.r8.s64 + 5696;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lfs f0,204(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x83287a9c
	if (cr6.eq) goto loc_83287A9C;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// xori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 ^ 2048;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,224(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lhz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,228(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lhz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,232(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lhz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,236(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287A9C:
	// rlwinm r8,r11,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287b3c
	if (cr6.eq) goto loc_83287B3C;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// xori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 ^ 4096;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,240(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lhz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,244(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lhz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,248(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lhz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,252(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287B3C:
	// rlwinm r8,r11,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287bcc
	if (cr6.eq) goto loc_83287BCC;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// xori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 ^ 8192;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,224(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lbz r3,1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,228(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,232(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,236(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287BCC:
	// rlwinm r8,r11,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287c5c
	if (cr6.eq) goto loc_83287C5C;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// xori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 ^ 16384;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,240(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lbz r3,1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,244(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,248(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,252(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287C5C:
	// rlwinm r8,r11,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287c84
	if (cr6.eq) goto loc_83287C84;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// xori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 ^ 128;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287C84:
	// rlwinm r8,r11,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287ca8
	if (cr6.eq) goto loc_83287CA8;
	// xoris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 65536;
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// or r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 | ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287CA8:
	// rlwinm r8,r11,0,7,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287d10
	if (cr6.eq) goto loc_83287D10;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// xoris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 ^ 16777216;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// stb r25,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r25.u8);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// stb r25,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r25.u8);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// or r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f6,208(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287D10:
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287d58
	if (cr6.eq) goto loc_83287D58;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 ^ 2;
	// stb r25,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r25.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// stb r25,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r25.u8);
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,216(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287D58:
	// rlwinm r8,r11,0,6,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287d8c
	if (cr6.eq) goto loc_83287D8C;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xoris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 ^ 33554432;
	// stfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// or r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287D8C:
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// rlwinm r7,r11,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lfs f0,23672(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23672);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x83287df8
	if (cr6.eq) goto loc_83287DF8;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// xoris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 ^ 262144;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lhz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r28,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r28.u8);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287DF8:
	// rlwinm r8,r11,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287e5c
	if (cr6.eq) goto loc_83287E5C;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lhz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r28,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r28.u8);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287E5C:
	// rlwinm r8,r11,0,11,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287eb0
	if (cr6.eq) goto loc_83287EB0;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83287e7c
	if (!cr6.eq) goto loc_83287E7C;
	// lwz r8,96(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_83287E7C:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// xoris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 ^ 1048576;
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// or r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwimi r3,r5,16,14,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x30000) | (ctx.r3.u64 & 0xFFFFFFFFFFFCFFFF);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// rlwinm r6,r3,0,14,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x3FFFC;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287EB0:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r8,r11,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83287efc
	if (cr6.eq) goto loc_83287EFC;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xoris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 ^ 134217728;
	// stb r28,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r28.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,200(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
loc_83287EFC:
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328802c
	if (cr6.eq) goto loc_8328802C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f2,152(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f1,88(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f3,168(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f2,88(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f8,180(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// stb r28,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r28.u8);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f4,184(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
loc_8328802C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328806c
	if (cr6.eq) goto loc_8328806C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83288628
	if (cr6.eq) goto loc_83288628;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328810c
	if (cr6.eq) goto loc_8328810C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x83287468
	ctx.lr = 0x8328805C;
	sub_83287468(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328810c
	if (cr6.eq) goto loc_8328810C;
	// b 0x83288108
	goto loc_83288108;
loc_8328806C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832880ec
	if (cr6.eq) goto loc_832880EC;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832880e4
	if (!cr6.eq) goto loc_832880E4;
	// lhz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 232);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bgt cr6,0x832880e4
	if (cr6.gt) goto loc_832880E4;
	// bne cr6,0x83288628
	if (!cr6.eq) goto loc_83288628;
	// rlwinm r11,r10,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832880b8
	if (!cr6.eq) goto loc_832880B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832136e0
	ctx.lr = 0x832880A8;
	sub_832136E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213768
	ctx.lr = 0x832880B0;
	sub_83213768(ctx, base);
	// sth r28,224(r30)
	PPC_STORE_U16(ctx.r30.u32 + 224, ctx.r28.u16);
	// stb r28,79(r30)
	PPC_STORE_U8(ctx.r30.u32 + 79, ctx.r28.u8);
loc_832880B8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328810c
	if (cr6.eq) goto loc_8328810C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x83287468
	ctx.lr = 0x832880D4;
	sub_83287468(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328810c
	if (cr6.eq) goto loc_8328810C;
	// b 0x83288108
	goto loc_83288108;
loc_832880E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214360
	ctx.lr = 0x832880EC;
	sub_83214360(ctx, base);
loc_832880EC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 4);
	// bl 0x83217e18
	ctx.lr = 0x832880F8;
	sub_83217E18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// sth r27,232(r3)
	PPC_STORE_U16(ctx.r3.u32 + 232, ctx.r27.u16);
	// sth r26,234(r3)
	PPC_STORE_U16(ctx.r3.u32 + 234, ctx.r26.u16);
loc_83288108:
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
loc_8328810C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328813c
	if (cr6.eq) goto loc_8328813C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328813c
	if (cr6.eq) goto loc_8328813C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// ori r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 8192;
	// stw r11,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r11.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
loc_8328813C:
	// clrlwi r31,r24,24
	ctx.r31.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83288160
	if (cr6.eq) goto loc_83288160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832151a8
	ctx.lr = 0x83288150;
	sub_832151A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83215148
	ctx.lr = 0x83288158;
	sub_83215148(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83215268
	ctx.lr = 0x83288160;
	sub_83215268(ctx, base);
loc_83288160:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832883e8
	if (!cr6.eq) goto loc_832883E8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFC;
	// rlwinm r10,r10,0,29,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF8000007;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83288304
	if (cr6.eq) goto loc_83288304;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83288250
	if (cr6.eq) goto loc_83288250;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832137a8
	ctx.lr = 0x83288198;
	sub_832137A8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832881b8
	if (cr6.eq) goto loc_832881B8;
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 148, temp.u32);
loc_832881B8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832881d0
	if (cr6.eq) goto loc_832881D0;
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 152, temp.u32);
loc_832881D0:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83288228
	if (cr6.eq) goto loc_83288228;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,112(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,116(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,120(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// lfs f8,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,128(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// lfs f7,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,132(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,136(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
loc_83288228:
	// stb r25,174(r30)
	PPC_STORE_U8(ctx.r30.u32 + 174, ctx.r25.u8);
	// stb r25,175(r30)
	PPC_STORE_U8(ctx.r30.u32 + 175, ctx.r25.u8);
	// lbz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 220);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83288240
	if (!cr6.eq) goto loc_83288240;
	// stb r28,172(r30)
	PPC_STORE_U8(ctx.r30.u32 + 172, ctx.r28.u8);
loc_83288240:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// b 0x83288304
	goto loc_83288304;
loc_83288250:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83288278
	if (cr6.eq) goto loc_83288278;
	// lfs f31,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
loc_83288278:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328828c
	if (cr6.eq) goto loc_8328828C;
	// lfs f29,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f28.f64 = double(temp.f32);
loc_8328828C:
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328829c
	if (cr6.eq) goto loc_8328829C;
	// lfs f27,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f27.f64 = double(temp.f32);
loc_8328829C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213480
	ctx.lr = 0x832882A8;
	sub_83213480(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83288304
	if (cr6.eq) goto loc_83288304;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832882d4
	if (cr6.eq) goto loc_832882D4;
	// stfs f31,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// stb r25,174(r30)
	PPC_STORE_U8(ctx.r30.u32 + 174, ctx.r25.u8);
	// stfs f30,148(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 148, temp.u32);
	// stb r28,172(r30)
	PPC_STORE_U8(ctx.r30.u32 + 172, ctx.r28.u8);
loc_832882D4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832882ec
	if (cr6.eq) goto loc_832882EC;
	// stfs f29,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 240, temp.u32);
	// stfs f28,244(r30)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 244, temp.u32);
loc_832882EC:
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832882fc
	if (cr6.eq) goto loc_832882FC;
	// stfs f27,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 256, temp.u32);
loc_832882FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213740
	ctx.lr = 0x83288304;
	sub_83213740(ctx, base);
loc_83288304:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8328835c
	if (!cr6.eq) goto loc_8328835C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328833c
	if (cr6.eq) goto loc_8328833C;
	// lfs f0,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// stb r25,174(r30)
	PPC_STORE_U8(ctx.r30.u32 + 174, ctx.r25.u8);
	// stfs f13,160(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// stb r25,173(r30)
	PPC_STORE_U8(ctx.r30.u32 + 173, ctx.r25.u8);
	// stfs f0,164(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 164, temp.u32);
loc_8328833C:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328835c
	if (cr6.eq) goto loc_8328835C;
	// lfs f0,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stb r25,174(r30)
	PPC_STORE_U8(ctx.r30.u32 + 174, ctx.r25.u8);
	// stfs f0,168(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// stb r25,173(r30)
	PPC_STORE_U8(ctx.r30.u32 + 173, ctx.r25.u8);
loc_8328835C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328839c
	if (cr6.eq) goto loc_8328839C;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// oris r9,r11,2048
	ctx.r9.u64 = ctx.r11.u64 | 134217728;
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,176(r30)
	PPC_STORE_U64(ctx.r30.u32 + 176, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,184(r30)
	PPC_STORE_U64(ctx.r30.u32 + 184, ctx.r7.u64);
	// ld r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r6,192(r30)
	PPC_STORE_U64(ctx.r30.u32 + 192, ctx.r6.u64);
	// ld r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r5,200(r30)
	PPC_STORE_U64(ctx.r30.u32 + 200, ctx.r5.u64);
loc_8328839C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832883b4
	if (cr6.eq) goto loc_832883B4;
	// lhz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// sth r11,224(r30)
	PPC_STORE_U16(ctx.r30.u32 + 224, ctx.r11.u16);
loc_832883B4:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832883cc
	if (cr6.eq) goto loc_832883CC;
	// lhz r11,142(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 142);
	// stb r11,79(r30)
	PPC_STORE_U8(ctx.r30.u32 + 79, ctx.r11.u8);
loc_832883CC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832883e8
	if (cr6.eq) goto loc_832883E8;
	// rlwinm r4,r11,10,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83217170
	ctx.lr = 0x832883E8;
	sub_83217170(ctx, base);
loc_832883E8:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328842c
	if (!cr6.eq) goto loc_8328842C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83288414
	if (cr6.eq) goto loc_83288414;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321c8c0
	ctx.lr = 0x83288410;
	sub_8321C8C0(ctx, base);
	// b 0x8328842c
	goto loc_8328842C;
loc_83288414:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328842c
	if (cr6.eq) goto loc_8328842C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321c750
	ctx.lr = 0x8328842C;
	sub_8321C750(ctx, base);
loc_8328842C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83287508
	ctx.lr = 0x8328843C;
	sub_83287508(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83288460
	if (cr6.eq) goto loc_83288460;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83288460
	if (cr6.eq) goto loc_83288460;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
loc_83288460:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328853c
	if (cr6.eq) goto loc_8328853C;
	// clrlwi r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832885b4
	if (cr6.eq) goto loc_832885B4;
	// rlwinm r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832884d4
	if (cr6.eq) goto loc_832884D4;
	// lwz r3,280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832884a8
	if (!cr6.eq) goto loc_832884A8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83209aa8
	ctx.lr = 0x8328849C;
	sub_83209AA8(ctx, base);
	// stw r3,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r3.u32);
	// bl 0x832173b0
	ctx.lr = 0x832884A4;
	sub_832173B0(ctx, base);
	// b 0x832884ac
	goto loc_832884AC;
loc_832884A8:
	// bl 0x832173b0
	ctx.lr = 0x832884AC;
	sub_832173B0(ctx, base);
loc_832884AC:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r3,280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// oris r8,r9,4096
	ctx.r8.u64 = ctx.r9.u64 | 268435456;
	// stw r8,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r8.u32);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x83206f30
	ctx.lr = 0x832884D0;
	sub_83206F30(ctx, base);
	// b 0x832885b4
	goto loc_832885B4;
loc_832884D4:
	// lwz r3,268(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x83259198
	ctx.lr = 0x832884E0;
	sub_83259198(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83288504
	if (!cr6.eq) goto loc_83288504;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,23772
	ctx.r4.s64 = ctx.r11.s64 + 23772;
	// addi r3,r10,23676
	ctx.r3.s64 = ctx.r10.s64 + 23676;
	// bl 0x832085e8
	ctx.lr = 0x83288504;
	sub_832085E8(ctx, base);
loc_83288504:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83217f70
	ctx.lr = 0x8328850C;
	sub_83217F70(ctx, base);
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x8328851c
	if (!cr6.eq) goto loc_8328851C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214360
	ctx.lr = 0x8328851C;
	sub_83214360(ctx, base);
loc_8328851C:
	// lwz r3,280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832885b4
	if (cr6.eq) goto loc_832885B4;
	// bl 0x832173b0
	ctx.lr = 0x8328852C;
	sub_832173B0(ctx, base);
	// lwz r3,280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// bl 0x83209d68
	ctx.lr = 0x83288534;
	sub_83209D68(ctx, base);
	// stw r28,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r28.u32);
	// b 0x832885b4
	goto loc_832885B4;
loc_8328853C:
	// rlwinm r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832885b4
	if (cr6.eq) goto loc_832885B4;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832885b4
	if (cr6.eq) goto loc_832885B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832390b0
	ctx.lr = 0x83288560;
	sub_832390B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83288588
	if (cr6.eq) goto loc_83288588;
	// bl 0x83238688
	ctx.lr = 0x83288570;
	sub_83238688(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 268, ctx.r11.u32);
	// bl 0x83217f70
	ctx.lr = 0x83288584;
	sub_83217F70(ctx, base);
	// b 0x832885b4
	goto loc_832885B4;
loc_83288588:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x832278d0
	ctx.lr = 0x83288590;
	sub_832278D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832885b4
	if (cr6.eq) goto loc_832885B4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,23736
	ctx.r4.s64 = ctx.r11.s64 + 23736;
	// addi r3,r10,23676
	ctx.r3.s64 = ctx.r10.s64 + 23676;
	// bl 0x832085e8
	ctx.lr = 0x832885B4;
	sub_832085E8(ctx, base);
loc_832885B4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832885c4
	if (cr6.eq) goto loc_832885C4;
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// sth r11,18(r29)
	PPC_STORE_U16(ctx.r29.u32 + 18, ctx.r11.u16);
loc_832885C4:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328861c
	if (cr6.eq) goto loc_8328861C;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328861c
	if (cr6.eq) goto loc_8328861C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83288614
	if (cr6.eq) goto loc_83288614;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83288604
	if (!cr6.eq) goto loc_83288604;
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,123
	cr6.compare<uint32_t>(ctx.r11.u32, 123, xer);
	// bne cr6,0x8328861c
	if (!cr6.eq) goto loc_8328861C;
loc_83288604:
	// lhz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 82);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// sth r10,82(r30)
	PPC_STORE_U16(ctx.r30.u32 + 82, ctx.r10.u16);
	// b 0x8328861c
	goto loc_8328861C;
loc_83288614:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83215368
	ctx.lr = 0x8328861C;
	sub_83215368(ctx, base);
loc_8328861C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
loc_83288628:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7c0
	ctx.lr = 0x83288634;
	__restfpr_27(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288638"))) PPC_WEAK_FUNC(sub_83288638);
PPC_FUNC_IMPL(__imp__sub_83288638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83288640;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x83210190
	ctx.lr = 0x83288660;
	sub_83210190(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lfs f0,21212(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r29,r7,31
	ctx.r29.u64 = ctx.r7.u32 & 0x1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832886ec
	if (cr6.eq) goto loc_832886EC;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,152(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_832886EC:
	// rlwinm r31,r11,0,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83288714
	if (cr6.eq) goto loc_83288714;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_83288714:
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832138e8
	ctx.lr = 0x83288720;
	sub_832138E8(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// beq cr6,0x8328873c
	if (cr6.eq) goto loc_8328873C;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x83288740
	goto loc_83288740;
loc_8328873C:
	// lfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
loc_83288740:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83288784
	if (cr6.eq) goto loc_83288784;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// stfs f7,20(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
loc_83288784:
	// bl 0x831fe2d8
	ctx.lr = 0x83288788;
	sub_831FE2D8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288794"))) PPC_WEAK_FUNC(sub_83288794);
PPC_FUNC_IMPL(__imp__sub_83288794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288798"))) PPC_WEAK_FUNC(sub_83288798);
PPC_FUNC_IMPL(__imp__sub_83288798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832887A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x83214078
	ctx.lr = 0x832887BC;
	sub_83214078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328890c
	if (cr6.eq) goto loc_8328890C;
	// lhz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 232);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bge cr6,0x8328890c
	if (!cr6.lt) goto loc_8328890C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83288864
	if (cr6.eq) goto loc_83288864;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83266af0
	ctx.lr = 0x832887FC;
	sub_83266AF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x83288810
	if (!cr6.eq) goto loc_83288810;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83288828
	goto loc_83288828;
loc_83288810:
	// cmpwi cr6,r27,-1000
	cr6.compare<int32_t>(ctx.r27.s32, -1000, xer);
	// bgt cr6,0x83288824
	if (cr6.gt) goto loc_83288824;
	// cmpwi cr6,r27,-3000
	cr6.compare<int32_t>(ctx.r27.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x83288828
	if (cr6.gt) goto loc_83288828;
loc_83288824:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83288828:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83288868
	if (!cr6.eq) goto loc_83288868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216950
	ctx.lr = 0x8328883C;
	sub_83216950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83288868
	if (cr6.eq) goto loc_83288868;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266a90
	ctx.lr = 0x8328885C;
	sub_83266A90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x83288868
	goto loc_83288868;
loc_83288864:
	// bl 0x83215290
	ctx.lr = 0x83288868;
	sub_83215290(ctx, base);
loc_83288868:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214360
	ctx.lr = 0x83288870;
	sub_83214360(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328890c
	if (cr6.eq) goto loc_8328890C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328890c
	if (cr6.eq) goto loc_8328890C;
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stb r29,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r29.u8);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lhz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// bne cr6,0x832888c0
	if (!cr6.eq) goto loc_832888C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
loc_832888C0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322ab20
	ctx.lr = 0x832888CC;
	sub_8322AB20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328890c
	if (cr6.eq) goto loc_8328890C;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bne cr6,0x8328890c
	if (!cr6.eq) goto loc_8328890C;
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x83288908
	if (cr6.eq) goto loc_83288908;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x8328890c
	if (!cr6.eq) goto loc_8328890C;
	// bl 0x832356e0
	ctx.lr = 0x83288900;
	sub_832356E0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r11,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r11.u16);
loc_83288908:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
loc_8328890C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288918"))) PPC_WEAK_FUNC(sub_83288918);
PPC_FUNC_IMPL(__imp__sub_83288918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328893c
	if (cr6.eq) goto loc_8328893C;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// blr 
	return;
loc_8328893C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288958"))) PPC_WEAK_FUNC(sub_83288958);
PPC_FUNC_IMPL(__imp__sub_83288958) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83288984
	if (!cr6.eq) goto loc_83288984;
loc_83288970:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83288984:
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1809
	cr6.compare<uint32_t>(ctx.r10.u32, 1809, xer);
	// beq cr6,0x832889bc
	if (cr6.eq) goto loc_832889BC;
	// cmplwi cr6,r10,1820
	cr6.compare<uint32_t>(ctx.r10.u32, 1820, xer);
	// bne cr6,0x83288970
	if (!cr6.eq) goto loc_83288970;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// bl 0x8322e5b0
	ctx.lr = 0x832889A8;
	sub_8322E5B0(ctx, base);
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
loc_832889BC:
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83223ca8
	ctx.lr = 0x832889CC;
	sub_83223CA8(ctx, base);
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

__attribute__((alias("__imp__sub_832889E0"))) PPC_WEAK_FUNC(sub_832889E0);
PPC_FUNC_IMPL(__imp__sub_832889E0) {
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
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83288a1c
	if (cr6.eq) goto loc_83288A1C;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83288A1C:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83294018
	ctx.lr = 0x83288A2C;
	sub_83294018(ctx, base);
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

__attribute__((alias("__imp__sub_83288A40"))) PPC_WEAK_FUNC(sub_83288A40);
PPC_FUNC_IMPL(__imp__sub_83288A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83288A48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83288A68;
	sub_83209AA8(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83288A78;
	sub_83294018(ctx, base);
	// stw r29,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r29.u32);
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r30.u32);
	// bl 0x832277e8
	ctx.lr = 0x83288A8C;
	sub_832277E8(ctx, base);
	// sth r3,2(r26)
	PPC_STORE_U16(ctx.r26.u32 + 2, ctx.r3.u16);
	// sth r28,4(r26)
	PPC_STORE_U16(ctx.r26.u32 + 4, ctx.r28.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r27,6(r26)
	PPC_STORE_U16(ctx.r26.u32 + 6, ctx.r27.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288AA4"))) PPC_WEAK_FUNC(sub_83288AA4);
PPC_FUNC_IMPL(__imp__sub_83288AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288AA8"))) PPC_WEAK_FUNC(sub_83288AA8);
PPC_FUNC_IMPL(__imp__sub_83288AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x83288AB0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// add r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83288b10
	if (!cr6.gt) goto loc_83288B10;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83288AEC:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// blt cr6,0x83288b08
	if (cr6.lt) goto loc_83288B08;
	// add r9,r28,r18
	ctx.r9.u64 = ctx.r28.u64 + ctx.r18.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x83288b08
	if (!cr6.lt) goto loc_83288B08;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83288B08:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83288aec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83288AEC;
loc_83288B10:
	// bl 0x83273b48
	ctx.lr = 0x83288B14;
	sub_83273B48(ctx, base);
	// lhz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 2);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83288bf4
	if (cr6.eq) goto loc_83288BF4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r20,13
	ctx.r20.s64 = 13;
	// ori r26,r11,8400
	ctx.r26.u64 = ctx.r11.u64 | 8400;
	// li r21,138
	ctx.r21.s64 = 138;
loc_83288B44:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// blt cr6,0x83288be0
	if (cr6.lt) goto loc_83288BE0;
	// add r10,r28,r18
	ctx.r10.u64 = ctx.r28.u64 + ctx.r18.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83288be0
	if (!cr6.lt) goto loc_83288BE0;
	// lhz r9,2(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// subf r16,r28,r11
	ctx.r16.s64 = ctx.r11.s64 - ctx.r28.s64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r8,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r30,r11,r19
	ctx.r30.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83288B7C;
	sub_83209AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r27,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r27.u16);
	// sth r27,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r27.u16);
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// bl 0x832277e8
	ctx.lr = 0x83288B98;
	sub_832277E8(ctx, base);
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// sth r16,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r16.u16);
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sraw r3,r26,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r26.s32 < 0) & (((ctx.r26.s32 >> temp.u32) << temp.u32) != ctx.r26.s32);
	ctx.r3.s64 = ctx.r26.s32 >> temp.u32;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83288bc0
	if (cr6.eq) goto loc_83288BC0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83288BC0;
	sub_83222030(ctx, base);
loc_83288BC0:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r20,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r20.u16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// sth r21,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r21.u16);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83270fa0
	ctx.lr = 0x83288BDC;
	sub_83270FA0(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_83288BE0:
	// lhz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 2);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// blt cr6,0x83288b44
	if (cr6.lt) goto loc_83288B44;
loc_83288BF4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83288BFC;
	sub_83222030(ctx, base);
	// stw r22,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288C0C"))) PPC_WEAK_FUNC(sub_83288C0C);
PPC_FUNC_IMPL(__imp__sub_83288C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288C10"))) PPC_WEAK_FUNC(sub_83288C10);
PPC_FUNC_IMPL(__imp__sub_83288C10) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83288c48
	if (!cr6.eq) goto loc_83288C48;
loc_83288C30:
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_83288C48:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,1809
	cr6.compare<uint32_t>(ctx.r10.u32, 1809, xer);
	// beq cr6,0x83288ca8
	if (cr6.eq) goto loc_83288CA8;
	// cmplwi cr6,r10,1821
	cr6.compare<uint32_t>(ctx.r10.u32, 1821, xer);
	// beq cr6,0x83288c98
	if (cr6.eq) goto loc_83288C98;
	// cmplwi cr6,r10,1822
	cr6.compare<uint32_t>(ctx.r10.u32, 1822, xer);
	// bne cr6,0x83288c30
	if (!cr6.eq) goto loc_83288C30;
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x83288aa8
	ctx.lr = 0x83288C84;
	sub_83288AA8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83266dd0
	ctx.lr = 0x83288C94;
	sub_83266DD0(ctx, base);
	// b 0x83288cb8
	goto loc_83288CB8;
loc_83288C98:
	// lhz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x83288CA4;
	sub_8322E5B0(ctx, base);
	// b 0x83288cb8
	goto loc_83288CB8;
loc_83288CA8:
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223ca8
	ctx.lr = 0x83288CB8;
	sub_83223CA8(ctx, base);
loc_83288CB8:
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

__attribute__((alias("__imp__sub_83288CD0"))) PPC_WEAK_FUNC(sub_83288CD0);
PPC_FUNC_IMPL(__imp__sub_83288CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83288CD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83213da0
	ctx.lr = 0x83288CE8;
	sub_83213DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213dd8
	ctx.lr = 0x83288CF4;
	sub_83213DD8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83288db4
	if (cr6.eq) goto loc_83288DB4;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83288db4
	if (cr6.eq) goto loc_83288DB4;
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83288db4
	if (cr6.eq) goto loc_83288DB4;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ble cr6,0x83288d54
	if (!cr6.gt) goto loc_83288D54;
	// lhz r7,86(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 86);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
loc_83288D38:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// blt cr6,0x83288d84
	if (cr6.lt) goto loc_83288D84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83288d38
	if (cr6.lt) goto loc_83288D38;
loc_83288D54:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lhz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lhz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83288D84:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lhz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// lhzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83288DB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288DCC"))) PPC_WEAK_FUNC(sub_83288DCC);
PPC_FUNC_IMPL(__imp__sub_83288DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288DD0"))) PPC_WEAK_FUNC(sub_83288DD0);
PPC_FUNC_IMPL(__imp__sub_83288DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83288DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,268(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83213da0
	ctx.lr = 0x83288DEC;
	sub_83213DA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// beq cr6,0x83288e24
	if (cr6.eq) goto loc_83288E24;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r5,86(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83259ce0
	ctx.lr = 0x83288E1C;
	sub_83259CE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83288e34
	if (cr6.eq) goto loc_83288E34;
loc_83288E24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213150
	ctx.lr = 0x83288E2C;
	sub_83213150(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83288E34:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83223d00
	ctx.lr = 0x83288E40;
	sub_83223D00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288E48"))) PPC_WEAK_FUNC(sub_83288E48);
PPC_FUNC_IMPL(__imp__sub_83288E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83288E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,268(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83213da0
	ctx.lr = 0x83288E64;
	sub_83213DA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// beq cr6,0x83288e9c
	if (cr6.eq) goto loc_83288E9C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r5,86(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83259d88
	ctx.lr = 0x83288E94;
	sub_83259D88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83288eac
	if (cr6.eq) goto loc_83288EAC;
loc_83288E9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213150
	ctx.lr = 0x83288EA4;
	sub_83213150(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83288EAC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83223d00
	ctx.lr = 0x83288EB8;
	sub_83223D00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288EC0"))) PPC_WEAK_FUNC(sub_83288EC0);
PPC_FUNC_IMPL(__imp__sub_83288EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83288EC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83213da0
	ctx.lr = 0x83288EE8;
	sub_83213DA0(ctx, base);
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x83288cd0
	ctx.lr = 0x83288F0C;
	sub_83288CD0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83288aa8
	ctx.lr = 0x83288F24;
	sub_83288AA8(ctx, base);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83288f4c
	if (cr6.eq) goto loc_83288F4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83288F4C;
	sub_83222030(ctx, base);
loc_83288F4C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,32
	ctx.r10.s64 = 32;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// sth r7,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r7.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288F78"))) PPC_WEAK_FUNC(sub_83288F78);
PPC_FUNC_IMPL(__imp__sub_83288F78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83288F80;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83213da0
	ctx.lr = 0x83288FA0;
	sub_83213DA0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x83288cd0
	ctx.lr = 0x83288FC4;
	sub_83288CD0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x83289038
	if (cr6.eq) goto loc_83289038;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83289038
	if (cr6.eq) goto loc_83289038;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83289038
	if (cr6.eq) goto loc_83289038;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r5,2(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwimi r11,r5,16,14,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x30000) | (ctx.r11.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r11,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83288a40
	ctx.lr = 0x8328902C;
	sub_83288A40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83289078
	if (!cr6.eq) goto loc_83289078;
loc_83289038:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x83209aa8
	ctx.lr = 0x83289044;
	sub_83209AA8(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83289054;
	sub_83294018(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x832277e8
	ctx.lr = 0x8328906C;
	sub_832277E8(ctx, base);
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// sth r26,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r26.u16);
	// sth r27,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r27.u16);
loc_83289078:
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832890a0
	if (cr6.eq) goto loc_832890A0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83222030
	ctx.lr = 0x832890A0;
	sub_83222030(ctx, base);
loc_832890A0:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// stw r31,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r31.u32);
	// li r10,139
	ctx.r10.s64 = 139;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r25)
	PPC_STORE_U16(ctx.r25.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r8.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832890C8"))) PPC_WEAK_FUNC(sub_832890C8);
PPC_FUNC_IMPL(__imp__sub_832890C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x832890D0;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83213da0
	ctx.lr = 0x832890F0;
	sub_83213DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// bl 0x83213dd8
	ctx.lr = 0x83289104;
	sub_83213DD8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r16,13
	ctx.r16.s64 = 13;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// ori r21,r10,8400
	ctx.r21.u64 = ctx.r10.u64 | 8400;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// li r17,139
	ctx.r17.s64 = 139;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8328922c
	if (cr6.eq) goto loc_8328922C;
	// lwz r25,12(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8328922c
	if (cr6.eq) goto loc_8328922C;
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328922c
	if (cr6.eq) goto loc_8328922C;
	// lwz r23,24(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x83273b48
	ctx.lr = 0x83289158;
	sub_83273B48(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83289224
	if (cr6.eq) goto loc_83289224;
	// addi r20,r23,-1
	ctx.r20.s64 = ctx.r23.s64 + -1;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_83289170:
	// lhz r9,-2(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + -2);
	// cmplw cr6,r30,r20
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, xer);
	// lhz r28,-4(r29)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r29.u32 + -4);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r8,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
	// blt cr6,0x83289198
	if (cr6.lt) goto loc_83289198;
	// subf r26,r28,r18
	ctx.r26.s64 = ctx.r18.s64 - ctx.r28.s64;
	// b 0x832891a0
	goto loc_832891A0;
loc_83289198:
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// subf r26,r28,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r28.s64;
loc_832891A0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x83209aa8
	ctx.lr = 0x832891A8;
	sub_83209AA8(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x832891B8;
	sub_83294018(ctx, base);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// bl 0x832277e8
	ctx.lr = 0x832891CC;
	sub_832277E8(ctx, base);
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// sth r26,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r26.u16);
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r21,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r21.s32 < 0) & (((ctx.r21.s32 >> temp.u32) << temp.u32) != ctx.r21.s32);
	ctx.r6.s64 = ctx.r21.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832891f8
	if (cr6.eq) goto loc_832891F8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x832891F8;
	sub_83222030(ctx, base);
loc_832891F8:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// sth r16,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r16.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r17,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r17.u16);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83270fa0
	ctx.lr = 0x83289214;
	sub_83270FA0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r23
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, xer);
	// blt cr6,0x83289170
	if (cr6.lt) goto loc_83289170;
loc_83289224:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x832892b4
	if (!cr6.eq) goto loc_832892B4;
loc_8328922C:
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83273b48
	ctx.lr = 0x83289238;
	sub_83273B48(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x83209aa8
	ctx.lr = 0x83289244;
	sub_83209AA8(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83289254;
	sub_83294018(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x832277e8
	ctx.lr = 0x8328926C;
	sub_832277E8(ctx, base);
	// sth r19,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r19.u16);
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// sth r18,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r18.u16);
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r21,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r21.s32 < 0) & (((ctx.r21.s32 >> temp.u32) << temp.u32) != ctx.r21.s32);
	ctx.r6.s64 = ctx.r21.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83289298
	if (cr6.eq) goto loc_83289298;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x83289298;
	sub_83222030(ctx, base);
loc_83289298:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// sth r16,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r16.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r17,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r17.u16);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83270fa0
	ctx.lr = 0x832892B4;
	sub_83270FA0(ctx, base);
loc_832892B4:
	// lhz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r15.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sraw r9,r21,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r21.s32 < 0) & (((ctx.r21.s32 >> temp.u32) << temp.u32) != ctx.r21.s32);
	ctx.r9.s64 = ctx.r21.s32 >> temp.u32;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832892d4
	if (cr6.eq) goto loc_832892D4;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83222030
	ctx.lr = 0x832892D4;
	sub_83222030(ctx, base);
loc_832892D4:
	// cntlzw r11,r22
	ctx.r11.u64 = ctx.r22.u32 == 0 ? 32 : __builtin_clz(ctx.r22.u32);
	// stw r22,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r22.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r15)
	PPC_STORE_U16(ctx.r15.u32 + 2, ctx.r10.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r15)
	PPC_STORE_U16(ctx.r15.u32 + 0, ctx.r8.u16);
	// bl 0x83222030
	ctx.lr = 0x832892FC;
	sub_83222030(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289304"))) PPC_WEAK_FUNC(sub_83289304);
PPC_FUNC_IMPL(__imp__sub_83289304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289308"))) PPC_WEAK_FUNC(sub_83289308);
PPC_FUNC_IMPL(__imp__sub_83289308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83289310;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83213da0
	ctx.lr = 0x83289324;
	sub_83213DA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83213dd8
	ctx.lr = 0x83289330;
	sub_83213DD8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832893cc
	if (cr6.eq) goto loc_832893CC;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832893cc
	if (cr6.eq) goto loc_832893CC;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832893cc
	if (cr6.eq) goto loc_832893CC;
	// rlwinm r8,r30,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// and r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 & ctx.r30.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83289378
	if (cr6.lt) goto loc_83289378;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_83289378:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// lhzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// bge cr6,0x832893b4
	if (!cr6.lt) goto loc_832893B4;
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832893B4:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832893CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832893E8"))) PPC_WEAK_FUNC(sub_832893E8);
PPC_FUNC_IMPL(__imp__sub_832893E8) {
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
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x83289424
	if (cr6.eq) goto loc_83289424;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,23824
	ctx.r3.s64 = ctx.r11.s64 + 23824;
	// bl 0x8320d088
	ctx.lr = 0x83289424;
	sub_8320D088(ctx, base);
loc_83289424:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83288cd0
	ctx.lr = 0x83289430;
	sub_83288CD0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x83289308
	ctx.lr = 0x83289444;
	sub_83289308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x832181c8
	ctx.lr = 0x83289450;
	sub_832181C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83219cf0
	ctx.lr = 0x83289458;
	sub_83219CF0(ctx, base);
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

__attribute__((alias("__imp__sub_8328946C"))) PPC_WEAK_FUNC(sub_8328946C);
PPC_FUNC_IMPL(__imp__sub_8328946C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289470"))) PPC_WEAK_FUNC(sub_83289470);
PPC_FUNC_IMPL(__imp__sub_83289470) {
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
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x832894ac
	if (cr6.eq) goto loc_832894AC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,23824
	ctx.r3.s64 = ctx.r11.s64 + 23824;
	// bl 0x8320d088
	ctx.lr = 0x832894AC;
	sub_8320D088(ctx, base);
loc_832894AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83288cd0
	ctx.lr = 0x832894B8;
	sub_83288CD0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x83289308
	ctx.lr = 0x832894CC;
	sub_83289308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x832181c8
	ctx.lr = 0x832894D8;
	sub_832181C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83219cf0
	ctx.lr = 0x832894E0;
	sub_83219CF0(ctx, base);
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

__attribute__((alias("__imp__sub_832894F4"))) PPC_WEAK_FUNC(sub_832894F4);
PPC_FUNC_IMPL(__imp__sub_832894F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832894F8"))) PPC_WEAK_FUNC(sub_832894F8);
PPC_FUNC_IMPL(__imp__sub_832894F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83289500;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sth r5,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r5.u16);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// bgt cr6,0x83289538
	if (cr6.gt) goto loc_83289538;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,196
	ctx.r10.s64 = 196;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// bl 0x8325b4d8
	ctx.lr = 0x83289534;
	sub_8325B4D8(ctx, base);
	// b 0x83289550
	goto loc_83289550;
loc_83289538:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209aa8
	ctx.lr = 0x83289550;
	sub_83209AA8(ctx, base);
loc_83289550:
	// stw r3,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r3.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x832895a4
	if (!cr6.gt) goto loc_832895A4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,6
	ctx.r27.s64 = 6;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83289568:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r5,3
	ctx.r5.s64 = 3;
	// add r4,r30,r26
	ctx.r4.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwx r31,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u32);
	// stb r27,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r27.u8);
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r31.u8);
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r31.u16);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// bl 0x8322aa98
	ctx.lr = 0x83289598;
	sub_8322AA98(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x83289568
	if (!cr0.eq) goto loc_83289568;
loc_832895A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832895AC"))) PPC_WEAK_FUNC(sub_832895AC);
PPC_FUNC_IMPL(__imp__sub_832895AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832895B0"))) PPC_WEAK_FUNC(sub_832895B0);
PPC_FUNC_IMPL(__imp__sub_832895B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832895B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83289614
	if (cr6.eq) goto loc_83289614;
	// dcbt r0,r30
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83289614
	if (!cr6.gt) goto loc_83289614;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832895EC:
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832897a8
	if (cr6.eq) goto loc_832897A8;
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x832895ec
	if (cr6.lt) goto loc_832895EC;
loc_83289614:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// srawi r10,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x83289760
	if (!cr0.eq) goto loc_83289760;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83289654
	if (!cr6.eq) goto loc_83289654;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,196
	ctx.r10.s64 = 196;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// bl 0x8325b4d8
	ctx.lr = 0x83289650;
	sub_8325B4D8(ctx, base);
	// b 0x8328975c
	goto loc_8328975C;
loc_83289654:
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x83289740
	if (!cr6.eq) goto loc_83289740;
	// li r3,768
	ctx.r3.s64 = 768;
	// bl 0x83209aa8
	ctx.lr = 0x83289664;
	sub_83209AA8(ctx, base);
	// subfic r5,r30,24
	xer.ca = ctx.r30.u32 <= 24;
	ctx.r5.s64 = 24 - ctx.r30.s64;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// subfic r4,r30,-48
	xer.ca = ctx.r30.u32 <= 4294967248;
	ctx.r4.s64 = -48 - ctx.r30.s64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8328967C:
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// ld r3,-48(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -48);
	// addi r28,r11,24
	ctx.r28.s64 = ctx.r11.s64 + 24;
	// add r27,r8,r6
	ctx.r27.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r26,r11,-48
	ctx.r26.s64 = ctx.r11.s64 + -48;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stdx r3,r8,r6
	PPC_STORE_U64(ctx.r8.u32 + ctx.r6.u32, ctx.r3.u64);
	// ld r6,-40(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + -40);
	// std r6,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r6.u64);
	// ld r3,-32(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -32);
	// std r3,16(r27)
	PPC_STORE_U64(ctx.r27.u32 + 16, ctx.r3.u64);
	// ld r3,-24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -24);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// std r3,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r3.u64);
	// addi r6,r8,24
	ctx.r6.s64 = ctx.r8.s64 + 24;
	// ld r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// std r3,32(r8)
	PPC_STORE_U64(ctx.r8.u32 + 32, ctx.r3.u64);
	// ld r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// std r6,40(r8)
	PPC_STORE_U64(ctx.r8.u32 + 40, ctx.r6.u64);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r3,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r3.u64);
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// ld r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// std r3,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r3.u64);
	// ld r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stdx r6,r7,r8
	PPC_STORE_U64(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u64);
	// ld r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// ld r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// std r7,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r7.u64);
	// bne 0x8328967c
	if (!cr0.eq) goto loc_8328967C;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,196
	ctx.r10.s64 = 196;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// bl 0x8325b658
	ctx.lr = 0x8328973C;
	sub_8325B658(ctx, base);
	// b 0x83289760
	goto loc_83289760;
loc_83289740:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209df8
	ctx.lr = 0x8328975C;
	sub_83209DF8(ctx, base);
loc_8328975C:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_83289760:
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r6,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r6.u16);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// stb r7,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
	// stb r29,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r29.u8);
	// sth r29,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r29.u16);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
loc_832897A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832897B0"))) PPC_WEAK_FUNC(sub_832897B0);
PPC_FUNC_IMPL(__imp__sub_832897B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832897B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// blt cr6,0x83289928
	if (cr6.lt) goto loc_83289928;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r9,r10,15
	ctx.r9.s64 = ctx.r10.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// beq cr6,0x832898c8
	if (cr6.eq) goto loc_832898C8;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x83289814
	if (!cr6.eq) goto loc_83289814;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,196
	ctx.r10.s64 = 196;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// bl 0x8325b4d8
	ctx.lr = 0x83289810;
	sub_8325B4D8(ctx, base);
	// b 0x832898c4
	goto loc_832898C4;
loc_83289814:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x83289830
	if (!cr6.eq) goto loc_83289830;
	// bl 0x83209aa8
	ctx.lr = 0x8328982C;
	sub_83209AA8(ctx, base);
	// b 0x832898c4
	goto loc_832898C4;
loc_83289830:
	// cmpwi cr6,r8,16
	cr6.compare<int32_t>(ctx.r8.s32, 16, xer);
	// bne cr6,0x832898b8
	if (!cr6.eq) goto loc_832898B8;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83209aa8
	ctx.lr = 0x83289840;
	sub_83209AA8(ctx, base);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83289898
	if (!cr6.gt) goto loc_83289898;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8328985C:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// ldx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r29.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// lhz r3,14(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8328985c
	if (cr6.lt) goto loc_8328985C;
loc_83289898:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,196
	ctx.r10.s64 = 196;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// bl 0x8325b658
	ctx.lr = 0x832898B4;
	sub_8325B658(ctx, base);
	// b 0x832898c8
	goto loc_832898C8;
loc_832898B8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83209df8
	ctx.lr = 0x832898C4;
	sub_83209DF8(ctx, base);
loc_832898C4:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_832898C8:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bgt cr6,0x83289920
	if (cr6.gt) goto loc_83289920;
	// subf r9,r11,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r11.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r9,6
	ctx.r9.s64 = 6;
loc_832898F4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stb r30,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r30.u8);
	// sth r30,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r30.u16);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// bdnz 0x832898f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832898F4;
loc_83289920:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
loc_83289928:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289930"))) PPC_WEAK_FUNC(sub_83289930);
PPC_FUNC_IMPL(__imp__sub_83289930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83289938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832899d8
	if (!cr6.gt) goto loc_832899D8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ble cr6,0x83289994
	if (!cr6.gt) goto loc_83289994;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83289964:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328997c
	if (cr6.eq) goto loc_8328997C;
	// bl 0x8322a9e8
	ctx.lr = 0x8328997C;
	sub_8322A9E8(ctx, base);
loc_8328997C:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x83289964
	if (cr6.lt) goto loc_83289964;
loc_83289994:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// bgt cr6,0x832899d0
	if (cr6.gt) goto loc_832899D0;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,196
	ctx.r10.s64 = 196;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8325b658
	ctx.lr = 0x832899C0;
	sub_8325B658(ctx, base);
	// sth r28,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r28.u16);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832899D0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83209d68
	ctx.lr = 0x832899D8;
	sub_83209D68(ctx, base);
loc_832899D8:
	// sth r28,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r28.u16);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832899E8"))) PPC_WEAK_FUNC(sub_832899E8);
PPC_FUNC_IMPL(__imp__sub_832899E8) {
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
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,16
	cr6.compare<int32_t>(ctx.r7.s32, 16, xer);
	// ble cr6,0x83289ab0
	if (!cr6.gt) goto loc_83289AB0;
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83289a48
	if (cr0.lt) goto loc_83289A48;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_83289A2C:
	// lbz r8,5(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83289a48
	if (!cr6.eq) goto loc_83289A48;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bge 0x83289a2c
	if (!cr0.lt) goto loc_83289A2C;
loc_83289A48:
	// addic. r30,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r30.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt 0x83289a70
	if (cr0.gt) goto loc_83289A70;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83289ab0
	if (cr6.eq) goto loc_83289AB0;
	// bl 0x83209d68
	ctx.lr = 0x83289A60;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// b 0x83289ab0
	goto loc_83289AB0;
loc_83289A70:
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// ble cr6,0x83289ab0
	if (!cr6.gt) goto loc_83289AB0;
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83289ab0
	if (cr6.gt) goto loc_83289AB0;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,1,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209df8
	ctx.lr = 0x83289AA8;
	sub_83209DF8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// sth r30,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r30.u16);
loc_83289AB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289AC8"))) PPC_WEAK_FUNC(sub_83289AC8);
PPC_FUNC_IMPL(__imp__sub_83289AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x83289b60
	if (cr6.gt) goto loc_83289B60;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83289b00
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83289B00;
	// bdzf 4*cr6+eq,0x83289b44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83289B44;
	// bdzf 4*cr6+eq,0x83289b18
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83289B18;
	// bne cr6,0x83289b44
	if (!cr6.eq) goto loc_83289B44;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_83289B00:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83289b30
	if (!cr6.eq) goto loc_83289B30;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83289b14
	if (cr6.eq) goto loc_83289B14;
	// li r3,3
	ctx.r3.s64 = 3;
loc_83289B14:
	// blr 
	return;
loc_83289B18:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83289b30
	if (!cr6.eq) goto loc_83289B30;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83289b14
	if (!cr6.eq) goto loc_83289B14;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83289B30:
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// blr 
	return;
loc_83289B44:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83289b14
	if (!cr6.eq) goto loc_83289B14;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_83289B60:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r4,r10,23848
	ctx.r4.s64 = ctx.r10.s64 + 23848;
	// addi r3,r9,23836
	ctx.r3.s64 = ctx.r9.s64 + 23836;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x83208568
	sub_83208568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289B78"))) PPC_WEAK_FUNC(sub_83289B78);
PPC_FUNC_IMPL(__imp__sub_83289B78) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83289bbc
	if (cr6.eq) goto loc_83289BBC;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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
loc_83289BBC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83209d68
	ctx.lr = 0x83289BC4;
	sub_83209D68(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83209d68
	ctx.lr = 0x83289BCC;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,595
	ctx.r10.s64 = 595;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// sth r10,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r10.u16);
	// stb r11,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83289C10"))) PPC_WEAK_FUNC(sub_83289C10);
PPC_FUNC_IMPL(__imp__sub_83289C10) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83289c38
	if (cr6.eq) goto loc_83289C38;
	// bl 0x8320e738
	ctx.lr = 0x83289C38;
	sub_8320E738(ctx, base);
loc_83289C38:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x83209aa8
	ctx.lr = 0x83289C40;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,595
	ctx.r10.s64 = 595;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// ori r8,r9,8400
	ctx.r8.u64 = ctx.r9.u64 | 8400;
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// sth r10,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r10.u16);
	// stb r11,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sraw r5,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r5.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83289c9c
	if (cr6.eq) goto loc_83289C9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83289C9C;
	sub_83222030(ctx, base);
loc_83289C9C:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r10,162
	ctx.r10.s64 = 162;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289CC8"))) PPC_WEAK_FUNC(sub_83289CC8);
PPC_FUNC_IMPL(__imp__sub_83289CC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83209d68
	ctx.lr = 0x83289CEC;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,595
	ctx.r10.s64 = 595;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83224528
	ctx.lr = 0x83289D1C;
	sub_83224528(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x83289d30
	if (cr6.lt) goto loc_83289D30;
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// b 0x83289d50
	goto loc_83289D50;
loc_83289D30:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x83289d48
	if (cr6.eq) goto loc_83289D48;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x83289d6c
	goto loc_83289D6C;
loc_83289D48:
	// bl 0x83209c20
	ctx.lr = 0x83289D4C;
	sub_83209C20(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83289D50:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83289d6c
	if (cr6.eq) goto loc_83289D6C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x83289d6c
	if (cr6.eq) goto loc_83289D6C;
	// bl 0x83209d68
	ctx.lr = 0x83289D6C;
	sub_83209D68(ctx, base);
loc_83289D6C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83289D88"))) PPC_WEAK_FUNC(sub_83289D88);
PPC_FUNC_IMPL(__imp__sub_83289D88) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1809
	cr6.compare<uint32_t>(ctx.r11.u32, 1809, xer);
	// beq cr6,0x83289dc4
	if (cr6.eq) goto loc_83289DC4;
	// cmplwi cr6,r11,1977
	cr6.compare<uint32_t>(ctx.r11.u32, 1977, xer);
	// beq cr6,0x83289dbc
	if (cr6.eq) goto loc_83289DBC;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83289DBC:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x83289dc8
	goto loc_83289DC8;
loc_83289DC4:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_83289DC8:
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83289cc8
	ctx.lr = 0x83289DD0;
	sub_83289CC8(ctx, base);
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

__attribute__((alias("__imp__sub_83289DE4"))) PPC_WEAK_FUNC(sub_83289DE4);
PPC_FUNC_IMPL(__imp__sub_83289DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289DE8"))) PPC_WEAK_FUNC(sub_83289DE8);
PPC_FUNC_IMPL(__imp__sub_83289DE8) {
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
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,1809
	cr6.compare<uint32_t>(ctx.r10.u32, 1809, xer);
	// beq cr6,0x83289e28
	if (cr6.eq) goto loc_83289E28;
	// cmplwi cr6,r10,1977
	cr6.compare<uint32_t>(ctx.r10.u32, 1977, xer);
	// beq cr6,0x83289e20
	if (cr6.eq) goto loc_83289E20;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83289E20:
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// b 0x83289e2c
	goto loc_83289E2C;
loc_83289E28:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
loc_83289E2C:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83223d00
	ctx.lr = 0x83289E34;
	sub_83223D00(ctx, base);
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

__attribute__((alias("__imp__sub_83289E48"))) PPC_WEAK_FUNC(sub_83289E48);
PPC_FUNC_IMPL(__imp__sub_83289E48) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83289e8c
	if (cr6.eq) goto loc_83289E8C;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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
loc_83289E8C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83289ea4
	if (cr6.eq) goto loc_83289EA4;
	// bl 0x83209d68
	ctx.lr = 0x83289E9C;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83289EA4:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x83289EB4;
	sub_83294018(ctx, base);
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

__attribute__((alias("__imp__sub_83289ECC"))) PPC_WEAK_FUNC(sub_83289ECC);
PPC_FUNC_IMPL(__imp__sub_83289ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289ED0"))) PPC_WEAK_FUNC(sub_83289ED0);
PPC_FUNC_IMPL(__imp__sub_83289ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83289ED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x83209aa8
	ctx.lr = 0x83289EE8;
	sub_83209AA8(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83289EF8;
	sub_83294018(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83289f0c
	if (cr6.lt) goto loc_83289F0C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x83289f14
	if (!cr6.gt) goto loc_83289F14;
loc_83289F0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320e738
	ctx.lr = 0x83289F14;
	sub_8320E738(ctx, base);
loc_83289F14:
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83289f40
	if (cr6.eq) goto loc_83289F40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222030
	ctx.lr = 0x83289F40;
	sub_83222030(ctx, base);
loc_83289F40:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// li r10,151
	ctx.r10.s64 = 151;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r8.u16);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x8328a060
	if (cr6.lt) goto loc_8328A060;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222be8
	ctx.lr = 0x83289F9C;
	sub_83222BE8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x8328a060
	if (cr6.lt) goto loc_8328A060;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x83222be8
	ctx.lr = 0x83289FC0;
	sub_83222BE8(ctx, base);
	// li r4,103
	ctx.r4.s64 = 103;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83296d08
	ctx.lr = 0x83289FCC;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83289fe0
	if (cr6.eq) goto loc_83289FE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83289FE0:
	// li r4,105
	ctx.r4.s64 = 105;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83296d08
	ctx.lr = 0x83289FEC;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328a000
	if (cr6.eq) goto loc_8328A000;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8328A000:
	// li r4,115
	ctx.r4.s64 = 115;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83296d08
	ctx.lr = 0x8328A00C;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328a020
	if (cr6.eq) goto loc_8328A020;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8328A020:
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83296d08
	ctx.lr = 0x8328A02C;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328a040
	if (cr6.eq) goto loc_8328A040;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8328A040:
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83296d08
	ctx.lr = 0x8328A04C;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328a060
	if (cr6.eq) goto loc_8328A060;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8328A060:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328A068"))) PPC_WEAK_FUNC(sub_8328A068);
PPC_FUNC_IMPL(__imp__sub_8328A068) {
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
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,1957
	cr6.compare<uint32_t>(ctx.r10.u32, 1957, xer);
	// bgt cr6,0x8328a110
	if (cr6.gt) goto loc_8328A110;
	// beq cr6,0x8328a104
	if (cr6.eq) goto loc_8328A104;
	// cmplwi cr6,r10,358
	cr6.compare<uint32_t>(ctx.r10.u32, 358, xer);
	// beq cr6,0x8328a0f8
	if (cr6.eq) goto loc_8328A0F8;
	// cmplwi cr6,r10,1931
	cr6.compare<uint32_t>(ctx.r10.u32, 1931, xer);
	// beq cr6,0x8328a0e8
	if (cr6.eq) goto loc_8328A0E8;
	// cmplwi cr6,r10,1932
	cr6.compare<uint32_t>(ctx.r10.u32, 1932, xer);
	// bne cr6,0x8328a128
	if (!cr6.eq) goto loc_8328A128;
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328a0d8
	if (cr6.eq) goto loc_8328A0D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328A0D8;
	sub_83222030(ctx, base);
loc_8328A0D8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x8328a158
	goto loc_8328A158;
loc_8328A0E8:
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x8328A0F4;
	sub_83223AF0(ctx, base);
	// b 0x8328a158
	goto loc_8328A158;
loc_8328A0F8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r4,r10,29,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// b 0x8328a150
	goto loc_8328A150;
loc_8328A104:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r4,r10,30,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// b 0x8328a150
	goto loc_8328A150;
loc_8328A110:
	// cmplwi cr6,r10,1958
	cr6.compare<uint32_t>(ctx.r10.u32, 1958, xer);
	// beq cr6,0x8328a148
	if (cr6.eq) goto loc_8328A148;
	// cmplwi cr6,r10,1959
	cr6.compare<uint32_t>(ctx.r10.u32, 1959, xer);
	// beq cr6,0x8328a13c
	if (cr6.eq) goto loc_8328A13C;
	// cmplwi cr6,r10,1960
	cr6.compare<uint32_t>(ctx.r10.u32, 1960, xer);
	// beq cr6,0x8328a130
	if (cr6.eq) goto loc_8328A130;
loc_8328A128:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8328a15c
	goto loc_8328A15C;
loc_8328A130:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r4,r10,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// b 0x8328a150
	goto loc_8328A150;
loc_8328A13C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// b 0x8328a150
	goto loc_8328A150;
loc_8328A148:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r4,r10,28,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
loc_8328A150:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x8328A158;
	sub_8320CF60(ctx, base);
loc_8328A158:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8328A15C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328A174"))) PPC_WEAK_FUNC(sub_8328A174);
PPC_FUNC_IMPL(__imp__sub_8328A174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328A178"))) PPC_WEAK_FUNC(sub_8328A178);
PPC_FUNC_IMPL(__imp__sub_8328A178) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// addi r11,r4,-100
	ctx.r11.s64 = ctx.r4.s64 + -100;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bgt cr6,0x8328a260
	if (cr6.gt) goto loc_8328A260;
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24148
	ctx.r12.s64 = ctx.r12.s64 + -24148;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8328A210;
	case 1:
		goto loc_8328A260;
	case 2:
		goto loc_8328A238;
	case 3:
		goto loc_8328A260;
	case 4:
		goto loc_8328A260;
	case 5:
		goto loc_8328A260;
	case 6:
		goto loc_8328A260;
	case 7:
		goto loc_8328A260;
	case 8:
		goto loc_8328A260;
	case 9:
		goto loc_8328A260;
	case 10:
		goto loc_8328A238;
	case 11:
		goto loc_8328A260;
	case 12:
		goto loc_8328A260;
	case 13:
		goto loc_8328A260;
	case 14:
		goto loc_8328A238;
	case 15:
		goto loc_8328A1FC;
	case 16:
		goto loc_8328A238;
	case 17:
		goto loc_8328A260;
	case 18:
		goto loc_8328A24C;
	case 19:
		goto loc_8328A224;
	default:
		return;
	}
	// lwz r25,-24048(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24048);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-24008(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24008);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-24008(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24008);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-24008(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24008);
	// lwz r25,-24068(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24068);
	// lwz r25,-24008(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24008);
	// lwz r25,-23968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23968);
	// lwz r25,-23988(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23988);
	// lwz r25,-24028(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24028);
loc_8328A1FC:
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
loc_8328A210:
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
loc_8328A224:
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
loc_8328A238:
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
loc_8328A24C:
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
loc_8328A260:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,12200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12200);
	// bl 0x83296d08
	ctx.lr = 0x8328A26C;
	sub_83296D08(ctx, base);
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328A28C"))) PPC_WEAK_FUNC(sub_8328A28C);
PPC_FUNC_IMPL(__imp__sub_8328A28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328A290"))) PPC_WEAK_FUNC(sub_8328A290);
PPC_FUNC_IMPL(__imp__sub_8328A290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8328A298;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,9
	cr6.compare<uint32_t>(ctx.r5.u32, 9, xer);
	// bgt cr6,0x8328a688
	if (cr6.gt) goto loc_8328A688;
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23864
	ctx.r12.s64 = ctx.r12.s64 + -23864;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_8328A2F0;
	case 1:
		goto loc_8328A314;
	case 2:
		goto loc_8328A360;
	case 3:
		goto loc_8328A36C;
	case 4:
		goto loc_8328A3C8;
	case 5:
		goto loc_8328A404;
	case 6:
		goto loc_8328A538;
	case 7:
		goto loc_8328A654;
	case 8:
		goto loc_8328A688;
	case 9:
		goto loc_8328A398;
	default:
		return;
	}
	// lwz r25,-23824(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23824);
	// lwz r25,-23788(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23788);
	// lwz r25,-23712(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23712);
	// lwz r25,-23700(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23700);
	// lwz r25,-23608(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23608);
	// lwz r25,-23548(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23548);
	// lwz r25,-23240(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23240);
	// lwz r25,-22956(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22956);
	// lwz r25,-22904(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22904);
	// lwz r25,-23656(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23656);
loc_8328A2F0:
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// li r10,-4
	ctx.r10.s64 = -4;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// subf r8,r9,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 & ctx.r10.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8328A314:
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x8328a330
	if (cr6.lt) goto loc_8328A330;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8328a334
	if (!cr6.gt) goto loc_8328A334;
loc_8328A330:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8328A334:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328a344
	if (cr6.eq) goto loc_8328A344;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_8328A344:
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// li r10,-4
	ctx.r10.s64 = -4;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8328A360:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8328A36C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lbzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// lwz r3,12196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12196);
	// bl 0x83296d08
	ctx.lr = 0x8328A380;
	sub_83296D08(ctx, base);
	// addic r9,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r7,-4
	ctx.r7.s64 = -4;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8328A398:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lbzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// addi r9,r11,12196
	ctx.r9.s64 = ctx.r11.s64 + 12196;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x83296d08
	ctx.lr = 0x8328A3B0;
	sub_83296D08(ctx, base);
	// addic r8,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// li r6,-4
	ctx.r6.s64 = -4;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8328A3C8:
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x8328a3e4
	if (cr6.lt) goto loc_8328A3E4;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8328a3e8
	if (!cr6.gt) goto loc_8328A3E8;
loc_8328A3E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8328A3E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,-4
	ctx.r10.s64 = -4;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8328A404:
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// addi r28,r27,1
	ctx.r28.s64 = ctx.r27.s64 + 1;
	// lbz r10,1(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// li r31,1
	ctx.r31.s64 = 1;
	// extsb r23,r11
	ctx.r23.s64 = ctx.r11.s8;
	// cmplwi cr6,r10,93
	cr6.compare<uint32_t>(ctx.r10.u32, 93, xer);
	// beq cr6,0x8328a69c
	if (cr6.eq) goto loc_8328A69C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r26,r11,23912
	ctx.r26.s64 = ctx.r11.s64 + 23912;
	// addi r25,r10,24024
	ctx.r25.s64 = ctx.r10.s64 + 24024;
	// addi r24,r9,23976
	ctx.r24.s64 = ctx.r9.s64 + 23976;
loc_8328A438:
	// lbzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// lbzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r3,45
	cr6.compare<uint32_t>(ctx.r3.u32, 45, xer);
	// bne cr6,0x8328a470
	if (!cr6.eq) goto loc_8328A470;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, xer);
	// blt cr6,0x8328a468
	if (cr6.lt) goto loc_8328A468;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r23,r9
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r9.s32, xer);
	// ble cr6,0x8328a360
	if (!cr6.gt) goto loc_8328A360;
loc_8328A468:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x8328a51c
	goto loc_8328A51C;
loc_8328A470:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// bne cr6,0x8328a50c
	if (!cr6.eq) goto loc_8328A50C;
	// bl 0x8328a178
	ctx.lr = 0x8328A480;
	sub_8328A178(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8328a4e8
	if (cr6.lt) goto loc_8328A4E8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8328a4ac
	if (!cr6.eq) goto loc_8328A4AC;
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// b 0x8328a4d4
	goto loc_8328A4D4;
loc_8328A4AC:
	// cmpwi cr6,r5,10
	cr6.compare<int32_t>(ctx.r5.s32, 10, xer);
	// bne cr6,0x8328a4d0
	if (!cr6.eq) goto loc_8328A4D0;
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r9,-97(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -97);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// b 0x8328a4d4
	goto loc_8328A4D4;
loc_8328A4D0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8328A4D4:
	// bl 0x8328a290
	ctx.lr = 0x8328A4D8;
	sub_8328A290(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8328a360
	if (cr6.eq) goto loc_8328A360;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8328a51c
	goto loc_8328A51C;
loc_8328A4E8:
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83208330
	ctx.lr = 0x8328A508;
	sub_83208330(ctx, base);
	// b 0x8328a51c
	goto loc_8328A51C;
loc_8328A50C:
	// lbzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// beq cr6,0x8328a360
	if (cr6.eq) goto loc_8328A360;
loc_8328A51C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(ctx.r11.u32, 93, xer);
	// bne cr6,0x8328a438
	if (!cr6.eq) goto loc_8328A438;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8328A538:
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x8328a554
	if (cr6.lt) goto loc_8328A554;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8328a558
	if (!cr6.gt) goto loc_8328A558;
loc_8328A554:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8328A558:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8328a56c
	if (!cr6.eq) goto loc_8328A56C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8328A56C:
	// lbz r11,1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// addi r7,r27,1
	ctx.r7.s64 = ctx.r27.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(ctx.r11.u32, 93, xer);
	// beq cr6,0x8328a69c
	if (cr6.eq) goto loc_8328A69C;
loc_8328A580:
	// lbzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// lbzx r11,r9,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r27.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// bne cr6,0x8328a608
	if (!cr6.eq) goto loc_8328A608;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x8328a5a8
	if (cr6.lt) goto loc_8328A5A8;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8328a5ac
	if (!cr6.gt) goto loc_8328A5AC;
loc_8328A5A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8328A5AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328a5bc
	if (cr6.eq) goto loc_8328A5BC;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_8328A5BC:
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x8328a600
	if (cr6.lt) goto loc_8328A600;
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x8328a5e4
	if (cr6.lt) goto loc_8328A5E4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8328a5e8
	if (!cr6.gt) goto loc_8328A5E8;
loc_8328A5E4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8328A5E8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328a5f8
	if (cr6.eq) goto loc_8328A5F8;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_8328A5F8:
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// ble cr6,0x8328a360
	if (!cr6.gt) goto loc_8328A360;
loc_8328A600:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// b 0x8328a638
	goto loc_8328A638;
loc_8328A608:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x8328a61c
	if (cr6.lt) goto loc_8328A61C;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8328a620
	if (!cr6.gt) goto loc_8328A620;
loc_8328A61C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8328A620:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328a630
	if (cr6.eq) goto loc_8328A630;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_8328A630:
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// beq cr6,0x8328a360
	if (cr6.eq) goto loc_8328A360;
loc_8328A638:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r11,r9,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(ctx.r11.u32, 93, xer);
	// bne cr6,0x8328a580
	if (!cr6.eq) goto loc_8328A580;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8328A654:
	// lbzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// bl 0x83296b68
	ctx.lr = 0x8328A65C;
	sub_83296B68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328a360
	if (!cr6.eq) goto loc_8328A360;
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// li r10,-4
	ctx.r10.s64 = -4;
	// addi r11,r11,-95
	ctx.r11.s64 = ctx.r11.s64 + -95;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8328A688:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,23948
	ctx.r4.s64 = ctx.r11.s64 + 23948;
	// addi r3,r10,24024
	ctx.r3.s64 = ctx.r10.s64 + 24024;
	// bl 0x83208330
	ctx.lr = 0x8328A69C;
	sub_83208330(ctx, base);
loc_8328A69C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328A6A8"))) PPC_WEAK_FUNC(sub_8328A6A8);
PPC_FUNC_IMPL(__imp__sub_8328A6A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x8328A6B0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lis r18,-31772
	ctx.r18.s64 = -2082209792;
	// addi r19,r11,23912
	ctx.r19.s64 = ctx.r11.s64 + 23912;
loc_8328A6D4:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpwi cr6,r4,46
	cr6.compare<int32_t>(ctx.r4.s32, 46, xer);
	// bne cr6,0x8328a6f8
	if (!cr6.eq) goto loc_8328A6F8;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8328a7cc
	goto loc_8328A7CC;
loc_8328A6F8:
	// cmpwi cr6,r4,92
	cr6.compare<int32_t>(ctx.r4.s32, 92, xer);
	// bne cr6,0x8328a750
	if (!cr6.eq) goto loc_8328A750;
	// lbz r3,1(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// bl 0x8328a178
	ctx.lr = 0x8328A708;
	sub_8328A178(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8328aa60
	if (cr6.lt) goto loc_8328AA60;
	// bne cr6,0x8328a728
	if (!cr6.eq) goto loc_8328A728;
	// lbz r11,1(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// li r30,2
	ctx.r30.s64 = 2;
	// extsb r25,r11
	ctx.r25.s64 = ctx.r11.s8;
	// b 0x8328a7c4
	goto loc_8328A7C4;
loc_8328A728:
	// cmpwi cr6,r27,10
	cr6.compare<int32_t>(ctx.r27.s32, 10, xer);
	// bne cr6,0x8328a748
	if (!cr6.eq) goto loc_8328A748;
	// lbz r11,1(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// li r27,0
	ctx.r27.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lbz r9,-97(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -97);
	// extsb r25,r9
	ctx.r25.s64 = ctx.r9.s8;
loc_8328A748:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x8328a7c4
	goto loc_8328A7C4;
loc_8328A750:
	// cmpwi cr6,r4,91
	cr6.compare<int32_t>(ctx.r4.s32, 91, xer);
	// bne cr6,0x8328a790
	if (!cr6.eq) goto loc_8328A790;
	// rlwinm r11,r21,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x2;
	// li r4,93
	ctx.r4.s64 = 93;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r3,r26,1
	ctx.r3.s64 = ctx.r26.s64 + 1;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r27,r11,5
	ctx.r27.s64 = ctx.r11.s64 + 5;
	// bl 0x83296d08
	ctx.lr = 0x8328A77C;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328aa94
	if (cr6.eq) goto loc_8328AA94;
	// subf r11,r26,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r26.s64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// b 0x8328a7c4
	goto loc_8328A7C4;
loc_8328A790:
	// cmpwi cr6,r4,40
	cr6.compare<int32_t>(ctx.r4.s32, 40, xer);
	// beq cr6,0x8328a9b4
	if (cr6.eq) goto loc_8328A9B4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8328aab8
	if (cr6.eq) goto loc_8328AAB8;
	// cmpwi cr6,r4,36
	cr6.compare<int32_t>(ctx.r4.s32, 36, xer);
	// beq cr6,0x8328aaac
	if (cr6.eq) goto loc_8328AAAC;
	// cmpwi cr6,r4,97
	cr6.compare<int32_t>(ctx.r4.s32, 97, xer);
	// blt cr6,0x8328a850
	if (cr6.lt) goto loc_8328A850;
	// cmpwi cr6,r4,122
	cr6.compare<int32_t>(ctx.r4.s32, 122, xer);
	// bgt cr6,0x8328a850
	if (cr6.gt) goto loc_8328A850;
	// rlwinm r27,r21,31,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 31) & 0x1;
loc_8328A7BC:
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
loc_8328A7C0:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8328A7C4:
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(ctx.r27.s32, 8, xer);
	// beq cr6,0x8328a9d4
	if (cr6.eq) goto loc_8328A9D4;
loc_8328A7CC:
	// lbzx r11,r30,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// add r29,r30,r26
	ctx.r29.u64 = ctx.r30.u64 + ctx.r26.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, xer);
	// beq cr6,0x8328aad0
	if (cr6.eq) goto loc_8328AAD0;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x8328ab70
	if (cr6.eq) goto loc_8328AB70;
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(ctx.r11.s32, 63, xer);
	// bne cr6,0x8328a8a4
	if (!cr6.eq) goto loc_8328A8A4;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// bl 0x8328a290
	ctx.lr = 0x8328A80C;
	sub_8328A290(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328a848
	if (!cr6.eq) goto loc_8328A848;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// add r5,r31,r26
	ctx.r5.u64 = ctx.r31.u64 + ctx.r26.u64;
	// addi r4,r24,1
	ctx.r4.s64 = ctx.r24.s64 + 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8328a6a8
	ctx.lr = 0x8328A82C;
	sub_8328A6A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328a848
	if (!cr6.eq) goto loc_8328A848;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8328aac4
	if (cr6.eq) goto loc_8328AAC4;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8328aac4
	if (!cr6.lt) goto loc_8328AAC4;
loc_8328A848:
	// add r26,r31,r26
	ctx.r26.u64 = ctx.r31.u64 + ctx.r26.u64;
	// b 0x8328a6d4
	goto loc_8328A6D4;
loc_8328A850:
	// cmpwi cr6,r4,65
	cr6.compare<int32_t>(ctx.r4.s32, 65, xer);
	// blt cr6,0x8328a880
	if (cr6.lt) goto loc_8328A880;
	// cmpwi cr6,r4,90
	cr6.compare<int32_t>(ctx.r4.s32, 90, xer);
	// bgt cr6,0x8328a880
	if (cr6.gt) goto loc_8328A880;
	// rlwinm r11,r21,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328a878
	if (cr6.eq) goto loc_8328A878;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r25,r4,32
	ctx.r25.s64 = ctx.r4.s64 + 32;
	// b 0x8328a7c0
	goto loc_8328A7C0;
loc_8328A878:
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8328a7bc
	goto loc_8328A7BC;
loc_8328A880:
	// lwz r3,12204(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12204);
	// bl 0x83296d08
	ctx.lr = 0x8328A888;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328ac10
	if (cr6.eq) goto loc_8328AC10;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// extsb r25,r11
	ctx.r25.s64 = ctx.r11.s8;
	// b 0x8328a7cc
	goto loc_8328A7CC;
loc_8328A8A4:
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(ctx.r11.s32, 123, xer);
	// bne cr6,0x8328a988
	if (!cr6.eq) goto loc_8328A988;
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8328a908
	if (cr6.eq) goto loc_8328A908;
loc_8328A8C8:
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(ctx.r11.s32, 125, xer);
	// beq cr6,0x8328a908
	if (cr6.eq) goto loc_8328A908;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x8328a908
	if (cr6.lt) goto loc_8328A908;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x8328a908
	if (cr6.gt) goto loc_8328A908;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r8,r29,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r31,r9,-48
	ctx.r31.s64 = ctx.r9.s64 + -48;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8328a8c8
	if (!cr6.eq) goto loc_8328A8C8;
loc_8328A908:
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8328a920
	if (!cr6.eq) goto loc_8328A920;
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// b 0x8328a6d4
	goto loc_8328A6D4;
loc_8328A920:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8328a97c
	if (!cr6.gt) goto loc_8328A97C;
	// add r29,r23,r24
	ctx.r29.u64 = ctx.r23.u64 + ctx.r24.u64;
loc_8328A930:
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328a974
	if (cr6.eq) goto loc_8328A974;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r30,r24
	ctx.r4.u64 = ctx.r30.u64 + ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8328a290
	ctx.lr = 0x8328A954;
	sub_8328A290(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328a974
	if (!cr6.eq) goto loc_8328A974;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// blt cr6,0x8328a930
	if (cr6.lt) goto loc_8328A930;
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// add r24,r31,r24
	ctx.r24.u64 = ctx.r31.u64 + ctx.r24.u64;
	// b 0x8328a6d4
	goto loc_8328A6D4;
loc_8328A974:
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// blt cr6,0x8328ac28
	if (cr6.lt) goto loc_8328AC28;
loc_8328A97C:
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// add r24,r31,r24
	ctx.r24.u64 = ctx.r31.u64 + ctx.r24.u64;
	// b 0x8328a6d4
	goto loc_8328A6D4;
loc_8328A988:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8328a290
	ctx.lr = 0x8328A9A0;
	sub_8328A290(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328ac28
	if (!cr6.eq) goto loc_8328AC28;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x8328a6d4
	goto loc_8328A6D4;
loc_8328A9B4:
	// li r4,41
	ctx.r4.s64 = 41;
	// addi r3,r26,1
	ctx.r3.s64 = ctx.r26.s64 + 1;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// bl 0x83296d08
	ctx.lr = 0x8328A9C4;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328aaa0
	if (cr6.eq) goto loc_8328AAA0;
	// subf r11,r26,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r26.s64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_8328A9D4:
	// addi r3,r22,1
	ctx.r3.s64 = ctx.r22.s64 + 1;
	// bl 0x83209b18
	ctx.lr = 0x8328A9DC;
	sub_83209B18(ctx, base);
	// subf r11,r22,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r22.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r10,-2(r9)
	PPC_STORE_U8(ctx.r9.u32 + -2, ctx.r10.u8);
	// bl 0x83255a88
	ctx.lr = 0x8328A9F8;
	sub_83255A88(ctx, base);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8328a6a8
	ctx.lr = 0x8328AA10;
	sub_8328A6A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8328aa24
	if (cr6.eq) goto loc_8328AA24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328AA24;
	sub_83209D68(ctx, base);
loc_8328AA24:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x8328ac28
	if (!cr6.eq) goto loc_8328AC28;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8328aa3c
	if (cr6.eq) goto loc_8328AA3C;
	// lwz r4,4(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
loc_8328AA3C:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// add r5,r30,r26
	ctx.r5.u64 = ctx.r30.u64 + ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8328a6a8
	ctx.lr = 0x8328AA50;
	sub_8328A6A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328ac28
	if (!cr6.eq) goto loc_8328AC28;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8328AA60:
	// lbz r11,1(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// addi r4,r10,23976
	ctx.r4.s64 = ctx.r10.s64 + 23976;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r3,r9,24024
	ctx.r3.s64 = ctx.r9.s64 + 24024;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x83208330
	ctx.lr = 0x8328AA88;
	sub_83208330(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8328AA94:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r11,24088
	ctx.r4.s64 = ctx.r11.s64 + 24088;
	// b 0x8328ac18
	goto loc_8328AC18;
loc_8328AAA0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r11,24064
	ctx.r4.s64 = ctx.r11.s64 + 24064;
	// b 0x8328ac18
	goto loc_8328AC18;
loc_8328AAAC:
	// lbzx r11,r23,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328ac28
	if (!cr6.eq) goto loc_8328AC28;
loc_8328AAB8:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8328aac4
	if (cr6.eq) goto loc_8328AAC4;
	// stw r24,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r24.u32);
loc_8328AAC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8328AAD0:
	// lbzx r11,r23,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r24.u32);
	// add r28,r23,r24
	ctx.r28.u64 = ctx.r23.u64 + ctx.r24.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328aac4
	if (cr6.eq) goto loc_8328AAC4;
loc_8328AAEC:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r31,r24
	ctx.r4.u64 = ctx.r31.u64 + ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8328a290
	ctx.lr = 0x8328AB04;
	sub_8328A290(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328ab50
	if (!cr6.eq) goto loc_8328AB50;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// add r5,r30,r26
	ctx.r5.u64 = ctx.r30.u64 + ctx.r26.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8328a6a8
	ctx.lr = 0x8328AB28;
	sub_8328A6A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328ab40
	if (!cr6.eq) goto loc_8328AB40;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq cr6,0x8328ab40
	if (cr6.eq) goto loc_8328AB40;
	// lwz r29,4(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
loc_8328AB40:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328aaec
	if (!cr6.eq) goto loc_8328AAEC;
loc_8328AB50:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8328aac4
	if (cr6.lt) goto loc_8328AAC4;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8328ab64
	if (cr6.eq) goto loc_8328AB64;
	// stw r29,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r29.u32);
loc_8328AB64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8328AB70:
	// lbzx r11,r23,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r24.u32);
	// add r28,r23,r24
	ctx.r28.u64 = ctx.r23.u64 + ctx.r24.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328ac28
	if (cr6.eq) goto loc_8328AC28;
loc_8328AB8C:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r31,r24
	ctx.r4.u64 = ctx.r31.u64 + ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8328a290
	ctx.lr = 0x8328ABA4;
	sub_8328A290(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328abf0
	if (!cr6.eq) goto loc_8328ABF0;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// add r5,r30,r26
	ctx.r5.u64 = ctx.r30.u64 + ctx.r26.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8328a6a8
	ctx.lr = 0x8328ABC8;
	sub_8328A6A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328abe0
	if (!cr6.eq) goto loc_8328ABE0;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq cr6,0x8328abe0
	if (cr6.eq) goto loc_8328ABE0;
	// lwz r29,4(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
loc_8328ABE0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328ab8c
	if (!cr6.eq) goto loc_8328AB8C;
loc_8328ABF0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8328ac28
	if (cr6.lt) goto loc_8328AC28;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8328ab64
	if (cr6.eq) goto loc_8328AB64;
	// stw r29,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8328AC10:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r11,24036
	ctx.r4.s64 = ctx.r11.s64 + 24036;
loc_8328AC18:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r10,24024
	ctx.r3.s64 = ctx.r10.s64 + 24024;
	// bl 0x83208330
	ctx.lr = 0x8328AC28;
	sub_83208330(ctx, base);
loc_8328AC28:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328AC34"))) PPC_WEAK_FUNC(sub_8328AC34);
PPC_FUNC_IMPL(__imp__sub_8328AC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328AC38"))) PPC_WEAK_FUNC(sub_8328AC38);
PPC_FUNC_IMPL(__imp__sub_8328AC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8328AC40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328ac64
	if (!cr6.eq) goto loc_8328AC64;
loc_8328AC58:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8328AC64:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8328ac58
	if (cr6.eq) goto loc_8328AC58;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// or r27,r11,r6
	ctx.r27.u64 = ctx.r11.u64 | ctx.r6.u64;
	// beq cr6,0x8328ac84
	if (cr6.eq) goto loc_8328AC84;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8328AC84:
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328ac58
	if (cr6.eq) goto loc_8328AC58;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328ad48
	if (cr6.eq) goto loc_8328AD48;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8328ad48
	if (cr6.eq) goto loc_8328AD48;
	// cmpwi cr6,r10,94
	cr6.compare<int32_t>(ctx.r10.s32, 94, xer);
	// bne cr6,0x8328acf4
	if (!cr6.eq) goto loc_8328ACF4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x8328ac58
	if (!cr6.eq) goto loc_8328AC58;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8328a6a8
	ctx.lr = 0x8328ACD4;
	sub_8328A6A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328ac58
	if (!cr6.eq) goto loc_8328AC58;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328ad58
	if (cr6.eq) goto loc_8328AD58;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8328ACF4:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8328a6a8
	ctx.lr = 0x8328AD0C;
	sub_8328A6A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8328ad30
	if (cr6.eq) goto loc_8328AD30;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328acf4
	if (!cr6.eq) goto loc_8328ACF4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8328AD30:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328ad58
	if (cr6.eq) goto loc_8328AD58;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8328AD48:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328ad58
	if (cr6.eq) goto loc_8328AD58;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_8328AD58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328AD64"))) PPC_WEAK_FUNC(sub_8328AD64);
PPC_FUNC_IMPL(__imp__sub_8328AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328AD68"))) PPC_WEAK_FUNC(sub_8328AD68);
PPC_FUNC_IMPL(__imp__sub_8328AD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8328AD70;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// bl 0x8328ac38
	ctx.lr = 0x8328ADA0;
	sub_8328AC38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328ae98
	if (!cr6.eq) goto loc_8328AE98;
loc_8328ADA8:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8328adc0
	if (cr6.eq) goto loc_8328ADC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255988
	ctx.lr = 0x8328ADBC;
	sub_83255988(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8328ADC0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83255980
	ctx.lr = 0x8328ADD4;
	sub_83255980(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r30,r10,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// bne cr6,0x8328adfc
	if (!cr6.eq) goto loc_8328ADFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328ADF0;
	sub_83209AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// b 0x8328ae0c
	goto loc_8328AE0C;
loc_8328ADFC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209df8
	ctx.lr = 0x8328AE08;
	sub_83209DF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8328AE0C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r29,r27
	ctx.r5.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r6,r29,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296c60
	ctx.lr = 0x8328AE24;
	sub_83296C60(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8328ae44
	if (!cr6.gt) goto loc_8328AE44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296ba8
	ctx.lr = 0x8328AE34;
	sub_83296BA8(ctx, base);
	// subf r5,r3,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x83296be0
	ctx.lr = 0x8328AE44;
	sub_83296BE0(ctx, base);
loc_8328AE44:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328ae90
	if (cr6.eq) goto loc_8328AE90;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x8328ae74
	if (!cr6.eq) goto loc_8328AE74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8328AE74:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8328ac38
	ctx.lr = 0x8328AE88;
	sub_8328AC38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8328ada8
	if (cr6.eq) goto loc_8328ADA8;
loc_8328AE90:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8328aea8
	if (!cr6.eq) goto loc_8328AEA8;
loc_8328AE98:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83209c20
	ctx.lr = 0x8328AEA0;
	sub_83209C20(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8328AEA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x8328AEB0;
	sub_83255A88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255980
	ctx.lr = 0x8328AEB8;
	sub_83255980(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83255980
	ctx.lr = 0x8328AEC4;
	sub_83255980(ctx, base);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r31,r10,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83209df8
	ctx.lr = 0x8328AEE0;
	sub_83209DF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8328af00
	if (!cr6.gt) goto loc_8328AF00;
	// bl 0x83296ba8
	ctx.lr = 0x8328AEF0;
	sub_83296BA8(ctx, base);
	// subf r5,r3,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// bl 0x83296be0
	ctx.lr = 0x8328AF00;
	sub_83296BE0(ctx, base);
loc_8328AF00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255a88
	ctx.lr = 0x8328AF08;
	sub_83255A88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328AF14"))) PPC_WEAK_FUNC(sub_8328AF14);
PPC_FUNC_IMPL(__imp__sub_8328AF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328AF18"))) PPC_WEAK_FUNC(sub_8328AF18);
PPC_FUNC_IMPL(__imp__sub_8328AF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8328AF20;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8328af60
	if (!cr6.eq) goto loc_8328AF60;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x83255980
	ctx.lr = 0x8328AF40;
	sub_83255980(ctx, base);
	// addi r11,r3,11
	ctx.r11.s64 = ctx.r3.s64 + 11;
	// rlwinm r30,r11,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328AF50;
	sub_83209AA8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x8328AF60;
	sub_83294018(ctx, base);
loc_8328AF60:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,120
	ctx.r10.s64 = 120;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r9,109
	ctx.r9.s64 = 109;
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r7,r11,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r5,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r8.s64;
	// rlwinm r3,r11,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfe r8,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r7,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r7.s64;
	// rlwinm r4,r11,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfe r7,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r5,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r3.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r5,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r4.s64;
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r11,105
	ctx.r11.s64 = 105;
	// subfe r28,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r29,115
	ctx.r29.s64 = 115;
	// li r27,103
	ctx.r27.s64 = 103;
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// and r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 & ctx.r9.u64;
	// and r9,r3,r29
	ctx.r9.u64 = ctx.r3.u64 & ctx.r29.u64;
	// and r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 & ctx.r11.u64;
	// addi r5,r5,24112
	ctx.r5.s64 = ctx.r5.s64 + 24112;
	// and r7,r28,r27
	ctx.r7.u64 = ctx.r28.u64 & ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83297a40
	ctx.lr = 0x8328AFE4;
	sub_83297A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x8328AFEC;
	sub_83255A88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328AFF8"))) PPC_WEAK_FUNC(sub_8328AFF8);
PPC_FUNC_IMPL(__imp__sub_8328AFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8328B000;
	__savegprlr_25(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328b024
	if (cr6.eq) goto loc_8328B024;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,23940
	ctx.r3.s64 = ctx.r11.s64 + 23940;
	// bl 0x8320d088
	ctx.lr = 0x8328B024;
	sub_8320D088(ctx, base);
loc_8328B024:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bge cr6,0x8328b044
	if (!cr6.lt) goto loc_8328B044;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x8328B038;
	sub_83213150(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8328B044:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83222be8
	ctx.lr = 0x8328B070;
	sub_83222BE8(ctx, base);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8328b09c
	if (cr6.eq) goto loc_8328B09C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8328B09C:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8328ac38
	ctx.lr = 0x8328B0B0;
	sub_8328AC38(ctx, base);
	// lhz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328b218
	if (!cr6.eq) goto loc_8328B218;
	// cmplwi cr6,r11,2374
	cr6.compare<uint32_t>(ctx.r11.u32, 2374, xer);
	// bne cr6,0x8328b1e8
	if (!cr6.eq) goto loc_8328B1E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83273b48
	ctx.lr = 0x8328B0CC;
	sub_83273B48(ctx, base);
	// li r11,1894
	ctx.r11.s64 = 1894;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8322bef0
	ctx.lr = 0x8328B0F0;
	sub_8322BEF0(ctx, base);
	// li r10,1930
	ctx.r10.s64 = 1930;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// bl 0x8322c0e8
	ctx.lr = 0x8328B114;
	sub_8322C0E8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r28,r9,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r7,r28,4
	ctx.r7.s64 = ctx.r28.s64 + 4;
	// rlwinm r25,r7,0,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328B130;
	sub_83209AA8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x8328B140;
	sub_83294018(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832553f0
	ctx.lr = 0x8328B160;
	sub_832553F0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8328b170
	if (!cr6.eq) goto loc_8328B170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8328b178
	goto loc_8328B178;
loc_8328B170:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8328B178:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83223bd0
	ctx.lr = 0x8328B180;
	sub_83223BD0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328b1ac
	if (cr6.eq) goto loc_8328B1AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328B1AC;
	sub_83222030(ctx, base);
loc_8328B1AC:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stw r10,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r10.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8328B1E8:
	// cmplwi cr6,r11,2394
	cr6.compare<uint32_t>(ctx.r11.u32, 2394, xer);
	// bne cr6,0x8328b1fc
	if (!cr6.eq) goto loc_8328B1FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x8328B1FC;
	sub_8320CF60(ctx, base);
loc_8328B1FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stw r10,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r10.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8328B218:
	// cmplwi cr6,r11,2374
	cr6.compare<uint32_t>(ctx.r11.u32, 2374, xer);
	// bne cr6,0x8328b23c
	if (!cr6.eq) goto loc_8328B23C;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x8328B228;
	sub_83213150(ctx, base);
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r31.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8328B23C:
	// cmplwi cr6,r11,2394
	cr6.compare<uint32_t>(ctx.r11.u32, 2394, xer);
	// bne cr6,0x8328b250
	if (!cr6.eq) goto loc_8328B250;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x8328B250;
	sub_8320CF60(ctx, base);
loc_8328B250:
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r31.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B264"))) PPC_WEAK_FUNC(sub_8328B264);
PPC_FUNC_IMPL(__imp__sub_8328B264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B268"))) PPC_WEAK_FUNC(sub_8328B268);
PPC_FUNC_IMPL(__imp__sub_8328B268) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,2374
	cr6.compare<uint32_t>(ctx.r11.u32, 2374, xer);
	// beq cr6,0x8328b29c
	if (cr6.eq) goto loc_8328B29C;
	// cmplwi cr6,r11,2394
	cr6.compare<uint32_t>(ctx.r11.u32, 2394, xer);
	// beq cr6,0x8328b29c
	if (cr6.eq) goto loc_8328B29C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8328B29C:
	// bl 0x8328aff8
	ctx.lr = 0x8328B2A0;
	sub_8328AFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8328B2B4"))) PPC_WEAK_FUNC(sub_8328B2B4);
PPC_FUNC_IMPL(__imp__sub_8328B2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B2B8"))) PPC_WEAK_FUNC(sub_8328B2B8);
PPC_FUNC_IMPL(__imp__sub_8328B2B8) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328b2f8
	if (cr6.eq) goto loc_8328B2F8;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x83294958
	ctx.lr = 0x8328B2E0;
	sub_83294958(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328b2f8
	if (cr6.eq) goto loc_8328B2F8;
	// bl 0x83209d68
	ctx.lr = 0x8328B2F0;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_8328B2F8:
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

__attribute__((alias("__imp__sub_8328B30C"))) PPC_WEAK_FUNC(sub_8328B30C);
PPC_FUNC_IMPL(__imp__sub_8328B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B310"))) PPC_WEAK_FUNC(sub_8328B310);
PPC_FUNC_IMPL(__imp__sub_8328B310) {
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
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x83209aa8
	ctx.lr = 0x8328B328;
	sub_83209AA8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x8328B338;
	sub_83294018(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r8,r10,24688
	ctx.r8.s64 = ctx.r10.s64 + 24688;
	// lhz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// ori r5,r6,128
	ctx.r5.u64 = ctx.r6.u64 | 128;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// li r7,167
	ctx.r7.s64 = 167;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r5,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r5.u16);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// sth r7,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r7.u16);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8328B398"))) PPC_WEAK_FUNC(sub_8328B398);
PPC_FUNC_IMPL(__imp__sub_8328B398) {
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
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8328B3CC;
	sub_83209DF8(ctx, base);
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r30.u32);
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r5.u16);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328B418"))) PPC_WEAK_FUNC(sub_8328B418);
PPC_FUNC_IMPL(__imp__sub_8328B418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8328B420;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r11,24236
	ctx.r29.s64 = ctx.r11.s64 + 24236;
	// addi r27,r10,24248
	ctx.r27.s64 = ctx.r10.s64 + 24248;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8328b4a0
	if (!cr6.eq) goto loc_8328B4A0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,57976
	ctx.r30.u64 = ctx.r11.u64 | 57976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328B458;
	sub_83209AA8(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x8328B468;
	sub_83294018(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x832948b0
	ctx.lr = 0x8328B478;
	sub_832948B0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x8328B48C;
	sub_83294C00(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x8328B4A0;
	sub_83294C00(ctx, base);
loc_8328B4A0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8328b5b8
	if (cr6.eq) goto loc_8328B5B8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328b5b8
	if (cr6.eq) goto loc_8328B5B8;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x83255980
	ctx.lr = 0x8328B4C4;
	sub_83255980(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x83298fa0
	ctx.lr = 0x8328B4D4;
	sub_83298FA0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328b4ec
	if (!cr6.eq) goto loc_8328B4EC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x8328b4fc
	goto loc_8328B4FC;
loc_8328B4EC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83295250
	ctx.lr = 0x8328B4FC;
	sub_83295250(ctx, base);
loc_8328B4FC:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328b5a0
	if (cr6.eq) goto loc_8328B5A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83295e38
	ctx.lr = 0x8328B510;
	sub_83295E38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8328b528
	if (cr6.eq) goto loc_8328B528;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83295570
	ctx.lr = 0x8328B524;
	sub_83295570(ctx, base);
	// b 0x8328b53c
	goto loc_8328B53C;
loc_8328B528:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83294c00
	ctx.lr = 0x8328B53C;
	sub_83294C00(ctx, base);
loc_8328B53C:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328b5a0
	if (cr6.eq) goto loc_8328B5A0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-28504
	ctx.r5.s64 = ctx.r11.s64 + -28504;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83296938
	ctx.lr = 0x8328B560;
	sub_83296938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8328b5a0
	if (!cr6.lt) goto loc_8328B5A0;
	// li r3,1212
	ctx.r3.s64 = 1212;
	// bl 0x832277f8
	ctx.lr = 0x8328B574;
	sub_832277F8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,24264
	ctx.r4.s64 = ctx.r11.s64 + 24264;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x83298338
	ctx.lr = 0x8328B594;
	sub_83298338(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83294dc0
	ctx.lr = 0x8328B59C;
	sub_83294DC0(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
loc_8328B5A0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83299068
	ctx.lr = 0x8328B5A8;
	sub_83299068(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8328B5B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B5C8"))) PPC_WEAK_FUNC(sub_8328B5C8);
PPC_FUNC_IMPL(__imp__sub_8328B5C8) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8328b5f8
	if (cr6.eq) goto loc_8328B5F8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24224
	ctx.r3.s64 = ctx.r11.s64 + 24224;
	// bl 0x8320d088
	ctx.lr = 0x8328B5F8;
	sub_8320D088(ctx, base);
loc_8328B5F8:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328b624
	if (cr6.eq) goto loc_8328B624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328B624;
	sub_83222030(ctx, base);
loc_8328B624:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8328B64C"))) PPC_WEAK_FUNC(sub_8328B64C);
PPC_FUNC_IMPL(__imp__sub_8328B64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B650"))) PPC_WEAK_FUNC(sub_8328B650);
PPC_FUNC_IMPL(__imp__sub_8328B650) {
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
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,1906
	cr6.compare<uint32_t>(ctx.r10.u32, 1906, xer);
	// bne cr6,0x8328b674
	if (!cr6.eq) goto loc_8328B674;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8328b6d0
	if (cr6.eq) goto loc_8328B6D0;
loc_8328B674:
	// cmplwi cr6,r10,1907
	cr6.compare<uint32_t>(ctx.r10.u32, 1907, xer);
	// bne cr6,0x8328b688
	if (!cr6.eq) goto loc_8328B688;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328b6d0
	if (cr6.eq) goto loc_8328B6D0;
loc_8328B688:
	// cmplwi cr6,r10,2369
	cr6.compare<uint32_t>(ctx.r10.u32, 2369, xer);
	// bne cr6,0x8328b6a4
	if (!cr6.eq) goto loc_8328B6A4;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8328b6a4
	if (cr6.lt) goto loc_8328B6A4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x8328b6d0
	if (!cr6.gt) goto loc_8328B6D0;
loc_8328B6A4:
	// cmplwi cr6,r10,2371
	cr6.compare<uint32_t>(ctx.r10.u32, 2371, xer);
	// bne cr6,0x8328b6b8
	if (!cr6.eq) goto loc_8328B6B8;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328b6d0
	if (cr6.eq) goto loc_8328B6D0;
loc_8328B6B8:
	// cmplwi cr6,r10,485
	cr6.compare<uint32_t>(ctx.r10.u32, 485, xer);
	// bne cr6,0x8328b6cc
	if (!cr6.eq) goto loc_8328B6CC;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8328b6d0
	if (cr6.eq) goto loc_8328B6D0;
loc_8328B6CC:
	// bl 0x8320d088
	ctx.lr = 0x8328B6D0;
	sub_8320D088(ctx, base);
loc_8328B6D0:
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

__attribute__((alias("__imp__sub_8328B6E4"))) PPC_WEAK_FUNC(sub_8328B6E4);
PPC_FUNC_IMPL(__imp__sub_8328B6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B6E8"))) PPC_WEAK_FUNC(sub_8328B6E8);
PPC_FUNC_IMPL(__imp__sub_8328B6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8328B6F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1907
	cr6.compare<uint32_t>(ctx.r11.u32, 1907, xer);
	// beq cr6,0x8328b724
	if (cr6.eq) goto loc_8328B724;
	// cmplwi cr6,r11,2369
	cr6.compare<uint32_t>(ctx.r11.u32, 2369, xer);
	// beq cr6,0x8328b724
	if (cr6.eq) goto loc_8328B724;
	// cmplwi cr6,r11,2371
	cr6.compare<uint32_t>(ctx.r11.u32, 2371, xer);
	// bne cr6,0x8328b770
	if (!cr6.eq) goto loc_8328B770;
loc_8328B724:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// blt cr6,0x8328b770
	if (cr6.lt) goto loc_8328B770;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83222be8
	ctx.lr = 0x8328B754;
	sub_83222BE8(ctx, base);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r6,-432
	ctx.r4.s64 = ctx.r6.s64 + -432;
	// bl 0x83296d78
	ctx.lr = 0x8328B764;
	sub_83296D78(ctx, base);
	// subfic r5,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r3.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r3,r27
	ctx.r10.u64 = ctx.r3.u64 & ctx.r27.u64;
loc_8328B770:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2371
	cr6.compare<uint32_t>(ctx.r11.u32, 2371, xer);
	// beq cr6,0x8328b784
	if (cr6.eq) goto loc_8328B784;
	// cmplwi cr6,r11,485
	cr6.compare<uint32_t>(ctx.r11.u32, 485, xer);
	// bne cr6,0x8328b788
	if (!cr6.eq) goto loc_8328B788;
loc_8328B784:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8328B788:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328b7b0
	if (!cr6.eq) goto loc_8328B7B0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328b7b0
	if (cr6.eq) goto loc_8328B7B0;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bne cr6,0x8328b7b0
	if (!cr6.eq) goto loc_8328B7B0;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8328B7B0:
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B7C4"))) PPC_WEAK_FUNC(sub_8328B7C4);
PPC_FUNC_IMPL(__imp__sub_8328B7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B7C8"))) PPC_WEAK_FUNC(sub_8328B7C8);
PPC_FUNC_IMPL(__imp__sub_8328B7C8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83295b88
	ctx.lr = 0x8328B7E8;
	sub_83295B88(ctx, base);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296d08
	ctx.lr = 0x8328B7F4;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328b810
	if (cr6.eq) goto loc_8328B810;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83254f98
	ctx.lr = 0x8328B810;
	sub_83254F98(ctx, base);
loc_8328B810:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x8328B818;
	sub_83255A88(ctx, base);
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

__attribute__((alias("__imp__sub_8328B834"))) PPC_WEAK_FUNC(sub_8328B834);
PPC_FUNC_IMPL(__imp__sub_8328B834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B838"))) PPC_WEAK_FUNC(sub_8328B838);
PPC_FUNC_IMPL(__imp__sub_8328B838) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328b878
	if (cr6.eq) goto loc_8328B878;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8328b7c8
	ctx.lr = 0x8328B868;
	sub_8328B7C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223af0
	ctx.lr = 0x8328B874;
	sub_83223AF0(ctx, base);
	// b 0x8328b8b4
	goto loc_8328B8B4;
loc_8328B878:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328b8a0
	if (cr6.eq) goto loc_8328B8A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328B8A0;
	sub_83222030(ctx, base);
loc_8328B8A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8328B8B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328B8CC"))) PPC_WEAK_FUNC(sub_8328B8CC);
PPC_FUNC_IMPL(__imp__sub_8328B8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B8D0"))) PPC_WEAK_FUNC(sub_8328B8D0);
PPC_FUNC_IMPL(__imp__sub_8328B8D0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83295c40
	ctx.lr = 0x8328B8F0;
	sub_83295C40(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328b908
	if (cr6.eq) goto loc_8328B908;
	// li r4,354
	ctx.r4.s64 = 354;
	// b 0x8328b918
	goto loc_8328B918;
loc_8328B908:
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// li r4,2371
	ctx.r4.s64 = 2371;
	// beq cr6,0x8328b918
	if (cr6.eq) goto loc_8328B918;
	// li r4,587
	ctx.r4.s64 = 587;
loc_8328B918:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223c38
	ctx.lr = 0x8328B920;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_8328B93C"))) PPC_WEAK_FUNC(sub_8328B93C);
PPC_FUNC_IMPL(__imp__sub_8328B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328B940"))) PPC_WEAK_FUNC(sub_8328B940);
PPC_FUNC_IMPL(__imp__sub_8328B940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8328B950:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8328b950
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328B950;
	// b 0x83235698
	sub_83235698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B960"))) PPC_WEAK_FUNC(sub_8328B960);
PPC_FUNC_IMPL(__imp__sub_8328B960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8328B968;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328B980;
	sub_83209AA8(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x8328B990;
	sub_83294018(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// li r9,34
	ctx.r9.s64 = 34;
	// addi r8,r10,24688
	ctx.r8.s64 = ctx.r10.s64 + 24688;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// ori r4,r5,128
	ctx.r4.u64 = ctx.r5.u64 | 128;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// li r7,168
	ctx.r7.s64 = 168;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// sth r4,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r4.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// sth r7,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r7.u16);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8328b9f4
	if (cr6.eq) goto loc_8328B9F4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_8328B9F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328B9FC"))) PPC_WEAK_FUNC(sub_8328B9FC);
PPC_FUNC_IMPL(__imp__sub_8328B9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328BA00"))) PPC_WEAK_FUNC(sub_8328BA00);
PPC_FUNC_IMPL(__imp__sub_8328BA00) {
	PPC_FUNC_PROLOGUE();
	// b 0x83209d68
	sub_83209D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328BA04"))) PPC_WEAK_FUNC(sub_8328BA04);
PPC_FUNC_IMPL(__imp__sub_8328BA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328BA08"))) PPC_WEAK_FUNC(sub_8328BA08);
PPC_FUNC_IMPL(__imp__sub_8328BA08) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8328ba40
	if (cr6.eq) goto loc_8328BA40;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8328b960
	ctx.lr = 0x8328BA3C;
	sub_8328B960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8328BA40:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328ba68
	if (cr6.eq) goto loc_8328BA68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8328BA68;
	sub_83222030(ctx, base);
loc_8328BA68:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328BAA4"))) PPC_WEAK_FUNC(sub_8328BAA4);
PPC_FUNC_IMPL(__imp__sub_8328BAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328BAA8"))) PPC_WEAK_FUNC(sub_8328BAA8);
PPC_FUNC_IMPL(__imp__sub_8328BAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8328BAB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328c1dc
	if (cr6.eq) goto loc_8328C1DC;
	// bl 0x83295c40
	ctx.lr = 0x8328BACC;
	sub_83295C40(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r8,12288
	ctx.r8.s64 = 12288;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 ^ 32;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8328bb04
	if (cr6.eq) goto loc_8328BB04;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8328BB04:
	// clrlwi r11,r24,26
	ctx.r11.u64 = ctx.r24.u32 & 0x3F;
	// cmpwi cr6,r11,52
	cr6.compare<int32_t>(ctx.r11.s32, 52, xer);
	// bgt cr6,0x8328c1e8
	if (cr6.gt) goto loc_8328C1E8;
	// beq cr6,0x8328c0d8
	if (cr6.eq) goto loc_8328C0D8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x8328c1e8
	if (cr6.gt) goto loc_8328C1E8;
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17608
	ctx.r12.s64 = ctx.r12.s64 + -17608;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8328BC1C;
	case 1:
		goto loc_8328BB6C;
	case 2:
		goto loc_8328BCCC;
	case 3:
		goto loc_8328BD80;
	case 4:
		goto loc_8328BEE4;
	case 5:
		goto loc_8328BE34;
	case 6:
		goto loc_8328C1E8;
	case 7:
		goto loc_8328C1E8;
	case 8:
		goto loc_8328C1E8;
	case 9:
		goto loc_8328C048;
	case 10:
		goto loc_8328C1E8;
	case 11:
		goto loc_8328C094;
	case 12:
		goto loc_8328BF94;
	default:
		return;
	}
	// lwz r25,-17380(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17380);
	// lwz r25,-17556(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17556);
	// lwz r25,-17204(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17204);
	// lwz r25,-17024(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17024);
	// lwz r25,-16668(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16668);
	// lwz r25,-16844(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16844);
	// lwz r25,-15896(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15896);
	// lwz r25,-15896(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15896);
	// lwz r25,-15896(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15896);
	// lwz r25,-16312(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16312);
	// lwz r25,-15896(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15896);
	// lwz r25,-16236(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16236);
	// lwz r25,-16492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16492);
loc_8328BB6C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328bc08
	if (cr6.eq) goto loc_8328BC08;
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r29,128
	cr6.compare<int32_t>(ctx.r29.s32, 128, xer);
	// bge cr6,0x8328bb8c
	if (!cr6.lt) goto loc_8328BB8C;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// b 0x8328bb9c
	goto loc_8328BB9C;
loc_8328BB8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328BB94;
	sub_83209AA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8328BB9C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8328bbd8
	if (!cr6.gt) goto loc_8328BBD8;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
loc_8328BBAC:
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BBC0;
	sub_83222578(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// stbx r8,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// blt cr6,0x8328bbac
	if (cr6.lt) goto loc_8328BBAC;
loc_8328BBD8:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295030
	ctx.lr = 0x8328BBF0;
	sub_83295030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8328c1a4
	if (cr6.eq) goto loc_8328C1A4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328BC04;
	sub_83209D68(ctx, base);
	// b 0x8328c1a4
	goto loc_8328C1A4;
loc_8328BC08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BC10;
	sub_83222578(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8328c198
	goto loc_8328C198;
loc_8328BC1C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328bcb8
	if (cr6.eq) goto loc_8328BCB8;
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r29,128
	cr6.compare<int32_t>(ctx.r29.s32, 128, xer);
	// bge cr6,0x8328bc3c
	if (!cr6.lt) goto loc_8328BC3C;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// b 0x8328bc4c
	goto loc_8328BC4C;
loc_8328BC3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328BC44;
	sub_83209AA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8328BC4C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8328bc88
	if (!cr6.gt) goto loc_8328BC88;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
loc_8328BC5C:
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BC70;
	sub_83222578(ctx, base);
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// stbx r8,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// blt cr6,0x8328bc5c
	if (cr6.lt) goto loc_8328BC5C;
loc_8328BC88:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295030
	ctx.lr = 0x8328BCA0;
	sub_83295030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8328c1a4
	if (cr6.eq) goto loc_8328C1A4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328BCB4;
	sub_83209D68(ctx, base);
	// b 0x8328c1a4
	goto loc_8328C1A4;
loc_8328BCB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BCC0;
	sub_83222578(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// extsb r5,r3
	ctx.r5.s64 = ctx.r3.s8;
	// b 0x8328c198
	goto loc_8328C198;
loc_8328BCCC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328bd6c
	if (cr6.eq) goto loc_8328BD6C;
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r3,r28,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bge cr6,0x8328bcf0
	if (!cr6.lt) goto loc_8328BCF0;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// b 0x8328bcfc
	goto loc_8328BCFC;
loc_8328BCF0:
	// bl 0x83209aa8
	ctx.lr = 0x8328BCF4;
	sub_83209AA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8328BCFC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x8328bd3c
	if (!cr6.gt) goto loc_8328BD3C;
	// addi r29,r27,-2
	ctx.r29.s64 = ctx.r27.s64 + -2;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
loc_8328BD10:
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BD24;
	sub_83222578(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// sthu r8,2(r29)
	ea = 2 + ctx.r29.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r29.u32 = ea;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// blt cr6,0x8328bd10
	if (cr6.lt) goto loc_8328BD10;
loc_8328BD3C:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295030
	ctx.lr = 0x8328BD54;
	sub_83295030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8328c1a4
	if (cr6.eq) goto loc_8328C1A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328BD68;
	sub_83209D68(ctx, base);
	// b 0x8328c1a4
	goto loc_8328C1A4;
loc_8328BD6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BD74;
	sub_83222578(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// b 0x8328c198
	goto loc_8328C198;
loc_8328BD80:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328be20
	if (cr6.eq) goto loc_8328BE20;
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r3,r28,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bge cr6,0x8328bda4
	if (!cr6.lt) goto loc_8328BDA4;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// b 0x8328bdb0
	goto loc_8328BDB0;
loc_8328BDA4:
	// bl 0x83209aa8
	ctx.lr = 0x8328BDA8;
	sub_83209AA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8328BDB0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x8328bdf0
	if (!cr6.gt) goto loc_8328BDF0;
	// addi r29,r27,-2
	ctx.r29.s64 = ctx.r27.s64 + -2;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
loc_8328BDC4:
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BDD8;
	sub_83222578(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// sthu r8,2(r29)
	ea = 2 + ctx.r29.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r29.u32 = ea;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// blt cr6,0x8328bdc4
	if (cr6.lt) goto loc_8328BDC4;
loc_8328BDF0:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295030
	ctx.lr = 0x8328BE08;
	sub_83295030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8328c1a4
	if (cr6.eq) goto loc_8328C1A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328BE1C;
	sub_83209D68(ctx, base);
	// b 0x8328c1a4
	goto loc_8328C1A4;
loc_8328BE20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BE28;
	sub_83222578(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8328c198
	goto loc_8328C198;
loc_8328BE34:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328bed0
	if (cr6.eq) goto loc_8328BED0;
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bge cr6,0x8328be58
	if (!cr6.lt) goto loc_8328BE58;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// b 0x8328be64
	goto loc_8328BE64;
loc_8328BE58:
	// bl 0x83209aa8
	ctx.lr = 0x8328BE5C;
	sub_83209AA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8328BE64:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x8328bea0
	if (!cr6.gt) goto loc_8328BEA0;
	// addi r29,r27,-4
	ctx.r29.s64 = ctx.r27.s64 + -4;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
loc_8328BE78:
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BE8C;
	sub_83222578(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// blt cr6,0x8328be78
	if (cr6.lt) goto loc_8328BE78;
loc_8328BEA0:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295030
	ctx.lr = 0x8328BEB8;
	sub_83295030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8328c1a4
	if (cr6.eq) goto loc_8328C1A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328BECC;
	sub_83209D68(ctx, base);
	// b 0x8328c1a4
	goto loc_8328C1A4;
loc_8328BED0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BED8;
	sub_83222578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8328c198
	goto loc_8328C198;
loc_8328BEE4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328bf80
	if (cr6.eq) goto loc_8328BF80;
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bge cr6,0x8328bf08
	if (!cr6.lt) goto loc_8328BF08;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// b 0x8328bf14
	goto loc_8328BF14;
loc_8328BF08:
	// bl 0x83209aa8
	ctx.lr = 0x8328BF0C;
	sub_83209AA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8328BF14:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x8328bf50
	if (!cr6.gt) goto loc_8328BF50;
	// addi r29,r27,-4
	ctx.r29.s64 = ctx.r27.s64 + -4;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
loc_8328BF28:
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BF3C;
	sub_83222578(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// blt cr6,0x8328bf28
	if (cr6.lt) goto loc_8328BF28;
loc_8328BF50:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295030
	ctx.lr = 0x8328BF68;
	sub_83295030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8328c1a4
	if (cr6.eq) goto loc_8328C1A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328BF7C;
	sub_83209D68(ctx, base);
	// b 0x8328c1a4
	goto loc_8328C1A4;
loc_8328BF80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8328BF88;
	sub_83222578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8328c198
	goto loc_8328C198;
loc_8328BF94:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328c030
	if (cr6.eq) goto loc_8328C030;
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,128
	cr6.compare<uint32_t>(ctx.r3.u32, 128, xer);
	// bge cr6,0x8328bfb8
	if (!cr6.lt) goto loc_8328BFB8;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// b 0x8328bfc4
	goto loc_8328BFC4;
loc_8328BFB8:
	// bl 0x83209aa8
	ctx.lr = 0x8328BFBC;
	sub_83209AA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8328BFC4:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x8328c000
	if (!cr6.gt) goto loc_8328C000;
	// addi r29,r27,-4
	ctx.r29.s64 = ctx.r27.s64 + -4;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
loc_8328BFD8:
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83220448
	ctx.lr = 0x8328BFEC;
	sub_83220448(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r29.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// blt cr6,0x8328bfd8
	if (cr6.lt) goto loc_8328BFD8;
loc_8328C000:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295030
	ctx.lr = 0x8328C018;
	sub_83295030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8328c1a4
	if (cr6.eq) goto loc_8328C1A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328C02C;
	sub_83209D68(ctx, base);
	// b 0x8328c1a4
	goto loc_8328C1A4;
loc_8328C030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x8328C038;
	sub_83220448(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x8328c198
	goto loc_8328C198;
loc_8328C048:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x8328C05C;
	sub_83222BE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295030
	ctx.lr = 0x8328C070;
	sub_83295030(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x8328c1a4
	if (cr6.eq) goto loc_8328C1A4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328c1a4
	if (cr6.eq) goto loc_8328C1A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328C090;
	sub_83209D68(ctx, base);
	// b 0x8328c1a4
	goto loc_8328C1A4;
loc_8328C094:
	// xori r11,r10,136
	ctx.r11.u64 = ctx.r10.u64 ^ 136;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// and r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8328c0c4
	if (cr6.eq) goto loc_8328C0C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83245978
	ctx.lr = 0x8328C0B8;
	sub_83245978(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x8328c198
	goto loc_8328C198;
loc_8328C0C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8328C0CC;
	sub_83222578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x8328c198
	goto loc_8328C198;
loc_8328C0D8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328c17c
	if (cr6.eq) goto loc_8328C17C;
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r29,128
	cr6.compare<int32_t>(ctx.r29.s32, 128, xer);
	// bge cr6,0x8328c0f8
	if (!cr6.lt) goto loc_8328C0F8;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// b 0x8328c108
	goto loc_8328C108;
loc_8328C0F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328C100;
	sub_83209AA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8328C108:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8328c14c
	if (!cr6.gt) goto loc_8328C14C;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
loc_8328C118:
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83220140
	ctx.lr = 0x8328C12C;
	sub_83220140(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stbx r6,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r6.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// blt cr6,0x8328c118
	if (cr6.lt) goto loc_8328C118;
loc_8328C14C:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295030
	ctx.lr = 0x8328C164;
	sub_83295030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8328c1a4
	if (cr6.eq) goto loc_8328C1A4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328C178;
	sub_83209D68(ctx, base);
	// b 0x8328c1a4
	goto loc_8328C1A4;
loc_8328C17C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220140
	ctx.lr = 0x8328C184;
	sub_83220140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,52
	ctx.r4.s64 = 52;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
loc_8328C198:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295030
	ctx.lr = 0x8328C1A0;
	sub_83295030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8328C1A4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x8328c1dc
	if (!cr6.lt) goto loc_8328C1DC;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295b88
	ctx.lr = 0x8328C1BC;
	sub_83295B88(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24344
	ctx.r4.s64 = ctx.r11.s64 + 24344;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// bl 0x832085e8
	ctx.lr = 0x8328C1DC;
	sub_832085E8(ctx, base);
loc_8328C1DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8328C1E8:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295b88
	ctx.lr = 0x8328C1F8;
	sub_83295B88(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24300
	ctx.r4.s64 = ctx.r11.s64 + 24300;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x83208568
	ctx.lr = 0x8328C214;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8328C214"))) PPC_WEAK_FUNC(sub_8328C214);
PPC_FUNC_IMPL(__imp__sub_8328C214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328C218"))) PPC_WEAK_FUNC(sub_8328C218);
PPC_FUNC_IMPL(__imp__sub_8328C218) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328c2cc
	if (cr6.eq) goto loc_8328C2CC;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8328c264
	if (!cr6.eq) goto loc_8328C264;
	// lhz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8328C258;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328c2cc
	if (cr6.eq) goto loc_8328C2CC;
loc_8328C264:
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8328c2cc
	if (cr6.eq) goto loc_8328C2CC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,24392
	ctx.r5.s64 = ctx.r11.s64 + 24392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x8328C284;
	sub_83297A40(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x8328C294;
	sub_83295250(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328c2cc
	if (cr6.eq) goto loc_8328C2CC;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83222be8
	ctx.lr = 0x8328C2B4;
	sub_83222BE8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83295030
	ctx.lr = 0x8328C2C4;
	sub_83295030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328c2d0
	goto loc_8328C2D0;
loc_8328C2CC:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_8328C2D0:
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

__attribute__((alias("__imp__sub_8328C2E8"))) PPC_WEAK_FUNC(sub_8328C2E8);
PPC_FUNC_IMPL(__imp__sub_8328C2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8328C2F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addi r25,r1,144
	ctx.r25.s64 = ctx.r1.s64 + 144;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328cbd0
	if (cr6.eq) goto loc_8328CBD0;
	// bl 0x83295c40
	ctx.lr = 0x8328C314;
	sub_83295C40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83295c40
	ctx.lr = 0x8328C320;
	sub_83295C40(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// clrlwi r10,r3,26
	ctx.r10.u64 = ctx.r3.u32 & 0x3F;
	// addi r9,r11,24160
	ctx.r9.s64 = ctx.r11.s64 + 24160;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsb r31,r8
	ctx.r31.s64 = ctx.r8.s8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x8328c344
	if (cr6.gt) goto loc_8328C344;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x8328c364
	goto loc_8328C364;
loc_8328C344:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83295dc8
	ctx.lr = 0x8328C34C;
	sub_83295DC8(ctx, base);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r30,r3,r31
	ctx.r30.s32 = PPCDivide(ctx.r3.s32, ctx.r31.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r31,0
	// andc r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// twlgei r10,-1
loc_8328C364:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83295dc8
	ctx.lr = 0x8328C36C;
	sub_83295DC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832951a8
	ctx.lr = 0x8328C378;
	sub_832951A8(ctx, base);
	// clrlwi r11,r27,26
	ctx.r11.u64 = ctx.r27.u32 & 0x3F;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// bgt cr6,0x8328cbdc
	if (cr6.gt) goto loc_8328CBDC;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r20,r10,24256
	ctx.r20.s64 = ctx.r10.s64 + 24256;
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15444
	ctx.r12.s64 = ctx.r12.s64 + -15444;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8328C4D8;
	case 1:
		goto loc_8328C4FC;
	case 2:
		goto loc_8328C544;
	case 3:
		goto loc_8328C588;
	case 4:
		goto loc_8328C5CC;
	case 5:
		goto loc_8328C60C;
	case 6:
		goto loc_8328C650;
	case 7:
		goto loc_8328C694;
	case 8:
		goto loc_8328C6D8;
	case 9:
		goto loc_8328C47C;
	case 10:
		goto loc_8328C938;
	case 11:
		goto loc_8328CBDC;
	case 12:
		goto loc_8328C98C;
	case 13:
		goto loc_8328C71C;
	case 14:
		goto loc_8328CBDC;
	case 15:
		goto loc_8328CBDC;
	case 16:
		goto loc_8328CBDC;
	case 17:
		goto loc_8328C7B4;
	case 18:
		goto loc_8328CBDC;
	case 19:
		goto loc_8328C878;
	case 20:
		goto loc_8328CBDC;
	case 21:
		goto loc_8328CBDC;
	case 22:
		goto loc_8328CBDC;
	case 23:
		goto loc_8328C8AC;
	case 24:
		goto loc_8328CBDC;
	case 25:
		goto loc_8328CBDC;
	case 26:
		goto loc_8328CBDC;
	case 27:
		goto loc_8328CBDC;
	case 28:
		goto loc_8328CBDC;
	case 29:
		goto loc_8328CBDC;
	case 30:
		goto loc_8328CBDC;
	case 31:
		goto loc_8328CBDC;
	case 32:
		goto loc_8328CBDC;
	case 33:
		goto loc_8328CBDC;
	case 34:
		goto loc_8328CBDC;
	case 35:
		goto loc_8328CBDC;
	case 36:
		goto loc_8328C8F4;
	case 37:
		goto loc_8328CBDC;
	case 38:
		goto loc_8328CBDC;
	case 39:
		goto loc_8328CBDC;
	case 40:
		goto loc_8328CBDC;
	case 41:
		goto loc_8328CBDC;
	case 42:
		goto loc_8328CBDC;
	case 43:
		goto loc_8328CBDC;
	case 44:
		goto loc_8328CBDC;
	case 45:
		goto loc_8328C938;
	case 46:
		goto loc_8328CBDC;
	case 47:
		goto loc_8328CBDC;
	case 48:
		goto loc_8328CBDC;
	case 49:
		goto loc_8328CBDC;
	case 50:
		goto loc_8328CBDC;
	case 51:
		goto loc_8328C948;
	default:
		return;
	}
	// lwz r25,-15144(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15144);
	// lwz r25,-15108(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15108);
	// lwz r25,-15036(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15036);
	// lwz r25,-14968(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14968);
	// lwz r25,-14900(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14900);
	// lwz r25,-14836(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14836);
	// lwz r25,-14768(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14768);
	// lwz r25,-14700(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14700);
	// lwz r25,-14632(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14632);
	// lwz r25,-15236(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15236);
	// lwz r25,-14024(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14024);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13940(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13940);
	// lwz r25,-14564(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14564);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-14412(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14412);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-14216(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14216);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-14164(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14164);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-14092(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14092);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-14024(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14024);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-13348(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13348);
	// lwz r25,-14008(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14008);
loc_8328C47C:
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// rlwinm r30,r11,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328C48C;
	sub_83209AA8(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r10,24256
	ctx.r8.s64 = ctx.r10.s64 + 24256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r9,24560
	ctx.r4.s64 = ctx.r9.s64 + 24560;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x832085e8
	ctx.lr = 0x8328C4A8;
	sub_832085E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8328C4B8;
	sub_83293EC8(ctx, base);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r28,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r28.s64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x8328C4CC;
	sub_83294018(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83223bd0
	ctx.lr = 0x8328C4D8;
	sub_83223BD0(ctx, base);
loc_8328C4D8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328cbd0
	if (cr6.eq) goto loc_8328CBD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83273b48
	ctx.lr = 0x8328C4EC;
	sub_83273B48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328cb88
	if (!cr6.eq) goto loc_8328CB88;
	// b 0x8328cb90
	goto loc_8328CB90;
loc_8328C4FC:
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// ble cr6,0x8328c514
	if (!cr6.gt) goto loc_8328C514;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x8328C50C;
	sub_83209AA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8328C514:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8328c53c
	if (!cr6.gt) goto loc_8328C53C;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_8328C528:
	// lbzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8328c528
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328C528;
loc_8328C53C:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8328c830
	goto loc_8328C830;
loc_8328C544:
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// ble cr6,0x8328c55c
	if (!cr6.gt) goto loc_8328C55C;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x8328C554;
	sub_83209AA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8328C55C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8328c580
	if (!cr6.gt) goto loc_8328C580;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_8328C570:
	// lbzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8328c570
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328C570;
loc_8328C580:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8328c830
	goto loc_8328C830;
loc_8328C588:
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// ble cr6,0x8328c5a0
	if (!cr6.gt) goto loc_8328C5A0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x8328C598;
	sub_83209AA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8328C5A0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8328c5c4
	if (!cr6.gt) goto loc_8328C5C4;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
loc_8328C5B4:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8328c5b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328C5B4;
loc_8328C5C4:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8328c830
	goto loc_8328C830;
loc_8328C5CC:
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// ble cr6,0x8328c5e4
	if (!cr6.gt) goto loc_8328C5E4;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x8328C5DC;
	sub_83209AA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8328C5E4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8328c604
	if (!cr6.gt) goto loc_8328C604;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
loc_8328C5F8:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8328c5f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328C5F8;
loc_8328C604:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8328c830
	goto loc_8328C830;
loc_8328C60C:
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// ble cr6,0x8328c624
	if (!cr6.gt) goto loc_8328C624;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x8328C61C;
	sub_83209AA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8328C624:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8328c648
	if (!cr6.gt) goto loc_8328C648;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// subf r10,r25,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r25.s64;
loc_8328C638:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8328c638
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328C638;
loc_8328C648:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8328c830
	goto loc_8328C830;
loc_8328C650:
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// ble cr6,0x8328c668
	if (!cr6.gt) goto loc_8328C668;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x8328C660;
	sub_83209AA8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8328C668:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8328c68c
	if (!cr6.gt) goto loc_8328C68C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// subf r10,r25,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r25.s64;
loc_8328C67C:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8328c67c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328C67C;
loc_8328C68C:
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x8328c830
	goto loc_8328C830;
loc_8328C694:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// ble cr6,0x8328c6ac
	if (!cr6.gt) goto loc_8328C6AC;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209aa8
	ctx.lr = 0x8328C6A4;
	sub_83209AA8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8328C6AC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8328c6d0
	if (!cr6.gt) goto loc_8328C6D0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// subf r10,r25,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r25.s64;
loc_8328C6C0:
	// ldx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8328c6c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328C6C0;
loc_8328C6D0:
	// li r26,5
	ctx.r26.s64 = 5;
	// b 0x8328c830
	goto loc_8328C830;
loc_8328C6D8:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// ble cr6,0x8328c6f0
	if (!cr6.gt) goto loc_8328C6F0;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209aa8
	ctx.lr = 0x8328C6E8;
	sub_83209AA8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8328C6F0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8328c714
	if (!cr6.gt) goto loc_8328C714;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// subf r10,r25,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r25.s64;
loc_8328C704:
	// ldx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8328c704
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328C704;
loc_8328C714:
	// li r26,4
	ctx.r26.s64 = 4;
	// b 0x8328c830
	goto loc_8328C830;
loc_8328C71C:
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// ble cr6,0x8328c734
	if (!cr6.gt) goto loc_8328C734;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x8328C72C;
	sub_83209AA8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8328C734:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// blt cr6,0x8328c780
	if (cr6.lt) goto loc_8328C780;
	// addi r8,r30,-3
	ctx.r8.s64 = ctx.r30.s64 + -3;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// subf r7,r25,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r25.s64;
loc_8328C750:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8328c750
	if (cr6.lt) goto loc_8328C750;
loc_8328C780:
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, xer);
	// bge cr6,0x8328c7ac
	if (!cr6.lt) goto loc_8328C7AC;
	// subf r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r25,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r25.s64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8328C79C:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8328c79c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328C79C;
loc_8328C7AC:
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x8328c830
	goto loc_8328C830;
loc_8328C7B4:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83294f00
	ctx.lr = 0x8328C7C8;
	sub_83294F00(ctx, base);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// li r30,2
	ctx.r30.s64 = 2;
loc_8328C7EC:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8328C7F0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x8328c828
	if (!cr6.lt) goto loc_8328C828;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83295b88
	ctx.lr = 0x8328C808;
	sub_83295B88(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r11,24504
	ctx.r4.s64 = ctx.r11.s64 + 24504;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x832085e8
	ctx.lr = 0x8328C828;
	sub_832085E8(ctx, base);
loc_8328C828:
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(ctx.r26.s32, -1, xer);
	// beq cr6,0x8328c4d8
	if (cr6.eq) goto loc_8328C4D8;
loc_8328C830:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328ca38
	if (!cr6.eq) goto loc_8328CA38;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83295d60
	ctx.lr = 0x8328C844;
	sub_83295D60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328ca38
	if (!cr6.eq) goto loc_8328CA38;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x8328c9cc
	if (!cr6.eq) goto loc_8328C9CC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8328c9c4
	if (!cr6.lt) goto loc_8328C9C4;
	// bl 0x8322e5b0
	ctx.lr = 0x8328C874;
	sub_8322E5B0(ctx, base);
	// b 0x8328cbc0
	goto loc_8328CBC0;
loc_8328C878:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83294f00
	ctx.lr = 0x8328C88C;
	sub_83294F00(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// b 0x8328c7ec
	goto loc_8328C7EC;
loc_8328C8AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x83294f00
	ctx.lr = 0x8328C8D0;
	sub_83294F00(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x8328c7f0
	goto loc_8328C7F0;
loc_8328C8F4:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83294f00
	ctx.lr = 0x8328C908;
	sub_83294F00(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// li r23,1
	ctx.r23.s64 = 1;
	// lbz r4,83(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// b 0x8328c7ec
	goto loc_8328C7EC;
loc_8328C938:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83223a60
	ctx.lr = 0x8328C944;
	sub_83223A60(ctx, base);
	// b 0x8328c4d8
	goto loc_8328C4D8;
loc_8328C948:
	// cmpwi cr6,r30,64
	cr6.compare<int32_t>(ctx.r30.s32, 64, xer);
	// ble cr6,0x8328c960
	if (!cr6.gt) goto loc_8328C960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328C958;
	sub_83209AA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8328C960:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8328c984
	if (!cr6.gt) goto loc_8328C984;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// subf r10,r25,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r25.s64;
loc_8328C974:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8328c974
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328C974;
loc_8328C984:
	// li r26,3
	ctx.r26.s64 = 3;
	// b 0x8328c830
	goto loc_8328C830;
loc_8328C98C:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83294f00
	ctx.lr = 0x8328C9A0;
	sub_83294F00(ctx, base);
	// bl 0x832439d0
	ctx.lr = 0x8328C9A4;
	sub_832439D0(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83245968
	ctx.lr = 0x8328C9B0;
	sub_83245968(ctx, base);
	// li r5,136
	ctx.r5.s64 = 136;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83266dd0
	ctx.lr = 0x8328C9C0;
	sub_83266DD0(ctx, base);
	// b 0x8328c4d8
	goto loc_8328C4D8;
loc_8328C9C4:
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// b 0x8328cbbc
	goto loc_8328CBBC;
loc_8328C9CC:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x8328c9e4
	if (!cr6.eq) goto loc_8328C9E4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8322e5b0
	ctx.lr = 0x8328C9E0;
	sub_8322E5B0(ctx, base);
	// b 0x8328cbc0
	goto loc_8328CBC0;
loc_8328C9E4:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bne cr6,0x8328c9fc
	if (!cr6.eq) goto loc_8328C9FC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x8328C9F8;
	sub_832248D8(ctx, base);
	// b 0x8328cbc0
	goto loc_8328CBC0;
loc_8328C9FC:
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(ctx.r26.s32, 3, xer);
	// bne cr6,0x8328ca14
	if (!cr6.eq) goto loc_8328CA14;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lbz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// bl 0x8320cf60
	ctx.lr = 0x8328CA10;
	sub_8320CF60(ctx, base);
	// b 0x8328cbc0
	goto loc_8328CBC0;
loc_8328CA14:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(ctx.r26.s32, 4, xer);
	// beq cr6,0x8328cbb4
	if (cr6.eq) goto loc_8328CBB4;
	// cmpwi cr6,r26,5
	cr6.compare<int32_t>(ctx.r26.s32, 5, xer);
	// beq cr6,0x8328cbb4
	if (cr6.eq) goto loc_8328CBB4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r11,24472
	ctx.r4.s64 = ctx.r11.s64 + 24472;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x83208568
	ctx.lr = 0x8328CA38;
	sub_83208568(ctx, base);
loc_8328CA38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83273b48
	ctx.lr = 0x8328CA40;
	sub_83273B48(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8328cb28
	if (!cr6.gt) goto loc_8328CB28;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// ori r24,r11,65535
	ctx.r24.u64 = ctx.r11.u64 | 65535;
loc_8328CA60:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x8328ca70
	if (!cr6.eq) goto loc_8328CA70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8328ca9c
	goto loc_8328CA9C;
loc_8328CA70:
	// srawi r11,r31,3
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 3;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r31,3
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r5.s64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8328CA9C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x8328cac0
	if (!cr6.eq) goto loc_8328CAC0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r4,r24
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, xer);
	// bge cr6,0x8328cab8
	if (!cr6.lt) goto loc_8328CAB8;
	// bl 0x8322e5b0
	ctx.lr = 0x8328CAB4;
	sub_8322E5B0(ctx, base);
	// b 0x8328cb14
	goto loc_8328CB14;
loc_8328CAB8:
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// b 0x8328cb10
	goto loc_8328CB10;
loc_8328CAC0:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x8328cad4
	if (!cr6.eq) goto loc_8328CAD4;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8322e5b0
	ctx.lr = 0x8328CAD0;
	sub_8322E5B0(ctx, base);
	// b 0x8328cb14
	goto loc_8328CB14;
loc_8328CAD4:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bne cr6,0x8328cae8
	if (!cr6.eq) goto loc_8328CAE8;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x8328CAE4;
	sub_832248D8(ctx, base);
	// b 0x8328cb14
	goto loc_8328CB14;
loc_8328CAE8:
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(ctx.r26.s32, 3, xer);
	// bne cr6,0x8328cafc
	if (!cr6.eq) goto loc_8328CAFC;
	// lbzx r4,r31,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// bl 0x8320cf60
	ctx.lr = 0x8328CAF8;
	sub_8320CF60(ctx, base);
	// b 0x8328cb14
	goto loc_8328CB14;
loc_8328CAFC:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(ctx.r26.s32, 4, xer);
	// beq cr6,0x8328cb0c
	if (cr6.eq) goto loc_8328CB0C;
	// cmpwi cr6,r26,5
	cr6.compare<int32_t>(ctx.r26.s32, 5, xer);
	// bne cr6,0x8328cb74
	if (!cr6.eq) goto loc_8328CB74;
loc_8328CB0C:
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
loc_8328CB10:
	// bl 0x832238c0
	ctx.lr = 0x8328CB14;
	sub_832238C0(ctx, base);
loc_8328CB14:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x8328ca60
	if (cr6.lt) goto loc_8328CA60;
loc_8328CB28:
	// lhz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328cb50
	if (cr6.eq) goto loc_8328CB50;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83222030
	ctx.lr = 0x8328CB50;
	sub_83222030(ctx, base);
loc_8328CB50:
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// stw r27,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r27.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r21)
	PPC_STORE_U16(ctx.r21.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r8.u16);
	// b 0x8328cbc0
	goto loc_8328CBC0;
loc_8328CB74:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r11,24440
	ctx.r4.s64 = ctx.r11.s64 + 24440;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x83208568
	ctx.lr = 0x8328CB88;
	sub_83208568(ctx, base);
loc_8328CB88:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8328CB90:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x83222508
	ctx.lr = 0x8328CB98;
	sub_83222508(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83266dd0
	ctx.lr = 0x8328CBA8;
	sub_83266DD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8328CBB4:
	// ld r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_8328CBBC:
	// bl 0x832238c0
	ctx.lr = 0x8328CBC0;
	sub_832238C0(ctx, base);
loc_8328CBC0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x8328cbd0
	if (cr6.eq) goto loc_8328CBD0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328CBD0;
	sub_83209D68(ctx, base);
loc_8328CBD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8328CBDC:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83295b88
	ctx.lr = 0x8328CBEC;
	sub_83295B88(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24396
	ctx.r4.s64 = ctx.r11.s64 + 24396;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x83208568
	ctx.lr = 0x8328CC08;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8328CC08"))) PPC_WEAK_FUNC(sub_8328CC08);
PPC_FUNC_IMPL(__imp__sub_8328CC08) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328cc78
	if (!cr6.eq) goto loc_8328CC78;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8328cc54
	if (cr6.eq) goto loc_8328CC54;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8328cc5c
	if (!cr6.eq) goto loc_8328CC5C;
	// lhz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8328CC48;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328cc5c
	if (!cr6.eq) goto loc_8328CC5C;
loc_8328CC54:
	// bl 0x83227908
	ctx.lr = 0x8328CC58;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8328CC5C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24604
	ctx.r4.s64 = ctx.r11.s64 + 24604;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8328CC74;
	sub_832085E8(ctx, base);
	// b 0x8328cd0c
	goto loc_8328CD0C;
loc_8328CC78:
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328cd0c
	if (cr6.eq) goto loc_8328CD0C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8328cccc
	if (!cr6.eq) goto loc_8328CCCC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,63
	ctx.r5.s64 = 63;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x831cdcf0
	ctx.lr = 0x8328CCAC;
	sub_831CDCF0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83295b88
	ctx.lr = 0x8328CCBC;
	sub_83295B88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223a60
	ctx.lr = 0x8328CCC8;
	sub_83223A60(ctx, base);
	// b 0x8328cd0c
	goto loc_8328CD0C;
loc_8328CCCC:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328ccf8
	if (cr6.eq) goto loc_8328CCF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328CCF8;
	sub_83222030(ctx, base);
loc_8328CCF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8328CD0C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8328CD28"))) PPC_WEAK_FUNC(sub_8328CD28);
PPC_FUNC_IMPL(__imp__sub_8328CD28) {
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
	// bl 0x83295c40
	ctx.lr = 0x8328CD40;
	sub_83295C40(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8328cd6c
	if (!cr6.eq) goto loc_8328CD6C;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r3,r11,-22544
	ctx.r3.s64 = ctx.r11.s64 + -22544;
	// bl 0x83209b18
	ctx.lr = 0x8328CD58;
	sub_83209B18(ctx, base);
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
loc_8328CD6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328c2e8
	ctx.lr = 0x8328CD88;
	sub_8328C2E8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222be8
	ctx.lr = 0x8328CD9C;
	sub_83222BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8328CDA8;
	sub_83222030(ctx, base);
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

__attribute__((alias("__imp__sub_8328CDC0"))) PPC_WEAK_FUNC(sub_8328CDC0);
PPC_FUNC_IMPL(__imp__sub_8328CDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8328CDC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,40(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8328cdf0
	if (!cr6.eq) goto loc_8328CDF0;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r3,r11,-22544
	ctx.r3.s64 = ctx.r11.s64 + -22544;
	// bl 0x83209b18
	ctx.lr = 0x8328CDE8;
	sub_83209B18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8328CDF0:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// bne cr6,0x8328ce18
	if (!cr6.eq) goto loc_8328CE18;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83295e38
	ctx.lr = 0x8328CE0C;
	sub_83295E38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328ce18
	if (!cr6.eq) goto loc_8328CE18;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8328CE18:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328ce34
	if (cr6.eq) goto loc_8328CE34;
	// bl 0x8328cd28
	ctx.lr = 0x8328CE2C;
	sub_8328CD28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8328CE34:
	// bl 0x83295af0
	ctx.lr = 0x8328CE38;
	sub_83295AF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294ad8
	ctx.lr = 0x8328CE44;
	sub_83294AD8(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r5,r11,-28128
	ctx.r5.s64 = ctx.r11.s64 + -28128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83294a28
	ctx.lr = 0x8328CE5C;
	sub_83294A28(ctx, base);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// rlwinm r29,r10,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328CE6C;
	sub_83209AA8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x8328CE7C;
	sub_83294018(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83298fa0
	ctx.lr = 0x8328CE88;
	sub_83298FA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r9,-28360
	ctx.r5.s64 = ctx.r9.s64 + -28360;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83294a28
	ctx.lr = 0x8328CEA4;
	sub_83294A28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83299068
	ctx.lr = 0x8328CEAC;
	sub_83299068(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328CEB8"))) PPC_WEAK_FUNC(sub_8328CEB8);
PPC_FUNC_IMPL(__imp__sub_8328CEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8328CEC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328cedc
	if (!cr6.eq) goto loc_8328CEDC;
loc_8328CED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8328CEDC:
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328ced0
	if (cr6.eq) goto loc_8328CED0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8328cf38
	if (!cr6.eq) goto loc_8328CF38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83295c40
	ctx.lr = 0x8328CF04;
	sub_83295C40(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x8328cf38
	if (cr6.eq) goto loc_8328CF38;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,354
	cr6.compare<uint32_t>(ctx.r11.u32, 354, xer);
	// beq cr6,0x8328cf38
	if (cr6.eq) goto loc_8328CF38;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// bne cr6,0x8328cf3c
	if (!cr6.eq) goto loc_8328CF3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83295e38
	ctx.lr = 0x8328CF30;
	sub_83295E38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328cf3c
	if (!cr6.eq) goto loc_8328CF3C;
loc_8328CF38:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8328CF3C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328cf58
	if (cr6.eq) goto loc_8328CF58;
	// bl 0x8328cd28
	ctx.lr = 0x8328CF50;
	sub_8328CD28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8328CF58:
	// bl 0x83295af0
	ctx.lr = 0x8328CF5C;
	sub_83295AF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294ad8
	ctx.lr = 0x8328CF6C;
	sub_83294AD8(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28128
	ctx.r5.s64 = ctx.r11.s64 + -28128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83294a28
	ctx.lr = 0x8328CF84;
	sub_83294A28(ctx, base);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// rlwinm r29,r10,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328CF94;
	sub_83209AA8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x8328CFA4;
	sub_83294018(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83298fa0
	ctx.lr = 0x8328CFB0;
	sub_83298FA0(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,-28360
	ctx.r5.s64 = ctx.r9.s64 + -28360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294a28
	ctx.lr = 0x8328CFCC;
	sub_83294A28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83299068
	ctx.lr = 0x8328CFD4;
	sub_83299068(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328CFE0"))) PPC_WEAK_FUNC(sub_8328CFE0);
PPC_FUNC_IMPL(__imp__sub_8328CFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8328CFE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328d170
	if (cr6.eq) goto loc_8328D170;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8328d170
	if (cr6.eq) goto loc_8328D170;
	// clrlwi r25,r7,24
	ctx.r25.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8328d108
	if (!cr6.eq) goto loc_8328D108;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328d0bc
	if (cr6.eq) goto loc_8328D0BC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83295570
	ctx.lr = 0x8328D03C;
	sub_83295570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328d108
	if (cr6.eq) goto loc_8328D108;
loc_8328D048:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83295b88
	ctx.lr = 0x8328D058;
	sub_83295B88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255a88
	ctx.lr = 0x8328D060;
	sub_83255A88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83237ad0
	ctx.lr = 0x8328D06C;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328d0a0
	if (!cr6.eq) goto loc_8328D0A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328b960
	ctx.lr = 0x8328D088;
	sub_8328B960(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8328b398
	ctx.lr = 0x8328D098;
	sub_8328B398(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832356e0
	ctx.lr = 0x8328D0A0;
	sub_832356E0(ctx, base);
loc_8328D0A0:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83295570
	ctx.lr = 0x8328D0AC;
	sub_83295570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328d048
	if (!cr6.eq) goto loc_8328D048;
	// b 0x8328d108
	goto loc_8328D108;
loc_8328D0BC:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8328b7c8
	ctx.lr = 0x8328D0C8;
	sub_8328B7C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83237ad0
	ctx.lr = 0x8328D0D4;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328d108
	if (!cr6.eq) goto loc_8328D108;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328b960
	ctx.lr = 0x8328D0F0;
	sub_8328B960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8328b398
	ctx.lr = 0x8328D100;
	sub_8328B398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832356e0
	ctx.lr = 0x8328D108;
	sub_832356E0(ctx, base);
loc_8328D108:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83295570
	ctx.lr = 0x8328D114;
	sub_83295570(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328d138
	if (cr6.eq) goto loc_8328D138;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328cfe0
	ctx.lr = 0x8328D138;
	sub_8328CFE0(ctx, base);
loc_8328D138:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8328d170
	if (!cr6.eq) goto loc_8328D170;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83295570
	ctx.lr = 0x8328D14C;
	sub_83295570(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328d170
	if (cr6.eq) goto loc_8328D170;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328cfe0
	ctx.lr = 0x8328D170;
	sub_8328CFE0(ctx, base);
loc_8328D170:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328D17C"))) PPC_WEAK_FUNC(sub_8328D17C);
PPC_FUNC_IMPL(__imp__sub_8328D17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D180"))) PPC_WEAK_FUNC(sub_8328D180);
PPC_FUNC_IMPL(__imp__sub_8328D180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8328D188;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328d1b4
	if (cr6.eq) goto loc_8328D1B4;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8328D1B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328d214
	if (cr6.eq) goto loc_8328D214;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8328d200
	if (!cr6.gt) goto loc_8328D200;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8328D1DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x832356e0
	ctx.lr = 0x8328D1E8;
	sub_832356E0(ctx, base);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x8328d1dc
	if (cr6.lt) goto loc_8328D1DC;
loc_8328D200:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328d214
	if (cr6.eq) goto loc_8328D214;
	// bl 0x83209d68
	ctx.lr = 0x8328D210;
	sub_83209D68(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_8328D214:
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r28,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r28.u16);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328D22C"))) PPC_WEAK_FUNC(sub_8328D22C);
PPC_FUNC_IMPL(__imp__sub_8328D22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D230"))) PPC_WEAK_FUNC(sub_8328D230);
PPC_FUNC_IMPL(__imp__sub_8328D230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8328D238;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x8328D248;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8328d270
	if (cr6.lt) goto loc_8328D270;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x8328d278
	if (!cr6.gt) goto loc_8328D278;
loc_8328D270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e738
	ctx.lr = 0x8328D278;
	sub_8320E738(ctx, base);
loc_8328D278:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8328d2d4
	if (!cr6.gt) goto loc_8328D2D4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222be8
	ctx.lr = 0x8328D2B4;
	sub_83222BE8(ctx, base);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328d2d4
	if (cr6.eq) goto loc_8328D2D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,10060
	ctx.r4.s64 = ctx.r11.s64 + 10060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d290
	ctx.lr = 0x8328D2D4;
	sub_8320D290(ctx, base);
loc_8328D2D4:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328d300
	if (cr6.eq) goto loc_8328D300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328D300;
	sub_83222030(ctx, base);
loc_8328D300:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,141
	ctx.r10.s64 = 141;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328D31C"))) PPC_WEAK_FUNC(sub_8328D31C);
PPC_FUNC_IMPL(__imp__sub_8328D31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D320"))) PPC_WEAK_FUNC(sub_8328D320);
PPC_FUNC_IMPL(__imp__sub_8328D320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8328D328;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83208aa0
	ctx.lr = 0x8328D33C;
	sub_83208AA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8328d484
	if (cr6.eq) goto loc_8328D484;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832984d0
	ctx.lr = 0x8328D354;
	sub_832984D0(ctx, base);
	// lwz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r11,12288
	ctx.r11.s64 = 12288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8328d420
	if (cr6.eq) goto loc_8328D420;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266d78
	ctx.lr = 0x8328D384;
	sub_83266D78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328d3a0
	if (cr6.eq) goto loc_8328D3A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x8328b960
	ctx.lr = 0x8328D398;
	sub_8328B960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8328d3c4
	goto loc_8328D3C4;
loc_8328D3A0:
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266d78
	ctx.lr = 0x8328D3AC;
	sub_83266D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328d420
	if (cr6.eq) goto loc_8328D420;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
loc_8328D3C4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8328d420
	if (cr6.eq) goto loc_8328D420;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x8328d400
	if (!cr6.lt) goto loc_8328D400;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x832356e0
	ctx.lr = 0x8328D3EC;
	sub_832356E0(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r31,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8328D400:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328b398
	ctx.lr = 0x8328D40C;
	sub_8328B398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832356e0
	ctx.lr = 0x8328D414;
	sub_832356E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8328D420:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x8328d45c
	if (!cr6.lt) goto loc_8328D45C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328d484
	if (cr6.eq) goto loc_8328D484;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8328baa8
	ctx.lr = 0x8328D450;
	sub_8328BAA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8328D45C:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x83225c80
	ctx.lr = 0x8328D464;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,24256
	ctx.r9.s64 = ctx.r11.s64 + 24256;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,24632
	ctx.r4.s64 = ctx.r10.s64 + 24632;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8328D484;
	sub_832085E8(ctx, base);
loc_8328D484:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328D490"))) PPC_WEAK_FUNC(sub_8328D490);
PPC_FUNC_IMPL(__imp__sub_8328D490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8328D498;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x8328d4d0
	if (cr6.gt) goto loc_8328D4D0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83209aa8
	ctx.lr = 0x8328D4C4;
	sub_83209AA8(ctx, base);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8328D4D0:
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r10,1152
	cr6.compare<uint32_t>(ctx.r10.u32, 1152, xer);
	// bne cr6,0x8328d4e8
	if (!cr6.eq) goto loc_8328D4E8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x8328d4e8
	if (!cr6.gt) goto loc_8328D4E8;
	// li r26,2370
	ctx.r26.s64 = 2370;
loc_8328D4E8:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8328d58c
	if (!cr6.gt) goto loc_8328D58C;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8328D4F8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x8328ceb8
	ctx.lr = 0x8328D508;
	sub_8328CEB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255988
	ctx.lr = 0x8328D514;
	sub_83255988(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255980
	ctx.lr = 0x8328D520;
	sub_83255980(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8328d530
	if (!cr6.eq) goto loc_8328D530;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x8328d56c
	goto loc_8328D56C;
loc_8328D530:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r23,r11,0,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83209df8
	ctx.lr = 0x8328D548;
	sub_83209DF8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83255098
	ctx.lr = 0x8328D55C;
	sub_83255098(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328d56c
	if (cr6.eq) goto loc_8328D56C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328D56C;
	sub_83209D68(ctx, base);
loc_8328D56C:
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r25,r10
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, xer);
	// blt cr6,0x8328d4f8
	if (cr6.lt) goto loc_8328D4F8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8328d59c
	if (!cr6.eq) goto loc_8328D59C;
loc_8328D58C:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83209aa8
	ctx.lr = 0x8328D594;
	sub_83209AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
loc_8328D59C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328D5A8"))) PPC_WEAK_FUNC(sub_8328D5A8);
PPC_FUNC_IMPL(__imp__sub_8328D5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328d5b4
	if (!cr6.eq) goto loc_8328D5B4;
	// blr 
	return;
loc_8328D5B4:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D5C0"))) PPC_WEAK_FUNC(sub_8328D5C0);
PPC_FUNC_IMPL(__imp__sub_8328D5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8328D5C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328D5E4;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8328d65c
	if (!cr6.gt) goto loc_8328D65C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8328D610:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328d644
	if (cr6.eq) goto loc_8328D644;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8328d644
	if (cr6.eq) goto loc_8328D644;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328cfe0
	ctx.lr = 0x8328D644;
	sub_8328CFE0(ctx, base);
loc_8328D644:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x8328d610
	if (cr6.lt) goto loc_8328D610;
loc_8328D65C:
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328d684
	if (cr6.eq) goto loc_8328D684;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83222030
	ctx.lr = 0x8328D684;
	sub_83222030(ctx, base);
loc_8328D684:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r31.u32);
	// li r10,141
	ctx.r10.s64 = 141;
	// sth r11,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r25)
	PPC_STORE_U16(ctx.r25.u32 + 2, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328D6A4"))) PPC_WEAK_FUNC(sub_8328D6A4);
PPC_FUNC_IMPL(__imp__sub_8328D6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D6A8"))) PPC_WEAK_FUNC(sub_8328D6A8);
PPC_FUNC_IMPL(__imp__sub_8328D6A8) {
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
	// bl 0x83235198
	ctx.lr = 0x8328D6B8;
	sub_83235198(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// li r9,77
	ctx.r9.s64 = 77;
	// lhz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// ori r5,r6,128
	ctx.r5.u64 = ctx.r6.u64 | 128;
	// addi r8,r10,24688
	ctx.r8.s64 = ctx.r10.s64 + 24688;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// li r7,211
	ctx.r7.s64 = 211;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r10,r4,128
	ctx.r10.u64 = ctx.r4.u64 | 128;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// sth r9,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r9.u16);
	// sth r7,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r7.u16);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D714"))) PPC_WEAK_FUNC(sub_8328D714);
PPC_FUNC_IMPL(__imp__sub_8328D714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D718"))) PPC_WEAK_FUNC(sub_8328D718);
PPC_FUNC_IMPL(__imp__sub_8328D718) {
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
	// bl 0x8320d1e0
	ctx.lr = 0x8328D734;
	sub_8320D1E0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8328d748
	if (cr6.eq) goto loc_8328D748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e738
	ctx.lr = 0x8328D748;
	sub_8320E738(ctx, base);
loc_8328D748:
	// bl 0x8328d6a8
	ctx.lr = 0x8328D74C;
	sub_8328D6A8(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328d77c
	if (cr6.eq) goto loc_8328D77C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328D77C;
	sub_83222030(ctx, base);
loc_8328D77C:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,77
	ctx.r10.s64 = 77;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D7B4"))) PPC_WEAK_FUNC(sub_8328D7B4);
PPC_FUNC_IMPL(__imp__sub_8328D7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D7B8"))) PPC_WEAK_FUNC(sub_8328D7B8);
PPC_FUNC_IMPL(__imp__sub_8328D7B8) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,485
	cr6.compare<uint32_t>(ctx.r11.u32, 485, xer);
	// beq cr6,0x8328d7e8
	if (cr6.eq) goto loc_8328D7E8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8328d83c
	goto loc_8328D83C;
loc_8328D7E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8328D7F4;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328d828
	if (!cr6.eq) goto loc_8328D828;
	// bl 0x83235198
	ctx.lr = 0x8328D804;
	sub_83235198(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,29
	ctx.r5.s64 = 29;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322c4b8
	ctx.lr = 0x8328D818;
	sub_8322C4B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8328D824;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8328D828:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x8328D838;
	sub_832240B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8328D83C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D854"))) PPC_WEAK_FUNC(sub_8328D854);
PPC_FUNC_IMPL(__imp__sub_8328D854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D858"))) PPC_WEAK_FUNC(sub_8328D858);
PPC_FUNC_IMPL(__imp__sub_8328D858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// li r10,-4
	ctx.r10.s64 = -4;
	// addi r11,r11,-1210
	ctx.r11.s64 = ctx.r11.s64 + -1210;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D874"))) PPC_WEAK_FUNC(sub_8328D874);
PPC_FUNC_IMPL(__imp__sub_8328D874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D878"))) PPC_WEAK_FUNC(sub_8328D878);
PPC_FUNC_IMPL(__imp__sub_8328D878) {
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
	// bl 0x83235198
	ctx.lr = 0x8328D888;
	sub_83235198(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// li r9,76
	ctx.r9.s64 = 76;
	// lhz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// ori r5,r6,128
	ctx.r5.u64 = ctx.r6.u64 | 128;
	// addi r8,r10,24688
	ctx.r8.s64 = ctx.r10.s64 + 24688;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// li r7,210
	ctx.r7.s64 = 210;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r10,r4,128
	ctx.r10.u64 = ctx.r4.u64 | 128;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// sth r9,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r9.u16);
	// sth r7,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r7.u16);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D8E4"))) PPC_WEAK_FUNC(sub_8328D8E4);
PPC_FUNC_IMPL(__imp__sub_8328D8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D8E8"))) PPC_WEAK_FUNC(sub_8328D8E8);
PPC_FUNC_IMPL(__imp__sub_8328D8E8) {
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
	// bl 0x8320d1e0
	ctx.lr = 0x8328D904;
	sub_8320D1E0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8328d918
	if (cr6.lt) goto loc_8328D918;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x8328d920
	if (!cr6.gt) goto loc_8328D920;
loc_8328D918:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e738
	ctx.lr = 0x8328D920;
	sub_8320E738(ctx, base);
loc_8328D920:
	// bl 0x8328d878
	ctx.lr = 0x8328D924;
	sub_8328D878(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328d954
	if (cr6.eq) goto loc_8328D954;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328D954;
	sub_83222030(ctx, base);
loc_8328D954:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,76
	ctx.r10.s64 = 76;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D98C"))) PPC_WEAK_FUNC(sub_8328D98C);
PPC_FUNC_IMPL(__imp__sub_8328D98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D990"))) PPC_WEAK_FUNC(sub_8328D990);
PPC_FUNC_IMPL(__imp__sub_8328D990) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,2726
	cr6.compare<uint32_t>(ctx.r11.u32, 2726, xer);
	// beq cr6,0x8328d9bc
	if (cr6.eq) goto loc_8328D9BC;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8328D9BC:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8328d9d4
	if (cr6.eq) goto loc_8328D9D4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,24728
	ctx.r3.s64 = ctx.r11.s64 + 24728;
	// bl 0x8320d088
	ctx.lr = 0x8328D9D4;
	sub_8320D088(ctx, base);
loc_8328D9D4:
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

__attribute__((alias("__imp__sub_8328D9E8"))) PPC_WEAK_FUNC(sub_8328D9E8);
PPC_FUNC_IMPL(__imp__sub_8328D9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8328D9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8320d1e0
	ctx.lr = 0x8328D9FC;
	sub_8320D1E0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8328da18
	if (cr6.eq) goto loc_8328DA18;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328da18
	if (cr6.eq) goto loc_8328DA18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320e738
	ctx.lr = 0x8328DA18;
	sub_8320E738(ctx, base);
loc_8328DA18:
	// bl 0x83235198
	ctx.lr = 0x8328DA1C;
	sub_83235198(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r29,67
	ctx.r29.s64 = 67;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// li r11,201
	ctx.r11.s64 = 201;
	// sth r29,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r29.u16);
	// rlwinm r7,r7,0,25,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sraw r4,r8,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r4.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328da6c
	if (cr6.eq) goto loc_8328DA6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8328DA6C;
	sub_83222030(ctx, base);
loc_8328DA6C:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r29,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r29.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// bl 0x8323ddc8
	ctx.lr = 0x8328DA84;
	sub_8323DDC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328DA8C"))) PPC_WEAK_FUNC(sub_8328DA8C);
PPC_FUNC_IMPL(__imp__sub_8328DA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DA90"))) PPC_WEAK_FUNC(sub_8328DA90);
PPC_FUNC_IMPL(__imp__sub_8328DA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8328DA98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,791
	cr6.compare<uint32_t>(ctx.r11.u32, 791, xer);
	// beq cr6,0x8328db0c
	if (cr6.eq) goto loc_8328DB0C;
	// cmplwi cr6,r11,1937
	cr6.compare<uint32_t>(ctx.r11.u32, 1937, xer);
	// beq cr6,0x8328dac4
	if (cr6.eq) goto loc_8328DAC4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328DAC4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8328DAD0;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x8328daf8
	if (cr6.eq) goto loc_8328DAF8;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x8328DAEC;
	sub_832240B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328DAF8:
	// li r4,354
	ctx.r4.s64 = 354;
	// bl 0x83223c38
	ctx.lr = 0x8328DB00;
	sub_83223C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328DB0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8328DB18;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328db6c
	if (cr6.eq) goto loc_8328DB6C;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328db50
	if (cr6.eq) goto loc_8328DB50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328DB50;
	sub_83222030(ctx, base);
loc_8328DB50:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328DB6C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83222030
	ctx.lr = 0x8328DB74;
	sub_83222030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328DB80"))) PPC_WEAK_FUNC(sub_8328DB80);
PPC_FUNC_IMPL(__imp__sub_8328DB80) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1937
	cr6.compare<uint32_t>(ctx.r11.u32, 1937, xer);
	// beq cr6,0x8328dbb0
	if (cr6.eq) goto loc_8328DBB0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8328dc48
	goto loc_8328DC48;
loc_8328DBB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x832264e0
	ctx.lr = 0x8328DBD8;
	sub_832264E0(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328dc04
	if (!cr6.eq) goto loc_8328DC04;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x8328DBEC;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328dc04
	if (!cr6.eq) goto loc_8328DC04;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_8328DC04:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,589
	cr6.compare<uint32_t>(ctx.r10.u32, 589, xer);
	// beq cr6,0x8328dc34
	if (cr6.eq) goto loc_8328DC34;
	// cmplwi cr6,r10,354
	cr6.compare<uint32_t>(ctx.r10.u32, 354, xer);
	// beq cr6,0x8328dc34
	if (cr6.eq) goto loc_8328DC34;
	// cmplwi cr6,r10,590
	cr6.compare<uint32_t>(ctx.r10.u32, 590, xer);
	// beq cr6,0x8328dc34
	if (cr6.eq) goto loc_8328DC34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,67
	ctx.r3.s64 = 67;
	// bl 0x8320d7f8
	ctx.lr = 0x8328DC2C;
	sub_8320D7F8(ctx, base);
	// li r11,354
	ctx.r11.s64 = 354;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_8328DC34:
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322c278
	ctx.lr = 0x8328DC44;
	sub_8322C278(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8328DC48:
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

__attribute__((alias("__imp__sub_8328DC60"))) PPC_WEAK_FUNC(sub_8328DC60);
PPC_FUNC_IMPL(__imp__sub_8328DC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8328DC68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1213
	cr6.compare<uint32_t>(ctx.r11.u32, 1213, xer);
	// beq cr6,0x8328dcac
	if (cr6.eq) goto loc_8328DCAC;
	// cmplwi cr6,r11,2320
	cr6.compare<uint32_t>(ctx.r11.u32, 2320, xer);
	// beq cr6,0x8328dc94
	if (cr6.eq) goto loc_8328DC94;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328DC94:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83266b98
	ctx.lr = 0x8328DCA0;
	sub_83266B98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328DCAC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328dcc8
	if (cr6.eq) goto loc_8328DCC8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24740
	ctx.r3.s64 = ctx.r11.s64 + 24740;
	// bl 0x8320d088
	ctx.lr = 0x8328DCC8;
	sub_8320D088(ctx, base);
loc_8328DCC8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8328dd40
	if (cr6.lt) goto loc_8328DD40;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,60
	ctx.r4.s64 = 60;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83221378
	ctx.lr = 0x8328DCFC;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328dd2c
	if (!cr6.eq) goto loc_8328DD2C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,7928
	ctx.r5.s64 = ctx.r11.s64 + 7928;
	// li r6,60
	ctx.r6.s64 = 60;
	// li r3,67
	ctx.r3.s64 = 67;
	// bl 0x8320d428
	ctx.lr = 0x8328DD20;
	sub_8320D428(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328DD2C:
	// bl 0x832284a0
	ctx.lr = 0x8328DD30;
	sub_832284A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322c128
	ctx.lr = 0x8328DD40;
	sub_8322C128(ctx, base);
loc_8328DD40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328DD4C"))) PPC_WEAK_FUNC(sub_8328DD4C);
PPC_FUNC_IMPL(__imp__sub_8328DD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DD50"))) PPC_WEAK_FUNC(sub_8328DD50);
PPC_FUNC_IMPL(__imp__sub_8328DD50) {
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
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8328de48
	if (cr6.eq) goto loc_8328DE48;
	// dcbt r0,r7
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8328de48
	if (!cr6.gt) goto loc_8328DE48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8328DD90:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r5,5(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// beq cr6,0x8328ddc4
	if (cr6.eq) goto loc_8328DDC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x8328dd90
	if (cr6.lt) goto loc_8328DD90;
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
loc_8328DDC4:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// li r10,791
	ctx.r10.s64 = 791;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322dfb0
	ctx.lr = 0x8328DE00;
	sub_8322DFB0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266348
	ctx.lr = 0x8328DE14;
	sub_83266348(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266348
	ctx.lr = 0x8328DE28;
	sub_83266348(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266348
	ctx.lr = 0x8328DE3C;
	sub_83266348(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b7d0
	ctx.lr = 0x8328DE48;
	sub_8322B7D0(ctx, base);
loc_8328DE48:
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

__attribute__((alias("__imp__sub_8328DE5C"))) PPC_WEAK_FUNC(sub_8328DE5C);
PPC_FUNC_IMPL(__imp__sub_8328DE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DE60"))) PPC_WEAK_FUNC(sub_8328DE60);
PPC_FUNC_IMPL(__imp__sub_8328DE60) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1712
	cr6.compare<uint32_t>(ctx.r11.u32, 1712, xer);
	// beq cr6,0x8328deac
	if (cr6.eq) goto loc_8328DEAC;
	// cmplwi cr6,r11,1713
	cr6.compare<uint32_t>(ctx.r11.u32, 1713, xer);
	// beq cr6,0x8328dea4
	if (cr6.eq) goto loc_8328DEA4;
	// cmplwi cr6,r11,1714
	cr6.compare<uint32_t>(ctx.r11.u32, 1714, xer);
	// beq cr6,0x8328de9c
	if (cr6.eq) goto loc_8328DE9C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8328DE9C:
	// li r4,590
	ctx.r4.s64 = 590;
	// b 0x8328deb0
	goto loc_8328DEB0;
loc_8328DEA4:
	// li r4,354
	ctx.r4.s64 = 354;
	// b 0x8328deb0
	goto loc_8328DEB0;
loc_8328DEAC:
	// li r4,589
	ctx.r4.s64 = 589;
loc_8328DEB0:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x8328DEB8;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_8328DECC"))) PPC_WEAK_FUNC(sub_8328DECC);
PPC_FUNC_IMPL(__imp__sub_8328DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DED0"))) PPC_WEAK_FUNC(sub_8328DED0);
PPC_FUNC_IMPL(__imp__sub_8328DED0) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8328df00
	if (cr6.eq) goto loc_8328DF00;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x8320d088
	ctx.lr = 0x8328DF00;
	sub_8320D088(ctx, base);
loc_8328DF00:
	// bl 0x83201c38
	ctx.lr = 0x8328DF04;
	sub_83201C38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328df28
	if (cr6.eq) goto loc_8328DF28;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8328dfb0
	if (!cr6.eq) goto loc_8328DFB0;
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8328dfac
	goto loc_8328DFAC;
loc_8328DF28:
	// bl 0x8328b310
	ctx.lr = 0x8328DF2C;
	sub_8328B310(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x832010a0
	ctx.lr = 0x8328DF3C;
	sub_832010A0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r11,24256
	ctx.r30.s64 = ctx.r11.s64 + 24256;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328df70
	if (!cr6.eq) goto loc_8328DF70;
	// bl 0x83203ad0
	ctx.lr = 0x8328DF54;
	sub_83203AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328df70
	if (!cr6.eq) goto loc_8328DF70;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,24788
	ctx.r4.s64 = ctx.r11.s64 + 24788;
	// bl 0x83208330
	ctx.lr = 0x8328DF70;
	sub_83208330(ctx, base);
loc_8328DF70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201c58
	ctx.lr = 0x8328DF78;
	sub_83201C58(ctx, base);
	// bl 0x83201c38
	ctx.lr = 0x8328DF7C;
	sub_83201C38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328df98
	if (!cr6.eq) goto loc_8328DF98;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,24752
	ctx.r4.s64 = ctx.r11.s64 + 24752;
	// bl 0x83208568
	ctx.lr = 0x8328DF98;
	sub_83208568(ctx, base);
loc_8328DF98:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8328dfb0
	if (!cr6.eq) goto loc_8328DFB0;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
loc_8328DFAC:
	// bl 0x832010a0
	ctx.lr = 0x8328DFB0;
	sub_832010A0(ctx, base);
loc_8328DFB0:
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

__attribute__((alias("__imp__sub_8328DFCC"))) PPC_WEAK_FUNC(sub_8328DFCC);
PPC_FUNC_IMPL(__imp__sub_8328DFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DFD0"))) PPC_WEAK_FUNC(sub_8328DFD0);
PPC_FUNC_IMPL(__imp__sub_8328DFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8328DFD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8328dff4
	if (cr6.lt) goto loc_8328DFF4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x8328e004
	if (!cr6.gt) goto loc_8328E004;
loc_8328DFF4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x8320d088
	ctx.lr = 0x8328E004;
	sub_8320D088(ctx, base);
loc_8328E004:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bge cr6,0x8328e060
	if (!cr6.lt) goto loc_8328E060;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328e03c
	if (cr6.eq) goto loc_8328E03C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328E03C;
	sub_83222030(ctx, base);
loc_8328E03C:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,34
	ctx.r10.s64 = 34;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8328E060:
	// bl 0x83201c38
	ctx.lr = 0x8328E064;
	sub_83201C38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e0a8
	if (!cr6.eq) goto loc_8328E0A8;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// bl 0x8328ded0
	ctx.lr = 0x8328E084;
	sub_8328DED0(ctx, base);
	// bl 0x83201c38
	ctx.lr = 0x8328E088;
	sub_83201C38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e0a8
	if (!cr6.eq) goto loc_8328E0A8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24752
	ctx.r4.s64 = ctx.r11.s64 + 24752;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// bl 0x83208568
	ctx.lr = 0x8328E0A8;
	sub_83208568(ctx, base);
loc_8328E0A8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328e0c0
	if (!cr6.eq) goto loc_8328E0C0;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x832010a0
	ctx.lr = 0x8328E0C0;
	sub_832010A0(ctx, base);
loc_8328E0C0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222be8
	ctx.lr = 0x8328E0F4;
	sub_83222BE8(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83255b10
	ctx.lr = 0x8328E104;
	sub_83255B10(ctx, base);
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x8328e128
	if (cr6.lt) goto loc_8328E128;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83222be8
	ctx.lr = 0x8328E128;
	sub_83222BE8(ctx, base);
loc_8328E128:
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328e150
	if (cr6.eq) goto loc_8328E150;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x8328E144;
	sub_83295250(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e258
	if (!cr6.eq) goto loc_8328E258;
loc_8328E150:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83207040
	ctx.lr = 0x8328E158;
	sub_83207040(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8328e1c8
	if (!cr6.eq) goto loc_8328E1C8;
	// bl 0x83201c38
	ctx.lr = 0x8328E164;
	sub_83201C38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e1a4
	if (!cr6.eq) goto loc_8328E1A4;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// bl 0x8328ded0
	ctx.lr = 0x8328E180;
	sub_8328DED0(ctx, base);
	// bl 0x83201c38
	ctx.lr = 0x8328E184;
	sub_83201C38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e1a4
	if (!cr6.eq) goto loc_8328E1A4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24752
	ctx.r4.s64 = ctx.r11.s64 + 24752;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// bl 0x83208568
	ctx.lr = 0x8328E1A4;
	sub_83208568(ctx, base);
loc_8328E1A4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328e1bc
	if (!cr6.eq) goto loc_8328E1BC;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x832010a0
	ctx.lr = 0x8328E1BC;
	sub_832010A0(ctx, base);
loc_8328E1BC:
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328e1e4
	if (cr6.eq) goto loc_8328E1E4;
loc_8328E1C8:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x8328E1D8;
	sub_83295250(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e258
	if (!cr6.eq) goto loc_8328E258;
loc_8328E1E4:
	// bl 0x83203ad0
	ctx.lr = 0x8328E1E8;
	sub_83203AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328e20c
	if (!cr6.eq) goto loc_8328E20C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24816
	ctx.r4.s64 = ctx.r11.s64 + 24816;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// bl 0x83208330
	ctx.lr = 0x8328E20C;
	sub_83208330(ctx, base);
loc_8328E20C:
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328e238
	if (cr6.eq) goto loc_8328E238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328E238;
	sub_83222030(ctx, base);
loc_8328E238:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8328E258:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8328ba08
	ctx.lr = 0x8328E268;
	sub_8328BA08(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r28,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r28.u16);
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r28.u8);
	// bl 0x8322ab20
	ctx.lr = 0x8328E288;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e2a0
	if (!cr6.eq) goto loc_8328E2A0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322c0e8
	ctx.lr = 0x8328E2A0;
	sub_8322C0E8(ctx, base);
loc_8328E2A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E2AC"))) PPC_WEAK_FUNC(sub_8328E2AC);
PPC_FUNC_IMPL(__imp__sub_8328E2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E2B0"))) PPC_WEAK_FUNC(sub_8328E2B0);
PPC_FUNC_IMPL(__imp__sub_8328E2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8328E2B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x8328e2f0
	if (!cr6.lt) goto loc_8328E2F0;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r3,r10,24880
	ctx.r3.s64 = ctx.r10.s64 + 24880;
	// li r4,3563
	ctx.r4.s64 = 3563;
	// bl 0x832086a0
	ctx.lr = 0x8328E2F0;
	sub_832086A0(ctx, base);
loc_8328E2F0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// srw r4,r9,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328e334
	if (cr6.eq) goto loc_8328E334;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328e334
	if (cr6.eq) goto loc_8328E334;
	// lwz r30,36(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
loc_8328E334:
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r6,r11,-163
	ctx.r6.s64 = ctx.r11.s64 + -163;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srw r4,r9,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// srawi r11,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r8,r5
	ctx.r8.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8328e384
	if (cr6.eq) goto loc_8328E384;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x8328e394
	goto loc_8328E394;
loc_8328E384:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83222be8
	ctx.lr = 0x8328E394;
	sub_83222BE8(ctx, base);
loc_8328E394:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328e3b8
	if (cr6.eq) goto loc_8328E3B8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x8328E3AC;
	sub_83295250(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e430
	if (!cr6.eq) goto loc_8328E430;
loc_8328E3B8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328e430
	if (cr6.eq) goto loc_8328E430;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8328e3e4
	if (cr6.eq) goto loc_8328E3E4;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83295b88
	ctx.lr = 0x8328E3DC;
	sub_83295B88(ctx, base);
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// b 0x8328e3ec
	goto loc_8328E3EC;
loc_8328E3E4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r30,r11,10500
	ctx.r30.s64 = ctx.r11.s64 + 10500;
loc_8328E3EC:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8328e414
	if (!cr6.eq) goto loc_8328E414;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8328E400;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e414
	if (!cr6.eq) goto loc_8328E414;
	// bl 0x83227908
	ctx.lr = 0x8328E410;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8328E414:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24848
	ctx.r4.s64 = ctx.r11.s64 + 24848;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x8328E430;
	sub_83208330(ctx, base);
loc_8328E430:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E43C"))) PPC_WEAK_FUNC(sub_8328E43C);
PPC_FUNC_IMPL(__imp__sub_8328E43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E440"))) PPC_WEAK_FUNC(sub_8328E440);
PPC_FUNC_IMPL(__imp__sub_8328E440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8328E448;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bgt cr6,0x8328e470
	if (cr6.gt) goto loc_8328E470;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8328E470:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r7,640
	ctx.r7.s64 = 640;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// subf r3,r8,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r8.s64;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// srw r3,r9,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// srw r10,r7,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// xori r11,r5,40
	ctx.r11.u64 = ctx.r5.u64 ^ 40;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// and r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 & ctx.r3.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8328e5c4
	if (cr6.eq) goto loc_8328E5C4;
	// bl 0x83201c38
	ctx.lr = 0x8328E4D4;
	sub_83201C38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e514
	if (!cr6.eq) goto loc_8328E514;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// bl 0x8328ded0
	ctx.lr = 0x8328E4F0;
	sub_8328DED0(ctx, base);
	// bl 0x83201c38
	ctx.lr = 0x8328E4F4;
	sub_83201C38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e514
	if (!cr6.eq) goto loc_8328E514;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24752
	ctx.r4.s64 = ctx.r11.s64 + 24752;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// bl 0x83208568
	ctx.lr = 0x8328E514;
	sub_83208568(ctx, base);
loc_8328E514:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328e52c
	if (!cr6.eq) goto loc_8328E52C;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x832010a0
	ctx.lr = 0x8328E52C;
	sub_832010A0(ctx, base);
loc_8328E52C:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222be8
	ctx.lr = 0x8328E540;
	sub_83222BE8(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8328e554
	if (!cr6.eq) goto loc_8328E554;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8328e56c
	goto loc_8328E56C;
loc_8328E554:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x8328E560;
	sub_83295250(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e5b8
	if (!cr6.eq) goto loc_8328E5B8;
loc_8328E56C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328e5b8
	if (cr6.eq) goto loc_8328E5B8;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8328e5a0
	if (!cr6.eq) goto loc_8328E5A0;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8328E58C;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e5a0
	if (!cr6.eq) goto loc_8328E5A0;
	// bl 0x83227908
	ctx.lr = 0x8328E59C;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8328E5A0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24920
	ctx.r4.s64 = ctx.r11.s64 + 24920;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// bl 0x83208330
	ctx.lr = 0x8328E5B8;
	sub_83208330(ctx, base);
loc_8328E5B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8328E5C4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8328e650
	if (!cr6.eq) goto loc_8328E650;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83266d78
	ctx.lr = 0x8328E5D8;
	sub_83266D78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328e5fc
	if (cr6.eq) goto loc_8328E5FC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8328e5fc
	if (!cr6.eq) goto loc_8328E5FC;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8328e644
	if (!cr6.eq) goto loc_8328E644;
loc_8328E5FC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328e644
	if (cr6.eq) goto loc_8328E644;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8328e630
	if (!cr6.eq) goto loc_8328E630;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8328E61C;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e630
	if (!cr6.eq) goto loc_8328E630;
	// bl 0x83227908
	ctx.lr = 0x8328E62C;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8328E630:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24892
	ctx.r4.s64 = ctx.r11.s64 + 24892;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// bl 0x83208330
	ctx.lr = 0x8328E644;
	sub_83208330(ctx, base);
loc_8328E644:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8328E650:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328e2b0
	ctx.lr = 0x8328E65C;
	sub_8328E2B0(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E664"))) PPC_WEAK_FUNC(sub_8328E664);
PPC_FUNC_IMPL(__imp__sub_8328E664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E668"))) PPC_WEAK_FUNC(sub_8328E668);
PPC_FUNC_IMPL(__imp__sub_8328E668) {
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
	// li r8,12288
	ctx.r8.s64 = 12288;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r6,640
	ctx.r6.s64 = 640;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// subf r3,r7,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r7.s64;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// srw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// xori r9,r5,40
	ctx.r9.u64 = ctx.r5.u64 ^ 40;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// srawi r8,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 31;
	// srw r7,r6,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8328e750
	if (cr6.eq) goto loc_8328E750;
	// bl 0x83201c38
	ctx.lr = 0x8328E6DC;
	sub_83201C38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e720
	if (!cr6.eq) goto loc_8328E720;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x8328ded0
	ctx.lr = 0x8328E6FC;
	sub_8328DED0(ctx, base);
	// bl 0x83201c38
	ctx.lr = 0x8328E700;
	sub_83201C38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328e720
	if (!cr6.eq) goto loc_8328E720;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24752
	ctx.r4.s64 = ctx.r11.s64 + 24752;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// bl 0x83208568
	ctx.lr = 0x8328E720;
	sub_83208568(ctx, base);
loc_8328E720:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328e738
	if (!cr6.eq) goto loc_8328E738;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x832010a0
	ctx.lr = 0x8328E738;
	sub_832010A0(ctx, base);
loc_8328E738:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_8328E750:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328e768
	if (cr6.eq) goto loc_8328E768;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328e780
	if (!cr6.eq) goto loc_8328E780;
loc_8328E768:
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
loc_8328E780:
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
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

__attribute__((alias("__imp__sub_8328E798"))) PPC_WEAK_FUNC(sub_8328E798);
PPC_FUNC_IMPL(__imp__sub_8328E798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8328E7A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328e7d8
	if (cr6.eq) goto loc_8328E7D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8328E7D8;
	sub_83222030(ctx, base);
loc_8328E7D8:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,34
	ctx.r10.s64 = 34;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328e814
	if (cr6.eq) goto loc_8328E814;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8328e814
	if (cr6.eq) goto loc_8328E814;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x8320d088
	ctx.lr = 0x8328E814;
	sub_8320D088(ctx, base);
loc_8328E814:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// blt cr6,0x8328e890
	if (cr6.lt) goto loc_8328E890;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328e440
	ctx.lr = 0x8328E82C;
	sub_8328E440(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328e890
	if (cr6.eq) goto loc_8328E890;
	// bl 0x83295c40
	ctx.lr = 0x8328E83C;
	sub_83295C40(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// beq cr6,0x8328e870
	if (cr6.eq) goto loc_8328E870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328e668
	ctx.lr = 0x8328E850;
	sub_8328E668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8328ba08
	ctx.lr = 0x8328E864;
	sub_8328BA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328E870:
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294f00
	ctx.lr = 0x8328E884;
	sub_83294F00(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223a60
	ctx.lr = 0x8328E890;
	sub_83223A60(ctx, base);
loc_8328E890:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E89C"))) PPC_WEAK_FUNC(sub_8328E89C);
PPC_FUNC_IMPL(__imp__sub_8328E89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E8A0"))) PPC_WEAK_FUNC(sub_8328E8A0);
PPC_FUNC_IMPL(__imp__sub_8328E8A0) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x8328e8d0
	if (cr6.lt) goto loc_8328E8D0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x8328e8e0
	if (!cr6.gt) goto loc_8328E8E0;
loc_8328E8D0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x8320d088
	ctx.lr = 0x8328E8E0;
	sub_8320D088(ctx, base);
loc_8328E8E0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83222030
	ctx.lr = 0x8328E8E8;
	sub_83222030(ctx, base);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// blt cr6,0x8328e9b0
	if (cr6.lt) goto loc_8328E9B0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328e440
	ctx.lr = 0x8328E900;
	sub_8328E440(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328e914
	if (cr6.eq) goto loc_8328E914;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8328c2e8
	ctx.lr = 0x8328E914;
	sub_8328C2E8(ctx, base);
loc_8328E914:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328e9b0
	if (!cr6.eq) goto loc_8328E9B0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8328e9b0
	if (cr6.lt) goto loc_8328E9B0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,12288
	ctx.r8.s64 = 12288;
	// li r7,640
	ctx.r7.s64 = 640;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// subf r4,r10,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r10.s64;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// xori r9,r5,40
	ctx.r9.u64 = ctx.r5.u64 ^ 40;
	// srw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// srw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// srawi r9,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// and r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8328e99c
	if (cr6.eq) goto loc_8328E99C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8328e9b0
	if (cr6.lt) goto loc_8328E9B0;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// b 0x8328e9a8
	goto loc_8328E9A8;
loc_8328E99C:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x8328e9b0
	if (cr6.lt) goto loc_8328E9B0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_8328E9A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x832240b8
	ctx.lr = 0x8328E9B0;
	sub_832240B8(ctx, base);
loc_8328E9B0:
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

__attribute__((alias("__imp__sub_8328E9CC"))) PPC_WEAK_FUNC(sub_8328E9CC);
PPC_FUNC_IMPL(__imp__sub_8328E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E9D0"))) PPC_WEAK_FUNC(sub_8328E9D0);
PPC_FUNC_IMPL(__imp__sub_8328E9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8328E9D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8328ea0c
	if (cr6.eq) goto loc_8328EA0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328EA0C;
	sub_83222030(ctx, base);
loc_8328EA0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// li r29,2
	ctx.r29.s64 = 2;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// li r31,3
	ctx.r31.s64 = 3;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8328ea3c
	if (!cr6.eq) goto loc_8328EA3C;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8328ea54
	goto loc_8328EA54;
loc_8328EA3C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8328ea54
	if (cr6.eq) goto loc_8328EA54;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x8320d088
	ctx.lr = 0x8328EA54;
	sub_8320D088(ctx, base);
loc_8328EA54:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8328eaf0
	if (cr6.lt) goto loc_8328EAF0;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// bl 0x8328e440
	ctx.lr = 0x8328EA94;
	sub_8328E440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328eaf0
	if (cr6.eq) goto loc_8328EAF0;
	// bl 0x83295c40
	ctx.lr = 0x8328EAA4;
	sub_83295C40(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// beq cr6,0x8328eac0
	if (cr6.eq) goto loc_8328EAC0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328baa8
	ctx.lr = 0x8328EABC;
	sub_8328BAA8(ctx, base);
	// b 0x8328eae4
	goto loc_8328EAE4;
loc_8328EAC0:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222be8
	ctx.lr = 0x8328EAD4;
	sub_83222BE8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83295030
	ctx.lr = 0x8328EAE4;
	sub_83295030(ctx, base);
loc_8328EAE4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x8328EAF0;
	sub_8320CF60(ctx, base);
loc_8328EAF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328EAFC"))) PPC_WEAK_FUNC(sub_8328EAFC);
PPC_FUNC_IMPL(__imp__sub_8328EAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

