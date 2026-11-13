#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8377CF48"))) PPC_WEAK_FUNC(sub_8377CF48);
PPC_FUNC_IMPL(__imp__sub_8377CF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-6552
	ctx.r9.s64 = ctx.r11.s64 + -6552;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377CF5C"))) PPC_WEAK_FUNC(sub_8377CF5C);
PPC_FUNC_IMPL(__imp__sub_8377CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377CF60"))) PPC_WEAK_FUNC(sub_8377CF60);
PPC_FUNC_IMPL(__imp__sub_8377CF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-6540
	ctx.r9.s64 = ctx.r11.s64 + -6540;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377CF74"))) PPC_WEAK_FUNC(sub_8377CF74);
PPC_FUNC_IMPL(__imp__sub_8377CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377CF78"))) PPC_WEAK_FUNC(sub_8377CF78);
PPC_FUNC_IMPL(__imp__sub_8377CF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-6532
	ctx.r9.s64 = ctx.r11.s64 + -6532;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377CF8C"))) PPC_WEAK_FUNC(sub_8377CF8C);
PPC_FUNC_IMPL(__imp__sub_8377CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377CF90"))) PPC_WEAK_FUNC(sub_8377CF90);
PPC_FUNC_IMPL(__imp__sub_8377CF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-6524
	ctx.r9.s64 = ctx.r11.s64 + -6524;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377CFA4"))) PPC_WEAK_FUNC(sub_8377CFA4);
PPC_FUNC_IMPL(__imp__sub_8377CFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377CFA8"))) PPC_WEAK_FUNC(sub_8377CFA8);
PPC_FUNC_IMPL(__imp__sub_8377CFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-6476
	ctx.r9.s64 = ctx.r11.s64 + -6476;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377CFBC"))) PPC_WEAK_FUNC(sub_8377CFBC);
PPC_FUNC_IMPL(__imp__sub_8377CFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377CFC0"))) PPC_WEAK_FUNC(sub_8377CFC0);
PPC_FUNC_IMPL(__imp__sub_8377CFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r10,r4,9
	ctx.r10.s64 = ctx.r4.s64 + 9;
	// addi r11,r3,9
	ctx.r11.s64 = ctx.r3.s64 + 9;
loc_8377CFC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8377cfec
	if (cr6.eq) goto loc_8377CFEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8377cfc8
	if (cr6.eq) goto loc_8377CFC8;
loc_8377CFEC:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r3,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377CFF8"))) PPC_WEAK_FUNC(sub_8377CFF8);
PPC_FUNC_IMPL(__imp__sub_8377CFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377D000;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8377d128
	if (cr6.eq) goto loc_8377D128;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_8377D020:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x8377D030;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d084
	if (cr6.eq) goto loc_8377D084;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d084
	if (cr6.eq) goto loc_8377D084;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8377D058;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d084
	if (cr6.eq) goto loc_8377D084;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377d084
	if (cr6.lt) goto loc_8377D084;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377d088
	if (!cr6.gt) goto loc_8377D088;
loc_8377D084:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377D088:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d118
	if (cr6.eq) goto loc_8377D118;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x8377D0A4;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d0f8
	if (cr6.eq) goto loc_8377D0F8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d0f8
	if (cr6.eq) goto loc_8377D0F8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8377D0CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d0f8
	if (cr6.eq) goto loc_8377D0F8;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377d0f8
	if (cr6.lt) goto loc_8377D0F8;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377d0fc
	if (!cr6.gt) goto loc_8377D0FC;
loc_8377D0F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377D0FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d118
	if (cr6.eq) goto loc_8377D118;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377d134
	if (!cr6.eq) goto loc_8377D134;
loc_8377D118:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8377d020
	if (cr6.lt) goto loc_8377D020;
loc_8377D128:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377D134:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D140"))) PPC_WEAK_FUNC(sub_8377D140);
PPC_FUNC_IMPL(__imp__sub_8377D140) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,31
	ctx.r6.s64 = 31;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa9c78
	ctx.lr = 0x8377D170;
	sub_82AA9C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d1b4
	if (cr6.eq) goto loc_8377D1B4;
	// li r6,31
	ctx.r6.s64 = 31;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa9c78
	ctx.lr = 0x8377D190;
	sub_82AA9C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d1b4
	if (cr6.eq) goto loc_8377D1B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8377d1b4
	if (cr6.eq) goto loc_8377D1B4;
loc_8377D1AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8377d21c
	goto loc_8377D21C;
loc_8377D1B4:
	// addi r10,r30,152
	ctx.r10.s64 = ctx.r30.s64 + 152;
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
loc_8377D1BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8377d1e0
	if (cr6.eq) goto loc_8377D1E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8377d1bc
	if (cr6.eq) goto loc_8377D1BC;
loc_8377D1E0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8377d1ac
	if (!cr6.eq) goto loc_8377D1AC;
	// addi r10,r30,222
	ctx.r10.s64 = ctx.r30.s64 + 222;
	// addi r11,r31,222
	ctx.r11.s64 = ctx.r31.s64 + 222;
loc_8377D1F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8377d214
	if (cr6.eq) goto loc_8377D214;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8377d1f0
	if (cr6.eq) goto loc_8377D1F0;
loc_8377D214:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r3,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8377D21C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377D234"))) PPC_WEAK_FUNC(sub_8377D234);
PPC_FUNC_IMPL(__imp__sub_8377D234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377D238"))) PPC_WEAK_FUNC(sub_8377D238);
PPC_FUNC_IMPL(__imp__sub_8377D238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6540
	ctx.r5.s64 = ctx.r11.s64 + -6540;
	// b 0x8377cff8
	sub_8377CFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D248"))) PPC_WEAK_FUNC(sub_8377D248);
PPC_FUNC_IMPL(__imp__sub_8377D248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6536
	ctx.r5.s64 = ctx.r11.s64 + -6536;
	// b 0x8377cff8
	sub_8377CFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D258"))) PPC_WEAK_FUNC(sub_8377D258);
PPC_FUNC_IMPL(__imp__sub_8377D258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6532
	ctx.r5.s64 = ctx.r11.s64 + -6532;
	// b 0x8377cff8
	sub_8377CFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D268"))) PPC_WEAK_FUNC(sub_8377D268);
PPC_FUNC_IMPL(__imp__sub_8377D268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6528
	ctx.r5.s64 = ctx.r11.s64 + -6528;
	// b 0x8377cff8
	sub_8377CFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D278"))) PPC_WEAK_FUNC(sub_8377D278);
PPC_FUNC_IMPL(__imp__sub_8377D278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r11,-6524
	ctx.r5.s64 = ctx.r11.s64 + -6524;
	// b 0x8377cff8
	sub_8377CFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D288"))) PPC_WEAK_FUNC(sub_8377D288);
PPC_FUNC_IMPL(__imp__sub_8377D288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r11,-6500
	ctx.r5.s64 = ctx.r11.s64 + -6500;
	// b 0x8377cff8
	sub_8377CFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D298"))) PPC_WEAK_FUNC(sub_8377D298);
PPC_FUNC_IMPL(__imp__sub_8377D298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8377D2A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-6568
	ctx.r31.s64 = ctx.r11.s64 + -6568;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8377D2B8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8306c7a0
	ctx.lr = 0x8377D2CC;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d2f4
	if (cr6.eq) goto loc_8377D2F4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d2f4
	if (cr6.eq) goto loc_8377D2F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377D2F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377D2F4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377d31c
	if (!cr6.eq) goto loc_8377D31C;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// blt cr6,0x8377d2b8
	if (cr6.lt) goto loc_8377D2B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8377D31C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D328"))) PPC_WEAK_FUNC(sub_8377D328);
PPC_FUNC_IMPL(__imp__sub_8377D328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8377D330;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-6568
	ctx.r31.s64 = ctx.r11.s64 + -6568;
	// subfe r28,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8377D350:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8306c7a0
	ctx.lr = 0x8377D364;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d3a8
	if (cr6.eq) goto loc_8377D3A8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377d3a8
	if (cr6.eq) goto loc_8377D3A8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377d3a8
	if (cr6.lt) goto loc_8377D3A8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377d3a8
	if (cr6.gt) goto loc_8377D3A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377D3A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377D3A8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8377d350
	if (!cr0.eq) goto loc_8377D350;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D3BC"))) PPC_WEAK_FUNC(sub_8377D3BC);
PPC_FUNC_IMPL(__imp__sub_8377D3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377D3C0"))) PPC_WEAK_FUNC(sub_8377D3C0);
PPC_FUNC_IMPL(__imp__sub_8377D3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8377D3C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// lwz r11,32332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32332);
	// rlwinm r28,r11,14,0,17
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// bge cr6,0x8377d43c
	if (!cr6.lt) goto loc_8377D43C;
	// addi r26,r5,-1
	ctx.r26.s64 = ctx.r5.s64 + -1;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8377D3F4:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge cr6,0x8377d424
	if (!cr6.lt) goto loc_8377D424;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82aa9c78
	ctx.lr = 0x8377D414;
	sub_82AA9C78(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8377d428
	goto loc_8377D428;
loc_8377D424:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8377D428:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82aaa108
	ctx.lr = 0x8377D430;
	sub_82AAA108(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x8377d3f4
	if (cr6.lt) goto loc_8377D3F4;
loc_8377D43C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D444"))) PPC_WEAK_FUNC(sub_8377D444);
PPC_FUNC_IMPL(__imp__sub_8377D444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377D448"))) PPC_WEAK_FUNC(sub_8377D448);
PPC_FUNC_IMPL(__imp__sub_8377D448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377D450;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8377d578
	if (cr6.eq) goto loc_8377D578;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_8377D470:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83071e38
	ctx.lr = 0x8377D480;
	sub_83071E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d4d4
	if (cr6.eq) goto loc_8377D4D4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d4d4
	if (cr6.eq) goto loc_8377D4D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8377D4A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d4d4
	if (cr6.eq) goto loc_8377D4D4;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377d4d4
	if (cr6.lt) goto loc_8377D4D4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377d4d8
	if (!cr6.gt) goto loc_8377D4D8;
loc_8377D4D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377D4D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d568
	if (cr6.eq) goto loc_8377D568;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83071e38
	ctx.lr = 0x8377D4F4;
	sub_83071E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d548
	if (cr6.eq) goto loc_8377D548;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d548
	if (cr6.eq) goto loc_8377D548;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8377D51C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d548
	if (cr6.eq) goto loc_8377D548;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377d548
	if (cr6.lt) goto loc_8377D548;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377d54c
	if (!cr6.gt) goto loc_8377D54C;
loc_8377D548:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377D54C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d568
	if (cr6.eq) goto loc_8377D568;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377d584
	if (!cr6.eq) goto loc_8377D584;
loc_8377D568:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8377d470
	if (cr6.lt) goto loc_8377D470;
loc_8377D578:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377D584:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D590"))) PPC_WEAK_FUNC(sub_8377D590);
PPC_FUNC_IMPL(__imp__sub_8377D590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6448
	ctx.r5.s64 = ctx.r11.s64 + -6448;
	// b 0x8377d448
	sub_8377D448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D5A0"))) PPC_WEAK_FUNC(sub_8377D5A0);
PPC_FUNC_IMPL(__imp__sub_8377D5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6444
	ctx.r5.s64 = ctx.r11.s64 + -6444;
	// b 0x8377d448
	sub_8377D448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D5B0"))) PPC_WEAK_FUNC(sub_8377D5B0);
PPC_FUNC_IMPL(__imp__sub_8377D5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8377D5B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-6468
	ctx.r31.s64 = ctx.r11.s64 + -6468;
	// subfe r28,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r29,5
	ctx.r29.s64 = 5;
loc_8377D5D8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83071e38
	ctx.lr = 0x8377D5EC;
	sub_83071E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d630
	if (cr6.eq) goto loc_8377D630;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377d630
	if (cr6.eq) goto loc_8377D630;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377d630
	if (cr6.lt) goto loc_8377D630;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377d630
	if (cr6.gt) goto loc_8377D630;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377D630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377D630:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8377d5d8
	if (!cr0.eq) goto loc_8377D5D8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D644"))) PPC_WEAK_FUNC(sub_8377D644);
PPC_FUNC_IMPL(__imp__sub_8377D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377D648"))) PPC_WEAK_FUNC(sub_8377D648);
PPC_FUNC_IMPL(__imp__sub_8377D648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8377D650;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-6080
	ctx.r31.s64 = ctx.r11.s64 + -6080;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8377D668:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377D67C;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d6a4
	if (cr6.eq) goto loc_8377D6A4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d6a4
	if (cr6.eq) goto loc_8377D6A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377D6A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377D6A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377d6cc
	if (!cr6.eq) goto loc_8377D6CC;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x8377d668
	if (cr6.lt) goto loc_8377D668;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8377D6CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D6D8"))) PPC_WEAK_FUNC(sub_8377D6D8);
PPC_FUNC_IMPL(__imp__sub_8377D6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8377D6E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r31,r11,-6080
	ctx.r31.s64 = ctx.r11.s64 + -6080;
loc_8377D6F8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377D70C;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d750
	if (cr6.eq) goto loc_8377D750;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377d750
	if (cr6.eq) goto loc_8377D750;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377d750
	if (cr6.lt) goto loc_8377D750;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377d750
	if (cr6.gt) goto loc_8377D750;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377D750;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377D750:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8377d6f8
	if (!cr0.eq) goto loc_8377D6F8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D764"))) PPC_WEAK_FUNC(sub_8377D764);
PPC_FUNC_IMPL(__imp__sub_8377D764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377D768"))) PPC_WEAK_FUNC(sub_8377D768);
PPC_FUNC_IMPL(__imp__sub_8377D768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377D770;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,-5968
	ctx.r31.s64 = ctx.r11.s64 + -5968;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_8377D78C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377D7A0;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d7c8
	if (cr6.eq) goto loc_8377D7C8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d7c8
	if (cr6.eq) goto loc_8377D7C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8377D7C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377D7C8:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377D7DC;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d804
	if (cr6.eq) goto loc_8377D804;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d804
	if (cr6.eq) goto loc_8377D804;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377D804;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377D804:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377d830
	if (!cr6.eq) goto loc_8377D830;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r27,96
	cr6.compare<uint32_t>(ctx.r27.u32, 96, xer);
	// blt cr6,0x8377d78c
	if (cr6.lt) goto loc_8377D78C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377D830:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D83C"))) PPC_WEAK_FUNC(sub_8377D83C);
PPC_FUNC_IMPL(__imp__sub_8377D83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377D840"))) PPC_WEAK_FUNC(sub_8377D840);
PPC_FUNC_IMPL(__imp__sub_8377D840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377D848;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,-5872
	ctx.r31.s64 = ctx.r11.s64 + -5872;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_8377D864:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377D878;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d8a0
	if (cr6.eq) goto loc_8377D8A0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d8a0
	if (cr6.eq) goto loc_8377D8A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8377D8A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377D8A0:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377D8B4;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d8dc
	if (cr6.eq) goto loc_8377D8DC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d8dc
	if (cr6.eq) goto loc_8377D8DC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377D8DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377D8DC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377d908
	if (!cr6.eq) goto loc_8377D908;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r27,76
	cr6.compare<uint32_t>(ctx.r27.u32, 76, xer);
	// blt cr6,0x8377d864
	if (cr6.lt) goto loc_8377D864;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377D908:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D914"))) PPC_WEAK_FUNC(sub_8377D914);
PPC_FUNC_IMPL(__imp__sub_8377D914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377D918"))) PPC_WEAK_FUNC(sub_8377D918);
PPC_FUNC_IMPL(__imp__sub_8377D918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377D920;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,-5796
	ctx.r31.s64 = ctx.r11.s64 + -5796;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_8377D93C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377D950;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d978
	if (cr6.eq) goto loc_8377D978;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d978
	if (cr6.eq) goto loc_8377D978;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8377D978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377D978:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377D98C;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d9b4
	if (cr6.eq) goto loc_8377D9B4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377d9b4
	if (cr6.eq) goto loc_8377D9B4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377D9B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377D9B4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377d9e0
	if (!cr6.eq) goto loc_8377D9E0;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r27,60
	cr6.compare<uint32_t>(ctx.r27.u32, 60, xer);
	// blt cr6,0x8377d93c
	if (cr6.lt) goto loc_8377D93C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377D9E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377D9EC"))) PPC_WEAK_FUNC(sub_8377D9EC);
PPC_FUNC_IMPL(__imp__sub_8377D9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377D9F0"))) PPC_WEAK_FUNC(sub_8377D9F0);
PPC_FUNC_IMPL(__imp__sub_8377D9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377D9F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,-5736
	ctx.r31.s64 = ctx.r11.s64 + -5736;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_8377DA14:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377DA28;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377da50
	if (cr6.eq) goto loc_8377DA50;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377da50
	if (cr6.eq) goto loc_8377DA50;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8377DA50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377DA50:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377DA64;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377da8c
	if (cr6.eq) goto loc_8377DA8C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377da8c
	if (cr6.eq) goto loc_8377DA8C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377DA8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377DA8C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377dab8
	if (!cr6.eq) goto loc_8377DAB8;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r27,44
	cr6.compare<uint32_t>(ctx.r27.u32, 44, xer);
	// blt cr6,0x8377da14
	if (cr6.lt) goto loc_8377DA14;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377DAB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377DAC4"))) PPC_WEAK_FUNC(sub_8377DAC4);
PPC_FUNC_IMPL(__imp__sub_8377DAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377DAC8"))) PPC_WEAK_FUNC(sub_8377DAC8);
PPC_FUNC_IMPL(__imp__sub_8377DAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377DAD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,32392
	ctx.r31.s64 = ctx.r11.s64 + 32392;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_8377DAEC:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377DB00;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377db28
	if (cr6.eq) goto loc_8377DB28;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377db28
	if (cr6.eq) goto loc_8377DB28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8377DB28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377DB28:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377DB3C;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377db64
	if (cr6.eq) goto loc_8377DB64;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377db64
	if (cr6.eq) goto loc_8377DB64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377DB64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377DB64:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377db90
	if (!cr6.eq) goto loc_8377DB90;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r27,164
	cr6.compare<uint32_t>(ctx.r27.u32, 164, xer);
	// blt cr6,0x8377daec
	if (cr6.lt) goto loc_8377DAEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377DB90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377DB9C"))) PPC_WEAK_FUNC(sub_8377DB9C);
PPC_FUNC_IMPL(__imp__sub_8377DB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377DBA0"))) PPC_WEAK_FUNC(sub_8377DBA0);
PPC_FUNC_IMPL(__imp__sub_8377DBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377DBA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,41
	ctx.r28.s64 = 41;
	// addi r31,r11,32392
	ctx.r31.s64 = ctx.r11.s64 + 32392;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8377DBC4:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377DBD8;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377dc00
	if (cr6.eq) goto loc_8377DC00;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377dc00
	if (cr6.eq) goto loc_8377DC00;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377DC00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377DC00:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83744a28
	ctx.lr = 0x8377DC18;
	sub_83744A28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377dc5c
	if (cr6.eq) goto loc_8377DC5C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377dc5c
	if (cr6.eq) goto loc_8377DC5C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377dc5c
	if (cr6.lt) goto loc_8377DC5C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377dc5c
	if (cr6.gt) goto loc_8377DC5C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8377DC5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377DC5C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8377dbc4
	if (!cr0.eq) goto loc_8377DBC4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83744a28
	ctx.lr = 0x8377DC7C;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377dcc0
	if (cr6.eq) goto loc_8377DCC0;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377dcc0
	if (cr6.eq) goto loc_8377DCC0;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377dcc0
	if (cr6.lt) goto loc_8377DCC0;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377dcc0
	if (cr6.gt) goto loc_8377DCC0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8377DCC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377DCC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377DCC8"))) PPC_WEAK_FUNC(sub_8377DCC8);
PPC_FUNC_IMPL(__imp__sub_8377DCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377DCD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,-5692
	ctx.r31.s64 = ctx.r11.s64 + -5692;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_8377DCEC:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377DD00;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377dd28
	if (cr6.eq) goto loc_8377DD28;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377dd28
	if (cr6.eq) goto loc_8377DD28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8377DD28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377DD28:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83744a28
	ctx.lr = 0x8377DD3C;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377dd64
	if (cr6.eq) goto loc_8377DD64;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377dd64
	if (cr6.eq) goto loc_8377DD64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377DD64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377DD64:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377dd90
	if (!cr6.eq) goto loc_8377DD90;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// blt cr6,0x8377dcec
	if (cr6.lt) goto loc_8377DCEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377DD90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377DD9C"))) PPC_WEAK_FUNC(sub_8377DD9C);
PPC_FUNC_IMPL(__imp__sub_8377DD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377DDA0"))) PPC_WEAK_FUNC(sub_8377DDA0);
PPC_FUNC_IMPL(__imp__sub_8377DDA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8377dde0
	if (cr6.eq) goto loc_8377DDE0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8377DDB4:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// bne cr6,0x8377ddd0
	if (!cr6.eq) goto loc_8377DDD0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x8377dde8
	if (cr6.eq) goto loc_8377DDE8;
loc_8377DDD0:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// blt cr6,0x8377ddb4
	if (cr6.lt) goto loc_8377DDB4;
loc_8377DDE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8377DDE8:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377DE00"))) PPC_WEAK_FUNC(sub_8377DE00);
PPC_FUNC_IMPL(__imp__sub_8377DE00) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-17288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377de64
	if (cr6.eq) goto loc_8377DE64;
	// li r11,43
	ctx.r11.s64 = 43;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8377DE34;
	sub_82595150(ctx, base);
	// lwz r3,-17288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377de54
	if (cr6.eq) goto loc_8377DE54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377DE54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377DE54:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8377DE5C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17288, ctx.r11.u32);
loc_8377DE64:
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

__attribute__((alias("__imp__sub_8377DE78"))) PPC_WEAK_FUNC(sub_8377DE78);
PPC_FUNC_IMPL(__imp__sub_8377DE78) {
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
	// bl 0x835242a0
	ctx.lr = 0x8377DE90;
	sub_835242A0(ctx, base);
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-5176
	ctx.r9.s64 = ctx.r10.s64 + -5176;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8377DEC8"))) PPC_WEAK_FUNC(sub_8377DEC8);
PPC_FUNC_IMPL(__imp__sub_8377DEC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-5176
	ctx.r10.s64 = ctx.r11.s64 + -5176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x8377DEF4;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8377df14
	if (cr6.eq) goto loc_8377DF14;
	// bl 0x82595188
	ctx.lr = 0x8377DF04;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8377DF14;
	sub_825952B8(ctx, base);
loc_8377DF14:
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

__attribute__((alias("__imp__sub_8377DF30"))) PPC_WEAK_FUNC(sub_8377DF30);
PPC_FUNC_IMPL(__imp__sub_8377DF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8377DF38;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x83103328
	ctx.lr = 0x8377DF5C;
	sub_83103328(ctx, base);
	// lbz r10,231(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 231);
	// lis r8,-32213
	ctx.r8.s64 = -2111111168;
	// lbz r9,239(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 239);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,247(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 247);
	// addi r6,r8,-5164
	ctx.r6.s64 = ctx.r8.s64 + -5164;
	// li r5,14
	ctx.r5.s64 = 14;
	// stb r29,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r29.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r28,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r28.u8);
	// clrlwi r3,r25,24
	ctx.r3.u64 = ctx.r25.u32 & 0xFF;
	// stb r27,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r27.u8);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
	// stb r26,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r26.u8);
	// stb r10,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r10.u8);
	// stb r9,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r9.u8);
	// stb r7,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r7.u8);
	// stw r5,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r5.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// stw r4,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// beq cr6,0x8377dfe4
	if (cr6.eq) goto loc_8377DFE4;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377DFE4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377dff8
	if (cr6.eq) goto loc_8377DFF8;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8377DFF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377E004"))) PPC_WEAK_FUNC(sub_8377E004);
PPC_FUNC_IMPL(__imp__sub_8377E004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377E008"))) PPC_WEAK_FUNC(sub_8377E008);
PPC_FUNC_IMPL(__imp__sub_8377E008) {
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
	ctx.lr = 0x8377E020;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8377e040
	if (!cr6.eq) goto loc_8377E040;
	// bl 0x83768598
	ctx.lr = 0x8377E02C;
	sub_83768598(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x8377E030;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e068
	if (cr6.eq) goto loc_8377E068;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
loc_8377E040:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e054
	if (cr6.eq) goto loc_8377E054;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_8377E054:
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
loc_8377E068:
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

__attribute__((alias("__imp__sub_8377E080"))) PPC_WEAK_FUNC(sub_8377E080);
PPC_FUNC_IMPL(__imp__sub_8377E080) {
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
	// bl 0x83763ef8
	ctx.lr = 0x8377E09C;
	sub_83763EF8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8377e0bc
	if (!cr6.eq) goto loc_8377E0BC;
	// bl 0x83768598
	ctx.lr = 0x8377E0AC;
	sub_83768598(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x8377E0B0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e184
	if (cr6.eq) goto loc_8377E184;
	// stb r30,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r30.u8);
loc_8377E0BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377e008
	ctx.lr = 0x8377E0C4;
	sub_8377E008(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e184
	if (cr6.eq) goto loc_8377E184;
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377e100
	if (!cr6.eq) goto loc_8377E100;
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377e100
	if (!cr6.eq) goto loc_8377E100;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839f78c0
	ctx.lr = 0x8377E0FC;
	sub_839F78C0(ctx, base);
	// b 0x8377e148
	goto loc_8377E148;
loc_8377E100:
	// lbz r11,77(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e13c
	if (cr6.eq) goto loc_8377E13C;
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bl 0x8308cc88
	ctx.lr = 0x8377E120;
	sub_8308CC88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e184
	if (cr6.eq) goto loc_8377E184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8377E134;
	sub_83103100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8377e188
	goto loc_8377E188;
loc_8377E13C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830847b8
	ctx.lr = 0x8377E148;
	sub_830847B8(ctx, base);
loc_8377E148:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e184
	if (cr6.eq) goto loc_8377E184;
	// lbz r10,79(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 79);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8377e170
	if (!cr6.eq) goto loc_8377E170;
	// stw r30,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r30.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r30,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r30.u32);
loc_8377E170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83103100
	ctx.lr = 0x8377E17C;
	sub_83103100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8377e188
	goto loc_8377E188;
loc_8377E184:
	// li r3,6
	ctx.r3.s64 = 6;
loc_8377E188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377E1A0"))) PPC_WEAK_FUNC(sub_8377E1A0);
PPC_FUNC_IMPL(__imp__sub_8377E1A0) {
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
	// bl 0x8377e008
	ctx.lr = 0x8377E1BC;
	sub_8377E008(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e214
	if (cr6.eq) goto loc_8377E214;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830847b8
	ctx.lr = 0x8377E1DC;
	sub_830847B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// beq cr6,0x8377e214
	if (cr6.eq) goto loc_8377E214;
	// lbz r11,79(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 79);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8377e204
	if (!cr6.eq) goto loc_8377E204;
	// stw r30,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r30.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r30,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r30.u32);
loc_8377E204:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83103100
	ctx.lr = 0x8377E210;
	sub_83103100(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_8377E214:
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

__attribute__((alias("__imp__sub_8377E230"))) PPC_WEAK_FUNC(sub_8377E230);
PPC_FUNC_IMPL(__imp__sub_8377E230) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8377e2dc
	if (!cr6.eq) goto loc_8377E2DC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addis r11,r11,-265
	ctx.r11.s64 = ctx.r11.s64 + -17367040;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8377e2dc
	if (cr6.gt) goto loc_8377E2DC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8377e2b0
	if (cr6.eq) goto loc_8377E2B0;
	// bdz 0x8377e2a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8377E2A8;
	// bdz 0x8377e2a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8377E2A8;
	// bdz 0x8377e2dc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8377E2DC;
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e2a8
	if (cr6.eq) goto loc_8377E2A8;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e29c
	if (cr6.eq) goto loc_8377E29C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8377e2d8
	goto loc_8377E2D8;
loc_8377E29C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377e1a0
	ctx.lr = 0x8377E2A4;
	sub_8377E1A0(ctx, base);
	// b 0x8377e2dc
	goto loc_8377E2DC;
loc_8377E2A8:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8377e2d8
	goto loc_8377E2D8;
loc_8377E2B0:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e2cc
	if (cr6.eq) goto loc_8377E2CC;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lwz r9,196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
loc_8377E2CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17b90
	ctx.lr = 0x8377E2D4;
	sub_82D17B90(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
loc_8377E2D8:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8377E2DC:
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

__attribute__((alias("__imp__sub_8377E2F4"))) PPC_WEAK_FUNC(sub_8377E2F4);
PPC_FUNC_IMPL(__imp__sub_8377E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377E2F8"))) PPC_WEAK_FUNC(sub_8377E2F8);
PPC_FUNC_IMPL(__imp__sub_8377E2F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377E300;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8377E30C;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e368
	if (cr6.eq) goto loc_8377E368;
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e368
	if (cr6.eq) goto loc_8377E368;
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377e350
	if (!cr6.eq) goto loc_8377E350;
	// lbz r11,13(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377e350
	if (!cr6.eq) goto loc_8377E350;
	// lwz r5,220(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x83778e30
	ctx.lr = 0x8377E34C;
	sub_83778E30(ctx, base);
	// b 0x8377e35c
	goto loc_8377E35C;
loc_8377E350:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x837774a0
	ctx.lr = 0x8377E35C;
	sub_837774A0(ctx, base);
loc_8377E35C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_8377E368:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377E37C"))) PPC_WEAK_FUNC(sub_8377E37C);
PPC_FUNC_IMPL(__imp__sub_8377E37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377E380"))) PPC_WEAK_FUNC(sub_8377E380);
PPC_FUNC_IMPL(__imp__sub_8377E380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8377E388;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,43
	ctx.r11.s64 = 43;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
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
	ctx.lr = 0x8377E3C4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e408
	if (cr6.eq) goto loc_8377E408;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lbz r11,287(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 287);
	// lbz r25,279(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stb r24,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r24.u8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r25.u8);
	// bl 0x8377df30
	ctx.lr = 0x8377E400;
	sub_8377DF30(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8377E408:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377E414"))) PPC_WEAK_FUNC(sub_8377E414);
PPC_FUNC_IMPL(__imp__sub_8377E414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377E418"))) PPC_WEAK_FUNC(sub_8377E418);
PPC_FUNC_IMPL(__imp__sub_8377E418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e490
	if (cr6.eq) goto loc_8377E490;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835242e8
	ctx.lr = 0x8377E440;
	sub_835242E8(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8377E450:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8377e450
	if (!cr0.eq) goto loc_8377E450;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377e488
	if (!cr6.eq) goto loc_8377E488;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377E488;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377E488:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8377E490:
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

__attribute__((alias("__imp__sub_8377E4A8"))) PPC_WEAK_FUNC(sub_8377E4A8);
PPC_FUNC_IMPL(__imp__sub_8377E4A8) {
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
	// lbz r10,73(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-5164
	ctx.r9.s64 = ctx.r11.s64 + -5164;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8377e4f4
	if (cr6.eq) goto loc_8377E4F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// bl 0x83763ef8
	ctx.lr = 0x8377E4E8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e4f4
	if (cr6.eq) goto loc_8377E4F4;
	// bl 0x83763ea8
	ctx.lr = 0x8377E4F4;
	sub_83763EA8(ctx, base);
loc_8377E4F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x8377E4FC;
	sub_831032A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e514
	if (cr6.eq) goto loc_8377E514;
	// bl 0x82416268
	ctx.lr = 0x8377E510;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8377E514:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377E52C"))) PPC_WEAK_FUNC(sub_8377E52C);
PPC_FUNC_IMPL(__imp__sub_8377E52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377E530"))) PPC_WEAK_FUNC(sub_8377E530);
PPC_FUNC_IMPL(__imp__sub_8377E530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377E538;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8377e624
	if (!cr6.eq) goto loc_8377E624;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8377E568;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e578
	if (cr6.eq) goto loc_8377E578;
	// bl 0x8377de78
	ctx.lr = 0x8377E574;
	sub_8377DE78(ctx, base);
	// b 0x8377e57c
	goto loc_8377E57C;
loc_8377E578:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8377E57C:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r9,-5280
	ctx.r4.s64 = ctx.r9.s64 + -5280;
	// lbz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// li r29,3
	ctx.r29.s64 = 3;
	// stb r8,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r8.u8);
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r6,78(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 78);
	// stb r6,13(r7)
	PPC_STORE_U8(ctx.r7.u32 + 13, ctx.r6.u8);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lbz r9,75(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 75);
	// stb r9,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r9.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// bl 0x8259cc28
	ctx.lr = 0x8377E5E0;
	sub_8259CC28(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x835249e8
	ctx.lr = 0x8377E5F8;
	sub_835249E8(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8377e618
	if (cr6.lt) goto loc_8377E618;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8377E618;
	sub_825952B8(ctx, base);
loc_8377E618:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8377E624:
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e618
	if (cr6.eq) goto loc_8377E618;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8377E63C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8377e63c
	if (!cr0.eq) goto loc_8377E63C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377e674
	if (!cr6.eq) goto loc_8377E674;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377E674;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377E674:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377E68C"))) PPC_WEAK_FUNC(sub_8377E68C);
PPC_FUNC_IMPL(__imp__sub_8377E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377E690"))) PPC_WEAK_FUNC(sub_8377E690);
PPC_FUNC_IMPL(__imp__sub_8377E690) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8377e810
	if (cr6.gt) goto loc_8377E810;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8377e810
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377E810;
	// bdzf 4*cr6+eq,0x8377e6e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377E6E4;
	// bdzf 4*cr6+eq,0x8377e70c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377E70C;
	// bdzf 4*cr6+eq,0x8377e734
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377E734;
	// bdzf 4*cr6+eq,0x8377e76c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377E76C;
	// bne cr6,0x8377e7b8
	if (!cr6.eq) goto loc_8377E7B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377e080
	ctx.lr = 0x8377E6DC;
	sub_8377E080(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// b 0x8377e810
	goto loc_8377E810;
loc_8377E6E4:
	// bl 0x831156e8
	ctx.lr = 0x8377E6E8;
	sub_831156E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83115be8
	ctx.lr = 0x8377E6F0;
	sub_83115BE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e810
	if (cr6.eq) goto loc_8377E810;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x8377E704;
	sub_82D17AA0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8377E70C:
	// bl 0x831156e8
	ctx.lr = 0x8377E710;
	sub_831156E8(ctx, base);
	// bl 0x83115808
	ctx.lr = 0x8377E714;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e810
	if (cr6.eq) goto loc_8377E810;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x8377E728;
	sub_82D17AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377e1a0
	ctx.lr = 0x8377E730;
	sub_8377E1A0(ctx, base);
	// b 0x8377e810
	goto loc_8377E810;
loc_8377E734:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377e530
	ctx.lr = 0x8377E73C;
	sub_8377E530(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e810
	if (cr6.eq) goto loc_8377E810;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x8377E750;
	sub_82D17B90(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8377E754;
	sub_831156E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,102(r3)
	PPC_STORE_U8(ctx.r3.u32 + 102, ctx.r11.u8);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x8377e810
	goto loc_8377E810;
loc_8377E76C:
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e790
	if (cr6.eq) goto loc_8377E790;
	// stb r30,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r30.u8);
	// bl 0x83763ef8
	ctx.lr = 0x8377E784;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e790
	if (cr6.eq) goto loc_8377E790;
	// bl 0x83763ea8
	ctx.lr = 0x8377E790;
	sub_83763EA8(ctx, base);
loc_8377E790:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// b 0x8377e800
	goto loc_8377E800;
loc_8377E7B8:
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e7dc
	if (cr6.eq) goto loc_8377E7DC;
	// stb r30,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r30.u8);
	// bl 0x83763ef8
	ctx.lr = 0x8377E7D0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e7dc
	if (cr6.eq) goto loc_8377E7DC;
	// bl 0x83763ea8
	ctx.lr = 0x8377E7DC;
	sub_83763EA8(ctx, base);
loc_8377E7DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_8377E800:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x8377E808;
	sub_83103068(ctx, base);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
loc_8377E810:
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

__attribute__((alias("__imp__sub_8377E828"))) PPC_WEAK_FUNC(sub_8377E828);
PPC_FUNC_IMPL(__imp__sub_8377E828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377E830;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x83103328
	ctx.lr = 0x8377E84C;
	sub_83103328(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// stb r29,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r29.u8);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stb r28,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r28.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r27,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r27.u8);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r6,r9,-4780
	ctx.r6.s64 = ctx.r9.s64 + -4780;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8377E89C;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377E8A8"))) PPC_WEAK_FUNC(sub_8377E8A8);
PPC_FUNC_IMPL(__imp__sub_8377E8A8) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8377e94c
	if (!cr6.eq) goto loc_8377E94C;
	// bl 0x83763ef8
	ctx.lr = 0x8377E8D4;
	sub_83763EF8(ctx, base);
	// lis r11,265
	ctx.r11.s64 = 17367040;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8377e90c
	if (cr6.eq) goto loc_8377E90C;
	// ble cr6,0x8377e94c
	if (!cr6.gt) goto loc_8377E94C;
	// lis r11,265
	ctx.r11.s64 = 17367040;
	// ori r9,r11,3
	ctx.r9.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377e94c
	if (cr6.gt) goto loc_8377E94C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// b 0x8377e94c
	goto loc_8377E94C;
loc_8377E90C:
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8377e94c
	if (cr6.eq) goto loc_8377E94C;
	// lbz r11,73(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377e94c
	if (!cr6.eq) goto loc_8377E94C;
	// lbz r11,74(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 74);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377e94c
	if (cr6.eq) goto loc_8377E94C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83778e30
	ctx.lr = 0x8377E944;
	sub_83778E30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_8377E94C:
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

__attribute__((alias("__imp__sub_8377E968"))) PPC_WEAK_FUNC(sub_8377E968);
PPC_FUNC_IMPL(__imp__sub_8377E968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377E970;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,43
	ctx.r11.s64 = 43;
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
	// li r4,472
	ctx.r4.s64 = 472;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x8377E9A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377e9c8
	if (cr6.eq) goto loc_8377E9C8;
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
	// bl 0x8377e828
	ctx.lr = 0x8377E9C0;
	sub_8377E828(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377E9C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377E9D4"))) PPC_WEAK_FUNC(sub_8377E9D4);
PPC_FUNC_IMPL(__imp__sub_8377E9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377E9D8"))) PPC_WEAK_FUNC(sub_8377E9D8);
PPC_FUNC_IMPL(__imp__sub_8377E9D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4780
	ctx.r10.s64 = ctx.r11.s64 + -4780;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x831032a0
	ctx.lr = 0x8377EA04;
	sub_831032A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8377ea1c
	if (cr6.eq) goto loc_8377EA1C;
	// bl 0x82416268
	ctx.lr = 0x8377EA18;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8377EA1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377EA34"))) PPC_WEAK_FUNC(sub_8377EA34);
PPC_FUNC_IMPL(__imp__sub_8377EA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377EA38"))) PPC_WEAK_FUNC(sub_8377EA38);
PPC_FUNC_IMPL(__imp__sub_8377EA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377EA40;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8377EA4C;
	sub_83763EF8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377eaec
	if (cr6.eq) goto loc_8377EAEC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8377eaac
	if (cr6.eq) goto loc_8377EAAC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x8377ed24
	if (!cr6.eq) goto loc_8377ED24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
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
	ctx.lr = 0x8377EA9C;
	sub_83103068(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377EAAC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x8377EADC;
	sub_83103068(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377EAEC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8377ed1c
	if (cr6.eq) goto loc_8377ED1C;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ed1c
	if (cr6.eq) goto loc_8377ED1C;
	// addic. r11,r11,4
	xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r11.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8377ed1c
	if (cr0.eq) goto loc_8377ED1C;
	// lbz r11,75(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 75);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377eb24
	if (cr6.eq) goto loc_8377EB24;
	// bl 0x8376dac8
	ctx.lr = 0x8377EB18;
	sub_8376DAC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ed1c
	if (cr6.eq) goto loc_8377ED1C;
loc_8377EB24:
	// lwz r30,72(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// beq cr6,0x8377eb3c
	if (cr6.eq) goto loc_8377EB3C;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
loc_8377EB3C:
	// bl 0x83108968
	ctx.lr = 0x8377EB40;
	sub_83108968(ctx, base);
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377eb94
	if (!cr6.eq) goto loc_8377EB94;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8377eb94
	if (cr6.eq) goto loc_8377EB94;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377eb94
	if (cr6.eq) goto loc_8377EB94;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83108978
	ctx.lr = 0x8377EB68;
	sub_83108978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83764788
	ctx.lr = 0x8377EB74;
	sub_83764788(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x8377EB7C;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83108978
	ctx.lr = 0x8377EB88;
	sub_83108978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83764800
	ctx.lr = 0x8377EB94;
	sub_83764800(ctx, base);
loc_8377EB94:
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x8377ebc0
	if (cr6.eq) goto loc_8377EBC0;
	// ori r4,r4,434
	ctx.r4.u64 = ctx.r4.u64 | 434;
	// b 0x8377ebc4
	goto loc_8377EBC4;
loc_8377EBC0:
	// ori r4,r4,55
	ctx.r4.u64 = ctx.r4.u64 | 55;
loc_8377EBC4:
	// bl 0x82d04220
	ctx.lr = 0x8377EBC8;
	sub_82D04220(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8377ebdc
	if (!cr6.lt) goto loc_8377EBDC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8377EBDC:
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d0b58
	ctx.lr = 0x8377EBF0;
	sub_831D0B58(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-5082
	ctx.r4.s64 = ctx.r11.s64 + -5082;
	// bl 0x837b0c10
	ctx.lr = 0x8377EC00;
	sub_837B0C10(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8377ec14
	if (!cr6.lt) goto loc_8377EC14;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_8377EC14:
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x831d0b58
	ctx.lr = 0x8377EC24;
	sub_831D0B58(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8377ecbc
	if (cr6.eq) goto loc_8377ECBC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377EC40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377ecbc
	if (cr6.eq) goto loc_8377ECBC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377EC5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8308f4e0
	ctx.lr = 0x8377EC68;
	sub_8308F4E0(ctx, base);
	// lbz r9,73(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8377ecbc
	if (cr6.eq) goto loc_8377ECBC;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x8308a250
	ctx.lr = 0x8377EC84;
	sub_8308A250(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8377EC9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,12(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
loc_8377ECBC:
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x8377ece8
	if (!cr6.eq) goto loc_8377ECE8;
	// bl 0x8307fec0
	ctx.lr = 0x8377ECE4;
	sub_8307FEC0(ctx, base);
	// b 0x8377ecec
	goto loc_8377ECEC;
loc_8377ECE8:
	// bl 0x8307e938
	ctx.lr = 0x8377ECEC;
	sub_8307E938(ctx, base);
loc_8377ECEC:
	// stw r3,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,468(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// bl 0x83103100
	ctx.lr = 0x8377ECFC;
	sub_83103100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8377ED0C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8377ED14;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377ED1C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_8377ED24:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377ED2C"))) PPC_WEAK_FUNC(sub_8377ED2C);
PPC_FUNC_IMPL(__imp__sub_8377ED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377ED30"))) PPC_WEAK_FUNC(sub_8377ED30);
PPC_FUNC_IMPL(__imp__sub_8377ED30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x8377ED38;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ef28
	if (cr6.eq) goto loc_8377EF28;
	// cmplwi cr6,r4,1024
	cr6.compare<uint32_t>(ctx.r4.u32, 1024, xer);
	// bgt cr6,0x8377ef28
	if (cr6.gt) goto loc_8377EF28;
	// cmplwi cr6,r5,1024
	cr6.compare<uint32_t>(ctx.r5.u32, 1024, xer);
	// bgt cr6,0x8377ef28
	if (cr6.gt) goto loc_8377EF28;
	// li r20,0
	ctx.r20.s64 = 0;
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// stb r20,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r20.u8);
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bf18d8
	ctx.lr = 0x8377ED8C;
	sub_82BF18D8(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832e8
	ctx.lr = 0x8377ED94;
	sub_825832E8(ctx, base);
	// cmplw cr6,r21,r3
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r3.u32, xer);
	// bge cr6,0x8377edb0
	if (!cr6.lt) goto loc_8377EDB0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832e8
	ctx.lr = 0x8377EDA4;
	sub_825832E8(ctx, base);
	// subf r11,r21,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r21.s64;
	// rlwinm r24,r11,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x8377edb4
	goto loc_8377EDB4;
loc_8377EDB0:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_8377EDB4:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832f0
	ctx.lr = 0x8377EDBC;
	sub_825832F0(ctx, base);
	// cmplw cr6,r19,r3
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r3.u32, xer);
	// bge cr6,0x8377edd8
	if (!cr6.lt) goto loc_8377EDD8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832f0
	ctx.lr = 0x8377EDCC;
	sub_825832F0(ctx, base);
	// subf r11,r19,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r19.s64;
	// rlwinm r17,r11,31,1,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x8377eddc
	goto loc_8377EDDC;
loc_8377EDD8:
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
loc_8377EDDC:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x8377ef20
	if (cr6.lt) goto loc_8377EF20;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// blt cr6,0x8377ef20
	if (cr6.lt) goto loc_8377EF20;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82dab6d0
	ctx.lr = 0x8377EDF4;
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
	// bne 0x8377ee14
	if (!cr0.eq) goto loc_8377EE14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8377EE14;
	sub_831CC188(ctx, base);
loc_8377EE14:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832e8
	ctx.lr = 0x8377EE1C;
	sub_825832E8(ctx, base);
	// cmplw cr6,r3,r21
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, xer);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// blt cr6,0x8377ee2c
	if (cr6.lt) goto loc_8377EE2C;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_8377EE2C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832f0
	ctx.lr = 0x8377EE34;
	sub_825832F0(ctx, base);
	// cmplw cr6,r3,r19
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r19.u32, xer);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// blt cr6,0x8377ee44
	if (cr6.lt) goto loc_8377EE44;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
loc_8377EE44:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x8377eea8
	if (cr6.eq) goto loc_8377EEA8;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_8377EE54:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8377ee98
	if (cr6.eq) goto loc_8377EE98;
	// add r29,r23,r17
	ctx.r29.u64 = ctx.r23.u64 + ctx.r17.u64;
loc_8377EE64:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832e8
	ctx.lr = 0x8377EE6C;
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
	// blt cr6,0x8377ee64
	if (cr6.lt) goto loc_8377EE64;
loc_8377EE98:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// blt cr6,0x8377ee54
	if (cr6.lt) goto loc_8377EE54;
loc_8377EEA8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83ac2480
	ctx.lr = 0x8377EEB0;
	sub_83AC2480(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x8377EECC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377ef14
	if (cr6.eq) goto loc_8377EF14;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832d8
	ctx.lr = 0x8377EEE0;
	sub_825832D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// rlwinm r7,r21,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// bl 0x835ebb28
	ctx.lr = 0x8377EF0C;
	sub_835EBB28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8377ef18
	goto loc_8377EF18;
loc_8377EF14:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_8377EF18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8377EF20;
	sub_82572FA0(ctx, base);
loc_8377EF20:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f73d60
	ctx.lr = 0x8377EF28;
	sub_82F73D60(ctx, base);
loc_8377EF28:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377EF30"))) PPC_WEAK_FUNC(sub_8377EF30);
PPC_FUNC_IMPL(__imp__sub_8377EF30) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x8377ef68
	if (cr6.lt) goto loc_8377EF68;
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
loc_8377EF68:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8377efb8
	if (!cr6.eq) goto loc_8377EFB8;
	// li r10,43
	ctx.r10.s64 = 43;
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-32364
	ctx.r7.s64 = ctx.r9.s64 + -32364;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x83104938
	ctx.lr = 0x8377EF94;
	sub_83104938(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8377efb4
	if (!cr6.eq) goto loc_8377EFB4;
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
loc_8377EFB4:
	// bl 0x83103b18
	ctx.lr = 0x8377EFB8;
	sub_83103B18(ctx, base);
loc_8377EFB8:
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

__attribute__((alias("__imp__sub_8377EFD0"))) PPC_WEAK_FUNC(sub_8377EFD0);
PPC_FUNC_IMPL(__imp__sub_8377EFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377efe4
	if (!cr6.eq) goto loc_8377EFE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8377EFE4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377EFF8"))) PPC_WEAK_FUNC(sub_8377EFF8);
PPC_FUNC_IMPL(__imp__sub_8377EFF8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8377f028
	if (cr6.eq) goto loc_8377F028;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8377f07c
	goto loc_8377F07C;
loc_8377F028:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8311c728
	ctx.lr = 0x8377F034;
	sub_8311C728(ctx, base);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw. r8,r7,r10
	ctx.r8.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8377f078
	if (cr0.eq) goto loc_8377F078;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r7,r7,14
	ctx.r7.u64 = ctx.r7.u32 & 0x3FFFF;
loc_8377F05C:
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// beq cr6,0x8377f094
	if (cr6.eq) goto loc_8377F094;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8377f05c
	if (cr6.lt) goto loc_8377F05C;
loc_8377F078:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8377F07C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8377F094:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// bl 0x82a9bc48
	ctx.lr = 0x8377F0B8;
	sub_82A9BC48(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x8377F0C8;
	sub_82A9BC48(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,7(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// bl 0x82a9bc48
	ctx.lr = 0x8377F0D8;
	sub_82A9BC48(ctx, base);
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// bl 0x82a9bc48
	ctx.lr = 0x8377F0E8;
	sub_82A9BC48(ctx, base);
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x82a9bc48
	ctx.lr = 0x8377F0F8;
	sub_82A9BC48(ctx, base);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x82a9bc48
	ctx.lr = 0x8377F108;
	sub_82A9BC48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8377f07c
	goto loc_8377F07C;
}

__attribute__((alias("__imp__sub_8377F110"))) PPC_WEAK_FUNC(sub_8377F110);
PPC_FUNC_IMPL(__imp__sub_8377F110) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-4060
	ctx.r9.s64 = ctx.r11.s64 + -4060;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8377f180
	if (cr6.eq) goto loc_8377F180;
	// li r11,43
	ctx.r11.s64 = 43;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8377F150;
	sub_82595150(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377f170
	if (cr6.eq) goto loc_8377F170;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377F170;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377F170:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8377F178;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8377F180:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x8377F188;
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

__attribute__((alias("__imp__sub_8377F19C"))) PPC_WEAK_FUNC(sub_8377F19C);
PPC_FUNC_IMPL(__imp__sub_8377F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377F1A0"))) PPC_WEAK_FUNC(sub_8377F1A0);
PPC_FUNC_IMPL(__imp__sub_8377F1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8377f1b4
	if (!cr6.eq) goto loc_8377F1B4;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8377F1B4:
	// b 0x8377eff8
	sub_8377EFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377F1B8"))) PPC_WEAK_FUNC(sub_8377F1B8);
PPC_FUNC_IMPL(__imp__sub_8377F1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8377F1C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8377f1e8
	if (cr6.eq) goto loc_8377F1E8;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8377F1E8:
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// li r10,88
	ctx.r10.s64 = 88;
	// lwz r9,48(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r27,r8,r10
	ctx.r27.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x8377f258
	if (cr0.eq) goto loc_8377F258;
	// clrlwi r28,r5,14
	ctx.r28.u64 = ctx.r5.u32 & 0x3FFFF;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8377F20C:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r22,r10,14
	ctx.r22.u64 = ctx.r10.u32 & 0x3FFFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r30,r8,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x8311c738
	ctx.lr = 0x8377F22C;
	sub_8311C738(ctx, base);
	// clrlwi r23,r3,24
	ctx.r23.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r22,r28
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r28.u32, xer);
	// bne cr6,0x8377f248
	if (!cr6.eq) goto loc_8377F248;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x8377f264
	if (cr6.eq) goto loc_8377F264;
loc_8377F248:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x8377f20c
	if (cr6.lt) goto loc_8377F20C;
loc_8377F258:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8377F264:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e58f28
	ctx.lr = 0x8377F26C;
	sub_82E58F28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r29,88
	ctx.r5.s64 = ctx.r29.s64 * 88;
loc_8377F274:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r7,r10,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// li r10,7
	ctx.r10.s64 = 7;
	// beq cr6,0x8377f29c
	if (cr6.eq) goto loc_8377F29C;
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
loc_8377F29C:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x8377f2c4
	if (!cr6.lt) goto loc_8377F2C4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwimi r8,r10,4,0,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFF0) | (ctx.r8.u64 & 0xFFFFFFFF0000000F);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// rlwimi r10,r9,7,17,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0x7F80) | (ctx.r10.u64 & 0xFFFFFFFFFFFF807F);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
loc_8377F2C4:
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// lbz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// bge cr6,0x8377f300
	if (!cr6.lt) goto loc_8377F300;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// bge cr6,0x8377f300
	if (!cr6.lt) goto loc_8377F300;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwimi r9,r10,0,27,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE0);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_8377F300:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377F304:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// lwz r9,48(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// bne cr6,0x8377f35c
	if (!cr6.eq) goto loc_8377F35C;
	// cmplwi cr6,r6,10
	cr6.compare<uint32_t>(ctx.r6.u32, 10, xer);
	// bge cr6,0x8377f378
	if (!cr6.lt) goto loc_8377F378;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// b 0x8377f378
	goto loc_8377F378;
loc_8377F35C:
	// cmplwi cr6,r6,10
	cr6.compare<uint32_t>(ctx.r6.u32, 10, xer);
	// bge cr6,0x8377f378
	if (!cr6.lt) goto loc_8377F378;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stb r7,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r7.u8);
	// stb r8,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// stb r9,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r9.u8);
loc_8377F378:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x8377f304
	if (cr6.lt) goto loc_8377F304;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8377f3a8
	if (cr6.eq) goto loc_8377F3A8;
	// cmplwi cr6,r6,10
	cr6.compare<uint32_t>(ctx.r6.u32, 10, xer);
	// bge cr6,0x8377f3a8
	if (!cr6.lt) goto loc_8377F3A8;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_8377F3A8:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// blt cr6,0x8377f274
	if (cr6.lt) goto loc_8377F274;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377F3C4"))) PPC_WEAK_FUNC(sub_8377F3C4);
PPC_FUNC_IMPL(__imp__sub_8377F3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377F3C8"))) PPC_WEAK_FUNC(sub_8377F3C8);
PPC_FUNC_IMPL(__imp__sub_8377F3C8) {
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
	// bl 0x8377f110
	ctx.lr = 0x8377F3E8;
	sub_8377F110(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377f400
	if (cr6.eq) goto loc_8377F400;
	// bl 0x82416268
	ctx.lr = 0x8377F3FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8377F400:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377F418"))) PPC_WEAK_FUNC(sub_8377F418);
PPC_FUNC_IMPL(__imp__sub_8377F418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8377f42c
	if (!cr6.eq) goto loc_8377F42C;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8377F42C:
	// b 0x8377f1b8
	sub_8377F1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377F430"))) PPC_WEAK_FUNC(sub_8377F430);
PPC_FUNC_IMPL(__imp__sub_8377F430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377F438;
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
	// beq cr6,0x8377f478
	if (cr6.eq) goto loc_8377F478;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_8377F450:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8377f468
	if (cr6.eq) goto loc_8377F468;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8377F468;
	sub_831CE980(ctx, base);
loc_8377F468:
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8377f450
	if (!cr6.eq) goto loc_8377F450;
loc_8377F478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377F484"))) PPC_WEAK_FUNC(sub_8377F484);
PPC_FUNC_IMPL(__imp__sub_8377F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377F488"))) PPC_WEAK_FUNC(sub_8377F488);
PPC_FUNC_IMPL(__imp__sub_8377F488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377F490;
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
	// beq cr6,0x8377f4d0
	if (cr6.eq) goto loc_8377F4D0;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_8377F4A8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8377f4c0
	if (cr6.eq) goto loc_8377F4C0;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8377F4C0;
	sub_831CE980(ctx, base);
loc_8377F4C0:
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8377f4a8
	if (!cr6.eq) goto loc_8377F4A8;
loc_8377F4D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377F4DC"))) PPC_WEAK_FUNC(sub_8377F4DC);
PPC_FUNC_IMPL(__imp__sub_8377F4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377F4E0"))) PPC_WEAK_FUNC(sub_8377F4E0);
PPC_FUNC_IMPL(__imp__sub_8377F4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377F4E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8377f584
	if (!cr6.eq) goto loc_8377F584;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,72
	ctx.r10.s64 = 72;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8377f584
	if (cr0.eq) goto loc_8377F584;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311d158
	ctx.lr = 0x8377F548;
	sub_8311D158(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x8377f578
	if (cr6.eq) goto loc_8377F578;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x8377f578
	if (!cr6.eq) goto loc_8377F578;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x8377F56C;
	sub_831CE980(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8377F578:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8377F584:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377F590"))) PPC_WEAK_FUNC(sub_8377F590);
PPC_FUNC_IMPL(__imp__sub_8377F590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8377f5a4
	if (!cr6.eq) goto loc_8377F5A4;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8377F5A4:
	// b 0x8377f4e0
	sub_8377F4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377F5A8"))) PPC_WEAK_FUNC(sub_8377F5A8);
PPC_FUNC_IMPL(__imp__sub_8377F5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377F5B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,910
	ctx.r11.s64 = 59637760;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,14563
	ctx.r10.u64 = ctx.r11.u64 | 14563;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8377f5d4
	if (!cr6.gt) goto loc_8377F5D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8377F5D4;
	sub_831CC150(ctx, base);
loc_8377F5D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,72
	ctx.r28.s64 = 72;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8377f670
	if (!cr6.lt) goto loc_8377F670;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82595718
	ctx.lr = 0x8377F614;
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
	// bl 0x8377f430
	ctx.lr = 0x8377F62C;
	sub_8377F430(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r28,r9,r28
	ctx.r28.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// beq cr6,0x8377f650
	if (cr6.eq) goto loc_8377F650;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8377F650;
	sub_825952B8(ctx, base);
loc_8377F650:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8377F670:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377F678"))) PPC_WEAK_FUNC(sub_8377F678);
PPC_FUNC_IMPL(__imp__sub_8377F678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377F680;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,744
	ctx.r11.s64 = 48758784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,47662
	ctx.r10.u64 = ctx.r11.u64 | 47662;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8377f6a4
	if (!cr6.gt) goto loc_8377F6A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8377F6A4;
	sub_831CC150(ctx, base);
loc_8377F6A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,88
	ctx.r28.s64 = 88;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8377f730
	if (!cr6.lt) goto loc_8377F730;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r29,r4,88
	ctx.r29.s64 = ctx.r4.s64 * 88;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8377F6DC;
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
	// bl 0x8377f488
	ctx.lr = 0x8377F6F4;
	sub_8377F488(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r28,r10,r28
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// beq cr6,0x8377f718
	if (cr6.eq) goto loc_8377F718;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8377F718;
	sub_825952B8(ctx, base);
loc_8377F718:
	// mulli r11,r28,88
	ctx.r11.s64 = ctx.r28.s64 * 88;
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
loc_8377F730:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377F738"))) PPC_WEAK_FUNC(sub_8377F738);
PPC_FUNC_IMPL(__imp__sub_8377F738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,910
	ctx.r10.s64 = 59637760;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,72
	ctx.r9.s64 = 72;
	// ori r8,r10,14563
	ctx.r8.u64 = ctx.r10.u64 | 14563;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x8377f76c
	if (!cr6.lt) goto loc_8377F76C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8377F76C:
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
	// blt cr6,0x8377f79c
	if (cr6.lt) goto loc_8377F79C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8377F79C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8377f7a8
	if (!cr6.lt) goto loc_8377F7A8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8377F7A8:
	// b 0x8377f5a8
	sub_8377F5A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377F7AC"))) PPC_WEAK_FUNC(sub_8377F7AC);
PPC_FUNC_IMPL(__imp__sub_8377F7AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377F7B0"))) PPC_WEAK_FUNC(sub_8377F7B0);
PPC_FUNC_IMPL(__imp__sub_8377F7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,744
	ctx.r10.s64 = 48758784;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,88
	ctx.r9.s64 = 88;
	// ori r8,r10,47662
	ctx.r8.u64 = ctx.r10.u64 | 47662;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x8377f7e4
	if (!cr6.lt) goto loc_8377F7E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8377F7E4:
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
	// blt cr6,0x8377f814
	if (cr6.lt) goto loc_8377F814;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8377F814:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8377f820
	if (!cr6.lt) goto loc_8377F820;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8377F820:
	// b 0x8377f678
	sub_8377F678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377F824"))) PPC_WEAK_FUNC(sub_8377F824);
PPC_FUNC_IMPL(__imp__sub_8377F824) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377F828"))) PPC_WEAK_FUNC(sub_8377F828);
PPC_FUNC_IMPL(__imp__sub_8377F828) {
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
	// bge cr6,0x8377f860
	if (!cr6.lt) goto loc_8377F860;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8377f864
	if (!cr6.gt) goto loc_8377F864;
loc_8377F860:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8377F864:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377f8bc
	if (cr6.eq) goto loc_8377F8BC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,72
	ctx.r9.s64 = 72;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x8377f898
	if (!cr6.eq) goto loc_8377F898;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377f738
	ctx.lr = 0x8377F898;
	sub_8377F738(ctx, base);
loc_8377F898:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8377f8ec
	if (cr6.eq) goto loc_8377F8EC;
	// b 0x8377f8e4
	goto loc_8377F8E4;
loc_8377F8BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377f8d4
	if (!cr6.eq) goto loc_8377F8D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377f738
	ctx.lr = 0x8377F8D4;
	sub_8377F738(ctx, base);
loc_8377F8D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377f8ec
	if (cr6.eq) goto loc_8377F8EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8377F8E4:
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x8377F8EC;
	sub_831CE980(ctx, base);
loc_8377F8EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
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

__attribute__((alias("__imp__sub_8377F910"))) PPC_WEAK_FUNC(sub_8377F910);
PPC_FUNC_IMPL(__imp__sub_8377F910) {
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
	// bge cr6,0x8377f948
	if (!cr6.lt) goto loc_8377F948;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8377f94c
	if (!cr6.gt) goto loc_8377F94C;
loc_8377F948:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8377F94C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377f99c
	if (cr6.eq) goto loc_8377F99C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,88
	ctx.r9.s64 = 88;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x8377f980
	if (!cr6.eq) goto loc_8377F980;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377f7b0
	ctx.lr = 0x8377F980;
	sub_8377F7B0(ctx, base);
loc_8377F980:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 * 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377f9cc
	if (cr6.eq) goto loc_8377F9CC;
	// b 0x8377f9c4
	goto loc_8377F9C4;
loc_8377F99C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377f9b4
	if (!cr6.eq) goto loc_8377F9B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377f7b0
	ctx.lr = 0x8377F9B4;
	sub_8377F7B0(ctx, base);
loc_8377F9B4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377f9cc
	if (cr6.eq) goto loc_8377F9CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8377F9C4:
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x831ce980
	ctx.lr = 0x8377F9CC;
	sub_831CE980(ctx, base);
loc_8377F9CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
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

__attribute__((alias("__imp__sub_8377F9F0"))) PPC_WEAK_FUNC(sub_8377F9F0);
PPC_FUNC_IMPL(__imp__sub_8377F9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377F9F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-4036
	ctx.r10.s64 = ctx.r11.s64 + -4036;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8377fa24
	if (cr6.eq) goto loc_8377FA24;
	// bl 0x83103e98
	ctx.lr = 0x8377FA20;
	sub_83103E98(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8377FA24:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8377fa44
	if (cr6.eq) goto loc_8377FA44;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8377FA44;
	sub_825952B8(ctx, base);
loc_8377FA44:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8377fa68
	if (cr6.eq) goto loc_8377FA68;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8377FA68;
	sub_825952B8(ctx, base);
loc_8377FA68:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8377fa8c
	if (cr6.eq) goto loc_8377FA8C;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x8377FA8C;
	sub_825952B8(ctx, base);
loc_8377FA8C:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377FAA0"))) PPC_WEAK_FUNC(sub_8377FAA0);
PPC_FUNC_IMPL(__imp__sub_8377FAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377FAA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,72
	ctx.r10.s64 = 72;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8377fad4
	if (cr0.eq) goto loc_8377FAD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8377FAD4:
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r10,60
	ctx.r10.s64 = 60;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divwu r30,r11,r10
	ctx.r30.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8377f5a8
	ctx.lr = 0x8377FAF0;
	sub_8377F5A8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8377FB00:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8377fb00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8377FB00;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8377fb44
	if (cr6.eq) goto loc_8377FB44;
loc_8377FB10:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8373fb50
	ctx.lr = 0x8377FB1C;
	sub_8373FB50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825a10c0
	ctx.lr = 0x8377FB2C;
	sub_825A10C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8377f828
	ctx.lr = 0x8377FB38;
	sub_8377F828(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// bne 0x8377fb10
	if (!cr0.eq) goto loc_8377FB10;
loc_8377FB44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377FB50"))) PPC_WEAK_FUNC(sub_8377FB50);
PPC_FUNC_IMPL(__imp__sub_8377FB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377FB58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8377fb84
	if (cr0.eq) goto loc_8377FB84;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8377FB84:
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divwu r29,r10,r11
	ctx.r29.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d545e8
	ctx.lr = 0x8377FB9C;
	sub_82D545E8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8377fbbc
	if (cr6.eq) goto loc_8377FBBC;
loc_8377FBA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d54828
	ctx.lr = 0x8377FBB0;
	sub_82D54828(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8377fba4
	if (!cr0.eq) goto loc_8377FBA4;
loc_8377FBBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377FBC8"))) PPC_WEAK_FUNC(sub_8377FBC8);
PPC_FUNC_IMPL(__imp__sub_8377FBC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377FBD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,88
	ctx.r10.s64 = 88;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8377fc00
	if (cr0.eq) goto loc_8377FC00;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8377FC00:
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r10,85
	ctx.r10.s64 = 85;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// divwu r31,r11,r10
	ctx.r31.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8377f678
	ctx.lr = 0x8377FC18;
	sub_8377F678(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8377fc38
	if (cr6.eq) goto loc_8377FC38;
loc_8377FC20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8377f910
	ctx.lr = 0x8377FC2C;
	sub_8377F910(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,85
	ctx.r30.s64 = ctx.r30.s64 + 85;
	// bne 0x8377fc20
	if (!cr0.eq) goto loc_8377FC20;
loc_8377FC38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377FC44"))) PPC_WEAK_FUNC(sub_8377FC44);
PPC_FUNC_IMPL(__imp__sub_8377FC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377FC48"))) PPC_WEAK_FUNC(sub_8377FC48);
PPC_FUNC_IMPL(__imp__sub_8377FC48) {
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
	// bl 0x8377f9f0
	ctx.lr = 0x8377FC68;
	sub_8377F9F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377fc80
	if (cr6.eq) goto loc_8377FC80;
	// bl 0x82416268
	ctx.lr = 0x8377FC7C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8377FC80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377FC98"))) PPC_WEAK_FUNC(sub_8377FC98);
PPC_FUNC_IMPL(__imp__sub_8377FC98) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-4164
	ctx.r4.s64 = ctx.r11.s64 + -4164;
	// bl 0x83103328
	ctx.lr = 0x8377FCBC;
	sub_83103328(ctx, base);
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// li r8,43
	ctx.r8.s64 = 43;
	// addi r9,r10,-4060
	ctx.r9.s64 = ctx.r10.s64 + -4060;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8377FCE8;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8377fd3c
	if (cr6.eq) goto loc_8377FD3C;
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r9,r10,-4036
	ctx.r9.s64 = ctx.r10.s64 + -4036;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// stw r31,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
	// stw r31,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// b 0x8377fd40
	goto loc_8377FD40;
loc_8377FD3C:
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
loc_8377FD40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377FD58"))) PPC_WEAK_FUNC(sub_8377FD58);
PPC_FUNC_IMPL(__imp__sub_8377FD58) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377fe18
	if (cr6.eq) goto loc_8377FE18;
	// bl 0x83103bb8
	ctx.lr = 0x8377FD80;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377fd94
	if (cr6.eq) goto loc_8377FD94;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8377fe1c
	goto loc_8377FE1C;
loc_8377FD94:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83103d60
	ctx.lr = 0x8377FD9C;
	sub_83103D60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83103d20
	ctx.lr = 0x8377FDA8;
	sub_83103D20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8377fde4
	if (cr6.lt) goto loc_8377FDE4;
	// beq cr6,0x8377fdd4
	if (cr6.eq) goto loc_8377FDD4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x8377fdf0
	if (!cr6.lt) goto loc_8377FDF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377fbc8
	ctx.lr = 0x8377FDD0;
	sub_8377FBC8(ctx, base);
	// b 0x8377fdf0
	goto loc_8377FDF0;
loc_8377FDD4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377fb50
	ctx.lr = 0x8377FDE0;
	sub_8377FB50(ctx, base);
	// b 0x8377fdf0
	goto loc_8377FDF0;
loc_8377FDE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377faa0
	ctx.lr = 0x8377FDF0;
	sub_8377FAA0(ctx, base);
loc_8377FDF0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377fe08
	if (cr6.eq) goto loc_8377FE08;
	// bl 0x83103e98
	ctx.lr = 0x8377FE04;
	sub_83103E98(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8377FE08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8377FE18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8377FE1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377FE34"))) PPC_WEAK_FUNC(sub_8377FE34);
PPC_FUNC_IMPL(__imp__sub_8377FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377FE38"))) PPC_WEAK_FUNC(sub_8377FE38);
PPC_FUNC_IMPL(__imp__sub_8377FE38) {
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
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8377fe80
	if (cr6.eq) goto loc_8377FE80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8377fe74
	if (cr6.eq) goto loc_8377FE74;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8377fe80
	if (cr6.eq) goto loc_8377FE80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377ef30
	ctx.lr = 0x8377FE70;
	sub_8377EF30(ctx, base);
	// b 0x8377fe7c
	goto loc_8377FE7C;
loc_8377FE74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377fd58
	ctx.lr = 0x8377FE7C;
	sub_8377FD58(ctx, base);
loc_8377FE7C:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8377FE80:
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

__attribute__((alias("__imp__sub_8377FE94"))) PPC_WEAK_FUNC(sub_8377FE94);
PPC_FUNC_IMPL(__imp__sub_8377FE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377FE98"))) PPC_WEAK_FUNC(sub_8377FE98);
PPC_FUNC_IMPL(__imp__sub_8377FE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377ff18
	if (cr6.eq) goto loc_8377FF18;
	// bl 0x82d3c868
	ctx.lr = 0x8377FEBC;
	sub_82D3C868(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x835242e8
	ctx.lr = 0x8377FEC8;
	sub_835242E8(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8377FED8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8377fed8
	if (!cr0.eq) goto loc_8377FED8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377ff10
	if (!cr6.eq) goto loc_8377FF10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377FF10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377FF10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8377FF18:
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

__attribute__((alias("__imp__sub_8377FF30"))) PPC_WEAK_FUNC(sub_8377FF30);
PPC_FUNC_IMPL(__imp__sub_8377FF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377ffb0
	if (cr6.eq) goto loc_8377FFB0;
	// bl 0x82d3c908
	ctx.lr = 0x8377FF54;
	sub_82D3C908(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ffb0
	if (cr6.eq) goto loc_8377FFB0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
loc_8377FF70:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ea = ctx.r10.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwcx. r8,0,r10
	ea = ctx.r10.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8377ff70
	if (!cr0.eq) goto loc_8377FF70;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8377ffa8
	if (!cr6.eq) goto loc_8377FFA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377FFA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377FFA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8377FFB0:
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

__attribute__((alias("__imp__sub_8377FFC4"))) PPC_WEAK_FUNC(sub_8377FFC4);
PPC_FUNC_IMPL(__imp__sub_8377FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377FFC8"))) PPC_WEAK_FUNC(sub_8377FFC8);
PPC_FUNC_IMPL(__imp__sub_8377FFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377FFD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// bl 0x82596f90
	ctx.lr = 0x8377FFE0;
	sub_82596F90(ctx, base);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8377fffc
	if (cr6.eq) goto loc_8377FFFC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8377FFFC;
	sub_825952B8(ctx, base);
loc_8377FFFC:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83780024
	if (cr6.eq) goto loc_83780024;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83780024;
	sub_825952B8(ctx, base);
loc_83780024:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83780048
	if (cr6.eq) goto loc_83780048;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x83780048;
	sub_825952B8(ctx, base);
loc_83780048:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8378006c
	if (cr6.eq) goto loc_8378006C;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x8378006C;
	sub_825952B8(ctx, base);
loc_8378006C:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83780090
	if (cr6.eq) goto loc_83780090;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x83780090;
	sub_825952B8(ctx, base);
loc_83780090:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837800b4
	if (cr6.eq) goto loc_837800B4;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x837800B4;
	sub_825952B8(ctx, base);
loc_837800B4:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837800d8
	if (cr6.eq) goto loc_837800D8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x837800D8;
	sub_825952B8(ctx, base);
loc_837800D8:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837800EC"))) PPC_WEAK_FUNC(sub_837800EC);
PPC_FUNC_IMPL(__imp__sub_837800EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837800F0"))) PPC_WEAK_FUNC(sub_837800F0);
PPC_FUNC_IMPL(__imp__sub_837800F0) {
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
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// addi r10,r11,-3612
	ctx.r10.s64 = ctx.r11.s64 + -3612;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8377ffc8
	ctx.lr = 0x83780120;
	sub_8377FFC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x83780128;
	sub_831032A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83780140
	if (cr6.eq) goto loc_83780140;
	// bl 0x82416268
	ctx.lr = 0x8378013C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83780140:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83780158"))) PPC_WEAK_FUNC(sub_83780158);
PPC_FUNC_IMPL(__imp__sub_83780158) {
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
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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
	// bl 0x82596fa8
	ctx.lr = 0x837801CC;
	sub_82596FA8(ctx, base);
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

__attribute__((alias("__imp__sub_837801E4"))) PPC_WEAK_FUNC(sub_837801E4);
PPC_FUNC_IMPL(__imp__sub_837801E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837801E8"))) PPC_WEAK_FUNC(sub_837801E8);
PPC_FUNC_IMPL(__imp__sub_837801E8) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3760
	ctx.r4.s64 = ctx.r11.s64 + -3760;
	// bl 0x83103328
	ctx.lr = 0x83780208;
	sub_83103328(ctx, base);
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-3612
	ctx.r8.s64 = ctx.r10.s64 + -3612;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x83780158
	ctx.lr = 0x83780224;
	sub_83780158(ctx, base);
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

__attribute__((alias("__imp__sub_8378023C"))) PPC_WEAK_FUNC(sub_8378023C);
PPC_FUNC_IMPL(__imp__sub_8378023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83780240"))) PPC_WEAK_FUNC(sub_83780240);
PPC_FUNC_IMPL(__imp__sub_83780240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83780248;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837802c0
	if (cr6.eq) goto loc_837802C0;
	// bl 0x82d3c868
	ctx.lr = 0x83780268;
	sub_82D3C868(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x835242e8
	ctx.lr = 0x83780274;
	sub_835242E8(ctx, base);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_83780284:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83780284
	if (!cr0.eq) goto loc_83780284;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837802bc
	if (!cr6.eq) goto loc_837802BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837802BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837802BC:
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
loc_837802C0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837802D4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83780328
	if (cr6.eq) goto loc_83780328;
	// bl 0x835242a0
	ctx.lr = 0x837802E4;
	sub_835242A0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,-6728
	ctx.r10.s64 = ctx.r11.s64 + -6728;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596fa8
	ctx.lr = 0x837802FC;
	sub_82596FA8(ctx, base);
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82596fa8
	ctx.lr = 0x83780308;
	sub_82596FA8(ctx, base);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// addi r8,r30,76
	ctx.r8.s64 = ctx.r30.s64 + 76;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// addi r7,r9,-3628
	ctx.r7.s64 = ctx.r9.s64 + -3628;
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x8378032c
	goto loc_8378032C;
loc_83780328:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8378032C:
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837803a8
	if (cr6.eq) goto loc_837803A8;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// std r29,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r4,r10,-3736
	ctx.r4.s64 = ctx.r10.s64 + -3736;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// bl 0x8259cc28
	ctx.lr = 0x83780370;
	sub_8259CC28(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x835249e8
	ctx.lr = 0x83780388;
	sub_835249E8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x837803a8
	if (cr6.lt) goto loc_837803A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837803A8;
	sub_825952B8(ctx, base);
loc_837803A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837803B0"))) PPC_WEAK_FUNC(sub_837803B0);
PPC_FUNC_IMPL(__imp__sub_837803B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x837803B8;
	__savegprlr_17(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x837803C4;
	sub_831156E8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r23,48(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,60636
	ctx.r10.u64 = ctx.r11.u64 | 60636;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r29,r23,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// bl 0x8381b9d0
	ctx.lr = 0x837803E4;
	sub_8381B9D0(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// ori r17,r9,159
	ctx.r17.u64 = ctx.r9.u64 | 159;
	// li r22,3
	ctx.r22.s64 = 3;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83780468
	if (cr6.eq) goto loc_83780468;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// ori r28,r11,13856
	ctx.r28.u64 = ctx.r11.u64 | 13856;
loc_8378040C:
	// cmplwi cr6,r31,21097
	cr6.compare<uint32_t>(ctx.r31.u32, 21097, xer);
	// add r11,r23,r28
	ctx.r11.u64 = ctx.r23.u64 + ctx.r28.u64;
	// bge cr6,0x8378041c
	if (!cr6.lt) goto loc_8378041C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8378041C:
	// ld r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 44);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// bl 0x8311c6e8
	ctx.lr = 0x83780430;
	sub_8311C6E8(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmplw cr6,r9,r17
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r17.u32, xer);
	// ble cr6,0x83780450
	if (!cr6.gt) goto loc_83780450;
	// bl 0x833e3748
	ctx.lr = 0x83780448;
	sub_833E3748(ctx, base);
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// b 0x83780458
	goto loc_83780458;
loc_83780450:
	// bl 0x833e3748
	ctx.lr = 0x83780454;
	sub_833E3748(ctx, base);
	// stw r19,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r19.u32);
loc_83780458:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x8378040c
	if (cr6.lt) goto loc_8378040C;
loc_83780468:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d3c8b8
	ctx.lr = 0x83780470;
	sub_82D3C8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837804b0
	if (cr6.eq) goto loc_837804B0;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x83780490;
	sub_82D0E798(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837804A4;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_837804B0:
	// addis r28,r23,237
	ctx.r28.s64 = ctx.r23.s64 + 15532032;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// addi r28,r28,19684
	ctx.r28.s64 = ctx.r28.s64 + 19684;
	// li r18,2
	ctx.r18.s64 = 2;
loc_837804C0:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// bgt cr6,0x83780570
	if (cr6.gt) goto loc_83780570;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x837804f4
	if (cr6.eq) goto loc_837804F4;
	// bdz 0x837804f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837804F4;
	// bdz 0x837804f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837804F4;
	// bdz 0x837804f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837804F4;
	// bdz 0x837804f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837804F4;
	// bdz 0x837804f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837804F4;
	// bdnz 0x837804f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837804F4;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_837804F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83124f18
	ctx.lr = 0x83780500;
	sub_83124F18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83780570
	if (!cr6.gt) goto loc_83780570;
loc_83780510:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83124ed0
	ctx.lr = 0x83780520;
	sub_83124ED0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x83780530;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83780554
	if (cr6.eq) goto loc_83780554;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x83780548;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83780564
	if (!cr6.eq) goto loc_83780564;
loc_83780554:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x83780560;
	sub_833E3748(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_83780564:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x83780510
	if (cr6.lt) goto loc_83780510;
loc_83780570:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// blt cr6,0x837804c0
	if (cr6.lt) goto loc_837804C0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d3c8b8
	ctx.lr = 0x83780584;
	sub_82D3C8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837805c0
	if (cr6.eq) goto loc_837805C0;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x837805A4;
	sub_82D0E798(ctx, base);
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x837805B4;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_837805C0:
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r20,1
	ctx.r20.s64 = 1;
	// ori r10,r11,60640
	ctx.r10.u64 = ctx.r11.u64 | 60640;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// lwzx r25,r23,r10
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83780748
	if (cr6.eq) goto loc_83780748;
	// addis r26,r23,72
	ctx.r26.s64 = ctx.r23.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r26,r26,7136
	ctx.r26.s64 = ctx.r26.s64 + 7136;
	// lis r28,-31769
	ctx.r28.s64 = -2082013184;
	// ori r24,r11,58144
	ctx.r24.u64 = ctx.r11.u64 | 58144;
loc_837805F0:
	// cmplwi cr6,r27,653
	cr6.compare<uint32_t>(ctx.r27.u32, 653, xer);
	// add r30,r23,r24
	ctx.r30.u64 = ctx.r23.u64 + ctx.r24.u64;
	// bge cr6,0x83780600
	if (!cr6.lt) goto loc_83780600;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_83780600:
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// beq cr6,0x837806b0
	if (cr6.eq) goto loc_837806B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8376b9c8
	ctx.lr = 0x83780618;
	sub_8376B9C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837806b0
	if (!cr6.eq) goto loc_837806B0;
	// lhz r11,808(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 808);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83780738
	if (cr6.eq) goto loc_83780738;
	// addi r29,r30,248
	ctx.r29.s64 = ctx.r30.s64 + 248;
loc_8378063C:
	// ld r10,-32216(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + -32216);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// bge cr6,0x83780654
	if (!cr6.lt) goto loc_83780654;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
loc_83780654:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x83780660;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83780684
	if (cr6.eq) goto loc_83780684;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x83780678;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83780694
	if (!cr6.eq) goto loc_83780694;
loc_83780684:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x83780690;
	sub_833E3748(ctx, base);
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
loc_83780694:
	// lhz r11,808(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8378063c
	if (cr6.lt) goto loc_8378063C;
	// b 0x83780738
	goto loc_83780738;
loc_837806B0:
	// lhz r11,808(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 808);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83780738
	if (cr6.eq) goto loc_83780738;
	// addi r29,r30,248
	ctx.r29.s64 = ctx.r30.s64 + 248;
loc_837806C8:
	// ld r10,-32216(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + -32216);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// bge cr6,0x837806e0
	if (!cr6.lt) goto loc_837806E0;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
loc_837806E0:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x837806EC;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83780710
	if (cr6.eq) goto loc_83780710;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x83780704;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83780720
	if (!cr6.eq) goto loc_83780720;
loc_83780710:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x8378071C;
	sub_833E3748(ctx, base);
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
loc_83780720:
	// lhz r11,808(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x837806c8
	if (cr6.lt) goto loc_837806C8;
loc_83780738:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,1312
	ctx.r26.s64 = ctx.r26.s64 + 1312;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x837805f0
	if (cr6.lt) goto loc_837805F0;
loc_83780748:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d3c8b8
	ctx.lr = 0x83780750;
	sub_82D3C8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378078c
	if (cr6.eq) goto loc_8378078C;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x83780770;
	sub_82D0E798(ctx, base);
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x83780780;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8378078C:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x82596fe8
	ctx.lr = 0x83780798;
	sub_82596FE8(ctx, base);
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x837807d0
	if (cr6.eq) goto loc_837807D0;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x837807C8;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_837807D0:
	// lwz r30,84(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x83780804
	if (cr6.eq) goto loc_83780804;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x837807FC;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_83780804:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x8378083c
	if (cr6.eq) goto loc_8378083C;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x83780834;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8378083C:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83780874
	if (cr6.eq) goto loc_83780874;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x8378086C;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83780874:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lwz r30,64(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x837808ac
	if (cr6.eq) goto loc_837808AC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x837808A4;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_837808AC:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8378097c
	if (cr6.eq) goto loc_8378097C;
	// lis r31,16
	ctx.r31.s64 = 1048576;
loc_837808C8:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// sth r19,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r19.u16);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bne cr6,0x837808f0
	if (!cr6.eq) goto loc_837808F0;
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// b 0x83780954
	goto loc_83780954;
loc_837808F0:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// blt cr6,0x83780904
	if (cr6.lt) goto loc_83780904;
	// cmplw cr6,r11,r17
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// ble cr6,0x83780908
	if (!cr6.gt) goto loc_83780908;
loc_83780904:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83780908:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378091c
	if (cr6.eq) goto loc_8378091C;
	// lwz r3,84(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// b 0x83780940
	goto loc_83780940;
loc_8378091C:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x83780930
	if (!cr6.eq) goto loc_83780930;
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x83780940
	goto loc_83780940;
loc_83780930:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83780948
	if (!cr6.eq) goto loc_83780948;
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
loc_83780940:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x835977d8
	ctx.lr = 0x83780948;
	sub_835977D8(ctx, base);
loc_83780948:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
loc_83780954:
	// bl 0x835977d8
	ctx.lr = 0x83780958;
	sub_835977D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8330ee50
	ctx.lr = 0x83780960;
	sub_8330EE50(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837808c8
	if (!cr6.eq) goto loc_837808C8;
loc_8378097C:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x82597088
	ctx.lr = 0x83780988;
	sub_82597088(ctx, base);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8378099C;
	sub_82D0E798(ctx, base);
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x837809AC;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837809B8"))) PPC_WEAK_FUNC(sub_837809B8);
PPC_FUNC_IMPL(__imp__sub_837809B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837809C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x837809CC;
	sub_831156E8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r25,48(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,60644
	ctx.r10.u64 = ctx.r11.u64 | 60644;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r29,r25,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// bl 0x8381b9d0
	ctx.lr = 0x837809EC;
	sub_8381B9D0(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// beq cr6,0x83780a44
	if (cr6.eq) goto loc_83780A44;
	// addis r30,r25,88
	ctx.r30.s64 = ctx.r25.s64 + 5767168;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,-20304
	ctx.r30.s64 = ctx.r30.s64 + -20304;
	// ori r28,r11,60004
	ctx.r28.u64 = ctx.r11.u64 | 60004;
loc_83780A0C:
	// cmplwi cr6,r31,850
	cr6.compare<uint32_t>(ctx.r31.u32, 850, xer);
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// bge cr6,0x83780a1c
	if (!cr6.lt) goto loc_83780A1C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83780A1C:
	// ld r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 44);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// bl 0x833e3748
	ctx.lr = 0x83780A30;
	sub_833E3748(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r30,r30,632
	ctx.r30.s64 = ctx.r30.s64 + 632;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x83780a0c
	if (cr6.lt) goto loc_83780A0C;
loc_83780A44:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d3c8b8
	ctx.lr = 0x83780A4C;
	sub_82D3C8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83780a8c
	if (cr6.eq) goto loc_83780A8C;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x83780A6C;
	sub_82D0E798(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83780A80;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83780A8C:
	// addis r29,r25,238
	ctx.r29.s64 = ctx.r25.s64 + 15597568;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r29,r29,-5784
	ctx.r29.s64 = ctx.r29.s64 + -5784;
	// li r24,3
	ctx.r24.s64 = 3;
loc_83780A9C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83780b08
	if (!cr6.eq) goto loc_83780B08;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83132db8
	ctx.lr = 0x83780AB0;
	sub_83132DB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83780b08
	if (!cr6.gt) goto loc_83780B08;
loc_83780AC0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83132d70
	ctx.lr = 0x83780AD0;
	sub_83132D70(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x83780AE0;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83780afc
	if (!cr6.eq) goto loc_83780AFC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x83780AF8;
	sub_833E3748(ctx, base);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
loc_83780AFC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x83780ac0
	if (cr6.lt) goto loc_83780AC0;
loc_83780B08:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// blt cr6,0x83780a9c
	if (cr6.lt) goto loc_83780A9C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d3c8b8
	ctx.lr = 0x83780B1C;
	sub_82D3C8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83780b5c
	if (cr6.eq) goto loc_83780B5C;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x83780B3C;
	sub_82D0E798(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83780B50;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83780B5C:
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// ori r10,r11,60640
	ctx.r10.u64 = ctx.r11.u64 | 60640;
	// lwzx r27,r25,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83780c10
	if (cr6.eq) goto loc_83780C10;
	// addis r29,r25,72
	ctx.r29.s64 = ctx.r25.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r29,r29,7136
	ctx.r29.s64 = ctx.r29.s64 + 7136;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r28,r11,58144
	ctx.r28.u64 = ctx.r11.u64 | 58144;
loc_83780B88:
	// cmplwi cr6,r30,653
	cr6.compare<uint32_t>(ctx.r30.u32, 653, xer);
	// add r31,r25,r28
	ctx.r31.u64 = ctx.r25.u64 + ctx.r28.u64;
	// bge cr6,0x83780b98
	if (!cr6.lt) goto loc_83780B98;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83780B98:
	// ld r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 504);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x833e3748
	ctx.lr = 0x83780BAC;
	sub_833E3748(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83780c00
	if (!cr6.eq) goto loc_83780C00;
	// lwz r11,796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// beq cr6,0x83780bf0
	if (cr6.eq) goto loc_83780BF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8376b9c8
	ctx.lr = 0x83780BD0;
	sub_8376B9C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83780bf0
	if (!cr6.eq) goto loc_83780BF0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x83780BE8;
	sub_833E3748(ctx, base);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// b 0x83780c00
	goto loc_83780C00;
loc_83780BF0:
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x83780BFC;
	sub_833E3748(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
loc_83780C00:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1312
	ctx.r29.s64 = ctx.r29.s64 + 1312;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// blt cr6,0x83780b88
	if (cr6.lt) goto loc_83780B88;
loc_83780C10:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d3c8b8
	ctx.lr = 0x83780C18;
	sub_82D3C8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83780c58
	if (cr6.eq) goto loc_83780C58;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x83780C38;
	sub_82D0E798(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83780C4C;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83780C58:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d3c8b8
	ctx.lr = 0x83780C60;
	sub_82D3C8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83780ca0
	if (cr6.eq) goto loc_83780CA0;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x83780C80;
	sub_82D0E798(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83780C94;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83780CA0:
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x82596fe8
	ctx.lr = 0x83780CAC;
	sub_82596FE8(ctx, base);
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83780ce4
	if (cr6.eq) goto loc_83780CE4;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x83780CDC;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83780CE4:
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
	// lwz r30,96(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83780d1c
	if (cr6.eq) goto loc_83780D1C;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x83780D14;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83780D1C:
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x83780d98
	if (cr6.eq) goto loc_83780D98;
loc_83780D34:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x83780d78
	if (cr6.eq) goto loc_83780D78;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83780d64
	if (!cr6.eq) goto loc_83780D64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// sth r22,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r22.u16);
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x835977d8
	ctx.lr = 0x83780D64;
	sub_835977D8(ctx, base);
loc_83780D64:
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x83780D74;
	sub_835977D8(ctx, base);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_83780D78:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8330ee50
	ctx.lr = 0x83780D80;
	sub_8330EE50(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bne cr6,0x83780d34
	if (!cr6.eq) goto loc_83780D34;
loc_83780D98:
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x82597088
	ctx.lr = 0x83780DA4;
	sub_82597088(ctx, base);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x83780DB8;
	sub_82D0E798(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83780DCC;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83780DD8"))) PPC_WEAK_FUNC(sub_83780DD8);
PPC_FUNC_IMPL(__imp__sub_83780DD8) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83780e20
	if (cr6.eq) goto loc_83780E20;
	// bl 0x837803b0
	ctx.lr = 0x83780E00;
	sub_837803B0(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// bne cr6,0x83780e20
	if (!cr6.eq) goto loc_83780E20;
loc_83780E08:
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
loc_83780E20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3c8b8
	ctx.lr = 0x83780E28;
	sub_82D3C8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83780e08
	if (!cr6.eq) goto loc_83780E08;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83780e58
	if (cr6.eq) goto loc_83780E58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837809b8
	ctx.lr = 0x83780E4C;
	sub_837809B8(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83780e5c
	if (cr6.eq) goto loc_83780E5C;
loc_83780E58:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83780E5C:
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

__attribute__((alias("__imp__sub_83780E70"))) PPC_WEAK_FUNC(sub_83780E70);
PPC_FUNC_IMPL(__imp__sub_83780E70) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83780ecc
	if (cr6.eq) goto loc_83780ECC;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,-32112
	ctx.r8.s64 = ctx.r11.s64 + -32112;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_83780EA0:
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// bne cr6,0x83780eb8
	if (!cr6.eq) goto loc_83780EB8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83780ee4
	if (!cr6.eq) goto loc_83780EE4;
loc_83780EB8:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r9,1056
	cr6.compare<uint32_t>(ctx.r9.u32, 1056, xer);
	// blt cr6,0x83780ea0
	if (cr6.lt) goto loc_83780EA0;
loc_83780ECC:
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
loc_83780EE4:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83780F08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_83780F28"))) PPC_WEAK_FUNC(sub_83780F28);
PPC_FUNC_IMPL(__imp__sub_83780F28) {
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
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83780f84
	if (cr6.eq) goto loc_83780F84;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-31056
	ctx.r8.s64 = ctx.r10.s64 + -31056;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
loc_83780F58:
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// bne cr6,0x83780f70
	if (!cr6.eq) goto loc_83780F70;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83780f9c
	if (!cr6.eq) goto loc_83780F9C;
loc_83780F70:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// blt cr6,0x83780f58
	if (cr6.lt) goto loc_83780F58;
loc_83780F84:
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
loc_83780F9C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83780FC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_83780FE0"))) PPC_WEAK_FUNC(sub_83780FE0);
PPC_FUNC_IMPL(__imp__sub_83780FE0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83781054
	if (cr6.eq) goto loc_83781054;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-31044
	ctx.r8.s64 = ctx.r10.s64 + -31044;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
loc_83781018:
	// lwz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bne cr6,0x83781040
	if (!cr6.eq) goto loc_83781040;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83781040
	if (cr6.eq) goto loc_83781040;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83781040
	if (cr6.eq) goto loc_83781040;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83781070
	if (!cr6.eq) goto loc_83781070;
loc_83781040:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// blt cr6,0x83781018
	if (cr6.lt) goto loc_83781018;
loc_83781054:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83781058:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83781070:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83781090;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x837810A0;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83781058
	goto loc_83781058;
}

__attribute__((alias("__imp__sub_837810A8"))) PPC_WEAK_FUNC(sub_837810A8);
PPC_FUNC_IMPL(__imp__sub_837810A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x837810c0
	if (cr6.lt) goto loc_837810C0;
	// cmpwi cr6,r4,105
	cr6.compare<int32_t>(ctx.r4.s32, 105, xer);
	// bgt cr6,0x837810c0
	if (cr6.gt) goto loc_837810C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837810C0:
	// cmpwi cr6,r4,106
	cr6.compare<int32_t>(ctx.r4.s32, 106, xer);
	// blt cr6,0x837810d4
	if (cr6.lt) goto loc_837810D4;
	// cmpwi cr6,r4,107
	cr6.compare<int32_t>(ctx.r4.s32, 107, xer);
	// li r3,2
	ctx.r3.s64 = 2;
	// blelr cr6
	if (!cr6.gt) return;
loc_837810D4:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837810DC"))) PPC_WEAK_FUNC(sub_837810DC);
PPC_FUNC_IMPL(__imp__sub_837810DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837810E0"))) PPC_WEAK_FUNC(sub_837810E0);
PPC_FUNC_IMPL(__imp__sub_837810E0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r10,-30848(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30848);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r7,r10,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lwz r10,-30848(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30848);
	// rlwimi r6,r10,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83781130"))) PPC_WEAK_FUNC(sub_83781130);
PPC_FUNC_IMPL(__imp__sub_83781130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83781198
	if (cr6.eq) goto loc_83781198;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83781198
	if (cr6.eq) goto loc_83781198;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// clrlwi r10,r5,14
	ctx.r10.u64 = ctx.r5.u32 & 0x3FFFF;
	// ori r8,r9,65529
	ctx.r8.u64 = ctx.r9.u64 | 65529;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x83781168
	if (!cr6.eq) goto loc_83781168;
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// b 0x83781174
	goto loc_83781174;
loc_83781168:
	// rlwinm r9,r5,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
loc_83781174:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_83781198:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837811A0"))) PPC_WEAK_FUNC(sub_837811A0);
PPC_FUNC_IMPL(__imp__sub_837811A0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,-30848(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30848);
	// rlwimi r10,r6,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r10,-30848(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30848);
	// rlwimi r5,r10,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837811F8"))) PPC_WEAK_FUNC(sub_837811F8);
PPC_FUNC_IMPL(__imp__sub_837811F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83781200;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83781ab4
	if (cr6.eq) goto loc_83781AB4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83781ab4
	if (cr6.eq) goto loc_83781AB4;
	// bl 0x83103d20
	ctx.lr = 0x83781224;
	sub_83103D20(ctx, base);
	// rotlwi r28,r3,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83103d60
	ctx.lr = 0x83781230;
	sub_83103D60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83781ab4
	if (cr6.eq) goto loc_83781AB4;
	// cmplwi cr6,r28,96
	cr6.compare<uint32_t>(ctx.r28.u32, 96, xer);
	// bne cr6,0x83781ab4
	if (!cr6.eq) goto loc_83781AB4;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83781254;
	sub_831CDCF0(ctx, base);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// clrlwi r10,r8,25
	ctx.r10.u64 = ctx.r8.u32 & 0x7F;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r7,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83781284;
	sub_82AAF090(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83781294;
	sub_82AAF090(ctx, base);
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r5,87
	ctx.r5.s64 = 87;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,28,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xF;
	// bl 0x82aaf090
	ctx.lr = 0x837812A8;
	sub_82AAF090(ctx, base);
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// bl 0x82aaf090
	ctx.lr = 0x837812B8;
	sub_82AAF090(ctx, base);
	// li r5,89
	ctx.r5.s64 = 89;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,5(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bl 0x82aaf090
	ctx.lr = 0x837812C8;
	sub_82AAF090(ctx, base);
	// li r5,90
	ctx.r5.s64 = 90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,6(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// bl 0x82aaf090
	ctx.lr = 0x837812D8;
	sub_82AAF090(ctx, base);
	// li r5,91
	ctx.r5.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,7(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// bl 0x82aaf090
	ctx.lr = 0x837812E8;
	sub_82AAF090(ctx, base);
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// bl 0x82aaf090
	ctx.lr = 0x837812F8;
	sub_82AAF090(ctx, base);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r4,26,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x8378130C;
	sub_82AAF090(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781320;
	sub_82AAF090(ctx, base);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781334;
	sub_82AAF090(ctx, base);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781348;
	sub_82AAF090(ctx, base);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x8378135C;
	sub_82AAF090(ctx, base);
	// lwz r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r7,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781370;
	sub_82AAF090(ctx, base);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r6,26
	ctx.r4.u64 = ctx.r6.u32 & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781384;
	sub_82AAF090(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r4,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781398;
	sub_82AAF090(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837813AC;
	sub_82AAF090(ctx, base);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837813C0;
	sub_82AAF090(ctx, base);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837813D4;
	sub_82AAF090(ctx, base);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r5,25
	ctx.r5.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837813E8;
	sub_82AAF090(ctx, base);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r7,26,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837813FC;
	sub_82AAF090(ctx, base);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781410;
	sub_82AAF090(ctx, base);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r4,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781424;
	sub_82AAF090(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781438;
	sub_82AAF090(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x8378144C;
	sub_82AAF090(ctx, base);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r5,26
	ctx.r5.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781460;
	sub_82AAF090(ctx, base);
	// li r5,93
	ctx.r5.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82aaf090
	ctx.lr = 0x83781470;
	sub_82AAF090(ctx, base);
	// li r5,94
	ctx.r5.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// bl 0x82aaf090
	ctx.lr = 0x83781480;
	sub_82AAF090(ctx, base);
	// li r5,95
	ctx.r5.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// bl 0x82aaf090
	ctx.lr = 0x83781490;
	sub_82AAF090(ctx, base);
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,3(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// bl 0x82aaf090
	ctx.lr = 0x837814A0;
	sub_82AAF090(ctx, base);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r8,26
	ctx.r4.u64 = ctx.r8.u32 & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837814B4;
	sub_82AAF090(ctx, base);
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r7,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837814C8;
	sub_82AAF090(ctx, base);
	// li r5,33
	ctx.r5.s64 = 33;
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837814DC;
	sub_82AAF090(ctx, base);
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r4,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837814F0;
	sub_82AAF090(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r5,39
	ctx.r5.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781504;
	sub_82AAF090(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,26,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781518;
	sub_82AAF090(ctx, base);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x8378152C;
	sub_82AAF090(ctx, base);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r5,34
	ctx.r5.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781540;
	sub_82AAF090(ctx, base);
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r7,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781554;
	sub_82AAF090(ctx, base);
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781568;
	sub_82AAF090(ctx, base);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,29
	ctx.r5.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r4,26
	ctx.r4.u64 = ctx.r4.u32 & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x8378157C;
	sub_82AAF090(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781590;
	sub_82AAF090(ctx, base);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r5,35
	ctx.r5.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837815A4;
	sub_82AAF090(ctx, base);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837815B8;
	sub_82AAF090(ctx, base);
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,41
	ctx.r5.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837815CC;
	sub_82AAF090(ctx, base);
	// li r5,97
	ctx.r5.s64 = 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,9(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// bl 0x82aaf090
	ctx.lr = 0x837815DC;
	sub_82AAF090(ctx, base);
	// li r5,98
	ctx.r5.s64 = 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,10(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// bl 0x82aaf090
	ctx.lr = 0x837815EC;
	sub_82AAF090(ctx, base);
	// li r5,99
	ctx.r5.s64 = 99;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,11(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// bl 0x82aaf090
	ctx.lr = 0x837815FC;
	sub_82AAF090(ctx, base);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,42
	ctx.r5.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r7,26,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781610;
	sub_82AAF090(ctx, base);
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,45
	ctx.r5.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781624;
	sub_82AAF090(ctx, base);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r4,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781638;
	sub_82AAF090(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,51
	ctx.r5.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x8378164C;
	sub_82AAF090(ctx, base);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,43
	ctx.r5.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r10,26
	ctx.r4.u64 = ctx.r10.u32 & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781660;
	sub_82AAF090(ctx, base);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,46
	ctx.r5.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781674;
	sub_82AAF090(ctx, base);
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r5,49
	ctx.r5.s64 = 49;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781688;
	sub_82AAF090(ctx, base);
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r7,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x8378169C;
	sub_82AAF090(ctx, base);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,26,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837816B0;
	sub_82AAF090(ctx, base);
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r4,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837816C4;
	sub_82AAF090(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r5,50
	ctx.r5.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837816D8;
	sub_82AAF090(ctx, base);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r5,53
	ctx.r5.s64 = 53;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837816EC;
	sub_82AAF090(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,15,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1F;
	// bl 0x82aaf090
	ctx.lr = 0x83781700;
	sub_82AAF090(ctx, base);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r5,101
	ctx.r5.s64 = 101;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,20,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x1F;
	// bl 0x82aaf090
	ctx.lr = 0x83781714;
	sub_82AAF090(ctx, base);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r5,54
	ctx.r5.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r7,26
	ctx.r4.u64 = ctx.r7.u32 & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781728;
	sub_82AAF090(ctx, base);
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r5,57
	ctx.r5.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x8378173C;
	sub_82AAF090(ctx, base);
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r4,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781750;
	sub_82AAF090(ctx, base);
	// li r5,55
	ctx.r5.s64 = 55;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781764;
	sub_82AAF090(ctx, base);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r5,58
	ctx.r5.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781778;
	sub_82AAF090(ctx, base);
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r5,61
	ctx.r5.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x8378178C;
	sub_82AAF090(ctx, base);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837817A0;
	sub_82AAF090(ctx, base);
	// lwz r7,76(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r5,59
	ctx.r5.s64 = 59;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r7,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837817B4;
	sub_82AAF090(ctx, base);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r5,62
	ctx.r5.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837817C8;
	sub_82AAF090(ctx, base);
	// li r5,102
	ctx.r5.s64 = 102;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x837817D8;
	sub_82AAF090(ctx, base);
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// li r5,103
	ctx.r5.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r4,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837817EC;
	sub_82AAF090(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r5,104
	ctx.r5.s64 = 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,10,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1F;
	// bl 0x82aaf090
	ctx.lr = 0x83781800;
	sub_82AAF090(ctx, base);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// clrlwi r4,r10,28
	ctx.r4.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83781814
	if (cr6.eq) goto loc_83781814;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_83781814:
	// li r5,105
	ctx.r5.s64 = 105;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83781820;
	sub_82AAF090(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,106
	ctx.r5.s64 = 106;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,31,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// bl 0x82aaf090
	ctx.lr = 0x83781834;
	sub_82AAF090(ctx, base);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r5,63
	ctx.r5.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781848;
	sub_82AAF090(ctx, base);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x8378185C;
	sub_82AAF090(ctx, base);
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r5,65
	ctx.r5.s64 = 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781870;
	sub_82AAF090(ctx, base);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,107
	ctx.r5.s64 = 107;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r7,5,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x1F;
	// bl 0x82aaf090
	ctx.lr = 0x83781884;
	sub_82AAF090(ctx, base);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,10,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// bl 0x82aaf090
	ctx.lr = 0x83781898;
	sub_82AAF090(ctx, base);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r4,r5,28,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837818ac
	if (cr6.eq) goto loc_837818AC;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_837818AC:
	// li r5,109
	ctx.r5.s64 = 109;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x837818B8;
	sub_82AAF090(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,69
	ctx.r5.s64 = 69;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837818CC;
	sub_82AAF090(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,70
	ctx.r5.s64 = 70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837818E0;
	sub_82AAF090(ctx, base);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r5,71
	ctx.r5.s64 = 71;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837818F4;
	sub_82AAF090(ctx, base);
	// li r5,110
	ctx.r5.s64 = 110;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83781904;
	sub_82AAF090(ctx, base);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,10,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x1F;
	// bl 0x82aaf090
	ctx.lr = 0x83781918;
	sub_82AAF090(ctx, base);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,111
	ctx.r5.s64 = 111;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r7,5,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x1F;
	// bl 0x82aaf090
	ctx.lr = 0x8378192C;
	sub_82AAF090(ctx, base);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,113
	ctx.r5.s64 = 113;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,15,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0x1F;
	// bl 0x82aaf090
	ctx.lr = 0x83781940;
	sub_82AAF090(ctx, base);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r5,75
	ctx.r5.s64 = 75;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r4,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781954;
	sub_82AAF090(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781968;
	sub_82AAF090(ctx, base);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r5,77
	ctx.r5.s64 = 77;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x8378197C;
	sub_82AAF090(ctx, base);
	// li r5,114
	ctx.r5.s64 = 114;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x8378198C;
	sub_82AAF090(ctx, base);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,115
	ctx.r5.s64 = 115;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,15,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1F;
	// bl 0x82aaf090
	ctx.lr = 0x837819A0;
	sub_82AAF090(ctx, base);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,116
	ctx.r5.s64 = 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,20,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x1F;
	// bl 0x82aaf090
	ctx.lr = 0x837819B4;
	sub_82AAF090(ctx, base);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,117
	ctx.r5.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r7,20,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0x1F;
	// bl 0x82aaf090
	ctx.lr = 0x837819C8;
	sub_82AAF090(ctx, base);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r5,81
	ctx.r5.s64 = 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837819DC;
	sub_82AAF090(ctx, base);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r5,82
	ctx.r5.s64 = 82;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r4,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x837819F0;
	sub_82AAF090(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r5,83
	ctx.r5.s64 = 83;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781A04;
	sub_82AAF090(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,47(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 47);
	// bl 0x82aaf090
	ctx.lr = 0x83781A14;
	sub_82AAF090(ctx, base);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r5,121
	ctx.r5.s64 = 121;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781A28;
	sub_82AAF090(ctx, base);
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r5,122
	ctx.r5.s64 = 122;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,18,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781A3C;
	sub_82AAF090(ctx, base);
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r5,123
	ctx.r5.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r8,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781A50;
	sub_82AAF090(ctx, base);
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r7,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781A64;
	sub_82AAF090(ctx, base);
	// lwz r6,84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r6,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781A78;
	sub_82AAF090(ctx, base);
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r5,126
	ctx.r5.s64 = 126;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r4,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x3F;
	// bl 0x82aaf090
	ctx.lr = 0x83781A8C;
	sub_82AAF090(ctx, base);
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaccf8
	ctx.lr = 0x83781A98;
	sub_82AACCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,119
	ctx.r5.s64 = 119;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83781AA8;
	sub_82AAF090(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83781AB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83781AC0"))) PPC_WEAK_FUNC(sub_83781AC0);
PPC_FUNC_IMPL(__imp__sub_83781AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83781AC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83781bf8
	if (cr6.eq) goto loc_83781BF8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83781bf8
	if (cr6.eq) goto loc_83781BF8;
	// bl 0x83103d20
	ctx.lr = 0x83781AEC;
	sub_83103D20(ctx, base);
	// rotlwi r28,r3,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83103d60
	ctx.lr = 0x83781AF8;
	sub_83103D60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83781bf8
	if (cr6.eq) goto loc_83781BF8;
	// cmplwi cr6,r28,120
	cr6.compare<uint32_t>(ctx.r28.u32, 120, xer);
	// bne cr6,0x83781bf8
	if (!cr6.eq) goto loc_83781BF8;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83781B1C;
	sub_831CDCF0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// clrlwi r10,r8,25
	ctx.r10.u64 = ctx.r8.u32 & 0x7F;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r7,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83781B4C;
	sub_82AAF090(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83781B5C;
	sub_82AAF090(ctx, base);
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// bl 0x82aaf090
	ctx.lr = 0x83781B6C;
	sub_82AAF090(ctx, base);
	// li r5,89
	ctx.r5.s64 = 89;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,17(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// bl 0x82aaf090
	ctx.lr = 0x83781B7C;
	sub_82AAF090(ctx, base);
	// li r5,90
	ctx.r5.s64 = 90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,18(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18);
	// bl 0x82aaf090
	ctx.lr = 0x83781B8C;
	sub_82AAF090(ctx, base);
	// li r5,93
	ctx.r5.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,10(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// bl 0x82aaf090
	ctx.lr = 0x83781B9C;
	sub_82AAF090(ctx, base);
	// li r5,94
	ctx.r5.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,11(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// bl 0x82aaf090
	ctx.lr = 0x83781BAC;
	sub_82AAF090(ctx, base);
	// li r5,95
	ctx.r5.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// bl 0x82aaf090
	ctx.lr = 0x83781BBC;
	sub_82AAF090(ctx, base);
	// li r5,97
	ctx.r5.s64 = 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,13(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// bl 0x82aaf090
	ctx.lr = 0x83781BCC;
	sub_82AAF090(ctx, base);
	// li r5,98
	ctx.r5.s64 = 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,14(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// bl 0x82aaf090
	ctx.lr = 0x83781BDC;
	sub_82AAF090(ctx, base);
	// li r5,99
	ctx.r5.s64 = 99;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,15(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// bl 0x82aaf090
	ctx.lr = 0x83781BEC;
	sub_82AAF090(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83781BF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83781C04"))) PPC_WEAK_FUNC(sub_83781C04);
PPC_FUNC_IMPL(__imp__sub_83781C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83781C08"))) PPC_WEAK_FUNC(sub_83781C08);
PPC_FUNC_IMPL(__imp__sub_83781C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83781C10;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x83781f00
	if (cr6.gt) goto loc_83781F00;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83781c58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83781C58;
	// bdzf 4*cr6+eq,0x83781e68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83781E68;
	// bdzf 4*cr6+eq,0x83781e94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83781E94;
	// bne cr6,0x83781ef0
	if (!cr6.eq) goto loc_83781EF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83781f00
	if (!cr6.eq) goto loc_83781F00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83781C58:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// bne cr6,0x83781e2c
	if (!cr6.eq) goto loc_83781E2C;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,-30848(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30848);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83781cb0
	if (!cr6.eq) goto loc_83781CB0;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83781cb4
	if (cr6.eq) goto loc_83781CB4;
loc_83781CB0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83781CB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83781e2c
	if (!cr6.eq) goto loc_83781E2C;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8376d7f0
	ctx.lr = 0x83781CDC;
	sub_8376D7F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83781d38
	if (cr6.eq) goto loc_83781D38;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83781cfc
	if (!cr6.lt) goto loc_83781CFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_83781CFC:
	// bl 0x83104018
	ctx.lr = 0x83781D00;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83781d38
	if (cr6.eq) goto loc_83781D38;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83781d24
	if (!cr6.lt) goto loc_83781D24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_83781D24:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83104938
	ctx.lr = 0x83781D2C;
	sub_83104938(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// b 0x83781e2c
	goto loc_83781E2C;
loc_83781D38:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8376d7f0
	ctx.lr = 0x83781D54;
	sub_8376D7F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83781db0
	if (cr6.eq) goto loc_83781DB0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83781d74
	if (!cr6.lt) goto loc_83781D74;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_83781D74:
	// bl 0x83104018
	ctx.lr = 0x83781D78;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83781db0
	if (cr6.eq) goto loc_83781DB0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83781d9c
	if (!cr6.lt) goto loc_83781D9C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_83781D9C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83104938
	ctx.lr = 0x83781DA4;
	sub_83104938(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// b 0x83781e2c
	goto loc_83781E2C;
loc_83781DB0:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8376d7f0
	ctx.lr = 0x83781DCC;
	sub_8376D7F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83781e28
	if (cr6.eq) goto loc_83781E28;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83781dec
	if (!cr6.lt) goto loc_83781DEC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_83781DEC:
	// bl 0x83104018
	ctx.lr = 0x83781DF0;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83781e28
	if (cr6.eq) goto loc_83781E28;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83781e14
	if (!cr6.lt) goto loc_83781E14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_83781E14:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83104938
	ctx.lr = 0x83781E1C;
	sub_83104938(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// b 0x83781e2c
	goto loc_83781E2C;
loc_83781E28:
	// stb r28,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r28.u8);
loc_83781E2C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83781e50
	if (cr6.eq) goto loc_83781E50;
	// bl 0x83103b18
	ctx.lr = 0x83781E3C;
	sub_83103B18(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83781E48;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83781E50:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83781E60;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83781E68:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83781f00
	if (cr6.eq) goto loc_83781F00;
	// bl 0x83103bb8
	ctx.lr = 0x83781E78;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83781f00
	if (!cr6.eq) goto loc_83781F00;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83781E94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83781eac
	if (cr6.eq) goto loc_83781EAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x83781ec8
	goto loc_83781EC8;
loc_83781EAC:
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83781ec4
	if (!cr6.eq) goto loc_83781EC4;
	// bl 0x837811f8
	ctx.lr = 0x83781EC0;
	sub_837811F8(ctx, base);
	// b 0x83781ec8
	goto loc_83781EC8;
loc_83781EC4:
	// bl 0x83781ac0
	ctx.lr = 0x83781EC8;
	sub_83781AC0(ctx, base);
loc_83781EC8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83781f00
	if (cr6.eq) goto loc_83781F00;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83103e98
	ctx.lr = 0x83781EDC;
	sub_83103E98(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83781EF0:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83781F00:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83781F08"))) PPC_WEAK_FUNC(sub_83781F08);
PPC_FUNC_IMPL(__imp__sub_83781F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83781F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83781F30;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x83781F40;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8306eeb0
	ctx.lr = 0x83781F50;
	sub_8306EEB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a72110
	ctx.lr = 0x83781F64;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83781f78
	if (!cr6.eq) goto loc_83781F78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83781F78:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83781F80"))) PPC_WEAK_FUNC(sub_83781F80);
PPC_FUNC_IMPL(__imp__sub_83781F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83781F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x831cdcf0
	ctx.lr = 0x83781FA8;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x83781FB8;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8306eeb0
	ctx.lr = 0x83781FC8;
	sub_8306EEB0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-2732
	ctx.r9.s64 = ctx.r11.s64 + -2732;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82a72110
	ctx.lr = 0x83781FEC;
	sub_82A72110(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83782000
	if (!cr6.eq) goto loc_83782000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83782000:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83782008"))) PPC_WEAK_FUNC(sub_83782008);
PPC_FUNC_IMPL(__imp__sub_83782008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83782010;
	__savegprlr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83782310
	if (cr6.eq) goto loc_83782310;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// beq cr6,0x83782310
	if (cr6.eq) goto loc_83782310;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r19,r3,4
	ctx.r19.s64 = ctx.r3.s64 + 4;
	// addi r25,r11,-30760
	ctx.r25.s64 = ctx.r11.s64 + -30760;
loc_83782054:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782064;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782078
	if (cr6.eq) goto loc_83782078;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x83782098
	goto loc_83782098;
loc_83782078:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83572958
	ctx.lr = 0x83782088;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837820b8
	if (cr6.eq) goto loc_837820B8;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83782098:
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// bge cr6,0x837820b8
	if (!cr6.lt) goto loc_837820B8;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x837820bc
	if (cr6.eq) goto loc_837820BC;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// b 0x837820cc
	goto loc_837820CC;
loc_837820B8:
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_837820BC:
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_837820CC:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837820e0
	if (!cr6.eq) goto loc_837820E0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83782104
	goto loc_83782104;
loc_837820E0:
	// lhz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x837820fc
	if (!cr6.eq) goto loc_837820FC;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83782100
	if (cr6.eq) goto loc_83782100;
loc_837820FC:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83782100:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83782104:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782300
	if (cr6.eq) goto loc_83782300;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782120;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782134
	if (cr6.eq) goto loc_83782134;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x83782154
	goto loc_83782154;
loc_83782134:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83572958
	ctx.lr = 0x83782144;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782184
	if (cr6.eq) goto loc_83782184;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83782154:
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// bge cr6,0x83782184
	if (!cr6.lt) goto loc_83782184;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a687b8
	ctx.lr = 0x83782174;
	sub_82A687B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83782188
	if (!cr6.eq) goto loc_83782188;
loc_83782184:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_83782188:
	// lwz r27,0(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x83782300
	if (cr6.eq) goto loc_83782300;
loc_83782198:
	// ld r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// bl 0x83781f08
	ctx.lr = 0x837821AC;
	sub_83781F08(ctx, base);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r21,1
	cr6.compare<uint32_t>(ctx.r21.u32, 1, xer);
	// blt cr6,0x837821f4
	if (cr6.lt) goto loc_837821F4;
	// beq cr6,0x837821dc
	if (cr6.eq) goto loc_837821DC;
	// cmplwi cr6,r21,3
	cr6.compare<uint32_t>(ctx.r21.u32, 3, xer);
	// bge cr6,0x837821fc
	if (!cr6.lt) goto loc_837821FC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83781f80
	ctx.lr = 0x837821D4;
	sub_83781F80(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// b 0x837821f8
	goto loc_837821F8;
loc_837821DC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83781f80
	ctx.lr = 0x837821EC;
	sub_83781F80(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// b 0x837821f8
	goto loc_837821F8;
loc_837821F4:
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
loc_837821F8:
	// bne cr6,0x83782200
	if (!cr6.eq) goto loc_83782200;
loc_837821FC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83782200:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83782220
	if (!cr6.eq) goto loc_83782220;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x83782198
	if (!cr6.eq) goto loc_83782198;
	// b 0x83782300
	goto loc_83782300;
loc_83782220:
	// li r29,12
	ctx.r29.s64 = 12;
loc_83782224:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_8378222C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a7f5a0
	ctx.lr = 0x8378223C;
	sub_82A7F5A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8376ba60
	ctx.lr = 0x83782248;
	sub_8376BA60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a2298
	ctx.lr = 0x83782258;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378226c
	if (cr6.eq) goto loc_8378226C;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x8378227c
	if (cr6.eq) goto loc_8378227C;
loc_8378226C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x8378222c
	if (cr6.lt) goto loc_8378222C;
	// b 0x83782280
	goto loc_83782280;
loc_8378227C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_83782280:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378229c
	if (cr6.eq) goto loc_8378229C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,99
	cr6.compare<uint32_t>(ctx.r29.u32, 99, xer);
	// ble cr6,0x83782224
	if (!cr6.gt) goto loc_83782224;
	// b 0x837822b0
	goto loc_837822B0;
loc_8378229C:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a7de40
	ctx.lr = 0x837822B0;
	sub_82A7DE40(ctx, base);
loc_837822B0:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a7de40
	ctx.lr = 0x837822C4;
	sub_82A7DE40(ctx, base);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837822f4
	if (cr6.eq) goto loc_837822F4;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
loc_837822D8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bne cr6,0x837822d8
	if (!cr6.eq) goto loc_837822D8;
loc_837822F4:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
loc_83782300:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmplw cr6,r23,r18
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r18.u32, xer);
	// blt cr6,0x83782054
	if (cr6.lt) goto loc_83782054;
loc_83782310:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83782318"))) PPC_WEAK_FUNC(sub_83782318);
PPC_FUNC_IMPL(__imp__sub_83782318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83782320;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8381b9d0
	ctx.lr = 0x83782344;
	sub_8381B9D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83782358;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837823c0
	if (cr6.eq) goto loc_837823C0;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8378237C;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837823c0
	if (cr6.eq) goto loc_837823C0;
	// addi r29,r29,-188
	ctx.r29.s64 = ctx.r29.s64 + -188;
loc_83782388:
	// lwzu r11,188(r29)
	ea = 188 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82f3de08
	ctx.lr = 0x8378239C;
	sub_82F3DE08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// bl 0x8306e2a0
	ctx.lr = 0x837823B8;
	sub_8306E2A0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83782388
	if (cr6.lt) goto loc_83782388;
loc_837823C0:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83782400
	if (cr6.eq) goto loc_83782400;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x837823fc
	if (cr6.eq) goto loc_837823FC;
loc_837823DC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837823dc
	if (!cr6.eq) goto loc_837823DC;
loc_837823FC:
	// stw r10,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r10.u32);
loc_83782400:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837825bc
	if (cr6.eq) goto loc_837825BC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83782548
	if (cr6.eq) goto loc_83782548;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r31,r11,-30760
	ctx.r31.s64 = ctx.r11.s64 + -30760;
loc_8378242C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8378253c
	if (cr6.eq) goto loc_8378253C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r3,r11,14
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// ble cr6,0x83782448
	if (!cr6.gt) goto loc_83782448;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_83782448:
	// bl 0x8319fea0
	ctx.lr = 0x8378244C;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8378253c
	if (!cr6.eq) goto loc_8378253C;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
loc_83782460:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782470;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782484
	if (cr6.eq) goto loc_83782484;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// b 0x837824a4
	goto loc_837824A4;
loc_83782484:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83572958
	ctx.lr = 0x83782494;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837824c8
	if (cr6.eq) goto loc_837824C8;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_837824A4:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x837824c8
	if (!cr6.lt) goto loc_837824C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837824cc
	if (cr6.eq) goto loc_837824CC;
	// sth r24,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r24.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x837824d8
	goto loc_837824D8;
loc_837824C8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_837824CC:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_837824D8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837824ec
	if (!cr6.eq) goto loc_837824EC;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83782510
	goto loc_83782510;
loc_837824EC:
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83782508
	if (!cr6.eq) goto loc_83782508;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x8378250c
	if (cr6.eq) goto loc_8378250C;
loc_83782508:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8378250C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83782510:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8378252c
	if (!cr6.eq) goto loc_8378252C;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833e3748
	ctx.lr = 0x83782528;
	sub_833E3748(ctx, base);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
loc_8378252C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x83782460
	if (cr6.lt) goto loc_83782460;
loc_8378253C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r27,r27,164
	ctx.r27.s64 = ctx.r27.s64 + 164;
	// bne 0x8378242c
	if (!cr0.eq) goto loc_8378242C;
loc_83782548:
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x837825c0
	if (cr6.eq) goto loc_837825C0;
loc_8378255C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83782574
	if (!cr6.eq) goto loc_83782574;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8330ee50
	ctx.lr = 0x83782570;
	sub_8330EE50(ctx, base);
	// b 0x837825ac
	goto loc_837825AC;
loc_83782574:
	// sth r24,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r24.u16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ld r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8376b848
	ctx.lr = 0x83782588;
	sub_8376B848(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837825a0
	if (cr6.eq) goto loc_837825A0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83546fd8
	ctx.lr = 0x837825A0;
	sub_83546FD8(ctx, base);
loc_837825A0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8330ee50
	ctx.lr = 0x837825A8;
	sub_8330EE50(ctx, base);
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_837825AC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x8378255c
	if (!cr6.eq) goto loc_8378255C;
	// b 0x837825c0
	goto loc_837825C0;
loc_837825BC:
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_837825C0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d0e798
	ctx.lr = 0x837825D4;
	sub_82D0E798(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837825E8;
	sub_825952B8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837825F0"))) PPC_WEAK_FUNC(sub_837825F0);
PPC_FUNC_IMPL(__imp__sub_837825F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x837825F8;
	__savegprlr_14(ctx, base);
	// stwu r1,-3728(r1)
	ea = -3728 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r3,3748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3748, ctx.r3.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r4,3756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3756, ctx.r4.u32);
	// addi r11,r1,488
	ctx.r11.s64 = ctx.r1.s64 + 488;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// stw r19,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r19.u32);
	// stw r19,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r19.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r19,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r19.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_83782628:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83782628
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83782628;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r22,-1
	ctx.r22.s64 = -1;
	// ori r23,r11,65535
	ctx.r23.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r18,r9,-30760
	ctx.r18.s64 = ctx.r9.s64 + -30760;
	// beq cr6,0x8378298c
	if (cr6.eq) goto loc_8378298C;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
loc_83782658:
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83782980
	if (cr6.eq) goto loc_83782980;
	// stw r19,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r19.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// bl 0x8306c9d8
	ctx.lr = 0x8378267C;
	sub_8306C9D8(ctx, base);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// clrlwi r31,r11,14
	ctx.r31.u64 = ctx.r11.u32 & 0x3FFFF;
	// ble cr6,0x83782690
	if (!cr6.gt) goto loc_83782690;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_83782690:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8306e7c8
	ctx.lr = 0x8378269C;
	sub_8306E7C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837826b4
	if (cr6.eq) goto loc_837826B4;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// li r5,164
	ctx.r5.s64 = 164;
	// bl 0x831ce980
	ctx.lr = 0x837826B4;
	sub_831CE980(ctx, base);
loc_837826B4:
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// bl 0x82ac0af0
	ctx.lr = 0x837826BC;
	sub_82AC0AF0(ctx, base);
	// li r5,628
	ctx.r5.s64 = 628;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2944
	ctx.r3.s64 = ctx.r1.s64 + 2944;
	// bl 0x831cdcf0
	ctx.lr = 0x837826CC;
	sub_831CDCF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8306e850
	ctx.lr = 0x837826D8;
	sub_8306E850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837826ec
	if (!cr6.eq) goto loc_837826EC;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x837826fc
	goto loc_837826FC;
loc_837826EC:
	// addi r3,r1,2944
	ctx.r3.s64 = ctx.r1.s64 + 2944;
	// li r5,628
	ctx.r5.s64 = 628;
	// bl 0x831ce980
	ctx.lr = 0x837826F8;
	sub_831CE980(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_837826FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782724
	if (cr6.eq) goto loc_83782724;
	// addi r4,r1,2948
	ctx.r4.s64 = ctx.r1.s64 + 2948;
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// bl 0x82abfda0
	ctx.lr = 0x83782714;
	sub_82ABFDA0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,3428
	ctx.r4.s64 = ctx.r1.s64 + 3428;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83782724;
	sub_831CE980(ctx, base);
loc_83782724:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// addi r26,r1,500
	ctx.r26.s64 = ctx.r1.s64 + 500;
	// addi r27,r25,4
	ctx.r27.s64 = ctx.r25.s64 + 4;
loc_83782730:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782740;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782754
	if (cr6.eq) goto loc_83782754;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x83782774
	goto loc_83782774;
loc_83782754:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x83782764;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782798
	if (cr6.eq) goto loc_83782798;
	// lwz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
loc_83782774:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83782798
	if (!cr6.lt) goto loc_83782798;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83782798
	if (cr6.eq) goto loc_83782798;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x837827a8
	goto loc_837827A8;
loc_83782798:
	// ld r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lhz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
loc_837827A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8306a888
	ctx.lr = 0x837827B8;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837827cc
	if (cr6.eq) goto loc_837827CC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x837827ec
	goto loc_837827EC;
loc_837827CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x83572958
	ctx.lr = 0x837827DC;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782810
	if (cr6.eq) goto loc_83782810;
	// lwz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
loc_837827EC:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83782810
	if (!cr6.lt) goto loc_83782810;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83782814
	if (cr6.eq) goto loc_83782814;
	// sth r19,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r19.u16);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// b 0x83782820
	goto loc_83782820;
loc_83782810:
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_83782814:
	// ld r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
loc_83782820:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83782834
	if (!cr6.eq) goto loc_83782834;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83782858
	goto loc_83782858;
loc_83782834:
	// lhz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 176);
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x83782850
	if (!cr6.eq) goto loc_83782850;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83782854
	if (cr6.eq) goto loc_83782854;
loc_83782850:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83782854:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83782858:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83782954
	if (!cr6.eq) goto loc_83782954;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83782878
	if (!cr6.eq) goto loc_83782878;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8378289c
	goto loc_8378289C;
loc_83782878:
	// lhz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83782894
	if (!cr6.eq) goto loc_83782894;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83782898
	if (cr6.eq) goto loc_83782898;
loc_83782894:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83782898:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8378289C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782954
	if (cr6.eq) goto loc_83782954;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
loc_837828B0:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, xer);
	// beq cr6,0x837828cc
	if (cr6.eq) goto loc_837828CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x837828b0
	if (cr6.lt) goto loc_837828B0;
	// li r11,255
	ctx.r11.s64 = 255;
loc_837828CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x837828e4
	if (!cr6.lt) goto loc_837828E4;
	// addi r10,r1,1824
	ctx.r10.s64 = ctx.r1.s64 + 1824;
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x83782940
	goto loc_83782940;
loc_837828E4:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1748
	ctx.r3.s64 = ctx.r1.s64 + 1748;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x837828F8;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// bl 0x831cdcf0
	ctx.lr = 0x83782908;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,1632
	ctx.r4.s64 = ctx.r1.s64 + 1632;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// bl 0x8306eeb0
	ctx.lr = 0x83782918;
	sub_8306EEB0(ctx, base);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// bl 0x82a72110
	ctx.lr = 0x8378292C;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378293c
	if (cr6.eq) goto loc_8378293C;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8378293C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83782940:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a7de40
	ctx.lr = 0x83782950;
	sub_82A7DE40(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_83782954:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x83782730
	if (cr6.lt) goto loc_83782730;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782980
	if (cr6.eq) goto loc_83782980;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x835977d8
	ctx.lr = 0x83782980;
	sub_835977D8(ctx, base);
loc_83782980:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r25,r25,164
	ctx.r25.s64 = ctx.r25.s64 + 164;
	// bne 0x83782658
	if (!cr0.eq) goto loc_83782658;
loc_8378298C:
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r14,2
	ctx.r14.s64 = 2;
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// stw r19,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r19.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r19,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r19.u32);
	// stw r19,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r19.u32);
	// srawi. r16,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r16.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r16.s32, 0, xer);
	// stw r19,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r19.u32);
	// stw r19,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r19.u32);
	// stw r19,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r19.u32);
	// beq 0x83783c88
	if (cr0.eq) goto loc_83783C88;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r11,-2732
	ctx.r23.s64 = ctx.r11.s64 + -2732;
loc_837829CC:
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwzx r25,r10,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// beq cr6,0x83783c28
	if (cr6.eq) goto loc_83783C28;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// clrlwi r3,r10,14
	ctx.r3.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x837829fc
	if (!cr6.gt) goto loc_837829FC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_837829FC:
	// bl 0x8319fea0
	ctx.lr = 0x83782A00;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782a1c
	if (cr6.eq) goto loc_83782A1C;
	// li r22,23
	ctx.r22.s64 = 23;
	// li r24,23
	ctx.r24.s64 = 23;
	// addi r20,r1,480
	ctx.r20.s64 = ctx.r1.s64 + 480;
	// b 0x83782a28
	goto loc_83782A28;
loc_83782A1C:
	// li r22,16
	ctx.r22.s64 = 16;
	// li r24,32
	ctx.r24.s64 = 32;
	// addi r20,r1,352
	ctx.r20.s64 = ctx.r1.s64 + 352;
loc_83782A28:
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83782b0c
	if (cr6.eq) goto loc_83782B0C;
	// addi r31,r25,4
	ctx.r31.s64 = ctx.r25.s64 + 4;
loc_83782A3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782A4C;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782a60
	if (cr6.eq) goto loc_83782A60;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x83782a80
	goto loc_83782A80;
loc_83782A60:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x83782A70;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782aa0
	if (cr6.eq) goto loc_83782AA0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83782A80:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x83782aa0
	if (!cr6.lt) goto loc_83782AA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x83782aa4
	if (cr6.eq) goto loc_83782AA4;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// b 0x83782ab4
	goto loc_83782AB4;
loc_83782AA0:
	// lwz r8,4(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_83782AA4:
	// ld r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83782AB4:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83782ac8
	if (!cr6.eq) goto loc_83782AC8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83782aec
	goto loc_83782AEC;
loc_83782AC8:
	// lhz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x83782ae4
	if (!cr6.eq) goto loc_83782AE4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83782ae8
	if (cr6.eq) goto loc_83782AE8;
loc_83782AE4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83782AE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83782AEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83782afc
	if (!cr6.eq) goto loc_83782AFC;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_83782AFC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, xer);
	// blt cr6,0x83782a3c
	if (cr6.lt) goto loc_83782A3C;
loc_83782B0C:
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
loc_83782B10:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782B20;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782b34
	if (cr6.eq) goto loc_83782B34;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x83782b54
	goto loc_83782B54;
loc_83782B34:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x83782B44;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782b7c
	if (cr6.eq) goto loc_83782B7C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83782B54:
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bge cr6,0x83782b7c
	if (!cr6.lt) goto loc_83782B7C;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// lwz r8,4(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x83782b80
	if (cr6.eq) goto loc_83782B80;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// b 0x83782b90
	goto loc_83782B90;
loc_83782B7C:
	// lwz r8,4(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_83782B80:
	// ld r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
loc_83782B90:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83782ba4
	if (!cr6.eq) goto loc_83782BA4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83782bc8
	goto loc_83782BC8;
loc_83782BA4:
	// lhz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x83782bc0
	if (!cr6.eq) goto loc_83782BC0;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83782bc4
	if (cr6.eq) goto loc_83782BC4;
loc_83782BC0:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83782BC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83782BC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837830a8
	if (cr6.eq) goto loc_837830A8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782BE4;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782bf8
	if (cr6.eq) goto loc_83782BF8;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x83782c18
	goto loc_83782C18;
loc_83782BF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x83782C08;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782ca4
	if (cr6.eq) goto loc_83782CA4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83782C18:
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bge cr6,0x83782ca4
	if (!cr6.lt) goto loc_83782CA4;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r19,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782C38;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782c90
	if (cr6.eq) goto loc_83782C90;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782c90
	if (cr6.eq) goto loc_83782C90;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83782C64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782c90
	if (cr6.eq) goto loc_83782C90;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83782c90
	if (cr6.lt) goto loc_83782C90;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83782c94
	if (!cr6.gt) goto loc_83782C94;
loc_83782C90:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83782C94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r27,188(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83782ca8
	if (!cr6.eq) goto loc_83782CA8;
loc_83782CA4:
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_83782CA8:
	// li r28,11
	ctx.r28.s64 = 11;
	// cmplwi cr6,r24,11
	cr6.compare<uint32_t>(ctx.r24.u32, 11, xer);
	// ble cr6,0x837830a8
	if (!cr6.gt) goto loc_837830A8;
	// addi r29,r25,48
	ctx.r29.s64 = ctx.r25.s64 + 48;
loc_83782CB8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782CC8;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782cdc
	if (cr6.eq) goto loc_83782CDC;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x83782cfc
	goto loc_83782CFC;
loc_83782CDC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x83782CEC;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782d24
	if (cr6.eq) goto loc_83782D24;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83782CFC:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x83782d24
	if (!cr6.lt) goto loc_83782D24;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83782d28
	if (cr6.eq) goto loc_83782D28;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// sth r19,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r19.u16);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// b 0x83782d34
	goto loc_83782D34;
loc_83782D24:
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_83782D28:
	// ld r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r11,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// lwz r30,260(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
loc_83782D34:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83782d48
	if (!cr6.eq) goto loc_83782D48;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83782d6c
	goto loc_83782D6C;
loc_83782D48:
	// lhz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// lhz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 256);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x83782d64
	if (!cr6.eq) goto loc_83782D64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83782d68
	if (cr6.eq) goto loc_83782D68;
loc_83782D64:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83782D68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83782D6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83782e30
	if (!cr6.eq) goto loc_83782E30;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1172
	ctx.r3.s64 = ctx.r1.s64 + 1172;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83782D8C;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x831cdcf0
	ctx.lr = 0x83782D9C;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// ld r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// bl 0x8306eeb0
	ctx.lr = 0x83782DAC;
	sub_8306EEB0(ctx, base);
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r19.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x83070638
	ctx.lr = 0x83782DC0;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782e14
	if (cr6.eq) goto loc_83782E14;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782e14
	if (cr6.eq) goto loc_83782E14;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bctrl 
	ctx.lr = 0x83782DE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782e14
	if (cr6.eq) goto loc_83782E14;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83782e14
	if (cr6.lt) goto loc_83782E14;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83782e18
	if (!cr6.gt) goto loc_83782E18;
loc_83782E14:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83782E18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782e28
	if (cr6.eq) goto loc_83782E28;
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_83782E28:
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// beq cr6,0x83782e44
	if (cr6.eq) goto loc_83782E44;
loc_83782E30:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, xer);
	// blt cr6,0x83782cb8
	if (cr6.lt) goto loc_83782CB8;
	// b 0x837830a8
	goto loc_837830A8;
loc_83782E44:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782E54;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782e68
	if (cr6.eq) goto loc_83782E68;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x83782e88
	goto loc_83782E88;
loc_83782E68:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x83782E78;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782f14
	if (cr6.eq) goto loc_83782F14;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83782E88:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x83782f14
	if (!cr6.lt) goto loc_83782F14;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r19,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r19.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782EA8;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782f00
	if (cr6.eq) goto loc_83782F00;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782f00
	if (cr6.eq) goto loc_83782F00;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83782ED4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782f00
	if (cr6.eq) goto loc_83782F00;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83782f00
	if (cr6.lt) goto loc_83782F00;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83782f04
	if (!cr6.gt) goto loc_83782F04;
loc_83782F00:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83782F04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r31,200(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83782f18
	if (!cr6.eq) goto loc_83782F18;
loc_83782F14:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_83782F18:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782F30;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782f78
	if (cr6.eq) goto loc_83782F78;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83782f78
	if (cr6.eq) goto loc_83782F78;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83782f78
	if (cr6.lt) goto loc_83782F78;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83782f78
	if (cr6.gt) goto loc_83782F78;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83782F78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83782F78:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83782F90;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83782fd8
	if (cr6.eq) goto loc_83782FD8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83782fd8
	if (cr6.eq) goto loc_83782FD8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83782fd8
	if (cr6.lt) goto loc_83782FD8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83782fd8
	if (cr6.gt) goto loc_83782FD8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83782FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83782FD8:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8306a888
	ctx.lr = 0x83782FF4;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378303c
	if (cr6.eq) goto loc_8378303C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378303c
	if (cr6.eq) goto loc_8378303C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8378303c
	if (cr6.lt) goto loc_8378303C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8378303c
	if (cr6.gt) goto loc_8378303C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8378303C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8378303C:
	// cmplw cr6,r28,r22
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r22.u32, xer);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8378305c
	if (cr6.lt) goto loc_8378305C;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
loc_8378305C:
	// bl 0x8306a888
	ctx.lr = 0x83783060;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837830a8
	if (cr6.eq) goto loc_837830A8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837830a8
	if (cr6.eq) goto loc_837830A8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837830a8
	if (cr6.lt) goto loc_837830A8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837830a8
	if (cr6.gt) goto loc_837830A8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x837830A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837830A8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,11
	cr6.compare<uint32_t>(ctx.r26.u32, 11, xer);
	// blt cr6,0x83782b10
	if (cr6.lt) goto loc_83782B10;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_837830B8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x837830C8;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837830dc
	if (cr6.eq) goto loc_837830DC;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x837830fc
	goto loc_837830FC;
loc_837830DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x837830EC;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783124
	if (cr6.eq) goto loc_83783124;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_837830FC:
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x83783124
	if (!cr6.lt) goto loc_83783124;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// lwz r8,4(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x83783128
	if (cr6.eq) goto loc_83783128;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// b 0x83783138
	goto loc_83783138;
loc_83783124:
	// lwz r8,4(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_83783128:
	// ld r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
loc_83783138:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8378314c
	if (!cr6.eq) goto loc_8378314C;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83783170
	goto loc_83783170;
loc_8378314C:
	// lhz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x83783168
	if (!cr6.eq) goto loc_83783168;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8378316c
	if (cr6.eq) goto loc_8378316C;
loc_83783168:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8378316C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83783170:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783650
	if (cr6.eq) goto loc_83783650;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x8378318C;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837831a0
	if (cr6.eq) goto loc_837831A0;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x837831c0
	goto loc_837831C0;
loc_837831A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x837831B0;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378324c
	if (cr6.eq) goto loc_8378324C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_837831C0:
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x8378324c
	if (!cr6.lt) goto loc_8378324C;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r19,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r19.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x837831E0;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783238
	if (cr6.eq) goto loc_83783238;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783238
	if (cr6.eq) goto loc_83783238;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8378320C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783238
	if (cr6.eq) goto loc_83783238;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83783238
	if (cr6.lt) goto loc_83783238;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8378323c
	if (!cr6.gt) goto loc_8378323C;
loc_83783238:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8378323C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r28,216(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83783250
	if (!cr6.eq) goto loc_83783250;
loc_8378324C:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_83783250:
	// li r29,11
	ctx.r29.s64 = 11;
	// cmplwi cr6,r24,11
	cr6.compare<uint32_t>(ctx.r24.u32, 11, xer);
	// ble cr6,0x83783650
	if (!cr6.gt) goto loc_83783650;
	// addi r31,r25,48
	ctx.r31.s64 = ctx.r25.s64 + 48;
loc_83783260:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83783270;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783284
	if (cr6.eq) goto loc_83783284;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x837832a4
	goto loc_837832A4;
loc_83783284:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x83783294;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837832cc
	if (cr6.eq) goto loc_837832CC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_837832A4:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x837832cc
	if (!cr6.lt) goto loc_837832CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837832d0
	if (cr6.eq) goto loc_837832D0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// sth r19,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r19.u16);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// b 0x837832dc
	goto loc_837832DC;
loc_837832CC:
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_837832D0:
	// ld r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_837832DC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837832f0
	if (!cr6.eq) goto loc_837832F0;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83783314
	goto loc_83783314;
loc_837832F0:
	// lhz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// lhz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8378330c
	if (!cr6.eq) goto loc_8378330C;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83783310
	if (cr6.eq) goto loc_83783310;
loc_8378330C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83783310:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83783314:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837833d8
	if (!cr6.eq) goto loc_837833D8;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1556
	ctx.r3.s64 = ctx.r1.s64 + 1556;
	// bl 0x831cdcf0
	ctx.lr = 0x83783330;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x831cdcf0
	ctx.lr = 0x83783340;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,1440
	ctx.r4.s64 = ctx.r1.s64 + 1440;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// ld r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// bl 0x8306eeb0
	ctx.lr = 0x83783350;
	sub_8306EEB0(ctx, base);
	// stw r19,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r19.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// lwzx r5,r11,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// bl 0x83070638
	ctx.lr = 0x83783368;
	sub_83070638(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837833bc
	if (cr6.eq) goto loc_837833BC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837833bc
	if (cr6.eq) goto loc_837833BC;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bctrl 
	ctx.lr = 0x83783390;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837833bc
	if (cr6.eq) goto loc_837833BC;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x837833bc
	if (cr6.lt) goto loc_837833BC;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x837833c0
	if (!cr6.gt) goto loc_837833C0;
loc_837833BC:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_837833C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837833d8
	if (cr6.eq) goto loc_837833D8;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x837833ec
	if (cr6.eq) goto loc_837833EC;
loc_837833D8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x83783260
	if (cr6.lt) goto loc_83783260;
	// b 0x83783650
	goto loc_83783650;
loc_837833EC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x837833FC;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783410
	if (cr6.eq) goto loc_83783410;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x83783430
	goto loc_83783430;
loc_83783410:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x83783420;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837834bc
	if (cr6.eq) goto loc_837834BC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83783430:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x837834bc
	if (!cr6.lt) goto loc_837834BC;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r19,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r19.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83783450;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837834a8
	if (cr6.eq) goto loc_837834A8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837834a8
	if (cr6.eq) goto loc_837834A8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8378347C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837834a8
	if (cr6.eq) goto loc_837834A8;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x837834a8
	if (cr6.lt) goto loc_837834A8;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x837834ac
	if (!cr6.gt) goto loc_837834AC;
loc_837834A8:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_837834AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r31,212(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837834c0
	if (!cr6.eq) goto loc_837834C0;
loc_837834BC:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_837834C0:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x837834D8;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783520
	if (cr6.eq) goto loc_83783520;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83783520
	if (cr6.eq) goto loc_83783520;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83783520
	if (cr6.lt) goto loc_83783520;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83783520
	if (cr6.gt) goto loc_83783520;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83783520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83783520:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83783538;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783580
	if (cr6.eq) goto loc_83783580;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83783580
	if (cr6.eq) goto loc_83783580;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83783580
	if (cr6.lt) goto loc_83783580;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83783580
	if (cr6.gt) goto loc_83783580;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83783580;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83783580:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8306a888
	ctx.lr = 0x8378359C;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837835e4
	if (cr6.eq) goto loc_837835E4;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837835e4
	if (cr6.eq) goto loc_837835E4;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837835e4
	if (cr6.lt) goto loc_837835E4;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837835e4
	if (cr6.gt) goto loc_837835E4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x837835E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837835E4:
	// cmplw cr6,r29,r22
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, xer);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x83783604
	if (cr6.lt) goto loc_83783604;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
loc_83783604:
	// bl 0x8306a888
	ctx.lr = 0x83783608;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783650
	if (cr6.eq) goto loc_83783650;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83783650
	if (cr6.eq) goto loc_83783650;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83783650
	if (cr6.lt) goto loc_83783650;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83783650
	if (cr6.gt) goto loc_83783650;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83783650;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83783650:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// blt cr6,0x837830b8
	if (cr6.lt) goto loc_837830B8;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_83783660:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83783670;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783684
	if (cr6.eq) goto loc_83783684;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x837836a4
	goto loc_837836A4;
loc_83783684:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x83783694;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837836cc
	if (cr6.eq) goto loc_837836CC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_837836A4:
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x837836cc
	if (!cr6.lt) goto loc_837836CC;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// lwz r8,4(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x837836d0
	if (cr6.eq) goto loc_837836D0;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// b 0x837836e0
	goto loc_837836E0;
loc_837836CC:
	// lwz r8,4(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_837836D0:
	// ld r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
loc_837836E0:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837836f4
	if (!cr6.eq) goto loc_837836F4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83783718
	goto loc_83783718;
loc_837836F4:
	// lhz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x83783710
	if (!cr6.eq) goto loc_83783710;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83783714
	if (cr6.eq) goto loc_83783714;
loc_83783710:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83783714:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83783718:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783bf8
	if (cr6.eq) goto loc_83783BF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83783734;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783748
	if (cr6.eq) goto loc_83783748;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x83783768
	goto loc_83783768;
loc_83783748:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x83783758;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837837f4
	if (cr6.eq) goto loc_837837F4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83783768:
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x837837f4
	if (!cr6.lt) goto loc_837837F4;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r19,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r19.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83783788;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837837e0
	if (cr6.eq) goto loc_837837E0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837837e0
	if (cr6.eq) goto loc_837837E0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x837837B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837837e0
	if (cr6.eq) goto loc_837837E0;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x837837e0
	if (cr6.lt) goto loc_837837E0;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x837837e4
	if (!cr6.gt) goto loc_837837E4;
loc_837837E0:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_837837E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r28,228(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837837f8
	if (!cr6.eq) goto loc_837837F8;
loc_837837F4:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_837837F8:
	// li r29,11
	ctx.r29.s64 = 11;
	// cmplwi cr6,r24,11
	cr6.compare<uint32_t>(ctx.r24.u32, 11, xer);
	// ble cr6,0x83783bf8
	if (!cr6.gt) goto loc_83783BF8;
	// addi r31,r25,48
	ctx.r31.s64 = ctx.r25.s64 + 48;
loc_83783808:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83783818;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378382c
	if (cr6.eq) goto loc_8378382C;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x8378384c
	goto loc_8378384C;
loc_8378382C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x8378383C;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783874
	if (cr6.eq) goto loc_83783874;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8378384C:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83783874
	if (!cr6.lt) goto loc_83783874;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83783878
	if (cr6.eq) goto loc_83783878;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// sth r19,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r19.u16);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x83783884
	goto loc_83783884;
loc_83783874:
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_83783878:
	// ld r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lwz r30,148(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_83783884:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83783898
	if (!cr6.eq) goto loc_83783898;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x837838bc
	goto loc_837838BC;
loc_83783898:
	// lhz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// lhz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x837838b4
	if (!cr6.eq) goto loc_837838B4;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837838b8
	if (cr6.eq) goto loc_837838B8;
loc_837838B4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_837838B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837838BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83783980
	if (!cr6.eq) goto loc_83783980;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1364
	ctx.r3.s64 = ctx.r1.s64 + 1364;
	// bl 0x831cdcf0
	ctx.lr = 0x837838D8;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x831cdcf0
	ctx.lr = 0x837838E8;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,1248
	ctx.r4.s64 = ctx.r1.s64 + 1248;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x8306eeb0
	ctx.lr = 0x837838F8;
	sub_8306EEB0(ctx, base);
	// stw r19,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r19.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// lwzx r5,r11,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// bl 0x83070638
	ctx.lr = 0x83783910;
	sub_83070638(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83783964
	if (cr6.eq) goto loc_83783964;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783964
	if (cr6.eq) goto loc_83783964;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bctrl 
	ctx.lr = 0x83783938;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783964
	if (cr6.eq) goto loc_83783964;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83783964
	if (cr6.lt) goto loc_83783964;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83783968
	if (!cr6.gt) goto loc_83783968;
loc_83783964:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83783968:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783980
	if (cr6.eq) goto loc_83783980;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83783994
	if (cr6.eq) goto loc_83783994;
loc_83783980:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x83783808
	if (cr6.lt) goto loc_83783808;
	// b 0x83783bf8
	goto loc_83783BF8;
loc_83783994:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x837839A4;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837839b8
	if (cr6.eq) goto loc_837839B8;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x837839d8
	goto loc_837839D8;
loc_837839B8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83572958
	ctx.lr = 0x837839C8;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783a64
	if (cr6.eq) goto loc_83783A64;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_837839D8:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83783a64
	if (!cr6.lt) goto loc_83783A64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r19,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r19.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x837839F8;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783a50
	if (cr6.eq) goto loc_83783A50;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783a50
	if (cr6.eq) goto loc_83783A50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83783A24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783a50
	if (cr6.eq) goto loc_83783A50;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83783a50
	if (cr6.lt) goto loc_83783A50;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83783a54
	if (!cr6.gt) goto loc_83783A54;
loc_83783A50:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83783A54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83783a68
	if (!cr6.eq) goto loc_83783A68;
loc_83783A64:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_83783A68:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83783A80;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783ac8
	if (cr6.eq) goto loc_83783AC8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83783ac8
	if (cr6.eq) goto loc_83783AC8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83783ac8
	if (cr6.lt) goto loc_83783AC8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83783ac8
	if (cr6.gt) goto loc_83783AC8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83783AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83783AC8:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306a888
	ctx.lr = 0x83783AE0;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783b28
	if (cr6.eq) goto loc_83783B28;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83783b28
	if (cr6.eq) goto loc_83783B28;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83783b28
	if (cr6.lt) goto loc_83783B28;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83783b28
	if (cr6.gt) goto loc_83783B28;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83783B28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83783B28:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8306a888
	ctx.lr = 0x83783B44;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783b8c
	if (cr6.eq) goto loc_83783B8C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83783b8c
	if (cr6.eq) goto loc_83783B8C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83783b8c
	if (cr6.lt) goto loc_83783B8C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83783b8c
	if (cr6.gt) goto loc_83783B8C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83783B8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83783B8C:
	// cmplw cr6,r29,r22
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, xer);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x83783bac
	if (cr6.lt) goto loc_83783BAC;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
loc_83783BAC:
	// bl 0x8306a888
	ctx.lr = 0x83783BB0;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783bf8
	if (cr6.eq) goto loc_83783BF8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83783bf8
	if (cr6.eq) goto loc_83783BF8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83783bf8
	if (cr6.lt) goto loc_83783BF8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83783bf8
	if (cr6.gt) goto loc_83783BF8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83783BF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83783BF8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// blt cr6,0x83783660
	if (cr6.lt) goto loc_83783660;
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, xer);
	// bgt cr6,0x83783c1c
	if (cr6.gt) goto loc_83783C1C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8376bde0
	ctx.lr = 0x83783C18;
	sub_8376BDE0(ctx, base);
	// b 0x83783c28
	goto loc_83783C28;
loc_83783C1C:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x835977d8
	ctx.lr = 0x83783C28;
	sub_835977D8(ctx, base);
loc_83783C28:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// cmplw cr6,r17,r16
	cr6.compare<uint32_t>(ctx.r17.u32, ctx.r16.u32, xer);
	// rlwinm r10,r17,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x837829cc
	if (cr6.lt) goto loc_837829CC;
	// lwz r20,480(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r21,484(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r22,356(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r23,352(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplw cr6,r20,r21
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r21.u32, xer);
	// bne cr6,0x83783cac
	if (!cr6.eq) goto loc_83783CAC;
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// bne cr6,0x83783cac
	if (!cr6.eq) goto loc_83783CAC;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83783c70
	if (cr6.eq) goto loc_83783C70;
	// stw r14,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r14.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x825952b8
	ctx.lr = 0x83783C70;
	sub_825952B8(ctx, base);
loc_83783C70:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x83783c88
	if (cr6.eq) goto loc_83783C88;
	// stw r14,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r14.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x825952b8
	ctx.lr = 0x83783C88;
	sub_825952B8(ctx, base);
loc_83783C88:
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83783ca0
	if (cr6.eq) goto loc_83783CA0;
	// stw r14,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r14.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x825952b8
	ctx.lr = 0x83783CA0;
	sub_825952B8(ctx, base);
loc_83783CA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3728
	ctx.r1.s64 = ctx.r1.s64 + 3728;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83783CAC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// li r14,2
	ctx.r14.s64 = 2;
	// ori r24,r11,65535
	ctx.r24.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r20,r21
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r21.u32, xer);
	// li r16,1
	ctx.r16.s64 = 1;
	// beq cr6,0x83784004
	if (cr6.eq) goto loc_83784004;
loc_83783CC8:
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r31,r9,14
	ctx.r31.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x83783ce8
	if (!cr6.gt) goto loc_83783CE8;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_83783CE8:
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83783CFC;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1984
	ctx.r4.s64 = ctx.r1.s64 + 1984;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8306e988
	ctx.lr = 0x83783D0C;
	sub_8306E988(ctx, base);
	// stw r19,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r19.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x8306c7a0
	ctx.lr = 0x83783D20;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783d74
	if (cr6.eq) goto loc_83783D74;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783d74
	if (cr6.eq) goto loc_83783D74;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bctrl 
	ctx.lr = 0x83783D48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783d74
	if (cr6.eq) goto loc_83783D74;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83783d74
	if (cr6.lt) goto loc_83783D74;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// ble cr6,0x83783d78
	if (!cr6.gt) goto loc_83783D78;
loc_83783D74:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83783D78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783d88
	if (cr6.eq) goto loc_83783D88;
	// lwz r26,204(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_83783D88:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83783DA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83783ef4
	if (cr6.eq) goto loc_83783EF4;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x83783DC8;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83783ef4
	if (cr6.eq) goto loc_83783EF4;
loc_83783DD0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r19,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r19.u16);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// ld r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a94108
	ctx.lr = 0x83783DEC;
	sub_82A94108(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83783ed4
	if (!cr6.eq) goto loc_83783ED4;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83783E0C;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x831cdcf0
	ctx.lr = 0x83783E1C;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8306eeb0
	ctx.lr = 0x83783E2C;
	sub_8306EEB0(ctx, base);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x83070638
	ctx.lr = 0x83783E40;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783e94
	if (cr6.eq) goto loc_83783E94;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783e94
	if (cr6.eq) goto loc_83783E94;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bctrl 
	ctx.lr = 0x83783E68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783e94
	if (cr6.eq) goto loc_83783E94;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83783e94
	if (cr6.lt) goto loc_83783E94;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// ble cr6,0x83783e98
	if (!cr6.gt) goto loc_83783E98;
loc_83783E94:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83783E98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783ea8
	if (cr6.eq) goto loc_83783EA8;
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_83783EA8:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bne cr6,0x83783ed4
	if (!cr6.eq) goto loc_83783ED4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8376b848
	ctx.lr = 0x83783EBC;
	sub_8376B848(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83783ed4
	if (cr6.eq) goto loc_83783ED4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83546fd8
	ctx.lr = 0x83783ED4;
	sub_83546FD8(ctx, base);
loc_83783ED4:
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,188
	ctx.r29.s64 = ctx.r29.s64 + 188;
	// bl 0x8306e2a0
	ctx.lr = 0x83783EEC;
	sub_8306E2A0(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// blt cr6,0x83783dd0
	if (cr6.lt) goto loc_83783DD0;
loc_83783EF4:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83782008
	ctx.lr = 0x83783F0C;
	sub_83782008(ctx, base);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83782008
	ctx.lr = 0x83783F24;
	sub_83782008(ctx, base);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83782008
	ctx.lr = 0x83783F3C;
	sub_83782008(ctx, base);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83782008
	ctx.lr = 0x83783F54;
	sub_83782008(ctx, base);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83782008
	ctx.lr = 0x83783F6C;
	sub_83782008(ctx, base);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83782008
	ctx.lr = 0x83783F84;
	sub_83782008(ctx, base);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83782008
	ctx.lr = 0x83783F9C;
	sub_83782008(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a68958
	ctx.lr = 0x83783FA4;
	sub_82A68958(ctx, base);
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// blt cr6,0x83783fcc
	if (cr6.lt) goto loc_83783FCC;
	// addi r4,r25,4
	ctx.r4.s64 = ctx.r25.s64 + 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subf r11,r4,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r4.s64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x83783FC4;
	sub_831CE420(ctx, base);
	// addi r21,r21,-4
	ctx.r21.s64 = ctx.r21.s64 + -4;
	// b 0x83783fd0
	goto loc_83783FD0;
loc_83783FCC:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_83783FD0:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83783fe8
	if (cr6.eq) goto loc_83783FE8;
	// stw r14,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r14.u32);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x825952b8
	ctx.lr = 0x83783FE8;
	sub_825952B8(ctx, base);
loc_83783FE8:
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// cmplw cr6,r25,r21
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r21.u32, xer);
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// bne cr6,0x83783cc8
	if (!cr6.eq) goto loc_83783CC8;
	// cmplw cr6,r20,r21
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r21.u32, xer);
	// bne cr6,0x83784060
	if (!cr6.eq) goto loc_83784060;
loc_83784004:
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// bne cr6,0x83784068
	if (!cr6.eq) goto loc_83784068;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83784024
	if (cr6.eq) goto loc_83784024;
	// stw r14,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r14.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x825952b8
	ctx.lr = 0x83784024;
	sub_825952B8(ctx, base);
loc_83784024:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8378403c
	if (cr6.eq) goto loc_8378403C;
	// stw r14,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r14.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x825952b8
	ctx.lr = 0x8378403C;
	sub_825952B8(ctx, base);
loc_8378403C:
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83784054
	if (cr6.eq) goto loc_83784054;
	// stw r14,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r14.u32);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x825952b8
	ctx.lr = 0x83784054;
	sub_825952B8(ctx, base);
loc_83784054:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3728
	ctx.r1.s64 = ctx.r1.s64 + 3728;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83784060:
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// beq cr6,0x837842f4
	if (cr6.eq) goto loc_837842F4;
loc_83784068:
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// stw r19,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r19.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r19,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r19.u32);
	// lwz r25,3756(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3756);
	// lwz r17,3748(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3748);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x83782318
	ctx.lr = 0x83784090;
	sub_83782318(ctx, base);
	// subf r11,r23,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r23.s64;
	// srawi r31,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83784214
	if (cr6.eq) goto loc_83784214;
	// addi r29,r23,-4
	ctx.r29.s64 = ctx.r23.s64 + -4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_837840A8:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x83782008
	ctx.lr = 0x837840C0;
	sub_83782008(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x837840a8
	if (!cr0.eq) goto loc_837840A8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83784214
	if (cr6.eq) goto loc_83784214;
	// addi r29,r23,-4
	ctx.r29.s64 = ctx.r23.s64 + -4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_837840D8:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x83782008
	ctx.lr = 0x837840F0;
	sub_83782008(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x837840d8
	if (!cr0.eq) goto loc_837840D8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83784214
	if (cr6.eq) goto loc_83784214;
	// addi r29,r23,-4
	ctx.r29.s64 = ctx.r23.s64 + -4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83784108:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x83782008
	ctx.lr = 0x83784120;
	sub_83782008(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83784108
	if (!cr0.eq) goto loc_83784108;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83784214
	if (cr6.eq) goto loc_83784214;
	// addi r29,r23,-4
	ctx.r29.s64 = ctx.r23.s64 + -4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83784138:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x83782008
	ctx.lr = 0x83784150;
	sub_83782008(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83784138
	if (!cr0.eq) goto loc_83784138;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83784214
	if (cr6.eq) goto loc_83784214;
	// addi r29,r23,-4
	ctx.r29.s64 = ctx.r23.s64 + -4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83784168:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x83782008
	ctx.lr = 0x83784180;
	sub_83782008(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83784168
	if (!cr0.eq) goto loc_83784168;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83784214
	if (cr6.eq) goto loc_83784214;
	// addi r29,r23,-4
	ctx.r29.s64 = ctx.r23.s64 + -4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83784198:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x83782008
	ctx.lr = 0x837841B0;
	sub_83782008(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83784198
	if (!cr0.eq) goto loc_83784198;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83784214
	if (cr6.eq) goto loc_83784214;
	// addi r29,r23,-4
	ctx.r29.s64 = ctx.r23.s64 + -4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_837841C8:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x83782008
	ctx.lr = 0x837841E0;
	sub_83782008(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x837841c8
	if (!cr0.eq) goto loc_837841C8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83784214
	if (cr6.eq) goto loc_83784214;
	// addi r30,r23,-4
	ctx.r30.s64 = ctx.r23.s64 + -4;
loc_837841F4:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x83782008
	ctx.lr = 0x8378420C;
	sub_83782008(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x837841f4
	if (!cr0.eq) goto loc_837841F4;
loc_83784214:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// beq cr6,0x8378425c
	if (cr6.eq) goto loc_8378425C;
loc_83784220:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a68958
	ctx.lr = 0x83784228;
	sub_82A68958(ctx, base);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x83784250
	if (cr6.lt) goto loc_83784250;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r4,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r4.s64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x83784248;
	sub_831CE420(ctx, base);
	// addi r22,r22,-4
	ctx.r22.s64 = ctx.r22.s64 + -4;
	// b 0x83784254
	goto loc_83784254;
loc_83784250:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_83784254:
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, xer);
	// bne cr6,0x83784220
	if (!cr6.eq) goto loc_83784220;
loc_8378425C:
	// cmplw cr6,r20,r21
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r21.u32, xer);
	// bne cr6,0x837842d8
	if (!cr6.eq) goto loc_837842D8;
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// bne cr6,0x837842d8
	if (!cr6.eq) goto loc_837842D8;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83784284
	if (cr6.eq) goto loc_83784284;
	// stw r14,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r14.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x825952b8
	ctx.lr = 0x83784284;
	sub_825952B8(ctx, base);
loc_83784284:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x8378429c
	if (cr6.eq) goto loc_8378429C;
	// stw r14,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r14.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// bl 0x825952b8
	ctx.lr = 0x8378429C;
	sub_825952B8(ctx, base);
loc_8378429C:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x837842b4
	if (cr6.eq) goto loc_837842B4;
	// stw r14,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r14.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// bl 0x825952b8
	ctx.lr = 0x837842B4;
	sub_825952B8(ctx, base);
loc_837842B4:
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837842cc
	if (cr6.eq) goto loc_837842CC;
	// stw r14,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r14.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x825952b8
	ctx.lr = 0x837842CC;
	sub_825952B8(ctx, base);
loc_837842CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3728
	ctx.r1.s64 = ctx.r1.s64 + 3728;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_837842D8:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837842fc
	if (cr6.eq) goto loc_837842FC;
	// stw r14,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r14.u32);
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// bl 0x825952b8
	ctx.lr = 0x837842F0;
	sub_825952B8(ctx, base);
	// b 0x837842fc
	goto loc_837842FC;
loc_837842F4:
	// lwz r17,3748(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3748);
	// lwz r25,3756(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3756);
loc_837842FC:
	// cmplw cr6,r20,r21
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r21.u32, xer);
	// beq cr6,0x83784828
	if (cr6.eq) goto loc_83784828;
	// stw r19,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r19.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r14,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r14.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// bl 0x82595718
	ctx.lr = 0x8378431C;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stb r16,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r16.u8);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stb r16,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r16.u8);
	// lwz r9,0(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8378435C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837843fc
	if (cr6.eq) goto loc_837843FC;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8378437C;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837843fc
	if (cr6.eq) goto loc_837843FC;
	// addi r30,r31,-188
	ctx.r30.s64 = ctx.r31.s64 + -188;
loc_83784388:
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8378439C;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837843dc
	if (cr6.eq) goto loc_837843DC;
loc_837843A4:
	// lwzu r11,188(r30)
	ea = 188 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82f3de08
	ctx.lr = 0x837843B8;
	sub_82F3DE08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r19.u32);
	// bl 0x8306e2a0
	ctx.lr = 0x837843D4;
	sub_8306E2A0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x837843a4
	if (cr6.lt) goto loc_837843A4;
loc_837843DC:
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,188
	ctx.r30.s64 = ctx.r30.s64 + 188;
	// bl 0x8306e2a0
	ctx.lr = 0x837843F4;
	sub_8306E2A0(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x83784388
	if (cr6.lt) goto loc_83784388;
loc_837843FC:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r19,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r19.u32);
	// stw r19,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r19.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r19,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r19.u32);
	// beq cr6,0x837845ac
	if (cr6.eq) goto loc_837845AC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83784548
	if (cr6.eq) goto loc_83784548;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_83784424:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8378453c
	if (cr6.eq) goto loc_8378453C;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// clrlwi r3,r10,14
	ctx.r3.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x83784448
	if (!cr6.gt) goto loc_83784448;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83784448:
	// bl 0x8319fea0
	ctx.lr = 0x8378444C;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378453c
	if (cr6.eq) goto loc_8378453C;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
loc_83784460:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8306a888
	ctx.lr = 0x83784470;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83784484
	if (cr6.eq) goto loc_83784484;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x837844a4
	goto loc_837844A4;
loc_83784484:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83572958
	ctx.lr = 0x83784494;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837844c8
	if (cr6.eq) goto loc_837844C8;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_837844A4:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x837844c8
	if (!cr6.lt) goto loc_837844C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837844cc
	if (cr6.eq) goto loc_837844CC;
	// sth r19,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r19.u16);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x837844d8
	goto loc_837844D8;
loc_837844C8:
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_837844CC:
	// ld r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_837844D8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837844ec
	if (!cr6.eq) goto loc_837844EC;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83784510
	goto loc_83784510;
loc_837844EC:
	// lhz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83784508
	if (!cr6.eq) goto loc_83784508;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// beq cr6,0x8378450c
	if (cr6.eq) goto loc_8378450C;
loc_83784508:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8378450C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83784510:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8378452c
	if (!cr6.eq) goto loc_8378452C;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x833e3748
	ctx.lr = 0x83784528;
	sub_833E3748(ctx, base);
	// stw r16,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r16.u32);
loc_8378452C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,23
	cr6.compare<uint32_t>(ctx.r30.u32, 23, xer);
	// blt cr6,0x83784460
	if (cr6.lt) goto loc_83784460;
loc_8378453C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,164
	ctx.r29.s64 = ctx.r29.s64 + 164;
	// bne 0x83784424
	if (!cr0.eq) goto loc_83784424;
loc_83784548:
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837845ac
	if (cr6.eq) goto loc_837845AC;
loc_8378455C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x83784594
	if (cr6.eq) goto loc_83784594;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// sth r19,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r19.u16);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// ld r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x8376b848
	ctx.lr = 0x8378457C;
	sub_8376B848(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83784594
	if (cr6.eq) goto loc_83784594;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x83546fd8
	ctx.lr = 0x83784594;
	sub_83546FD8(ctx, base);
loc_83784594:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x8378459C;
	sub_8330EE50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8378455c
	if (!cr6.eq) goto loc_8378455C;
loc_837845AC:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_837845B0:
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r31,r9,14
	ctx.r31.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x837845d0
	if (!cr6.gt) goto loc_837845D0;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_837845D0:
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x837845E4;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,2464
	ctx.r4.s64 = ctx.r1.s64 + 2464;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8306e988
	ctx.lr = 0x837845F4;
	sub_8306E988(ctx, base);
	// stw r19,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r19.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// bl 0x8306c7a0
	ctx.lr = 0x83784608;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378465c
	if (cr6.eq) goto loc_8378465C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378465c
	if (cr6.eq) goto loc_8378465C;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// bctrl 
	ctx.lr = 0x83784630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378465c
	if (cr6.eq) goto loc_8378465C;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8378465c
	if (cr6.lt) goto loc_8378465C;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// ble cr6,0x83784660
	if (!cr6.gt) goto loc_83784660;
loc_8378465C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83784660:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83784670
	if (cr6.eq) goto loc_83784670;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_83784670:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83782008
	ctx.lr = 0x83784688;
	sub_83782008(ctx, base);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
loc_83784690:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306a888
	ctx.lr = 0x837846A0;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837846b4
	if (cr6.eq) goto loc_837846B4;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x837846d4
	goto loc_837846D4;
loc_837846B4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83572958
	ctx.lr = 0x837846C4;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837846fc
	if (cr6.eq) goto loc_837846FC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_837846D4:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x837846fc
	if (!cr6.lt) goto loc_837846FC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83784700
	if (cr6.eq) goto loc_83784700;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// sth r19,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r19.u16);
	// ld r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// b 0x8378470c
	goto loc_8378470C;
loc_837846FC:
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
loc_83784700:
	// ld r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r31.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_8378470C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83784720
	if (!cr6.eq) goto loc_83784720;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83784744
	goto loc_83784744;
loc_83784720:
	// lhz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// lhz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x8378473c
	if (!cr6.eq) goto loc_8378473C;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// beq cr6,0x83784740
	if (cr6.eq) goto loc_83784740;
loc_8378473C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83784740:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83784744:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837847a0
	if (!cr6.eq) goto loc_837847A0;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,980
	ctx.r3.s64 = ctx.r1.s64 + 980;
	// bl 0x831cdcf0
	ctx.lr = 0x83784760;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x831cdcf0
	ctx.lr = 0x83784770;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8306eeb0
	ctx.lr = 0x83784780;
	sub_8306EEB0(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82a78580
	ctx.lr = 0x83784790;
	sub_82A78580(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8306ed00
	ctx.lr = 0x837847A0;
	sub_8306ED00(ctx, base);
loc_837847A0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,23
	cr6.compare<uint32_t>(ctx.r29.u32, 23, xer);
	// blt cr6,0x83784690
	if (cr6.lt) goto loc_83784690;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a68958
	ctx.lr = 0x837847B8;
	sub_82A68958(ctx, base);
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// blt cr6,0x837847e0
	if (cr6.lt) goto loc_837847E0;
	// addi r4,r26,4
	ctx.r4.s64 = ctx.r26.s64 + 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subf r11,r4,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r4.s64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x837847D8;
	sub_831CE420(ctx, base);
	// addi r21,r21,-4
	ctx.r21.s64 = ctx.r21.s64 + -4;
	// b 0x837847e4
	goto loc_837847E4;
loc_837847E0:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_837847E4:
	// cmplw cr6,r26,r21
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, xer);
	// bne cr6,0x837845b0
	if (!cr6.eq) goto loc_837845B0;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83784804
	if (cr6.eq) goto loc_83784804;
	// stw r14,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r14.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x825952b8
	ctx.lr = 0x83784804;
	sub_825952B8(ctx, base);
loc_83784804:
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x83784818;
	sub_82D0E798(ctx, base);
	// stw r14,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r14.u32);
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x825952b8
	ctx.lr = 0x83784828;
	sub_825952B8(ctx, base);
loc_83784828:
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// beq cr6,0x837849d4
	if (cr6.eq) goto loc_837849D4;
	// bl 0x831156e8
	ctx.lr = 0x83784834;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837849d4
	if (cr6.eq) goto loc_837849D4;
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83782318
	ctx.lr = 0x8378485C;
	sub_83782318(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83784860;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83784960
	if (cr6.eq) goto loc_83784960;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_83784874:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83784954
	if (cr6.eq) goto loc_83784954;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a68958
	ctx.lr = 0x83784884;
	sub_82A68958(ctx, base);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// ble cr6,0x83784954
	if (!cr6.gt) goto loc_83784954;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// clrlwi r30,r10,14
	ctx.r30.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x837848a8
	if (!cr6.gt) goto loc_837848A8;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_837848A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c148
	ctx.lr = 0x837848B4;
	sub_8311C148(ctx, base);
	// clrlwi r11,r30,14
	ctx.r11.u64 = ctx.r30.u32 & 0x3FFFF;
	// cmplwi cr6,r11,140
	cr6.compare<uint32_t>(ctx.r11.u32, 140, xer);
	// beq cr6,0x83784954
	if (cr6.eq) goto loc_83784954;
	// cmplwi cr6,r11,1416
	cr6.compare<uint32_t>(ctx.r11.u32, 1416, xer);
	// beq cr6,0x83784954
	if (cr6.eq) goto loc_83784954;
	// cmplwi cr6,r11,2469
	cr6.compare<uint32_t>(ctx.r11.u32, 2469, xer);
	// beq cr6,0x83784954
	if (cr6.eq) goto loc_83784954;
	// cmplwi cr6,r11,2696
	cr6.compare<uint32_t>(ctx.r11.u32, 2696, xer);
	// beq cr6,0x83784954
	if (cr6.eq) goto loc_83784954;
	// cmplwi cr6,r11,1386
	cr6.compare<uint32_t>(ctx.r11.u32, 1386, xer);
	// beq cr6,0x83784954
	if (cr6.eq) goto loc_83784954;
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83784954
	if (!cr6.eq) goto loc_83784954;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a68958
	ctx.lr = 0x837848F8;
	sub_82A68958(ctx, base);
	// stw r19,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r19.u32);
	// addi r30,r3,-1
	ctx.r30.s64 = ctx.r3.s64 + -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a687b8
	ctx.lr = 0x83784914;
	sub_82A687B8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// sth r19,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r19.u16);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x83546fd8
	ctx.lr = 0x8378492C;
	sub_83546FD8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a7de40
	ctx.lr = 0x83784940;
	sub_82A7DE40(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a7de40
	ctx.lr = 0x83784954;
	sub_82A7DE40(ctx, base);
loc_83784954:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,164
	ctx.r31.s64 = ctx.r31.s64 + 164;
	// bne 0x83784874
	if (!cr0.eq) goto loc_83784874;
loc_83784960:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_83784964:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x83782008
	ctx.lr = 0x83784980;
	sub_83782008(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a68958
	ctx.lr = 0x83784988;
	sub_82A68958(ctx, base);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x837849b0
	if (cr6.lt) goto loc_837849B0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r4,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r4.s64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x837849A8;
	sub_831CE420(ctx, base);
	// addi r22,r22,-4
	ctx.r22.s64 = ctx.r22.s64 + -4;
	// b 0x837849b4
	goto loc_837849B4;
loc_837849B0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_837849B4:
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, xer);
	// bne cr6,0x83784964
	if (!cr6.eq) goto loc_83784964;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837849d4
	if (cr6.eq) goto loc_837849D4;
	// stw r14,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r14.u32);
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x825952b8
	ctx.lr = 0x837849D4;
	sub_825952B8(ctx, base);
loc_837849D4:
	// cmplw cr6,r20,r21
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r21.u32, xer);
	// bne cr6,0x83784a38
	if (!cr6.eq) goto loc_83784A38;
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// bne cr6,0x83784a38
	if (!cr6.eq) goto loc_83784A38;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x837849fc
	if (cr6.eq) goto loc_837849FC;
	// stw r14,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r14.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// bl 0x825952b8
	ctx.lr = 0x837849FC;
	sub_825952B8(ctx, base);
loc_837849FC:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x83784a14
	if (cr6.eq) goto loc_83784A14;
	// stw r14,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r14.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// bl 0x825952b8
	ctx.lr = 0x83784A14;
	sub_825952B8(ctx, base);
loc_83784A14:
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83784a2c
	if (cr6.eq) goto loc_83784A2C;
	// stw r14,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r14.u32);
	// addi r3,r1,444
	ctx.r3.s64 = ctx.r1.s64 + 444;
	// bl 0x825952b8
	ctx.lr = 0x83784A2C;
	sub_825952B8(ctx, base);
loc_83784A2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3728
	ctx.r1.s64 = ctx.r1.s64 + 3728;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83784A38:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83784a50
	if (cr6.eq) goto loc_83784A50;
	// stw r14,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r14.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// bl 0x825952b8
	ctx.lr = 0x83784A50;
	sub_825952B8(ctx, base);
loc_83784A50:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x83784a68
	if (cr6.eq) goto loc_83784A68;
	// stw r14,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r14.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,460
	ctx.r3.s64 = ctx.r1.s64 + 460;
	// bl 0x825952b8
	ctx.lr = 0x83784A68;
	sub_825952B8(ctx, base);
loc_83784A68:
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83784a80
	if (cr6.eq) goto loc_83784A80;
	// stw r14,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r14.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x825952b8
	ctx.lr = 0x83784A80;
	sub_825952B8(ctx, base);
loc_83784A80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3728
	ctx.r1.s64 = ctx.r1.s64 + 3728;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83784A8C"))) PPC_WEAK_FUNC(sub_83784A8C);
PPC_FUNC_IMPL(__imp__sub_83784A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83784A90"))) PPC_WEAK_FUNC(sub_83784A90);
PPC_FUNC_IMPL(__imp__sub_83784A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83784A98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83784abc
	if (!cr6.eq) goto loc_83784ABC;
loc_83784AB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83784ABC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83784ab0
	if (cr6.eq) goto loc_83784AB0;
	// bl 0x83763ef8
	ctx.lr = 0x83784AC8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83784ab0
	if (cr6.eq) goto loc_83784AB0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83784ae0
	if (cr6.eq) goto loc_83784AE0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x83784ae8
	goto loc_83784AE8;
loc_83784AE0:
	// bl 0x83763ef8
	ctx.lr = 0x83784AE4;
	sub_83763EF8(ctx, base);
	// lwz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
loc_83784AE8:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83784ab0
	if (cr6.eq) goto loc_83784AB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837825f0
	ctx.lr = 0x83784AFC;
	sub_837825F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83784B10"))) PPC_WEAK_FUNC(sub_83784B10);
PPC_FUNC_IMPL(__imp__sub_83784B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83784B18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83784bf0
	if (cr6.eq) goto loc_83784BF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83784bf0
	if (cr6.eq) goto loc_83784BF0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9cb98
	ctx.lr = 0x83784B48;
	sub_82A9CB98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r29,-31769
	ctx.r29.s64 = -2082013184;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83784b80
	if (cr6.eq) goto loc_83784B80;
loc_83784B5C:
	// lwz r11,-30576(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30576);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9bba8
	ctx.lr = 0x83784B74;
	sub_82A9BBA8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x83784b5c
	if (cr6.lt) goto loc_83784B5C;
loc_83784B80:
	// cmplwi cr6,r25,82
	cr6.compare<uint32_t>(ctx.r25.u32, 82, xer);
	// bge cr6,0x83784bf0
	if (!cr6.lt) goto loc_83784BF0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83132cf8
	ctx.lr = 0x83784B94;
	sub_83132CF8(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83784bf0
	if (cr6.eq) goto loc_83784BF0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83784BA4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83132cb8
	ctx.lr = 0x83784BB4;
	sub_83132CB8(ctx, base);
	// lwz r11,-30576(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30576);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x83784bd8
	if (cr6.eq) goto loc_83784BD8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9bba8
	ctx.lr = 0x83784BD8;
	sub_82A9BBA8(ctx, base);
loc_83784BD8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x83784ba4
	if (cr6.lt) goto loc_83784BA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83784BF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83784BFC"))) PPC_WEAK_FUNC(sub_83784BFC);
PPC_FUNC_IMPL(__imp__sub_83784BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83784C00"))) PPC_WEAK_FUNC(sub_83784C00);
PPC_FUNC_IMPL(__imp__sub_83784C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83784C08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83784df4
	if (cr6.eq) goto loc_83784DF4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83784df4
	if (cr6.eq) goto loc_83784DF4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83784C28:
	// cmplwi cr6,r29,22
	cr6.compare<uint32_t>(ctx.r29.u32, 22, xer);
	// bgt cr6,0x83784ddc
	if (cr6.gt) goto loc_83784DDC;
	// lis r12,-31880
	ctx.r12.s64 = -2089287680;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19528
	ctx.r12.s64 = ctx.r12.s64 + 19528;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_83784CA4;
	case 1:
		goto loc_83784CB0;
	case 2:
		goto loc_83784CBC;
	case 3:
		goto loc_83784CC8;
	case 4:
		goto loc_83784CD4;
	case 5:
		goto loc_83784CE0;
	case 6:
		goto loc_83784CEC;
	case 7:
		goto loc_83784CF8;
	case 8:
		goto loc_83784D04;
	case 9:
		goto loc_83784D10;
	case 10:
		goto loc_83784D1C;
	case 11:
		goto loc_83784D28;
	case 12:
		goto loc_83784D34;
	case 13:
		goto loc_83784DDC;
	case 14:
		goto loc_83784D40;
	case 15:
		goto loc_83784D4C;
	case 16:
		goto loc_83784D58;
	case 17:
		goto loc_83784D64;
	case 18:
		goto loc_83784D70;
	case 19:
		goto loc_83784D90;
	case 20:
		goto loc_83784DB0;
	case 21:
		goto loc_83784DBC;
	case 22:
		goto loc_83784DC8;
	default:
		return;
	}
	// lwz r27,19620(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19620);
	// lwz r27,19632(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19632);
	// lwz r27,19644(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19644);
	// lwz r27,19656(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19656);
	// lwz r27,19668(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19668);
	// lwz r27,19680(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19680);
	// lwz r27,19692(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19692);
	// lwz r27,19704(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19704);
	// lwz r27,19716(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19716);
	// lwz r27,19728(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19728);
	// lwz r27,19740(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19740);
	// lwz r27,19752(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19752);
	// lwz r27,19764(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19764);
	// lwz r27,19932(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19932);
	// lwz r27,19776(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19776);
	// lwz r27,19788(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19788);
	// lwz r27,19800(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19800);
	// lwz r27,19812(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19812);
	// lwz r27,19824(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19824);
	// lwz r27,19856(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19856);
	// lwz r27,19888(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19888);
	// lwz r27,19900(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19900);
	// lwz r27,19912(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19912);
loc_83784CA4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784CB0:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,48
	ctx.r5.s64 = 48;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784CBC:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784CC8:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,50
	ctx.r5.s64 = 50;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784CD4:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784CE0:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,51
	ctx.r5.s64 = 51;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784CEC:
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,10
	ctx.r5.s64 = 10;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784CF8:
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,11
	ctx.r5.s64 = 11;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784D04:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,49
	ctx.r5.s64 = 49;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784D10:
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784D1C:
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,13
	ctx.r5.s64 = 13;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784D28:
	// li r6,11
	ctx.r6.s64 = 11;
	// li r5,14
	ctx.r5.s64 = 14;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784D34:
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784D40:
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,16
	ctx.r5.s64 = 16;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784D4C:
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,17
	ctx.r5.s64 = 17;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784D58:
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,18
	ctx.r5.s64 = 18;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784D64:
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,30
	ctx.r5.s64 = 30;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784D70:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83572958
	ctx.lr = 0x83784D78;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83784ddc
	if (cr6.eq) goto loc_83784DDC;
	// li r6,18
	ctx.r6.s64 = 18;
	// li r5,39
	ctx.r5.s64 = 39;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784D90:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83572958
	ctx.lr = 0x83784D98;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83784ddc
	if (cr6.eq) goto loc_83784DDC;
	// li r6,19
	ctx.r6.s64 = 19;
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784DB0:
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,67
	ctx.r5.s64 = 67;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784DBC:
	// li r6,21
	ctx.r6.s64 = 21;
	// li r5,71
	ctx.r5.s64 = 71;
	// b 0x83784dd0
	goto loc_83784DD0;
loc_83784DC8:
	// li r6,22
	ctx.r6.s64 = 22;
	// li r5,68
	ctx.r5.s64 = 68;
loc_83784DD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83784b10
	ctx.lr = 0x83784DDC;
	sub_83784B10(ctx, base);
loc_83784DDC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,23
	cr6.compare<uint32_t>(ctx.r29.u32, 23, xer);
	// blt cr6,0x83784c28
	if (cr6.lt) goto loc_83784C28;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83784DF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83784E00"))) PPC_WEAK_FUNC(sub_83784E00);
PPC_FUNC_IMPL(__imp__sub_83784E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83784E08;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83784f28
	if (cr6.eq) goto loc_83784F28;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83784f28
	if (cr6.eq) goto loc_83784F28;
	// cmplwi cr6,r6,82
	cr6.compare<uint32_t>(ctx.r6.u32, 82, xer);
	// bge cr6,0x83784f28
	if (!cr6.lt) goto loc_83784F28;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a9cb98
	ctx.lr = 0x83784E44;
	sub_82A9CB98(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// beq cr6,0x83784f1c
	if (cr6.eq) goto loc_83784F1C;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r27,-31769
	ctx.r27.s64 = -2082013184;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_83784E68:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a9bb08
	ctx.lr = 0x83784E80;
	sub_82A9BB08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83784f10
	if (cr6.eq) goto loc_83784F10;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83132cb8
	ctx.lr = 0x83784E9C;
	sub_83132CB8(ctx, base);
	// lwz r11,-30576(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -30576);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// beq cr6,0x83784f00
	if (cr6.eq) goto loc_83784F00;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83784f00
	if (cr6.eq) goto loc_83784F00;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x83784f00
	if (cr6.eq) goto loc_83784F00;
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// beq cr6,0x83784f00
	if (cr6.eq) goto loc_83784F00;
	// clrlwi r11,r3,14
	ctx.r11.u64 = ctx.r3.u32 & 0x3FFFF;
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, xer);
	// ble cr6,0x83784ed8
	if (!cr6.gt) goto loc_83784ED8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83784ED8:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// clrlwi r11,r6,14
	ctx.r11.u64 = ctx.r6.u32 & 0x3FFFF;
	// cmplw cr6,r6,r28
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, xer);
	// ble cr6,0x83784eec
	if (!cr6.gt) goto loc_83784EEC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83784EEC:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83546fd8
	ctx.lr = 0x83784EFC;
	sub_83546FD8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83784F00:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83132d20
	ctx.lr = 0x83784F10;
	sub_83132D20(ctx, base);
loc_83784F10:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// blt cr6,0x83784e68
	if (cr6.lt) goto loc_83784E68;
loc_83784F1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83784F28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83784F34"))) PPC_WEAK_FUNC(sub_83784F34);
PPC_FUNC_IMPL(__imp__sub_83784F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83784F38"))) PPC_WEAK_FUNC(sub_83784F38);
PPC_FUNC_IMPL(__imp__sub_83784F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83784F40;
	__savegprlr_27(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8378513c
	if (cr6.eq) goto loc_8378513C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8378513c
	if (cr6.eq) goto loc_8378513C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_83784F68:
	// cmplwi cr6,r27,22
	cr6.compare<uint32_t>(ctx.r27.u32, 22, xer);
	// bgt cr6,0x83785124
	if (cr6.gt) goto loc_83785124;
	// lis r12,-31880
	ctx.r12.s64 = -2089287680;
	// rlwinm r0,r27,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20360
	ctx.r12.s64 = ctx.r12.s64 + 20360;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r27.u32) {
	case 0:
		goto loc_83784FE4;
	case 1:
		goto loc_83784FF0;
	case 2:
		goto loc_83784FFC;
	case 3:
		goto loc_83785008;
	case 4:
		goto loc_83785014;
	case 5:
		goto loc_83785020;
	case 6:
		goto loc_8378502C;
	case 7:
		goto loc_83785038;
	case 8:
		goto loc_83785044;
	case 9:
		goto loc_83785050;
	case 10:
		goto loc_8378505C;
	case 11:
		goto loc_83785068;
	case 12:
		goto loc_83785074;
	case 13:
		goto loc_83785124;
	case 14:
		goto loc_83785080;
	case 15:
		goto loc_8378508C;
	case 16:
		goto loc_83785098;
	case 17:
		goto loc_837850A4;
	case 18:
		goto loc_837850B0;
	case 19:
		goto loc_837850D0;
	case 20:
		goto loc_837850F0;
	case 21:
		goto loc_837850FC;
	case 22:
		goto loc_83785108;
	default:
		return;
	}
	// lwz r27,20452(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20452);
	// lwz r27,20464(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20464);
	// lwz r27,20476(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20476);
	// lwz r27,20488(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20488);
	// lwz r27,20500(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20500);
	// lwz r27,20512(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20512);
	// lwz r27,20524(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20524);
	// lwz r27,20536(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20536);
	// lwz r27,20548(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20548);
	// lwz r27,20560(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20560);
	// lwz r27,20572(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20572);
	// lwz r27,20584(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20584);
	// lwz r27,20596(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20596);
	// lwz r27,20772(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20772);
	// lwz r27,20608(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20608);
	// lwz r27,20620(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20620);
	// lwz r27,20632(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20632);
	// lwz r27,20644(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20644);
	// lwz r27,20656(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20656);
	// lwz r27,20688(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20688);
	// lwz r27,20720(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20720);
	// lwz r27,20732(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20732);
	// lwz r27,20744(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20744);
loc_83784FE4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x83785110
	goto loc_83785110;
loc_83784FF0:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,48
	ctx.r6.s64 = 48;
	// b 0x83785110
	goto loc_83785110;
loc_83784FFC:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x83785110
	goto loc_83785110;
loc_83785008:
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,50
	ctx.r6.s64 = 50;
	// b 0x83785110
	goto loc_83785110;
loc_83785014:
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,9
	ctx.r6.s64 = 9;
	// b 0x83785110
	goto loc_83785110;
loc_83785020:
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,51
	ctx.r6.s64 = 51;
	// b 0x83785110
	goto loc_83785110;
loc_8378502C:
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,10
	ctx.r6.s64 = 10;
	// b 0x83785110
	goto loc_83785110;
loc_83785038:
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,11
	ctx.r6.s64 = 11;
	// b 0x83785110
	goto loc_83785110;
loc_83785044:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,49
	ctx.r6.s64 = 49;
	// b 0x83785110
	goto loc_83785110;
loc_83785050:
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,12
	ctx.r6.s64 = 12;
	// b 0x83785110
	goto loc_83785110;
loc_8378505C:
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,13
	ctx.r6.s64 = 13;
	// b 0x83785110
	goto loc_83785110;
loc_83785068:
	// li r7,11
	ctx.r7.s64 = 11;
	// li r6,14
	ctx.r6.s64 = 14;
	// b 0x83785110
	goto loc_83785110;
loc_83785074:
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,15
	ctx.r6.s64 = 15;
	// b 0x83785110
	goto loc_83785110;
loc_83785080:
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,16
	ctx.r6.s64 = 16;
	// b 0x83785110
	goto loc_83785110;
loc_8378508C:
	// li r7,15
	ctx.r7.s64 = 15;
	// li r6,17
	ctx.r6.s64 = 17;
	// b 0x83785110
	goto loc_83785110;
loc_83785098:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,18
	ctx.r6.s64 = 18;
	// b 0x83785110
	goto loc_83785110;
loc_837850A4:
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,30
	ctx.r6.s64 = 30;
	// b 0x83785110
	goto loc_83785110;
loc_837850B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83572958
	ctx.lr = 0x837850B8;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83785124
	if (cr6.eq) goto loc_83785124;
	// li r7,18
	ctx.r7.s64 = 18;
	// li r6,39
	ctx.r6.s64 = 39;
	// b 0x83785110
	goto loc_83785110;
loc_837850D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83572958
	ctx.lr = 0x837850D8;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83785124
	if (cr6.eq) goto loc_83785124;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,40
	ctx.r6.s64 = 40;
	// b 0x83785110
	goto loc_83785110;
loc_837850F0:
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,67
	ctx.r6.s64 = 67;
	// b 0x83785110
	goto loc_83785110;
loc_837850FC:
	// li r7,21
	ctx.r7.s64 = 21;
	// li r6,71
	ctx.r6.s64 = 71;
	// b 0x83785110
	goto loc_83785110;
loc_83785108:
	// li r7,22
	ctx.r7.s64 = 22;
	// li r6,68
	ctx.r6.s64 = 68;
loc_83785110:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83784e00
	ctx.lr = 0x83785124;
	sub_83784E00(ctx, base);
loc_83785124:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,23
	cr6.compare<uint32_t>(ctx.r27.u32, 23, xer);
	// blt cr6,0x83784f68
	if (cr6.lt) goto loc_83784F68;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8378513C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83785148"))) PPC_WEAK_FUNC(sub_83785148);
PPC_FUNC_IMPL(__imp__sub_83785148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83785150;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837856f4
	if (cr6.eq) goto loc_837856F4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x837856f4
	if (cr6.eq) goto loc_837856F4;
	// addi r11,r6,-12
	ctx.r11.s64 = ctx.r6.s64 + -12;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgt cr6,0x837856f8
	if (cr6.gt) goto loc_837856F8;
	// lis r12,-31880
	ctx.r12.s64 = -2089287680;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20896
	ctx.r12.s64 = ctx.r12.s64 + 20896;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83785420;
	case 1:
		goto loc_83785234;
	case 2:
		goto loc_837852D8;
	case 3:
		goto loc_83785250;
	case 4:
		goto loc_837854EC;
	case 5:
		goto loc_837854D0;
	case 6:
		goto loc_837854B4;
	case 7:
		goto loc_83785508;
	case 8:
		goto loc_83785524;
	case 9:
		goto loc_83785540;
	case 10:
		goto loc_837852BC;
	case 11:
		goto loc_8378521C;
	case 12:
		goto loc_8378565C;
	case 13:
		goto loc_8378565C;
	case 14:
		goto loc_8378565C;
	case 15:
		goto loc_837856A8;
	case 16:
		goto loc_837856A8;
	case 17:
		goto loc_837856A8;
	case 18:
		goto loc_83785624;
	case 19:
		goto loc_83785644;
	case 20:
		goto loc_8378555C;
	case 21:
		goto loc_837852F4;
	case 22:
		goto loc_837855BC;
	case 23:
		goto loc_837853D4;
	case 24:
		goto loc_83785268;
	case 25:
		goto loc_83785284;
	case 26:
		goto loc_837852A0;
	case 27:
		goto loc_83785444;
	case 28:
		goto loc_83785460;
	case 29:
		goto loc_8378547C;
	case 30:
		goto loc_83785498;
	default:
		return;
	}
	// lwz r27,21536(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21536);
	// lwz r27,21044(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21044);
	// lwz r27,21208(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21208);
	// lwz r27,21072(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21072);
	// lwz r27,21740(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21740);
	// lwz r27,21712(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21712);
	// lwz r27,21684(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21684);
	// lwz r27,21768(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21768);
	// lwz r27,21796(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21796);
	// lwz r27,21824(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21824);
	// lwz r27,21180(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21180);
	// lwz r27,21020(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21020);
	// lwz r27,22108(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22108);
	// lwz r27,22108(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22108);
	// lwz r27,22108(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22108);
	// lwz r27,22184(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22184);
	// lwz r27,22184(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22184);
	// lwz r27,22184(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22184);
	// lwz r27,22052(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22052);
	// lwz r27,22084(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22084);
	// lwz r27,21852(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21852);
	// lwz r27,21236(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21236);
	// lwz r27,21948(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21948);
	// lwz r27,21460(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21460);
	// lwz r27,21096(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21096);
	// lwz r27,21124(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21124);
	// lwz r27,21152(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21152);
	// lwz r27,21572(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21572);
	// lwz r27,21600(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21600);
	// lwz r27,21628(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21628);
	// lwz r27,21656(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 21656);
loc_8378521C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r4,784(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x8378522C;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785234:
	// lwz r11,808(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 808);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82a9bc48
	ctx.lr = 0x83785248;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785250:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r4,790(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 790);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83785260;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785268:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,70
	ctx.r5.s64 = 70;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83764470
	ctx.lr = 0x8378527C;
	sub_83764470(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785284:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,74
	ctx.r4.s64 = ctx.r29.s64 + 74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83764470
	ctx.lr = 0x83785298;
	sub_83764470(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837852A0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,97
	ctx.r5.s64 = 97;
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83764470
	ctx.lr = 0x837852B4;
	sub_83764470(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837852BC:
	// lwz r11,792(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 792);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82a9bc48
	ctx.lr = 0x837852D0;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837852D8:
	// lhz r11,788(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 788);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82a9bc48
	ctx.lr = 0x837852EC;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837852F4:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-30472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30472);
	// rlwinm r27,r11,14,0,17
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// bl 0x82aa9d18
	ctx.lr = 0x8378530C;
	sub_82AA9D18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8378533c
	if (cr6.eq) goto loc_8378533C;
loc_8378531C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaa108
	ctx.lr = 0x83785330;
	sub_82AAA108(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x8378531c
	if (cr6.lt) goto loc_8378531C;
loc_8378533C:
	// addi r27,r29,1209
	ctx.r27.s64 = ctx.r29.s64 + 1209;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,10
	ctx.r25.s64 = 10;
loc_83785348:
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bge cr6,0x837853c8
	if (!cr6.lt) goto loc_837853C8;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// subfc r10,r25,r11
	xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r11,r7,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7F8;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r6,r11,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r6,128
	cr6.compare<uint32_t>(ctx.r6.u32, 128, xer);
	// bge cr6,0x837853bc
	if (!cr6.lt) goto loc_837853BC;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bge cr6,0x837853bc
	if (!cr6.lt) goto loc_837853BC;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r8,r11,29,3,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFE;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r5,r10,25,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r11,r7,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// clrlwi r10,r4,25
	ctx.r10.u64 = ctx.r4.u32 & 0x7F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82aaa108
	ctx.lr = 0x837853BC;
	sub_82AAA108(ctx, base);
loc_837853BC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,10
	cr6.compare<uint32_t>(ctx.r28.u32, 10, xer);
	// blt cr6,0x83785348
	if (cr6.lt) goto loc_83785348;
loc_837853C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837853D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa9d18
	ctx.lr = 0x837853E0;
	sub_82AA9D18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83785414
	if (cr6.eq) goto loc_83785414;
loc_837853F0:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaa108
	ctx.lr = 0x83785408;
	sub_82AAA108(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// blt cr6,0x837853f0
	if (cr6.lt) goto loc_837853F0;
loc_83785414:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785420:
	// lwz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82a9bc48
	ctx.lr = 0x8378543C;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785444:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r29,177
	ctx.r4.s64 = ctx.r29.s64 + 177;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83764470
	ctx.lr = 0x83785458;
	sub_83764470(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785460:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r29,193
	ctx.r4.s64 = ctx.r29.s64 + 193;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83764470
	ctx.lr = 0x83785474;
	sub_83764470(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8378547C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r29,209
	ctx.r4.s64 = ctx.r29.s64 + 209;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83764470
	ctx.lr = 0x83785490;
	sub_83764470(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785498:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r29,225
	ctx.r4.s64 = ctx.r29.s64 + 225;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83764470
	ctx.lr = 0x837854AC;
	sub_83764470(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837854B4:
	// lwz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,9,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7;
	// bl 0x82a9bc48
	ctx.lr = 0x837854C8;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837854D0:
	// lwz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,6,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// bl 0x82a9bc48
	ctx.lr = 0x837854E4;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837854EC:
	// lwz r11,792(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 792);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x82a9bc48
	ctx.lr = 0x83785500;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785508:
	// lwz r11,792(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 792);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,12,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// bl 0x82a9bc48
	ctx.lr = 0x8378551C;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785524:
	// lhz r11,792(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 792);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	// bl 0x82a9bc48
	ctx.lr = 0x83785538;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785540:
	// lwz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x82a9bc48
	ctx.lr = 0x83785554;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8378555C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa9d18
	ctx.lr = 0x83785568;
	sub_82AA9D18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837855b0
	if (cr6.eq) goto loc_837855B0;
loc_83785578:
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x83785588
	if (cr6.lt) goto loc_83785588;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83785590
	goto loc_83785590;
loc_83785588:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lbz r11,241(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 241);
loc_83785590:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaa108
	ctx.lr = 0x837855A4;
	sub_82AAA108(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x83785578
	if (cr6.lt) goto loc_83785578;
loc_837855B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837855BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa9d18
	ctx.lr = 0x837855C8;
	sub_82AA9D18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83785618
	if (cr6.eq) goto loc_83785618;
	// addi r26,r29,1300
	ctx.r26.s64 = ctx.r29.s64 + 1300;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_837855E0:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x837855f0
	if (cr6.lt) goto loc_837855F0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x837855f4
	goto loc_837855F4;
loc_837855F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_837855F4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaa108
	ctx.lr = 0x83785608;
	sub_82AAA108(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x837855e0
	if (cr6.lt) goto loc_837855E0;
loc_83785618:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785624:
	// ld r11,504(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 504);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a9bc48
	ctx.lr = 0x8378563C;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785644:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r4,78(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 78);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83785654;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8378565C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b81268
	ctx.lr = 0x8378566C;
	sub_82B81268(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r4,r30,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x3F;
	// bl 0x82a9bc48
	ctx.lr = 0x83785680;
	sub_82A9BC48(ctx, base);
	// li r5,25
	ctx.r5.s64 = 25;
	// rlwinm r4,r30,14,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83785690;
	sub_82A9BC48(ctx, base);
	// li r5,26
	ctx.r5.s64 = 26;
	// rlwinm r4,r30,22,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x837856A0;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837856A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b81268
	ctx.lr = 0x837856B8;
	sub_82B81268(ctx, base);
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r4,r30,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x3F;
	// bl 0x82a9bc48
	ctx.lr = 0x837856CC;
	sub_82A9BC48(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// rlwinm r4,r30,14,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x837856DC;
	sub_82A9BC48(ctx, base);
	// li r5,29
	ctx.r5.s64 = 29;
	// rlwinm r4,r30,22,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x837856EC;
	sub_82A9BC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837856F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837856F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83785700"))) PPC_WEAK_FUNC(sub_83785700);
PPC_FUNC_IMPL(__imp__sub_83785700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83785708;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r29,r4,1209
	ctx.r29.s64 = ctx.r4.s64 + 1209;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,-30472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30472);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r28,r11,14,0,17
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// bl 0x82aa9d18
	ctx.lr = 0x83785730;
	sub_82AA9D18(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837857a4
	if (cr6.eq) goto loc_837857A4;
loc_83785744:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa9c78
	ctx.lr = 0x8378575C;
	sub_82AA9C78(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// beq cr6,0x83785798
	if (cr6.eq) goto loc_83785798;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// rlwinm r9,r10,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x83785798
	if (!cr6.lt) goto loc_83785798;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwimi r10,r8,4,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// rlwimi r6,r9,7,0,24
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFF80) | (ctx.r6.u64 & 0xFFFFFFFF0000007F);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_83785798:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x83785744
	if (cr6.lt) goto loc_83785744;
loc_837857A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837857B0"))) PPC_WEAK_FUNC(sub_837857B0);
PPC_FUNC_IMPL(__imp__sub_837857B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837857B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83786050
	if (cr6.eq) goto loc_83786050;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83786050
	if (cr6.eq) goto loc_83786050;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-2490
	ctx.r4.s64 = ctx.r11.s64 + -2490;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x837b0c10
	ctx.lr = 0x837857FC;
	sub_837B0C10(ctx, base);
	// addi r11,r30,-13
	ctx.r11.s64 = ctx.r30.s64 + -13;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, xer);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bgt cr6,0x8378603c
	if (cr6.gt) goto loc_8378603C;
	// lis r12,-31880
	ctx.r12.s64 = -2089287680;
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
		goto loc_837858A4;
	case 1:
		goto loc_83785AB4;
	case 2:
		goto loc_837858E0;
	case 3:
		goto loc_83785D04;
	case 4:
		goto loc_83785CC0;
	case 5:
		goto loc_83785C7C;
	case 6:
		goto loc_83785D48;
	case 7:
		goto loc_83785D8C;
	case 8:
		goto loc_83785DD0;
	case 9:
		goto loc_83785A78;
	case 10:
		goto loc_8378603C;
	case 11:
		goto loc_83785F58;
	case 12:
		goto loc_83785F58;
	case 13:
		goto loc_83785F58;
	case 14:
		goto loc_83785FD4;
	case 15:
		goto loc_83785FD4;
	case 16:
		goto loc_83785FD4;
	case 17:
		goto loc_83785EDC;
	case 18:
		goto loc_83785F1C;
	case 19:
		goto loc_83785E14;
	case 20:
		goto loc_83785B04;
	case 21:
		goto loc_83785E74;
	case 22:
		goto loc_8378603C;
	case 23:
		goto loc_8378591C;
	case 24:
		goto loc_837859A0;
	case 25:
		goto loc_837859F4;
	case 26:
		goto loc_83785B2C;
	case 27:
		goto loc_83785B80;
	case 28:
		goto loc_83785BD4;
	case 29:
		goto loc_83785C28;
	default:
		return;
	}
	// lwz r27,22692(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22692);
	// lwz r27,23220(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23220);
	// lwz r27,22752(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22752);
	// lwz r27,23812(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23812);
	// lwz r27,23744(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23744);
	// lwz r27,23676(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23676);
	// lwz r27,23880(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23880);
	// lwz r27,23948(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23948);
	// lwz r27,24016(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24016);
	// lwz r27,23160(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23160);
	// lwz r27,24636(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24636);
	// lwz r27,24408(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24408);
	// lwz r27,24408(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24408);
	// lwz r27,24408(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24408);
	// lwz r27,24532(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24532);
	// lwz r27,24532(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24532);
	// lwz r27,24532(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24532);
	// lwz r27,24284(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24284);
	// lwz r27,24348(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24348);
	// lwz r27,24084(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24084);
	// lwz r27,23300(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23300);
	// lwz r27,24180(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24180);
	// lwz r27,24636(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24636);
	// lwz r27,22812(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22812);
	// lwz r27,22944(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22944);
	// lwz r27,23028(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23028);
	// lwz r27,23340(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23340);
	// lwz r27,23424(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23424);
	// lwz r27,23508(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23508);
	// lwz r27,23592(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23592);
loc_837858A4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x837858B4;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,810(r25)
	PPC_STORE_U16(ctx.r25.u32 + 810, ctx.r11.u16);
	// bl 0x8387e8e0
	ctx.lr = 0x837858D4;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837858E0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x837858F0;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,790(r25)
	PPC_STORE_U8(ctx.r25.u32 + 790, ctx.r11.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x83785910;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8378591C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x8378594c
	if (!cr6.eq) goto loc_8378594C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785934;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
loc_8378594C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab4a90
	ctx.lr = 0x8378595C;
	sub_82AB4A90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83785980
	if (!cr6.lt) goto loc_83785980;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_83785980:
	// li r4,70
	ctx.r4.s64 = 70;
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// bl 0x831ce7d8
	ctx.lr = 0x8378598C;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83785994;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837859A0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab4a90
	ctx.lr = 0x837859B0;
	sub_82AB4A90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837859d4
	if (!cr6.lt) goto loc_837859D4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_837859D4:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r25,74
	ctx.r3.s64 = ctx.r25.s64 + 74;
	// bl 0x831ce7d8
	ctx.lr = 0x837859E0;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x837859E8;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837859F4:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x83785a24
	if (!cr6.eq) goto loc_83785A24;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785A0C;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
loc_83785A24:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab4a90
	ctx.lr = 0x83785A34;
	sub_82AB4A90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83785a58
	if (!cr6.lt) goto loc_83785A58;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_83785A58:
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r25,80
	ctx.r3.s64 = ctx.r25.s64 + 80;
	// bl 0x831ce7d8
	ctx.lr = 0x83785A64;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83785A6C;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785A78:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785A88;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,794(r25)
	PPC_STORE_U16(ctx.r25.u32 + 794, ctx.r11.u16);
	// bl 0x8387e8e0
	ctx.lr = 0x83785AA8;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785AB4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785AC4;
	sub_82A70DB0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r10,788(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 788);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwimi r10,r9,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,788(r25)
	PPC_STORE_U32(ctx.r25.u32 + 788, ctx.r10.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83785AF8;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785B04:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83785700
	ctx.lr = 0x83785B14;
	sub_83785700(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83785B20;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785B2C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab4a90
	ctx.lr = 0x83785B3C;
	sub_82AB4A90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83785b60
	if (!cr6.lt) goto loc_83785B60;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_83785B60:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r25,177
	ctx.r3.s64 = ctx.r25.s64 + 177;
	// bl 0x831ce7d8
	ctx.lr = 0x83785B6C;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83785B74;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785B80:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab4a90
	ctx.lr = 0x83785B90;
	sub_82AB4A90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83785bb4
	if (!cr6.lt) goto loc_83785BB4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_83785BB4:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r25,193
	ctx.r3.s64 = ctx.r25.s64 + 193;
	// bl 0x831ce7d8
	ctx.lr = 0x83785BC0;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83785BC8;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785BD4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab4a90
	ctx.lr = 0x83785BE4;
	sub_82AB4A90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83785c08
	if (!cr6.lt) goto loc_83785C08;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_83785C08:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r25,209
	ctx.r3.s64 = ctx.r25.s64 + 209;
	// bl 0x831ce7d8
	ctx.lr = 0x83785C14;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83785C1C;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785C28:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab4a90
	ctx.lr = 0x83785C38;
	sub_82AB4A90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83785c5c
	if (!cr6.lt) goto loc_83785C5C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_83785C5C:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r25,225
	ctx.r3.s64 = ctx.r25.s64 + 225;
	// bl 0x831ce7d8
	ctx.lr = 0x83785C68;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83785C70;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785C7C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785C8C;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,796(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 796);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,23,6,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x3800000) | (ctx.r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,796(r25)
	PPC_STORE_U32(ctx.r25.u32 + 796, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83785CB4;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785CC0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785CD0;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,796(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 796);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,26,4,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0xC000000) | (ctx.r11.u64 & 0xFFFFFFFFF3FFFFFF);
	// stw r11,796(r25)
	PPC_STORE_U32(ctx.r25.u32 + 796, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83785CF8;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785D04:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785D14;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,792(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 792);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,792(r25)
	PPC_STORE_U32(ctx.r25.u32 + 792, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83785D3C;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785D48:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785D58;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,792(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 792);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,20,8,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF00000) | (ctx.r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r11,792(r25)
	PPC_STORE_U32(ctx.r25.u32 + 792, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83785D80;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785D8C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785D9C;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,792(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 792);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,16,12,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xF0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r11,792(r25)
	PPC_STORE_U32(ctx.r25.u32 + 792, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83785DC4;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785DD0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785DE0;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,796(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 796);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,796(r25)
	PPC_STORE_U32(ctx.r25.u32 + 796, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83785E08;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785E14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa9d18
	ctx.lr = 0x83785E20;
	sub_82AA9D18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
loc_83785E2C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa9c78
	ctx.lr = 0x83785E40;
	sub_82AA9C78(ctx, base);
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// bge cr6,0x83785e54
	if (!cr6.lt) goto loc_83785E54;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r28,r25
	ctx.r10.u64 = ctx.r28.u64 + ctx.r25.u64;
	// stb r11,241(r10)
	PPC_STORE_U8(ctx.r10.u32 + 241, ctx.r11.u8);
loc_83785E54:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x83785e2c
	if (cr6.lt) goto loc_83785E2C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83785E68;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785E74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa9d18
	ctx.lr = 0x83785E80;
	sub_82AA9D18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// addi r27,r25,1300
	ctx.r27.s64 = ctx.r25.s64 + 1300;
loc_83785E90:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa9c78
	ctx.lr = 0x83785EA4;
	sub_82AA9C78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// oris r11,r11,65532
	ctx.r11.u64 = ctx.r11.u64 | 4294705152;
	// bge cr6,0x83785eb8
	if (!cr6.lt) goto loc_83785EB8;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_83785EB8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x83785e90
	if (cr6.lt) goto loc_83785E90;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83785ED0;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785EDC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785EEC;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r28,504(r25)
	PPC_STORE_U16(ctx.r25.u32 + 504, ctx.r28.u16);
	// stw r11,508(r25)
	PPC_STORE_U32(ctx.r25.u32 + 508, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83785F10;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785F1C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785F2C;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378603c
	if (cr6.eq) goto loc_8378603C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,78(r25)
	PPC_STORE_U16(ctx.r25.u32 + 78, ctx.r11.u16);
	// bl 0x8387e8e0
	ctx.lr = 0x83785F4C;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785F58:
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785F68;
	sub_82A70DB0(ctx, base);
	// li r5,25
	ctx.r5.s64 = 25;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785F78;
	sub_82A70DB0(ctx, base);
	// li r5,26
	ctx.r5.s64 = 26;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785F88;
	sub_82A70DB0(ctx, base);
	// lwz r11,788(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 788);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r6,r10,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// ori r5,r9,16
	ctx.r5.u64 = ctx.r9.u64 | 16;
	// rlwinm r3,r7,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// rlwinm r4,r8,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// stb r5,791(r25)
	PPC_STORE_U8(ctx.r25.u32 + 791, ctx.r5.u8);
	// stb r3,814(r25)
	PPC_STORE_U8(ctx.r25.u32 + 814, ctx.r3.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r6,812(r25)
	PPC_STORE_U8(ctx.r25.u32 + 812, ctx.r6.u8);
	// stb r4,813(r25)
	PPC_STORE_U8(ctx.r25.u32 + 813, ctx.r4.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x83785FC8;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83785FD4:
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785FE4;
	sub_82A70DB0(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83785FF4;
	sub_82A70DB0(ctx, base);
	// li r5,29
	ctx.r5.s64 = 29;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83786004;
	sub_82A70DB0(ctx, base);
	// lwz r11,788(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 788);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r6,r10,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// ori r5,r9,32
	ctx.r5.u64 = ctx.r9.u64 | 32;
	// rlwinm r4,r8,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// rlwinm r3,r7,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// stb r5,791(r25)
	PPC_STORE_U8(ctx.r25.u32 + 791, ctx.r5.u8);
	// stb r6,815(r25)
	PPC_STORE_U8(ctx.r25.u32 + 815, ctx.r6.u8);
	// stb r4,816(r25)
	PPC_STORE_U8(ctx.r25.u32 + 816, ctx.r4.u8);
	// stb r3,817(r25)
	PPC_STORE_U8(ctx.r25.u32 + 817, ctx.r3.u8);
loc_8378603C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83786044;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83786050:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8378605C"))) PPC_WEAK_FUNC(sub_8378605C);
PPC_FUNC_IMPL(__imp__sub_8378605C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83786060"))) PPC_WEAK_FUNC(sub_83786060);
PPC_FUNC_IMPL(__imp__sub_83786060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83786068;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83071ea8
	ctx.lr = 0x83786084;
	sub_83071EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8378609c
	if (!cr6.eq) goto loc_8378609C;
loc_83786090:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8378609C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83786090
	if (cr6.eq) goto loc_83786090;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x837860BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837860C4"))) PPC_WEAK_FUNC(sub_837860C4);
PPC_FUNC_IMPL(__imp__sub_837860C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837860C8"))) PPC_WEAK_FUNC(sub_837860C8);
PPC_FUNC_IMPL(__imp__sub_837860C8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837861cc
	if (cr6.eq) goto loc_837861CC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837861cc
	if (cr6.eq) goto loc_837861CC;
	// addi r10,r6,-6
	ctx.r10.s64 = ctx.r6.s64 + -6;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x837861d0
	if (cr6.gt) goto loc_837861D0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8378617c
	if (cr6.eq) goto loc_8378617C;
	// bdz 0x837861a4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837861A4;
	// bdz 0x837861d0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837861D0;
	// bdz 0x8378611c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8378611C;
	// bdz 0x83786138
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83786138;
	// b 0x83786158
	goto loc_83786158;
loc_8378611C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lhz r4,98(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 98);
	// bl 0x82aa8e60
	ctx.lr = 0x83786128;
	sub_82AA8E60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83786138:
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x82aa8e60
	ctx.lr = 0x83786148;
	sub_82AA8E60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83786158:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r4,r4,52
	ctx.r4.s64 = ctx.r4.s64 + 52;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83786060
	ctx.lr = 0x8378616C;
	sub_83786060(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8378617C:
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r9,r10,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r4,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82aa8e60
	ctx.lr = 0x83786194;
	sub_82AA8E60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837861A4:
	// lhz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 100);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r4,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82aa8e60
	ctx.lr = 0x837861BC;
	sub_82AA8E60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837861CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837861D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837861E0"))) PPC_WEAK_FUNC(sub_837861E0);
PPC_FUNC_IMPL(__imp__sub_837861E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837861E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83786370
	if (cr6.eq) goto loc_83786370;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83786370
	if (cr6.eq) goto loc_83786370;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-2349
	ctx.r31.s64 = ctx.r11.s64 + -2349;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// bl 0x837b0c10
	ctx.lr = 0x83786228;
	sub_837B0C10(ctx, base);
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(ctx.r30.s32, 9, xer);
	// beq cr6,0x83786334
	if (cr6.eq) goto loc_83786334;
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(ctx.r30.s32, 10, xer);
	// beq cr6,0x837862f8
	if (cr6.eq) goto loc_837862F8;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bne cr6,0x8378635c
	if (!cr6.eq) goto loc_8378635C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x837862a4
	if (!cr6.eq) goto loc_837862A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82aa8dc8
	ctx.lr = 0x83786258;
	sub_82AA8DC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83786270
	if (cr6.eq) goto loc_83786270;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837862a4
	if (!cr6.eq) goto loc_837862A4;
loc_83786270:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r28,52
	ctx.r11.s64 = ctx.r28.s64 + 52;
loc_83786278:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8378629c
	if (cr6.eq) goto loc_8378629C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83786278
	if (cr6.eq) goto loc_83786278;
loc_8378629C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8378635c
	if (!cr6.eq) goto loc_8378635C;
loc_837862A4:
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82aa6718
	ctx.lr = 0x837862B4;
	sub_82AA6718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378635c
	if (cr6.eq) goto loc_8378635C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837862d4
	if (!cr6.lt) goto loc_837862D4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_837862D4:
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r28,52
	ctx.r3.s64 = ctx.r28.s64 + 52;
	// bl 0x831ce7d8
	ctx.lr = 0x837862E0;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8387e8e0
	ctx.lr = 0x837862EC;
	sub_8387E8E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837862F8:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82aa8dc8
	ctx.lr = 0x83786308;
	sub_82AA8DC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378635c
	if (cr6.eq) goto loc_8378635C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r27,1
	ctx.r27.s64 = 1;
	// sth r11,102(r28)
	PPC_STORE_U16(ctx.r28.u32 + 102, ctx.r11.u16);
	// bl 0x8387e8e0
	ctx.lr = 0x83786328;
	sub_8387E8E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83786334:
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82aa8dc8
	ctx.lr = 0x83786344;
	sub_82AA8DC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378635c
	if (cr6.eq) goto loc_8378635C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,1
	ctx.r27.s64 = 1;
	// sth r11,98(r28)
	PPC_STORE_U16(ctx.r28.u32 + 98, ctx.r11.u16);
loc_8378635C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83786364;
	sub_8387E8E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83786370:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8378637C"))) PPC_WEAK_FUNC(sub_8378637C);
PPC_FUNC_IMPL(__imp__sub_8378637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83786380"))) PPC_WEAK_FUNC(sub_83786380);
PPC_FUNC_IMPL(__imp__sub_83786380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83786388;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83786790
	if (cr6.eq) goto loc_83786790;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83786790
	if (cr6.eq) goto loc_83786790;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,-2211
	ctx.r28.s64 = ctx.r11.s64 + -2211;
	// addi r4,r28,-2
	ctx.r4.s64 = ctx.r28.s64 + -2;
	// bl 0x837b0c10
	ctx.lr = 0x837863C8;
	sub_837B0C10(ctx, base);
	// addi r11,r30,-5
	ctx.r11.s64 = ctx.r30.s64 + -5;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x8378677c
	if (cr6.gt) goto loc_8378677C;
	// lis r12,-31880
	ctx.r12.s64 = -2089287680;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25580
	ctx.r12.s64 = ctx.r12.s64 + 25580;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83786754;
	case 1:
		goto loc_837864E4;
	case 2:
		goto loc_83786528;
	case 3:
		goto loc_83786584;
	case 4:
		goto loc_837865FC;
	case 5:
		goto loc_837866B0;
	case 6:
		goto loc_83786700;
	case 7:
		goto loc_837865C0;
	case 8:
		goto loc_8378677C;
	case 9:
		goto loc_8378677C;
	case 10:
		goto loc_83786418;
	default:
		return;
	}
	// lwz r27,26452(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26452);
	// lwz r27,25828(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25828);
	// lwz r27,25896(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25896);
	// lwz r27,25988(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25988);
	// lwz r27,26108(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26108);
	// lwz r27,26288(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26288);
	// lwz r27,26368(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26368);
	// lwz r27,26048(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26048);
	// lwz r27,26492(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26492);
	// lwz r27,26492(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26492);
	// lwz r27,25624(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25624);
loc_83786418:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x8378646c
	if (!cr6.eq) goto loc_8378646C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x83786430;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83786448
	if (cr6.eq) goto loc_83786448;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8378646c
	if (!cr6.eq) goto loc_8378646C;
loc_83786448:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r26,2
	ctx.r3.s64 = ctx.r26.s64 + 2;
	// bl 0x831ce7d8
	ctx.lr = 0x83786458;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83786460;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8378646C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9c750
	ctx.lr = 0x8378647C;
	sub_82A9C750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837864c0
	if (cr6.eq) goto loc_837864C0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837864a0
	if (!cr6.lt) goto loc_837864A0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_837864A0:
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r26,2
	ctx.r3.s64 = ctx.r26.s64 + 2;
	// bl 0x831ce7d8
	ctx.lr = 0x837864AC;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x837864B4;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837864C0:
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r26,2
	ctx.r3.s64 = ctx.r26.s64 + 2;
	// bl 0x831ce7d8
	ctx.lr = 0x837864D0;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x837864D8;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837864E4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x837864F4;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378677c
	if (cr6.eq) goto loc_8378677C;
	// lwz r11,544(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 544);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,24,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,544(r26)
	PPC_STORE_U32(ctx.r26.u32 + 544, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8378651C;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83786528:
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83786544
	if (cr6.eq) goto loc_83786544;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83786544
	if (cr6.eq) goto loc_83786544;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8378677c
	if (!cr6.eq) goto loc_8378677C;
loc_83786544:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x83786554;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378677c
	if (cr6.eq) goto loc_8378677C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,528(r26)
	PPC_STORE_U32(ctx.r26.u32 + 528, ctx.r10.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83786578;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83786584:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x83786594;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378677c
	if (cr6.eq) goto loc_8378677C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,524(r26)
	PPC_STORE_U32(ctx.r26.u32 + 524, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x837865B4;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837865C0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x837865D0;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378677c
	if (cr6.eq) goto loc_8378677C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,532(r26)
	PPC_STORE_U16(ctx.r26.u32 + 532, ctx.r11.u16);
	// bl 0x8387e8e0
	ctx.lr = 0x837865F0;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837865FC:
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8378664c
	if (!cr6.eq) goto loc_8378664C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x83786618;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378677c
	if (cr6.eq) goto loc_8378677C;
	// lwz r11,532(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 532);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r11,532(r26)
	PPC_STORE_U32(ctx.r26.u32 + 532, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83786640;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8378664C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8378677c
	if (!cr6.eq) goto loc_8378677C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8378668c
	if (cr6.lt) goto loc_8378668C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x8378677c
	if (!cr6.lt) goto loc_8378677C;
	// lwz r11,540(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 540);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwimi r11,r10,1,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r11,540(r26)
	PPC_STORE_U32(ctx.r26.u32 + 540, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83786680;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8378668C:
	// lwz r11,540(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 540);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwimi r11,r10,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r11,540(r26)
	PPC_STORE_U32(ctx.r26.u32 + 540, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x837866A4;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837866B0:
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8378677c
	if (!cr6.eq) goto loc_8378677C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x837866CC;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378677c
	if (cr6.eq) goto loc_8378677C;
	// lwz r11,532(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 532);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r11,532(r26)
	PPC_STORE_U32(ctx.r26.u32 + 532, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x837866F4;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83786700:
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8378677c
	if (!cr6.eq) goto loc_8378677C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x8378671C;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378677c
	if (cr6.eq) goto loc_8378677C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,536(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 536);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwimi r10,r9,22,9,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 22) & 0x400000) | (ctx.r10.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r10,536(r26)
	PPC_STORE_U32(ctx.r26.u32 + 536, ctx.r10.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83786748;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83786754:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x83786764;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378677c
	if (cr6.eq) goto loc_8378677C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,540(r26)
	PPC_STORE_U16(ctx.r26.u32 + 540, ctx.r11.u16);
loc_8378677C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83786784;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83786790:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8378679C"))) PPC_WEAK_FUNC(sub_8378679C);
PPC_FUNC_IMPL(__imp__sub_8378679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837867A0"))) PPC_WEAK_FUNC(sub_837867A0);
PPC_FUNC_IMPL(__imp__sub_837867A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837867A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83786958
	if (cr6.eq) goto loc_83786958;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83786958
	if (cr6.eq) goto loc_83786958;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-2214
	ctx.r4.s64 = ctx.r11.s64 + -2214;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x837b0c10
	ctx.lr = 0x837867DC;
	sub_837B0C10(ctx, base);
	// addi r11,r30,-5
	ctx.r11.s64 = ctx.r30.s64 + -5;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x83786944
	if (cr6.gt) goto loc_83786944;
	// lis r12,-31880
	ctx.r12.s64 = -2089287680;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26624
	ctx.r12.s64 = ctx.r12.s64 + 26624;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83786924;
	case 1:
		goto loc_83786890;
	case 2:
		goto loc_8378689C;
	case 3:
		goto loc_837868CC;
	case 4:
		goto loc_837868DC;
	case 5:
		goto loc_837868F4;
	case 6:
		goto loc_8378690C;
	case 7:
		goto loc_837868D4;
	case 8:
		goto loc_8378692C;
	case 9:
		goto loc_8378692C;
	case 10:
		goto loc_8378682C;
	default:
		return;
	}
	// lwz r27,26916(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26916);
	// lwz r27,26768(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26768);
	// lwz r27,26780(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26780);
	// lwz r27,26828(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26828);
	// lwz r27,26844(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26844);
	// lwz r27,26868(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26868);
	// lwz r27,26892(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26892);
	// lwz r27,26836(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26836);
	// lwz r27,26924(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26924);
	// lwz r27,26924(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26924);
	// lwz r27,26668(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26668);
loc_8378682C:
	// lhz r11,78(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 78);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83786944
	if (!cr6.eq) goto loc_83786944;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83125548
	ctx.lr = 0x8378684C;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x83786860;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83786868;
	sub_8387E8E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9ebf0
	ctx.lr = 0x83786878;
	sub_82A9EBF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83786884;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83786890:
	// lbz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 544);
	// clrlwi r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	// b 0x83786934
	goto loc_83786934;
loc_8378689C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837868b8
	if (cr6.eq) goto loc_837868B8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x837868b8
	if (cr6.eq) goto loc_837868B8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83786944
	if (!cr6.eq) goto loc_83786944;
loc_837868B8:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83786944
	if (cr6.eq) goto loc_83786944;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// b 0x83786934
	goto loc_83786934;
loc_837868CC:
	// lwz r4,524(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// b 0x83786934
	goto loc_83786934;
loc_837868D4:
	// lhz r4,532(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 532);
	// b 0x83786934
	goto loc_83786934;
loc_837868DC:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83786944
	if (!cr6.eq) goto loc_83786944;
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// b 0x83786934
	goto loc_83786934;
loc_837868F4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83786944
	if (!cr6.eq) goto loc_83786944;
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// rlwinm r4,r11,19,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// b 0x83786934
	goto loc_83786934;
loc_8378690C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83786944
	if (!cr6.eq) goto loc_83786944;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// rlwinm r4,r11,10,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// b 0x83786934
	goto loc_83786934;
loc_83786924:
	// lhz r4,540(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 540);
	// b 0x83786934
	goto loc_83786934;
loc_8378692C:
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
loc_83786934:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9f728
	ctx.lr = 0x83786940;
	sub_82A9F728(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83786944:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8378694C;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83786958:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83786964"))) PPC_WEAK_FUNC(sub_83786964);
PPC_FUNC_IMPL(__imp__sub_83786964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83786968"))) PPC_WEAK_FUNC(sub_83786968);
PPC_FUNC_IMPL(__imp__sub_83786968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83786970;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83786a34
	if (cr6.eq) goto loc_83786A34;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83786a34
	if (cr6.eq) goto loc_83786A34;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x83786a28
	if (!cr6.eq) goto loc_83786A28;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83124e60
	ctx.lr = 0x837869B8;
	sub_83124E60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83786a20
	if (cr6.eq) goto loc_83786A20;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r31,r11,-15016
	ctx.r31.s64 = ctx.r11.s64 + -15016;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837869DC:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x837869dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837869DC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837869f8
	if (!cr6.lt) goto loc_837869F8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_837869F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x831d0b58
	ctx.lr = 0x83786A08;
	sub_831D0B58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837644d8
	ctx.lr = 0x83786A1C;
	sub_837644D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83786A20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83786A28;
	sub_8387E8E0(ctx, base);
loc_83786A28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83786A34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83786A40"))) PPC_WEAK_FUNC(sub_83786A40);
PPC_FUNC_IMPL(__imp__sub_83786A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83786A48;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83786b00
	if (cr6.eq) goto loc_83786B00;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83786b00
	if (cr6.eq) goto loc_83786B00;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-2070
	ctx.r4.s64 = ctx.r11.s64 + -2070;
	// bl 0x837b0c10
	ctx.lr = 0x83786A7C;
	sub_837B0C10(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bne cr6,0x83786aec
	if (!cr6.eq) goto loc_83786AEC;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83786abc
	if (!cr6.eq) goto loc_83786ABC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8306cd38
	ctx.lr = 0x83786AA4;
	sub_8306CD38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83786aec
	if (cr6.eq) goto loc_83786AEC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83786aec
	if (cr6.eq) goto loc_83786AEC;
loc_83786ABC:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a74ed0
	ctx.lr = 0x83786ACC;
	sub_82A74ED0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83786aec
	if (cr6.eq) goto loc_83786AEC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83124de0
	ctx.lr = 0x83786AEC;
	sub_83124DE0(ctx, base);
loc_83786AEC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83786AF4;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83786B00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83786B0C"))) PPC_WEAK_FUNC(sub_83786B0C);
PPC_FUNC_IMPL(__imp__sub_83786B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83786B10"))) PPC_WEAK_FUNC(sub_83786B10);
PPC_FUNC_IMPL(__imp__sub_83786B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83786B18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83786bf0
	if (cr6.eq) goto loc_83786BF0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83786bf0
	if (cr6.eq) goto loc_83786BF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a68858
	ctx.lr = 0x83786B40;
	sub_82A68858(ctx, base);
	// lis r24,-31769
	ctx.r24.s64 = -2082013184;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ld r11,-30024(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + -30024);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// beq cr6,0x83786be4
	if (cr6.eq) goto loc_83786BE4;
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r27,248
	ctx.r28.s64 = ctx.r27.s64 + 248;
	// b 0x83786b70
	goto loc_83786B70;
loc_83786B6C:
	// ld r11,-30024(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + -30024);
loc_83786B70:
	// lhz r10,808(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 808);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x83786b94
	if (!cr6.lt) goto loc_83786B94;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// add r10,r31,r27
	ctx.r10.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r29,512(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 512);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_83786B94:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplw cr6,r4,r25
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r25.u32, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x83786bbc
	if (!cr6.eq) goto loc_83786BBC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82a7de40
	ctx.lr = 0x83786BB4;
	sub_82A7DE40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83786bc4
	goto loc_83786BC4;
loc_83786BBC:
	// bl 0x82a7de40
	ctx.lr = 0x83786BC0;
	sub_82A7DE40(ctx, base);
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
loc_83786BC4:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a7de40
	ctx.lr = 0x83786BD4;
	sub_82A7DE40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// blt cr6,0x83786b6c
	if (cr6.lt) goto loc_83786B6C;
loc_83786BE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83786BF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83786BFC"))) PPC_WEAK_FUNC(sub_83786BFC);
PPC_FUNC_IMPL(__imp__sub_83786BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83786C00"))) PPC_WEAK_FUNC(sub_83786C00);
PPC_FUNC_IMPL(__imp__sub_83786C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83786C08;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83786d48
	if (cr6.eq) goto loc_83786D48;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83786d48
	if (cr6.eq) goto loc_83786D48;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a68958
	ctx.lr = 0x83786C2C;
	sub_82A68958(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r28,r31,248
	ctx.r28.s64 = ctx.r31.s64 + 248;
	// lis r26,1
	ctx.r26.s64 = 65536;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
loc_83786C48:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a687b8
	ctx.lr = 0x83786C60;
	sub_82A687B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83786d24
	if (cr6.eq) goto loc_83786D24;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a687b8
	ctx.lr = 0x83786C84;
	sub_82A687B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83786d24
	if (cr6.eq) goto loc_83786D24;
	// sth r25,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r25.u16);
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bge cr6,0x83786cb8
	if (!cr6.lt) goto loc_83786CB8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// b 0x83786cbc
	goto loc_83786CBC;
loc_83786CB8:
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_83786CBC:
	// lhz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 808);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x83786ce4
	if (!cr6.lt) goto loc_83786CE4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// std r9,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r9.u64);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r9,512(r10)
	PPC_STORE_U8(ctx.r10.u32 + 512, ctx.r9.u8);
	// b 0x83786d24
	goto loc_83786D24;
loc_83786CE4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// bge cr6,0x83786d24
	if (!cr6.lt) goto loc_83786D24;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r8,r31
	PPC_STORE_U64(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u64);
	// lhz r7,808(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 808);
	// clrlwi r11,r7,25
	ctx.r11.u64 = ctx.r7.u32 & 0x7F;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,512(r6)
	PPC_STORE_U8(ctx.r6.u32 + 512, ctx.r10.u8);
	// lwz r5,808(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// rlwinm r4,r5,0,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// add r3,r4,r26
	ctx.r3.u64 = ctx.r4.u64 + ctx.r26.u64;
	// rlwimi r3,r5,0,16,8
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFFFFFFFF80FFFF) | (ctx.r3.u64 & 0x7F0000);
	// stw r3,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r3.u32);
loc_83786D24:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x83786c48
	if (cr6.lt) goto loc_83786C48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f91748
	ctx.lr = 0x83786D3C;
	sub_82F91748(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83786D48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83786D54"))) PPC_WEAK_FUNC(sub_83786D54);
PPC_FUNC_IMPL(__imp__sub_83786D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83786D58"))) PPC_WEAK_FUNC(sub_83786D58);
PPC_FUNC_IMPL(__imp__sub_83786D58) {
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
	// bl 0x8307e3b8
	ctx.lr = 0x83786D80;
	sub_8307E3B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83786d94
	if (cr6.eq) goto loc_83786D94;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x83786db8
	goto loc_83786DB8;
loc_83786D94:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x83786DA4;
	sub_83572958(ctx, base);
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
loc_83786DB8:
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

__attribute__((alias("__imp__sub_83786DD0"))) PPC_WEAK_FUNC(sub_83786DD0);
PPC_FUNC_IMPL(__imp__sub_83786DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83786DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,2
	ctx.r31.s64 = 2;
loc_83786DE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x83786DF0;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x83786de8
	if (!cr0.lt) goto loc_83786DE8;
	// li r5,528
	ctx.r5.s64 = 528;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83786E0C;
	sub_831CDCF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83786E18"))) PPC_WEAK_FUNC(sub_83786E18);
PPC_FUNC_IMPL(__imp__sub_83786E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83786E20;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83786f24
	if (cr6.eq) goto loc_83786F24;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83786f24
	if (cr6.eq) goto loc_83786F24;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83786f24
	if (cr6.eq) goto loc_83786F24;
	// li r23,10
	ctx.r23.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r4,528
	ctx.r4.s64 = 528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82595718
	ctx.lr = 0x83786E60;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83786f18
	if (cr6.eq) goto loc_83786F18;
	// bl 0x83786dd0
	ctx.lr = 0x83786E6C;
	sub_83786DD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83786f18
	if (cr6.eq) goto loc_83786F18;
	// addi r28,r26,104
	ctx.r28.s64 = ctx.r26.s64 + 104;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83786E8C:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// blt cr6,0x83786ea0
	if (cr6.lt) goto loc_83786EA0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bge cr6,0x83786ea8
	if (!cr6.lt) goto loc_83786EA8;
loc_83786EA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x83786EA8;
	sub_82ABFDA0(ctx, base);
loc_83786EA8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83786e8c
	if (cr6.lt) goto loc_83786E8C;
	// addi r4,r26,584
	ctx.r4.s64 = ctx.r26.s64 + 584;
	// addi r3,r27,480
	ctx.r3.s64 = ctx.r27.s64 + 480;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83786ECC;
	sub_831CE980(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r31,528
	ctx.r31.s64 = 528;
	// bl 0x83786d58
	ctx.lr = 0x83786EDC;
	sub_83786D58(ctx, base);
	// cmplwi cr6,r3,528
	cr6.compare<uint32_t>(ctx.r3.u32, 528, xer);
	// bge cr6,0x83786ee8
	if (!cr6.lt) goto loc_83786EE8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83786EE8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// bl 0x831ce980
	ctx.lr = 0x83786EF8;
	sub_831CE980(ctx, base);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83786F08;
	sub_82595150(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82416268
	ctx.lr = 0x83786F10;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83786F18;
	sub_82595170(ctx, base);
loc_83786F18:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83786F24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83786F30"))) PPC_WEAK_FUNC(sub_83786F30);
PPC_FUNC_IMPL(__imp__sub_83786F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83786F38;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83787038
	if (cr6.eq) goto loc_83787038;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83787038
	if (cr6.eq) goto loc_83787038;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83787038
	if (cr6.eq) goto loc_83787038;
	// li r25,10
	ctx.r25.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r4,528
	ctx.r4.s64 = 528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82595718
	ctx.lr = 0x83786F78;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8378702c
	if (cr6.eq) goto loc_8378702C;
	// bl 0x83786dd0
	ctx.lr = 0x83786F84;
	sub_83786DD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8378702c
	if (cr6.eq) goto loc_8378702C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r31,528
	ctx.r31.s64 = 528;
	// bl 0x83786d58
	ctx.lr = 0x83786FA4;
	sub_83786D58(ctx, base);
	// cmplwi cr6,r3,528
	cr6.compare<uint32_t>(ctx.r3.u32, 528, xer);
	// bge cr6,0x83786fb0
	if (!cr6.lt) goto loc_83786FB0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83786FB0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83786FC0;
	sub_831CE980(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r27,104
	ctx.r29.s64 = ctx.r27.s64 + 104;
loc_83786FCC:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// blt cr6,0x83786fe0
	if (cr6.lt) goto loc_83786FE0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bge cr6,0x83786fe8
	if (!cr6.lt) goto loc_83786FE8;
loc_83786FE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x83786FE8;
	sub_82ABFDA0(ctx, base);
loc_83786FE8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83786fcc
	if (cr6.lt) goto loc_83786FCC;
	// addi r4,r28,480
	ctx.r4.s64 = ctx.r28.s64 + 480;
	// addi r3,r27,584
	ctx.r3.s64 = ctx.r27.s64 + 584;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x8378700C;
	sub_831CE980(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8378701C;
	sub_82595150(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82416268
	ctx.lr = 0x83787024;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8378702C;
	sub_82595170(ctx, base);
loc_8378702C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83787038:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83787044"))) PPC_WEAK_FUNC(sub_83787044);
PPC_FUNC_IMPL(__imp__sub_83787044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787048"))) PPC_WEAK_FUNC(sub_83787048);
PPC_FUNC_IMPL(__imp__sub_83787048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83787050;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830708d8
	ctx.lr = 0x8378706C;
	sub_830708D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83787084
	if (!cr6.eq) goto loc_83787084;
loc_83787078:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83787084:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83787078
	if (cr6.eq) goto loc_83787078;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83787078
	if (cr6.eq) goto loc_83787078;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, xer);
	// blt cr6,0x83787078
	if (cr6.lt) goto loc_83787078;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x837870B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837870d0
	if (cr6.eq) goto loc_837870D0;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_837870D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837870D8"))) PPC_WEAK_FUNC(sub_837870D8);
PPC_FUNC_IMPL(__imp__sub_837870D8) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,121
	ctx.r5.s64 = 121;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x83787048
	ctx.lr = 0x83787100;
	sub_83787048(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83787164
	if (cr6.eq) goto loc_83787164;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,121
	ctx.r5.s64 = 121;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83787048
	ctx.lr = 0x83787120;
	sub_83787048(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83787164
	if (cr6.eq) goto loc_83787164;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_83787134:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x83787158
	if (cr6.eq) goto loc_83787158;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83787134
	if (cr6.eq) goto loc_83787134;
loc_83787158:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x83787168
	if (!cr6.eq) goto loc_83787168;
loc_83787164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83787168:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8378717C"))) PPC_WEAK_FUNC(sub_8378717C);
PPC_FUNC_IMPL(__imp__sub_8378717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787180"))) PPC_WEAK_FUNC(sub_83787180);
PPC_FUNC_IMPL(__imp__sub_83787180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmpw cr6,r4,r8
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837871A8"))) PPC_WEAK_FUNC(sub_837871A8);
PPC_FUNC_IMPL(__imp__sub_837871A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837871B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-1428
	ctx.r9.s64 = ctx.r11.s64 + -1428;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x837871ec
	if (cr6.eq) goto loc_837871EC;
loc_837871D4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83787788
	ctx.lr = 0x837871DC;
	sub_83787788(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x837871d4
	if (!cr6.eq) goto loc_837871D4;
loc_837871EC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83787210
	if (cr6.lt) goto loc_83787210;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83787210;
	sub_825952B8(ctx, base);
loc_83787210:
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8378723c
	if (cr6.eq) goto loc_8378723C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8378723C;
	sub_825952B8(ctx, base);
loc_8378723C:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83787250"))) PPC_WEAK_FUNC(sub_83787250);
PPC_FUNC_IMPL(__imp__sub_83787250) {
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
	// bl 0x837871a8
	ctx.lr = 0x83787270;
	sub_837871A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83787288
	if (cr6.eq) goto loc_83787288;
	// bl 0x82416268
	ctx.lr = 0x83787284;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83787288:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837872A0"))) PPC_WEAK_FUNC(sub_837872A0);
PPC_FUNC_IMPL(__imp__sub_837872A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837872A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-1428
	ctx.r10.s64 = ctx.r11.s64 + -1428;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r28,r3,20
	ctx.r28.s64 = ctx.r3.s64 + 20;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stb r30,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r30.u8);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// bne cr6,0x83787314
	if (!cr6.eq) goto loc_83787314;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83787314:
	// bl 0x83b4b050
	ctx.lr = 0x83787318;
	sub_83B4B050(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787328
	if (cr6.eq) goto loc_83787328;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// b 0x83787338
	goto loc_83787338;
loc_83787328:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_83787338:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8378733C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8378733c
	if (!cr6.eq) goto loc_8378733C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83787364;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83787370"))) PPC_WEAK_FUNC(sub_83787370);
PPC_FUNC_IMPL(__imp__sub_83787370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83787378;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// stw r23,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r23.u32);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// bl 0x8353b168
	ctx.lr = 0x837873AC;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787444
	if (cr6.eq) goto loc_83787444;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837873C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83787444
	if (cr6.eq) goto loc_83787444;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837873EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83787408;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83787424;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83787440;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83787444:
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8353b1a0
	ctx.lr = 0x83787450;
	sub_8353B1A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787508
	if (cr6.eq) goto loc_83787508;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8378746C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83787508
	if (cr6.eq) goto loc_83787508;
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
	ctx.lr = 0x83787490;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r7,r27,24
	ctx.r7.u64 = ctx.r27.u32 & 0xFF;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r27,r8,r7
	ctx.r27.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r6,36(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x837874B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837874D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r30,r7,r6
	ctx.r30.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lwz r5,32(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x837874FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// or r29,r4,r3
	ctx.r29.u64 = ctx.r4.u64 | ctx.r3.u64;
loc_83787508:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83787524
	if (cr6.eq) goto loc_83787524;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83787524:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83787540
	if (cr6.eq) goto loc_83787540;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83787540:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83787734
	if (cr6.eq) goto loc_83787734;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// srawi r21,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83787580
	if (cr6.eq) goto loc_83787580;
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r11.u32);
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, xer);
	// bgt cr6,0x837875e4
	if (cr6.gt) goto loc_837875E4;
	// stw r23,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r23.u32);
	// b 0x837875e4
	goto loc_837875E4;
loc_83787580:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// beq cr6,0x837875a8
	if (cr6.eq) goto loc_837875A8;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r11.u32);
	// bge 0x837875e4
	if (!cr0.lt) goto loc_837875E4;
	// addi r11,r21,-1
	ctx.r11.s64 = ctx.r21.s64 + -1;
	// stw r11,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r11.u32);
	// b 0x837875e4
	goto loc_837875E4;
loc_837875A8:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x83787820
	ctx.lr = 0x837875C0;
	sub_83787820(ctx, base);
	// lwz r8,56(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r4,52(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// cmpw cr6,r31,r4
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, xer);
	// beq cr6,0x837875e4
	if (cr6.eq) goto loc_837875E4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r11.u32);
loc_837875E4:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// ble cr6,0x83787618
	if (!cr6.gt) goto loc_83787618;
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
loc_837875FC:
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bge cr6,0x83787610
	if (!cr6.lt) goto loc_83787610;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_83787610:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x837875fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837875FC;
loc_83787618:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// ble cr6,0x83787734
	if (!cr6.gt) goto loc_83787734;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r22,r9,1
	ctx.r22.s64 = ctx.r9.s64 + 1;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r28,r11,-1516
	ctx.r28.s64 = ctx.r11.s64 + -1516;
loc_83787640:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,56(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// lwzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// beq cr6,0x83787670
	if (cr6.eq) goto loc_83787670;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
loc_83787670:
	// bl 0x8259cc28
	ctx.lr = 0x83787674;
	sub_8259CC28(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x83787688;
	sub_825A1DA8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// bge cr6,0x837876b0
	if (!cr6.lt) goto loc_837876B0;
	// subf r30,r11,r22
	ctx.r30.s64 = ctx.r22.s64 - ctx.r11.s64;
loc_83787698:
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x837876A8;
	sub_825A1EB8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83787698
	if (!cr0.eq) goto loc_83787698;
loc_837876B0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837876dc
	if (cr6.eq) goto loc_837876DC;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x837876DC;
	sub_825A1DA8(ctx, base);
loc_837876DC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837876f0
	if (!cr6.lt) goto loc_837876F0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_837876F0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// bl 0x83102db0
	ctx.lr = 0x837876FC;
	sub_83102DB0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83787718
	if (cr6.lt) goto loc_83787718;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83787718;
	sub_825952B8(ctx, base);
loc_83787718:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// cmpw cr6,r29,r21
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, xer);
	// blt cr6,0x83787640
	if (cr6.lt) goto loc_83787640;
loc_83787734:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8378773C"))) PPC_WEAK_FUNC(sub_8378773C);
PPC_FUNC_IMPL(__imp__sub_8378773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787740"))) PPC_WEAK_FUNC(sub_83787740);
PPC_FUNC_IMPL(__imp__sub_83787740) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82a47360
	ctx.lr = 0x83787764;
	sub_82A47360(ctx, base);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x835977d8
	ctx.lr = 0x83787770;
	sub_835977D8(ctx, base);
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

__attribute__((alias("__imp__sub_83787784"))) PPC_WEAK_FUNC(sub_83787784);
PPC_FUNC_IMPL(__imp__sub_83787784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787788"))) PPC_WEAK_FUNC(sub_83787788);
PPC_FUNC_IMPL(__imp__sub_83787788) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837877d8
	if (cr6.eq) goto loc_837877D8;
	// li r11,45
	ctx.r11.s64 = 45;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837877B8;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837877D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837877D8;
	sub_82595170(ctx, base);
loc_837877D8:
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

__attribute__((alias("__imp__sub_837877EC"))) PPC_WEAK_FUNC(sub_837877EC);
PPC_FUNC_IMPL(__imp__sub_837877EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837877F0"))) PPC_WEAK_FUNC(sub_837877F0);
PPC_FUNC_IMPL(__imp__sub_837877F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8378781C"))) PPC_WEAK_FUNC(sub_8378781C);
PPC_FUNC_IMPL(__imp__sub_8378781C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787820"))) PPC_WEAK_FUNC(sub_83787820);
PPC_FUNC_IMPL(__imp__sub_83787820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83787828;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83787994
	if (cr6.eq) goto loc_83787994;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r7,28
	ctx.r7.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// divw r27,r8,r7
	ctx.r27.s32 = PPCDivide(ctx.r8.s32, ctx.r7.s32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bl 0x8353b168
	ctx.lr = 0x83787868;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837878c8
	if (cr6.eq) goto loc_837878C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83787884;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837878c8
	if (cr6.eq) goto loc_837878C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837878A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x837878C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_837878C8:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8353b1a0
	ctx.lr = 0x837878D4;
	sub_8353B1A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787944
	if (cr6.eq) goto loc_83787944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837878F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83787944
	if (cr6.eq) goto loc_83787944;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83787914;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r29,r8,r7
	ctx.r29.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r6,36(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83787938;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r5,r4
	ctx.r28.u64 = ctx.r5.u64 | ctx.r4.u64;
loc_83787944:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83787970
	if (cr6.eq) goto loc_83787970;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83787994
	if (cr6.gt) goto loc_83787994;
	// stw r26,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83787970:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83787994
	if (cr6.eq) goto loc_83787994;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// bge 0x83787994
	if (!cr0.lt) goto loc_83787994;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
loc_83787994:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8378799C"))) PPC_WEAK_FUNC(sub_8378799C);
PPC_FUNC_IMPL(__imp__sub_8378799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837879A0"))) PPC_WEAK_FUNC(sub_837879A0);
PPC_FUNC_IMPL(__imp__sub_837879A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1292
	ctx.r10.s64 = ctx.r11.s64 + -1292;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
loc_837879E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837879e0
	if (!cr6.eq) goto loc_837879E0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83787A00;
	sub_8259CC28(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83787A30"))) PPC_WEAK_FUNC(sub_83787A30);
PPC_FUNC_IMPL(__imp__sub_83787A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83787A38;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-1292
	ctx.r10.s64 = ctx.r11.s64 + -1292;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787a80
	if (cr6.eq) goto loc_83787A80;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x83787A70;
	sub_838ADAB0(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83787A80;
	sub_825952B8(ctx, base);
loc_83787A80:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
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
	// blt cr6,0x83787ab0
	if (cr6.lt) goto loc_83787AB0;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83787AB0;
	sub_825952B8(ctx, base);
loc_83787AB0:
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

__attribute__((alias("__imp__sub_83787AC8"))) PPC_WEAK_FUNC(sub_83787AC8);
PPC_FUNC_IMPL(__imp__sub_83787AC8) {
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
	// bl 0x83787a30
	ctx.lr = 0x83787AE8;
	sub_83787A30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83787b00
	if (cr6.eq) goto loc_83787B00;
	// bl 0x82416268
	ctx.lr = 0x83787AFC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83787B00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83787B18"))) PPC_WEAK_FUNC(sub_83787B18);
PPC_FUNC_IMPL(__imp__sub_83787B18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8291fdc8
	sub_8291FDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83787B20"))) PPC_WEAK_FUNC(sub_83787B20);
PPC_FUNC_IMPL(__imp__sub_83787B20) {
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
	// li r11,45
	ctx.r11.s64 = 45;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83787B4C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787b70
	if (cr6.eq) goto loc_83787B70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837879a0
	ctx.lr = 0x83787B5C;
	sub_837879A0(ctx, base);
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
loc_83787B70:
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

__attribute__((alias("__imp__sub_83787B88"))) PPC_WEAK_FUNC(sub_83787B88);
PPC_FUNC_IMPL(__imp__sub_83787B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// addi r11,r9,-984
	ctx.r11.s64 = ctx.r9.s64 + -984;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83787BA0"))) PPC_WEAK_FUNC(sub_83787BA0);
PPC_FUNC_IMPL(__imp__sub_83787BA0) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r3,r11,-984
	ctx.r3.s64 = ctx.r11.s64 + -984;
	// bl 0x833c9128
	ctx.lr = 0x83787BBC;
	sub_833C9128(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// stw r3,-14720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83787BD4"))) PPC_WEAK_FUNC(sub_83787BD4);
PPC_FUNC_IMPL(__imp__sub_83787BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787BD8"))) PPC_WEAK_FUNC(sub_83787BD8);
PPC_FUNC_IMPL(__imp__sub_83787BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-14720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14720);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83787BE4"))) PPC_WEAK_FUNC(sub_83787BE4);
PPC_FUNC_IMPL(__imp__sub_83787BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787BE8"))) PPC_WEAK_FUNC(sub_83787BE8);
PPC_FUNC_IMPL(__imp__sub_83787BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-14720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14720);
	// b 0x834ca948
	sub_834CA948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83787BF4"))) PPC_WEAK_FUNC(sub_83787BF4);
PPC_FUNC_IMPL(__imp__sub_83787BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787BF8"))) PPC_WEAK_FUNC(sub_83787BF8);
PPC_FUNC_IMPL(__imp__sub_83787BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83787C0C"))) PPC_WEAK_FUNC(sub_83787C0C);
PPC_FUNC_IMPL(__imp__sub_83787C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787C10"))) PPC_WEAK_FUNC(sub_83787C10);
PPC_FUNC_IMPL(__imp__sub_83787C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83787C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787c38
	if (cr6.eq) goto loc_83787C38;
	// bl 0x833bbd78
	ctx.lr = 0x83787C34;
	sub_833BBD78(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_83787C38:
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83787c6c
	if (cr6.eq) goto loc_83787C6C;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x83787C4C;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83787c68
	if (cr6.gt) goto loc_83787C68;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83787C68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83787C68:
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
loc_83787C6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83787C74"))) PPC_WEAK_FUNC(sub_83787C74);
PPC_FUNC_IMPL(__imp__sub_83787C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787C78"))) PPC_WEAK_FUNC(sub_83787C78);
PPC_FUNC_IMPL(__imp__sub_83787C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-14708(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14708);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83787C84"))) PPC_WEAK_FUNC(sub_83787C84);
PPC_FUNC_IMPL(__imp__sub_83787C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787C88"))) PPC_WEAK_FUNC(sub_83787C88);
PPC_FUNC_IMPL(__imp__sub_83787C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83787C90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// li r30,10
	ctx.r30.s64 = 10;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83787CA0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787cb0
	if (cr6.eq) goto loc_83787CB0;
	// bl 0x833ecfc8
	ctx.lr = 0x83787CB0;
	sub_833ECFC8(ctx, base);
loc_83787CB0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83787ca0
	if (!cr0.eq) goto loc_83787CA0;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83787CCC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83787ccc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83787CCC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83787CDC"))) PPC_WEAK_FUNC(sub_83787CDC);
PPC_FUNC_IMPL(__imp__sub_83787CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787CE0"))) PPC_WEAK_FUNC(sub_83787CE0);
PPC_FUNC_IMPL(__imp__sub_83787CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83787CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-200
	ctx.r10.s64 = ctx.r11.s64 + -200;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83787d34
	if (cr6.eq) goto loc_83787D34;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x83787D14;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83787d30
	if (cr6.gt) goto loc_83787D30;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83787D30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83787D30:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_83787D34:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83787d68
	if (cr6.eq) goto loc_83787D68;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x83787D48;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83787d64
	if (cr6.gt) goto loc_83787D64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83787D64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83787D64:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_83787D68:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83787d9c
	if (cr6.eq) goto loc_83787D9C;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x83787D7C;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83787d98
	if (cr6.gt) goto loc_83787D98;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83787D98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83787D98:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_83787D9C:
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83787dd0
	if (cr6.eq) goto loc_83787DD0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x83787DB0;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83787dcc
	if (cr6.gt) goto loc_83787DCC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83787DCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83787DCC:
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_83787DD0:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787de4
	if (cr6.eq) goto loc_83787DE4;
	// bl 0x833bbd78
	ctx.lr = 0x83787DE0;
	sub_833BBD78(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_83787DE4:
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83787e18
	if (cr6.eq) goto loc_83787E18;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x83787DF8;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83787e14
	if (cr6.gt) goto loc_83787E14;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83787E14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83787E14:
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
loc_83787E18:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x83b445a8
	ctx.lr = 0x83787E20;
	sub_83B445A8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83787E34"))) PPC_WEAK_FUNC(sub_83787E34);
PPC_FUNC_IMPL(__imp__sub_83787E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787E38"))) PPC_WEAK_FUNC(sub_83787E38);
PPC_FUNC_IMPL(__imp__sub_83787E38) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787e88
	if (cr6.eq) goto loc_83787E88;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83787E68;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83787E80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83787E88;
	sub_82595170(ctx, base);
loc_83787E88:
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

__attribute__((alias("__imp__sub_83787E9C"))) PPC_WEAK_FUNC(sub_83787E9C);
PPC_FUNC_IMPL(__imp__sub_83787E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83787EA0"))) PPC_WEAK_FUNC(sub_83787EA0);
PPC_FUNC_IMPL(__imp__sub_83787EA0) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-14708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14708);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83787f04
	if (cr6.eq) goto loc_83787F04;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83787ED4;
	sub_82595150(ctx, base);
	// lwz r3,-14708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14708);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787ef4
	if (cr6.eq) goto loc_83787EF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83787EF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83787EF4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83787EFC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-14708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14708, ctx.r11.u32);
loc_83787F04:
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

__attribute__((alias("__imp__sub_83787F18"))) PPC_WEAK_FUNC(sub_83787F18);
PPC_FUNC_IMPL(__imp__sub_83787F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83787F20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-216
	ctx.r10.s64 = ctx.r11.s64 + -216;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825749e0
	ctx.lr = 0x83787F48;
	sub_825749E0(ctx, base);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r8,r9,-192
	ctx.r8.s64 = ctx.r9.s64 + -192;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83787fa4
	if (cr6.eq) goto loc_83787FA4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83104018
	ctx.lr = 0x83787F70;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83787fa4
	if (cr6.eq) goto loc_83787FA4;
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x83104938
	ctx.lr = 0x83787F94;
	sub_83104938(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83787fa4
	if (cr6.eq) goto loc_83787FA4;
	// bl 0x83103b18
	ctx.lr = 0x83787FA4;
	sub_83103B18(ctx, base);
loc_83787FA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83787FB0"))) PPC_WEAK_FUNC(sub_83787FB0);
PPC_FUNC_IMPL(__imp__sub_83787FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83103d60
	sub_83103D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83787FB8"))) PPC_WEAK_FUNC(sub_83787FB8);
PPC_FUNC_IMPL(__imp__sub_83787FB8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-192
	ctx.r10.s64 = ctx.r11.s64 + -192;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83787ff8
	if (cr6.eq) goto loc_83787FF8;
	// bl 0x83103e98
	ctx.lr = 0x83787FF0;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83787FF8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-32552
	ctx.r9.s64 = ctx.r11.s64 + -32552;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83788024
	if (cr6.eq) goto loc_83788024;
	// bl 0x82595188
	ctx.lr = 0x83788014;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83788024;
	sub_825952B8(ctx, base);
loc_83788024:
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

__attribute__((alias("__imp__sub_83788040"))) PPC_WEAK_FUNC(sub_83788040);
PPC_FUNC_IMPL(__imp__sub_83788040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83788048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-200
	ctx.r10.s64 = ctx.r11.s64 + -200;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x83b44968
	ctx.lr = 0x83788094;
	sub_83B44968(ctx, base);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825749e0
	ctx.lr = 0x837880A0;
	sub_825749E0(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_837880AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837880ac
	if (!cr6.eq) goto loc_837880AC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x837880CC;
	sub_83522540(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837880EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83788100
	if (cr6.eq) goto loc_83788100;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83787f18
	ctx.lr = 0x837880FC;
	sub_83787F18(ctx, base);
	// b 0x83788104
	goto loc_83788104;
loc_83788100:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83788104:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83521f50
	ctx.lr = 0x83788110;
	sub_83521F50(ctx, base);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83788158
	if (cr6.eq) goto loc_83788158;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83788160
	if (!cr6.eq) goto loc_83788160;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83788158
	if (cr6.eq) goto loc_83788158;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x83788138;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83788154
	if (cr6.gt) goto loc_83788154;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83788154;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83788154:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_83788158:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83788160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8378816C"))) PPC_WEAK_FUNC(sub_8378816C);
PPC_FUNC_IMPL(__imp__sub_8378816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83788170"))) PPC_WEAK_FUNC(sub_83788170);
PPC_FUNC_IMPL(__imp__sub_83788170) {
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
	// bl 0x83787ce0
	ctx.lr = 0x83788190;
	sub_83787CE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837881b0
	if (cr6.eq) goto loc_837881B0;
	// bl 0x82595188
	ctx.lr = 0x837881A0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837881B0;
	sub_825952B8(ctx, base);
loc_837881B0:
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

__attribute__((alias("__imp__sub_837881CC"))) PPC_WEAK_FUNC(sub_837881CC);
PPC_FUNC_IMPL(__imp__sub_837881CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837881D0"))) PPC_WEAK_FUNC(sub_837881D0);
PPC_FUNC_IMPL(__imp__sub_837881D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837881D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_837881EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837881ec
	if (!cr6.eq) goto loc_837881EC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8378820C;
	sub_83522540(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8378822C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83788244
	if (cr6.eq) goto loc_83788244;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83787f18
	ctx.lr = 0x8378823C;
	sub_83787F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83788248
	goto loc_83788248;
loc_83788244:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83788248:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83521f50
	ctx.lr = 0x83788250;
	sub_83521F50(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837882a4
	if (cr6.eq) goto loc_837882A4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83788280
	if (cr6.eq) goto loc_83788280;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83788274
	if (cr6.eq) goto loc_83788274;
	// bl 0x83103e20
	ctx.lr = 0x83788274;
	sub_83103E20(ctx, base);
loc_83788274:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83788280:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x83788288;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x837882a4
	if (cr6.gt) goto loc_837882A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837882A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837882A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837882B0"))) PPC_WEAK_FUNC(sub_837882B0);
PPC_FUNC_IMPL(__imp__sub_837882B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837882B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x837882E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83788300
	if (cr6.eq) goto loc_83788300;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83788040
	ctx.lr = 0x837882F8;
	sub_83788040(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83788300:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8378830C"))) PPC_WEAK_FUNC(sub_8378830C);
PPC_FUNC_IMPL(__imp__sub_8378830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83788310"))) PPC_WEAK_FUNC(sub_83788310);
PPC_FUNC_IMPL(__imp__sub_83788310) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x82927100
	ctx.lr = 0x8378832C;
	sub_82927100(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8378836c
	if (!cr6.eq) goto loc_8378836C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_8378834C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8378834c
	if (!cr0.eq) goto loc_8378834C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8378836C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837883e4
	if (cr6.eq) goto loc_837883E4;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-768
	ctx.r4.s64 = ctx.r11.s64 + -768;
	// addi r5,r4,-2
	ctx.r5.s64 = ctx.r4.s64 + -2;
	// bl 0x83522bf8
	ctx.lr = 0x8378838C;
	sub_83522BF8(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837883A4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837883b8
	if (cr6.eq) goto loc_837883B8;
	// bl 0x83779850
	ctx.lr = 0x837883B0;
	sub_83779850(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x837883bc
	goto loc_837883BC;
loc_837883B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_837883BC:
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x837883e0
	if (cr6.eq) goto loc_837883E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x833bca80
	ctx.lr = 0x837883DC;
	sub_833BCA80(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_837883E0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_837883E4:
	// bl 0x83521f50
	ctx.lr = 0x837883E8;
	sub_83521F50(ctx, base);
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

__attribute__((alias("__imp__sub_837883FC"))) PPC_WEAK_FUNC(sub_837883FC);
PPC_FUNC_IMPL(__imp__sub_837883FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83788400"))) PPC_WEAK_FUNC(sub_83788400);
PPC_FUNC_IMPL(__imp__sub_83788400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83788408;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x837884b4
	if (cr6.lt) goto loc_837884B4;
	// bne cr6,0x837885c4
	if (!cr6.eq) goto loc_837885C4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83788440
	if (cr6.eq) goto loc_83788440;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83103bb8
	ctx.lr = 0x83788434;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837885c4
	if (!cr6.eq) goto loc_837885C4;
loc_83788440:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83788460
	if (cr6.eq) goto loc_83788460;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83103bb8
	ctx.lr = 0x83788454;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837885c4
	if (!cr6.eq) goto loc_837885C4;
loc_83788460:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83788480
	if (cr6.eq) goto loc_83788480;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83103bb8
	ctx.lr = 0x83788474;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837885c4
	if (!cr6.eq) goto loc_837885C4;
loc_83788480:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837884ac
	if (cr6.eq) goto loc_837884AC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837885c4
	if (cr6.eq) goto loc_837885C4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837884ac
	if (!cr6.eq) goto loc_837884AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83787c10
	ctx.lr = 0x837884AC;
	sub_83787C10(ctx, base);
loc_837884AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x837885c0
	goto loc_837885C0;
loc_837884B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83103bb8
	ctx.lr = 0x837884C0;
	sub_83103BB8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837885c4
	if (!cr6.eq) goto loc_837885C4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83103f48
	ctx.lr = 0x837884D8;
	sub_83103F48(ctx, base);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837884F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83788510;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x833ec928
	ctx.lr = 0x83788524;
	sub_833EC928(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8378853c
	if (cr6.eq) goto loc_8378853C;
	// bl 0x82572f50
	ctx.lr = 0x83788534;
	sub_82572F50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8378853C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837881d0
	ctx.lr = 0x8378854C;
	sub_837881D0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837881d0
	ctx.lr = 0x83788560;
	sub_837881D0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82927068
	ctx.lr = 0x8378856C;
	sub_82927068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x837881d0
	ctx.lr = 0x8378857C;
	sub_837881D0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83788310
	ctx.lr = 0x83788588;
	sub_83788310(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837885bc
	if (!cr6.eq) goto loc_837885BC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837885bc
	if (!cr6.eq) goto loc_837885BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837885bc
	if (!cr6.eq) goto loc_837885BC;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x837885c0
	if (cr6.eq) goto loc_837885C0;
loc_837885BC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837885C0:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_837885C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837885DC"))) PPC_WEAK_FUNC(sub_837885DC);
PPC_FUNC_IMPL(__imp__sub_837885DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837885E0"))) PPC_WEAK_FUNC(sub_837885E0);
PPC_FUNC_IMPL(__imp__sub_837885E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837885E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837886d4
	if (!cr6.eq) goto loc_837886D4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83103e20
	ctx.lr = 0x83788608;
	sub_83103E20(ctx, base);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83788624;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8378863C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x833ec928
	ctx.lr = 0x83788650;
	sub_833EC928(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83788688
	if (cr6.eq) goto loc_83788688;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x83788664;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83788680
	if (cr6.gt) goto loc_83788680;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83788680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83788680:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83788688:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837881d0
	ctx.lr = 0x83788698;
	sub_837881D0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837881d0
	ctx.lr = 0x837886AC;
	sub_837881D0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82927068
	ctx.lr = 0x837886B8;
	sub_82927068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x837881d0
	ctx.lr = 0x837886C8;
	sub_837881D0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83788310
	ctx.lr = 0x837886D4;
	sub_83788310(ctx, base);
loc_837886D4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837886E4"))) PPC_WEAK_FUNC(sub_837886E4);
PPC_FUNC_IMPL(__imp__sub_837886E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837886E8"))) PPC_WEAK_FUNC(sub_837886E8);
PPC_FUNC_IMPL(__imp__sub_837886E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837886F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r30,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83788728
	if (cr0.eq) goto loc_83788728;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83788710:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x833ecbd8
	ctx.lr = 0x8378871C;
	sub_833ECBD8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x83788710
	if (!cr0.eq) goto loc_83788710;
loc_83788728:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83788758
	if (cr6.eq) goto loc_83788758;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x83788750;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83788758:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83788760"))) PPC_WEAK_FUNC(sub_83788760);
PPC_FUNC_IMPL(__imp__sub_83788760) {
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
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83788784;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837887d0
	if (cr6.eq) goto loc_837887D0;
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r8,r10,-176
	ctx.r8.s64 = ctx.r10.s64 + -176;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_837887C4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x837887c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837887C4;
	// b 0x837887d4
	goto loc_837887D4;
loc_837887D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837887D4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stw r3,-14708(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837887EC"))) PPC_WEAK_FUNC(sub_837887EC);
PPC_FUNC_IMPL(__imp__sub_837887EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837887F0"))) PPC_WEAK_FUNC(sub_837887F0);
PPC_FUNC_IMPL(__imp__sub_837887F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837887F8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce778
	ctx.lr = 0x83788800;
	__savefpr_28(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x837886e8
	ctx.lr = 0x83788810;
	sub_837886E8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83787c88
	ctx.lr = 0x83788818;
	sub_83787C88(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x8378881C;
	sub_83572958(ctx, base);
	// bl 0x833ed548
	ctx.lr = 0x83788820;
	sub_833ED548(ctx, base);
	// addi r29,r26,20
	ctx.r29.s64 = ctx.r26.s64 + 20;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_83788830:
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// beq cr6,0x83788848
	if (cr6.eq) goto loc_83788848;
	// bl 0x83572958
	ctx.lr = 0x8378883C;
	sub_83572958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833eef90
	ctx.lr = 0x83788844;
	sub_833EEF90(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_83788848:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x83788830
	if (cr6.lt) goto loc_83788830;
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// stb r25,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r25.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r25,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r25.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r25,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r25.u8);
	// stb r25,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r25.u8);
	// stb r25,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r25.u8);
	// stb r25,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// beq cr6,0x83788890
	if (cr6.eq) goto loc_83788890;
	// stb r25,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r25.u8);
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
loc_83788890:
	// addi r31,r24,40
	ctx.r31.s64 = ctx.r24.s64 + 40;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43db8
	ctx.lr = 0x837888A0;
	sub_83B43DB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833ef060
	ctx.lr = 0x837888A8;
	sub_833EF060(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x833ef058
	ctx.lr = 0x837888BC;
	sub_833EF058(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833ef2d0
	ctx.lr = 0x837888C8;
	sub_833EF2D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef2e8
	ctx.lr = 0x837888E0;
	sub_833EF2E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833ecbd8
	ctx.lr = 0x837888E8;
	sub_833ECBD8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,72(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r9,68(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r25,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r25.u64);
	// std r25,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r25.u64);
	// srawi. r29,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x837889d4
	if (cr0.eq) goto loc_837889D4;
loc_8378890C:
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b441b0
	ctx.lr = 0x83788920;
	sub_83B441B0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44208
	ctx.lr = 0x83788930;
	sub_83B44208(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44250
	ctx.lr = 0x83788940;
	sub_83B44250(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44290
	ctx.lr = 0x83788954;
	sub_83B44290(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x833ef060
	ctx.lr = 0x8378895C;
	sub_833EF060(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,36(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x833ef058
	ctx.lr = 0x83788970;
	sub_833EF058(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833ef2d0
	ctx.lr = 0x8378897C;
	sub_833EF2D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f4,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef2e8
	ctx.lr = 0x83788994;
	sub_833EF2E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x833ef480
	ctx.lr = 0x837889A4;
	sub_833EF480(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x833ef3a0
	ctx.lr = 0x837889B0;
	sub_833EF3A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef528
	ctx.lr = 0x837889C0;
	sub_833EF528(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833ecbd8
	ctx.lr = 0x837889C8;
	sub_833ECBD8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8378890c
	if (cr6.lt) goto loc_8378890C;
loc_837889D4:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
	// std r25,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r25.u64);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// std r25,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r25.u64);
	// srawi. r29,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r5.s32 >> 2;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// std r25,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r25.u64);
	// std r25,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r25.u64);
	// std r25,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r25.u64);
	// std r25,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r25.u64);
	// stw r25,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r25.u32);
	// stw r25,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r25.u32);
	// beq 0x83788b44
	if (cr0.eq) goto loc_83788B44;
loc_83788A1C:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b442c8
	ctx.lr = 0x83788A2C;
	sub_83B442C8(ctx, base);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44308
	ctx.lr = 0x83788A3C;
	sub_83B44308(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44348
	ctx.lr = 0x83788A4C;
	sub_83B44348(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44390
	ctx.lr = 0x83788A5C;
	sub_83B44390(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b443d8
	ctx.lr = 0x83788A6C;
	sub_83B443D8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44418
	ctx.lr = 0x83788A7C;
	sub_83B44418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44458
	ctx.lr = 0x83788A88;
	sub_83B44458(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x833ef060
	ctx.lr = 0x83788A94;
	sub_833EF060(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,32(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x833ef058
	ctx.lr = 0x83788AA8;
	sub_833EF058(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833ef2d0
	ctx.lr = 0x83788AB4;
	sub_833EF2D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x833ef408
	ctx.lr = 0x83788AC0;
	sub_833EF408(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x833ef3a0
	ctx.lr = 0x83788ACC;
	sub_833EF3A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f4,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef2e8
	ctx.lr = 0x83788AE4;
	sub_833EF2E8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f4,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef6a8
	ctx.lr = 0x83788AFC;
	sub_833EF6A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f3,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef720
	ctx.lr = 0x83788B10;
	sub_833EF720(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f3,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef798
	ctx.lr = 0x83788B24;
	sub_833EF798(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x833ef2d8
	ctx.lr = 0x83788B30;
	sub_833EF2D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833ecbd8
	ctx.lr = 0x83788B38;
	sub_833ECBD8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x83788a1c
	if (cr6.lt) goto loc_83788A1C;
loc_83788B44:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// srawi. r28,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 2;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lfs f29,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
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
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq 0x83788c50
	if (cr0.eq) goto loc_83788C50;
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
loc_83788B84:
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44170
	ctx.lr = 0x83788B94;
	sub_83B44170(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b440f8
	ctx.lr = 0x83788BA4;
	sub_83B440F8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44140
	ctx.lr = 0x83788BB4;
	sub_83B44140(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x833ef060
	ctx.lr = 0x83788BBC;
	sub_833EF060(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x833ef058
	ctx.lr = 0x83788BD4;
	sub_833EF058(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833ef2d0
	ctx.lr = 0x83788BE0;
	sub_833EF2D0(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f0,f11
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// bl 0x833ef2e8
	ctx.lr = 0x83788C0C;
	sub_833EF2E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x833ef3a0
	ctx.lr = 0x83788C18;
	sub_833EF3A0(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x833ef2d8
	ctx.lr = 0x83788C28;
	sub_833EF2D8(ctx, base);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x833ef2e0
	ctx.lr = 0x83788C38;
	sub_833EF2E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835977d8
	ctx.lr = 0x83788C44;
	sub_835977D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x83788b84
	if (cr6.lt) goto loc_83788B84;
loc_83788C50:
	// lwz r30,16(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83788c98
	if (cr6.eq) goto loc_83788C98;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x833ef060
	ctx.lr = 0x83788C64;
	sub_833EF060(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x833ef058
	ctx.lr = 0x83788C78;
	sub_833EF058(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833ef2d0
	ctx.lr = 0x83788C84;
	sub_833EF2D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833ef838
	ctx.lr = 0x83788C90;
	sub_833EF838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833ecbd8
	ctx.lr = 0x83788C98;
	sub_833ECBD8(ctx, base);
loc_83788C98:
	// lwz r30,20(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83788d14
	if (cr6.eq) goto loc_83788D14;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x83b440a0
	ctx.lr = 0x83788CC0;
	sub_83B440A0(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x833ef060
	ctx.lr = 0x83788CC8;
	sub_833EF060(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x833ef058
	ctx.lr = 0x83788CDC;
	sub_833EF058(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833ef2d0
	ctx.lr = 0x83788CE8;
	sub_833EF2D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833ef838
	ctx.lr = 0x83788CF4;
	sub_833EF838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f4,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef2e8
	ctx.lr = 0x83788D0C;
	sub_833EF2E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833ecbd8
	ctx.lr = 0x83788D14;
	sub_833ECBD8(ctx, base);
loc_83788D14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82927100
	ctx.lr = 0x83788D1C;
	sub_82927100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b440c8
	ctx.lr = 0x83788D2C;
	sub_83B440C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b440e8
	ctx.lr = 0x83788D38;
	sub_83B440E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r30,28(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// beq cr6,0x83788da8
	if (cr6.eq) goto loc_83788DA8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83788da8
	if (cr6.eq) goto loc_83788DA8;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x833ef060
	ctx.lr = 0x83788D5C;
	sub_833EF060(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x833ef058
	ctx.lr = 0x83788D70;
	sub_833EF058(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833ef2d0
	ctx.lr = 0x83788D7C;
	sub_833EF2D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833ef598
	ctx.lr = 0x83788D88;
	sub_833EF598(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// bl 0x833ef408
	ctx.lr = 0x83788D94;
	sub_833EF408(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef5f0
	ctx.lr = 0x83788DA0;
	sub_833EF5F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833ecbd8
	ctx.lr = 0x83788DA8;
	sub_833ECBD8(ctx, base);
loc_83788DA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43de0
	ctx.lr = 0x83788DB0;
	sub_83B43DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83788dd0
	if (cr6.eq) goto loc_83788DD0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43df0
	ctx.lr = 0x83788DC8;
	sub_83B43DF0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x833ef810
	ctx.lr = 0x83788DD0;
	sub_833EF810(ctx, base);
loc_83788DD0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43e10
	ctx.lr = 0x83788DDC;
	sub_83B43E10(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r11,-324
	ctx.r30.s64 = ctx.r11.s64 + -324;
	// addi r4,r30,-424
	ctx.r4.s64 = ctx.r30.s64 + -424;
	// addi r3,r30,-412
	ctx.r3.s64 = ctx.r30.s64 + -412;
	// bl 0x833c7fc8
	ctx.lr = 0x83788DF4;
	sub_833C7FC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r30,-388
	ctx.r4.s64 = ctx.r30.s64 + -388;
	// addi r3,r30,-376
	ctx.r3.s64 = ctx.r30.s64 + -376;
	// lfs f1,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833c7fc8
	ctx.lr = 0x83788E08;
	sub_833C7FC8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43e20
	ctx.lr = 0x83788E14;
	sub_83B43E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83574ae8
	ctx.lr = 0x83788E1C;
	sub_83574AE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x833ef818
	ctx.lr = 0x83788E28;
	sub_833EF818(ctx, base);
	// addi r4,r30,-352
	ctx.r4.s64 = ctx.r30.s64 + -352;
	// addi r3,r30,-336
	ctx.r3.s64 = ctx.r30.s64 + -336;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x833c7f20
	ctx.lr = 0x83788E38;
	sub_833C7F20(ctx, base);
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43e40
	ctx.lr = 0x83788E58;
	sub_83B43E40(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43e50
	ctx.lr = 0x83788E68;
	sub_83B43E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43e68
	ctx.lr = 0x83788E70;
	sub_83B43E68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43ef0
	ctx.lr = 0x83788E80;
	sub_83B43EF0(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43f00
	ctx.lr = 0x83788E8C;
	sub_83B43F00(ctx, base);
	// addi r4,r30,-316
	ctx.r4.s64 = ctx.r30.s64 + -316;
	// addi r3,r30,-308
	ctx.r3.s64 = ctx.r30.s64 + -308;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x833c7e78
	ctx.lr = 0x83788E9C;
	sub_833C7E78(ctx, base);
	// addi r4,r30,-280
	ctx.r4.s64 = ctx.r30.s64 + -280;
	// addi r3,r30,-264
	ctx.r3.s64 = ctx.r30.s64 + -264;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833c7fc8
	ctx.lr = 0x83788EAC;
	sub_833C7FC8(ctx, base);
	// addi r4,r30,-236
	ctx.r4.s64 = ctx.r30.s64 + -236;
	// addi r3,r30,-220
	ctx.r3.s64 = ctx.r30.s64 + -220;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833c7fc8
	ctx.lr = 0x83788EBC;
	sub_833C7FC8(ctx, base);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83788f08
	if (cr6.eq) goto loc_83788F08;
loc_83788EC8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43ec8
	ctx.lr = 0x83788ED4;
	sub_83B43EC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83788efc
	if (cr6.eq) goto loc_83788EFC;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43e78
	ctx.lr = 0x83788EF0;
	sub_83B43E78(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833ef820
	ctx.lr = 0x83788EFC;
	sub_833EF820(ctx, base);
loc_83788EFC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// blt cr6,0x83788ec8
	if (cr6.lt) goto loc_83788EC8;
loc_83788F08:
	// lfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef828
	ctx.lr = 0x83788F10;
	sub_833EF828(ctx, base);
	// lfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef830
	ctx.lr = 0x83788F18;
	sub_833EF830(ctx, base);
	// lwz r3,24(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83788f28
	if (cr6.eq) goto loc_83788F28;
	// bl 0x833ef898
	ctx.lr = 0x83788F28;
	sub_833EF898(ctx, base);
loc_83788F28:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f29,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f30,14612(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14612);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3976);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23848(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23848);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x83b43f10
	ctx.lr = 0x83788F6C;
	sub_83B43F10(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43f30
	ctx.lr = 0x83788F78;
	sub_83B43F30(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43f40
	ctx.lr = 0x83788F84;
	sub_83B43F40(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43f50
	ctx.lr = 0x83788F90;
	sub_83B43F50(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43f60
	ctx.lr = 0x83788FA0;
	sub_83B43F60(ctx, base);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x83788fb4
	if (!cr6.eq) goto loc_83788FB4;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
loc_83788FB4:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x83788fc4
	if (!cr6.eq) goto loc_83788FC4;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_83788FC4:
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// addi r3,r30,-180
	ctx.r3.s64 = ctx.r30.s64 + -180;
	// bl 0x833c7fc8
	ctx.lr = 0x83788FD0;
	sub_833C7FC8(ctx, base);
	// addi r4,r30,-156
	ctx.r4.s64 = ctx.r30.s64 + -156;
	// addi r3,r30,-140
	ctx.r3.s64 = ctx.r30.s64 + -140;
	// lfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833c7fc8
	ctx.lr = 0x83788FE0;
	sub_833C7FC8(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// addi r3,r30,-108
	ctx.r3.s64 = ctx.r30.s64 + -108;
	// stfd f13,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x833c7e78
	ctx.lr = 0x83788FFC;
	sub_833C7E78(ctx, base);
	// lfs f12,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// addi r3,r30,-72
	ctx.r3.s64 = ctx.r30.s64 + -72;
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x833c7e78
	ctx.lr = 0x83789018;
	sub_833C7E78(ctx, base);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// addi r3,r30,-36
	ctx.r3.s64 = ctx.r30.s64 + -36;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833c7fc8
	ctx.lr = 0x83789028;
	sub_833C7FC8(ctx, base);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833c7fc8
	ctx.lr = 0x83789038;
	sub_833C7FC8(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x8378903C;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83789058
	if (cr6.eq) goto loc_83789058;
	// lfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x8378b870
	ctx.lr = 0x83789050;
	sub_8378B870(ctx, base);
	// stfs f28,2352(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2352, temp.u32);
	// stfs f30,2356(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2356, temp.u32);
loc_83789058:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x83b43f78
	ctx.lr = 0x83789068;
	sub_83B43F78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43f80
	ctx.lr = 0x8378907C;
	sub_83B43F80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833c7da8
	ctx.lr = 0x83789084;
	sub_833C7DA8(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x837890a0
	if (cr6.lt) goto loc_837890A0;
	// lfs f2,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// blt cr6,0x837890a0
	if (cr6.lt) goto loc_837890A0;
	// bl 0x833c7e08
	ctx.lr = 0x837890A0;
	sub_833C7E08(ctx, base);
loc_837890A0:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x83b43fa8
	ctx.lr = 0x837890C4;
	sub_83B43FA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43fd0
	ctx.lr = 0x837890D0;
	sub_83B43FD0(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43fe0
	ctx.lr = 0x837890DC;
	sub_83B43FE0(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x833ef060
	ctx.lr = 0x837890E4;
	sub_833EF060(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x833ef058
	ctx.lr = 0x837890F8;
	sub_833EF058(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833ef2d0
	ctx.lr = 0x83789104;
	sub_833EF2D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef2e8
	ctx.lr = 0x8378911C;
	sub_833EF2E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef5f0
	ctx.lr = 0x83789128;
	sub_833EF5F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ef650
	ctx.lr = 0x83789134;
	sub_833EF650(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833ecbd8
	ctx.lr = 0x8378913C;
	sub_833ECBD8(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43ff0
	ctx.lr = 0x8378914C;
	sub_83B43FF0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44078
	ctx.lr = 0x83789158;
	sub_83B44078(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44000
	ctx.lr = 0x83789164;
	sub_83B44000(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44028
	ctx.lr = 0x83789170;
	sub_83B44028(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44050
	ctx.lr = 0x8378917C;
	sub_83B44050(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x833c7ba8
	ctx.lr = 0x83789184;
	sub_833C7BA8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x833c7d40
	ctx.lr = 0x8378918C;
	sub_833C7D40(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x833c7c08
	ctx.lr = 0x83789194;
	sub_833C7C08(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x833c7c70
	ctx.lr = 0x8378919C;
	sub_833C7C70(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x833c7cd8
	ctx.lr = 0x837891A4;
	sub_833C7CD8(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c4
	ctx.lr = 0x837891B0;
	__restfpr_28(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837891B4"))) PPC_WEAK_FUNC(sub_837891B4);
PPC_FUNC_IMPL(__imp__sub_837891B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837891B8"))) PPC_WEAK_FUNC(sub_837891B8);
PPC_FUNC_IMPL(__imp__sub_837891B8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825749e0
	ctx.lr = 0x837891E0;
	sub_825749E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83788400
	ctx.lr = 0x837891E8;
	sub_83788400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837891fc
	if (cr6.eq) goto loc_837891FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837885e0
	ctx.lr = 0x837891FC;
	sub_837885E0(ctx, base);
loc_837891FC:
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x835977d8
	ctx.lr = 0x83789208;
	sub_835977D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x837887f0
	ctx.lr = 0x83789214;
	sub_837887F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8378922C"))) PPC_WEAK_FUNC(sub_8378922C);
PPC_FUNC_IMPL(__imp__sub_8378922C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83789230"))) PPC_WEAK_FUNC(sub_83789230);
PPC_FUNC_IMPL(__imp__sub_83789230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83789238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r3,60
	ctx.r31.s64 = ctx.r3.s64 + 60;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8378926c
	if (!cr6.eq) goto loc_8378926C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8378926C:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r30,-4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x8378927C;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83789298
	if (cr6.gt) goto loc_83789298;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83789298;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83789298:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837892b0
	if (cr6.eq) goto loc_837892B0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_837892B0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837892e4
	if (cr6.eq) goto loc_837892E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x837892e4
	if (cr6.eq) goto loc_837892E4;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x837887f0
	ctx.lr = 0x837892E4;
	sub_837887F0(ctx, base);
loc_837892E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837892F0"))) PPC_WEAK_FUNC(sub_837892F0);
PPC_FUNC_IMPL(__imp__sub_837892F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837892F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-176
	ctx.r10.s64 = ctx.r11.s64 + -176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x837886e8
	ctx.lr = 0x83789310;
	sub_837886E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83787c88
	ctx.lr = 0x83789318;
	sub_83787C88(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x8378931C;
	sub_83572958(ctx, base);
	// bl 0x833ed548
	ctx.lr = 0x83789320;
	sub_833ED548(ctx, base);
loc_83789320:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83789230
	ctx.lr = 0x8378932C;
	sub_83789230(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83789320
	if (!cr6.eq) goto loc_83789320;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83789384
	if (cr6.eq) goto loc_83789384;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83789360;
	sub_82595150(ctx, base);
	// lwz r29,76(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82595188
	ctx.lr = 0x83789368;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83789378;
	sub_825952B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83789380;
	sub_82595170(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_83789384:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837893a0
	if (cr6.eq) goto loc_837893A0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x837893A0;
	sub_825952B8(ctx, base);
loc_837893A0:
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837893c4
	if (cr6.eq) goto loc_837893C4;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x837893C4;
	sub_825952B8(ctx, base);
loc_837893C4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837893D8"))) PPC_WEAK_FUNC(sub_837893D8);
PPC_FUNC_IMPL(__imp__sub_837893D8) {
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
	// bl 0x837892f0
	ctx.lr = 0x837893F8;
	sub_837892F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83789418
	if (cr6.eq) goto loc_83789418;
	// bl 0x82595188
	ctx.lr = 0x83789408;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83789418;
	sub_825952B8(ctx, base);
loc_83789418:
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

__attribute__((alias("__imp__sub_83789434"))) PPC_WEAK_FUNC(sub_83789434);
PPC_FUNC_IMPL(__imp__sub_83789434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83789438"))) PPC_WEAK_FUNC(sub_83789438);
PPC_FUNC_IMPL(__imp__sub_83789438) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,600
	ctx.r10.s64 = ctx.r11.s64 + 600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83103f60
	ctx.lr = 0x83789464;
	sub_83103F60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83789484
	if (cr6.eq) goto loc_83789484;
	// bl 0x82595188
	ctx.lr = 0x83789474;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83789484;
	sub_825952B8(ctx, base);
loc_83789484:
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

__attribute__((alias("__imp__sub_837894A0"))) PPC_WEAK_FUNC(sub_837894A0);
PPC_FUNC_IMPL(__imp__sub_837894A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r6,60
	ctx.r6.s64 = 60;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stb r11,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r11.u8);
	// stb r10,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r10.u8);
	// stb r11,47(r3)
	PPC_STORE_U8(ctx.r3.u32 + 47, ctx.r11.u8);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stb r11,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r11.u8);
	// stb r10,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r10.u8);
	// stb r11,59(r3)
	PPC_STORE_U8(ctx.r3.u32 + 59, ctx.r11.u8);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stb r11,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r11.u8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// stb r11,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r11.u8);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// stw r6,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r6.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r5,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r5.u32);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// stw r9,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r9.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r4,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r4.u32);
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// stb r11,145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 145, ctx.r11.u8);
	// stb r10,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, ctx.r10.u8);
	// stb r11,147(r3)
	PPC_STORE_U8(ctx.r3.u32 + 147, ctx.r11.u8);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r8,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// stb r11,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r11.u8);
	// stb r11,157(r3)
	PPC_STORE_U8(ctx.r3.u32 + 157, ctx.r11.u8);
	// stb r10,158(r3)
	PPC_STORE_U8(ctx.r3.u32 + 158, ctx.r10.u8);
	// stb r11,159(r3)
	PPC_STORE_U8(ctx.r3.u32 + 159, ctx.r11.u8);
	// stb r11,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r11.u8);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stb r11,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r11.u8);
	// stb r11,169(r3)
	PPC_STORE_U8(ctx.r3.u32 + 169, ctx.r11.u8);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r8,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r8.u32);
	// stw r8,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r8.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r8,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r8.u32);
	// stb r11,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r11.u8);
	// stb r11,193(r3)
	PPC_STORE_U8(ctx.r3.u32 + 193, ctx.r11.u8);
	// stb r11,194(r3)
	PPC_STORE_U8(ctx.r3.u32 + 194, ctx.r11.u8);
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// stb r11,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r11.u8);
	// stw r6,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r6.u32);
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r5,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r5.u32);
	// stw r9,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r9.u32);
	// stw r9,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r9.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r4,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r4.u32);
	// stb r11,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r11.u8);
	// stb r11,245(r3)
	PPC_STORE_U8(ctx.r3.u32 + 245, ctx.r11.u8);
	// stb r10,246(r3)
	PPC_STORE_U8(ctx.r3.u32 + 246, ctx.r10.u8);
	// stb r11,247(r3)
	PPC_STORE_U8(ctx.r3.u32 + 247, ctx.r11.u8);
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r8,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r8.u32);
	// stb r11,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r11.u8);
	// stb r11,257(r3)
	PPC_STORE_U8(ctx.r3.u32 + 257, ctx.r11.u8);
	// stb r10,258(r3)
	PPC_STORE_U8(ctx.r3.u32 + 258, ctx.r10.u8);
	// stb r11,259(r3)
	PPC_STORE_U8(ctx.r3.u32 + 259, ctx.r11.u8);
	// stb r11,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r11.u8);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stb r11,268(r3)
	PPC_STORE_U8(ctx.r3.u32 + 268, ctx.r11.u8);
	// stb r11,269(r3)
	PPC_STORE_U8(ctx.r3.u32 + 269, ctx.r11.u8);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r8,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r8.u32);
	// stw r8,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r8.u32);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r8,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r8.u32);
	// stb r11,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r11.u8);
	// stb r11,293(r3)
	PPC_STORE_U8(ctx.r3.u32 + 293, ctx.r11.u8);
	// stb r11,294(r3)
	PPC_STORE_U8(ctx.r3.u32 + 294, ctx.r11.u8);
	// stw r10,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r10.u32);
	// stb r11,300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 300, ctx.r11.u8);
	// stw r6,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r6.u32);
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stw r5,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r5.u32);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// stw r5,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r5.u32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r4,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r4.u32);
	// stb r11,344(r3)
	PPC_STORE_U8(ctx.r3.u32 + 344, ctx.r11.u8);
	// stb r11,345(r3)
	PPC_STORE_U8(ctx.r3.u32 + 345, ctx.r11.u8);
	// stb r10,346(r3)
	PPC_STORE_U8(ctx.r3.u32 + 346, ctx.r10.u8);
	// stb r11,347(r3)
	PPC_STORE_U8(ctx.r3.u32 + 347, ctx.r11.u8);
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r11.u32);
	// stw r8,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r8.u32);
	// stb r11,356(r3)
	PPC_STORE_U8(ctx.r3.u32 + 356, ctx.r11.u8);
	// stb r11,357(r3)
	PPC_STORE_U8(ctx.r3.u32 + 357, ctx.r11.u8);
	// stb r10,358(r3)
	PPC_STORE_U8(ctx.r3.u32 + 358, ctx.r10.u8);
	// stb r11,359(r3)
	PPC_STORE_U8(ctx.r3.u32 + 359, ctx.r11.u8);
	// stb r11,360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 360, ctx.r11.u8);
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// stb r11,368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 368, ctx.r11.u8);
	// stb r11,369(r3)
	PPC_STORE_U8(ctx.r3.u32 + 369, ctx.r11.u8);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// stw r8,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r8.u32);
	// stw r8,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r8.u32);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// stw r8,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r8.u32);
	// stb r11,392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 392, ctx.r11.u8);
	// stb r11,393(r3)
	PPC_STORE_U8(ctx.r3.u32 + 393, ctx.r11.u8);
	// stb r11,394(r3)
	PPC_STORE_U8(ctx.r3.u32 + 394, ctx.r11.u8);
	// stw r10,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r10.u32);
	// stb r11,400(r3)
	PPC_STORE_U8(ctx.r3.u32 + 400, ctx.r11.u8);
	// stw r6,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r6.u32);
	// stw r10,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r10.u32);
	// stw r11,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r11.u32);
	// stw r11,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r11.u32);
	// stw r11,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r11.u32);
	// stw r5,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r5.u32);
	// stw r9,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r9.u32);
	// stw r9,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r9.u32);
	// stw r11,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r11.u32);
	// stw r4,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r4.u32);
	// stb r11,444(r3)
	PPC_STORE_U8(ctx.r3.u32 + 444, ctx.r11.u8);
	// stb r11,445(r3)
	PPC_STORE_U8(ctx.r3.u32 + 445, ctx.r11.u8);
	// stb r10,446(r3)
	PPC_STORE_U8(ctx.r3.u32 + 446, ctx.r10.u8);
	// stb r11,447(r3)
	PPC_STORE_U8(ctx.r3.u32 + 447, ctx.r11.u8);
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// stw r8,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r8.u32);
	// stb r11,456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 456, ctx.r11.u8);
	// stb r11,457(r3)
	PPC_STORE_U8(ctx.r3.u32 + 457, ctx.r11.u8);
	// stb r10,458(r3)
	PPC_STORE_U8(ctx.r3.u32 + 458, ctx.r10.u8);
	// stb r11,459(r3)
	PPC_STORE_U8(ctx.r3.u32 + 459, ctx.r11.u8);
	// stb r11,460(r3)
	PPC_STORE_U8(ctx.r3.u32 + 460, ctx.r11.u8);
	// stw r11,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// stb r11,468(r3)
	PPC_STORE_U8(ctx.r3.u32 + 468, ctx.r11.u8);
	// stb r11,469(r3)
	PPC_STORE_U8(ctx.r3.u32 + 469, ctx.r11.u8);
	// stw r11,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// stw r8,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r8.u32);
	// stw r8,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r8.u32);
	// stw r11,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r11.u32);
	// stw r8,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r8.u32);
	// stb r11,492(r3)
	PPC_STORE_U8(ctx.r3.u32 + 492, ctx.r11.u8);
	// stb r11,493(r3)
	PPC_STORE_U8(ctx.r3.u32 + 493, ctx.r11.u8);
	// stb r11,494(r3)
	PPC_STORE_U8(ctx.r3.u32 + 494, ctx.r11.u8);
	// stw r10,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r10.u32);
	// stb r11,500(r3)
	PPC_STORE_U8(ctx.r3.u32 + 500, ctx.r11.u8);
	// stw r6,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r6.u32);
	// stw r10,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r10.u32);
	// stw r11,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r11.u32);
	// stw r5,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r5.u32);
	// stw r11,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r11.u32);
	// stw r5,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r5.u32);
	// stw r9,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r9.u32);
	// stw r5,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r5.u32);
	// stw r11,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r11.u32);
	// stw r4,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r4.u32);
	// stb r11,544(r3)
	PPC_STORE_U8(ctx.r3.u32 + 544, ctx.r11.u8);
	// stb r11,545(r3)
	PPC_STORE_U8(ctx.r3.u32 + 545, ctx.r11.u8);
	// stb r10,546(r3)
	PPC_STORE_U8(ctx.r3.u32 + 546, ctx.r10.u8);
	// stb r11,547(r3)
	PPC_STORE_U8(ctx.r3.u32 + 547, ctx.r11.u8);
	// stw r11,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r11.u32);
	// stw r8,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r8.u32);
	// stb r11,556(r3)
	PPC_STORE_U8(ctx.r3.u32 + 556, ctx.r11.u8);
	// stb r11,557(r3)
	PPC_STORE_U8(ctx.r3.u32 + 557, ctx.r11.u8);
	// stb r11,558(r3)
	PPC_STORE_U8(ctx.r3.u32 + 558, ctx.r11.u8);
	// stb r11,559(r3)
	PPC_STORE_U8(ctx.r3.u32 + 559, ctx.r11.u8);
	// stb r11,560(r3)
	PPC_STORE_U8(ctx.r3.u32 + 560, ctx.r11.u8);
	// stw r11,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r11.u32);
	// stb r11,568(r3)
	PPC_STORE_U8(ctx.r3.u32 + 568, ctx.r11.u8);
	// stb r11,569(r3)
	PPC_STORE_U8(ctx.r3.u32 + 569, ctx.r11.u8);
	// stw r11,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r11.u32);
	// stw r8,576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 576, ctx.r8.u32);
	// stw r8,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, ctx.r8.u32);
	// stw r11,584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 584, ctx.r11.u32);
	// stw r8,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r8.u32);
	// stb r11,592(r3)
	PPC_STORE_U8(ctx.r3.u32 + 592, ctx.r11.u8);
	// stb r11,593(r3)
	PPC_STORE_U8(ctx.r3.u32 + 593, ctx.r11.u8);
	// stb r11,594(r3)
	PPC_STORE_U8(ctx.r3.u32 + 594, ctx.r11.u8);
	// stw r10,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r10.u32);
	// stb r11,600(r3)
	PPC_STORE_U8(ctx.r3.u32 + 600, ctx.r11.u8);
	// stw r6,604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 604, ctx.r6.u32);
	// stw r10,608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 608, ctx.r10.u32);
	// stw r10,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r10.u32);
	// stw r11,616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 616, ctx.r11.u32);
	// stw r9,620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 620, ctx.r9.u32);
	// stw r5,624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 624, ctx.r5.u32);
	// stw r9,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, ctx.r9.u32);
	// stw r9,632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 632, ctx.r9.u32);
	// stw r11,636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 636, ctx.r11.u32);
	// stw r4,640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 640, ctx.r4.u32);
	// stb r11,644(r3)
	PPC_STORE_U8(ctx.r3.u32 + 644, ctx.r11.u8);
	// stb r11,645(r3)
	PPC_STORE_U8(ctx.r3.u32 + 645, ctx.r11.u8);
	// stb r10,646(r3)
	PPC_STORE_U8(ctx.r3.u32 + 646, ctx.r10.u8);
	// stb r11,647(r3)
	PPC_STORE_U8(ctx.r3.u32 + 647, ctx.r11.u8);
	// stw r11,648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 648, ctx.r11.u32);
	// stw r8,652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 652, ctx.r8.u32);
	// stb r11,656(r3)
	PPC_STORE_U8(ctx.r3.u32 + 656, ctx.r11.u8);
	// stb r11,657(r3)
	PPC_STORE_U8(ctx.r3.u32 + 657, ctx.r11.u8);
	// stb r10,658(r3)
	PPC_STORE_U8(ctx.r3.u32 + 658, ctx.r10.u8);
	// stb r11,659(r3)
	PPC_STORE_U8(ctx.r3.u32 + 659, ctx.r11.u8);
	// stb r11,660(r3)
	PPC_STORE_U8(ctx.r3.u32 + 660, ctx.r11.u8);
	// stw r11,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r11.u32);
	// stb r11,668(r3)
	PPC_STORE_U8(ctx.r3.u32 + 668, ctx.r11.u8);
	// stb r11,669(r3)
	PPC_STORE_U8(ctx.r3.u32 + 669, ctx.r11.u8);
	// stw r11,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
	// stw r8,676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 676, ctx.r8.u32);
	// stw r8,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r8.u32);
	// stw r11,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r11.u32);
	// stw r8,688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 688, ctx.r8.u32);
	// stb r11,692(r3)
	PPC_STORE_U8(ctx.r3.u32 + 692, ctx.r11.u8);
	// stb r11,693(r3)
	PPC_STORE_U8(ctx.r3.u32 + 693, ctx.r11.u8);
	// stb r11,694(r3)
	PPC_STORE_U8(ctx.r3.u32 + 694, ctx.r11.u8);
	// stw r10,696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 696, ctx.r10.u32);
	// stb r11,700(r3)
	PPC_STORE_U8(ctx.r3.u32 + 700, ctx.r11.u8);
	// li r7,30
	ctx.r7.s64 = 30;
	// stw r6,704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 704, ctx.r6.u32);
	// stw r10,708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 708, ctx.r10.u32);
	// stw r11,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r11.u32);
	// stw r5,716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 716, ctx.r5.u32);
	// stw r9,720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 720, ctx.r9.u32);
	// stw r5,724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 724, ctx.r5.u32);
	// stw r9,728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 728, ctx.r9.u32);
	// stw r9,732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 732, ctx.r9.u32);
	// stw r9,736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 736, ctx.r9.u32);
	// stw r4,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r4.u32);
	// stb r11,744(r3)
	PPC_STORE_U8(ctx.r3.u32 + 744, ctx.r11.u8);
	// stb r11,745(r3)
	PPC_STORE_U8(ctx.r3.u32 + 745, ctx.r11.u8);
	// stb r10,746(r3)
	PPC_STORE_U8(ctx.r3.u32 + 746, ctx.r10.u8);
	// stb r11,747(r3)
	PPC_STORE_U8(ctx.r3.u32 + 747, ctx.r11.u8);
	// stw r11,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r11.u32);
	// stw r10,752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 752, ctx.r10.u32);
	// stb r11,756(r3)
	PPC_STORE_U8(ctx.r3.u32 + 756, ctx.r11.u8);
	// stb r11,757(r3)
	PPC_STORE_U8(ctx.r3.u32 + 757, ctx.r11.u8);
	// stb r10,758(r3)
	PPC_STORE_U8(ctx.r3.u32 + 758, ctx.r10.u8);
	// stb r11,759(r3)
	PPC_STORE_U8(ctx.r3.u32 + 759, ctx.r11.u8);
	// stb r11,760(r3)
	PPC_STORE_U8(ctx.r3.u32 + 760, ctx.r11.u8);
	// stw r11,764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 764, ctx.r11.u32);
	// stb r11,768(r3)
	PPC_STORE_U8(ctx.r3.u32 + 768, ctx.r11.u8);
	// stb r11,769(r3)
	PPC_STORE_U8(ctx.r3.u32 + 769, ctx.r11.u8);
	// stw r11,772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 772, ctx.r11.u32);
	// stw r8,776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 776, ctx.r8.u32);
	// stw r8,780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 780, ctx.r8.u32);
	// stw r11,784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 784, ctx.r11.u32);
	// stw r8,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r8.u32);
	// stb r11,792(r3)
	PPC_STORE_U8(ctx.r3.u32 + 792, ctx.r11.u8);
	// stb r11,793(r3)
	PPC_STORE_U8(ctx.r3.u32 + 793, ctx.r11.u8);
	// stb r11,794(r3)
	PPC_STORE_U8(ctx.r3.u32 + 794, ctx.r11.u8);
	// stw r10,796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 796, ctx.r10.u32);
	// stb r11,800(r3)
	PPC_STORE_U8(ctx.r3.u32 + 800, ctx.r11.u8);
	// stw r7,804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 804, ctx.r7.u32);
	// stw r10,808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 808, ctx.r10.u32);
	// stw r11,812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 812, ctx.r11.u32);
	// stw r9,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r9.u32);
	// stw r9,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r9.u32);
	// stw r9,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r9.u32);
	// stw r9,828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 828, ctx.r9.u32);
	// stw r9,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, ctx.r9.u32);
	// stw r9,836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 836, ctx.r9.u32);
	// stw r4,840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 840, ctx.r4.u32);
	// stb r11,844(r3)
	PPC_STORE_U8(ctx.r3.u32 + 844, ctx.r11.u8);
	// stb r11,845(r3)
	PPC_STORE_U8(ctx.r3.u32 + 845, ctx.r11.u8);
	// stb r10,846(r3)
	PPC_STORE_U8(ctx.r3.u32 + 846, ctx.r10.u8);
	// stb r11,847(r3)
	PPC_STORE_U8(ctx.r3.u32 + 847, ctx.r11.u8);
	// stw r11,848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 848, ctx.r11.u32);
	// stw r10,852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 852, ctx.r10.u32);
	// stb r11,856(r3)
	PPC_STORE_U8(ctx.r3.u32 + 856, ctx.r11.u8);
	// stb r11,857(r3)
	PPC_STORE_U8(ctx.r3.u32 + 857, ctx.r11.u8);
	// stb r11,858(r3)
	PPC_STORE_U8(ctx.r3.u32 + 858, ctx.r11.u8);
	// stb r11,859(r3)
	PPC_STORE_U8(ctx.r3.u32 + 859, ctx.r11.u8);
	// stb r11,860(r3)
	PPC_STORE_U8(ctx.r3.u32 + 860, ctx.r11.u8);
	// stw r11,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r11.u32);
	// stb r11,868(r3)
	PPC_STORE_U8(ctx.r3.u32 + 868, ctx.r11.u8);
	// stb r11,869(r3)
	PPC_STORE_U8(ctx.r3.u32 + 869, ctx.r11.u8);
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// stw r8,876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 876, ctx.r8.u32);
	// stw r8,880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 880, ctx.r8.u32);
	// stw r11,884(r3)
	PPC_STORE_U32(ctx.r3.u32 + 884, ctx.r11.u32);
	// stw r8,888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 888, ctx.r8.u32);
	// stb r11,892(r3)
	PPC_STORE_U8(ctx.r3.u32 + 892, ctx.r11.u8);
	// stb r11,893(r3)
	PPC_STORE_U8(ctx.r3.u32 + 893, ctx.r11.u8);
	// stb r11,894(r3)
	PPC_STORE_U8(ctx.r3.u32 + 894, ctx.r11.u8);
	// stw r10,896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 896, ctx.r10.u32);
	// stb r11,900(r3)
	PPC_STORE_U8(ctx.r3.u32 + 900, ctx.r11.u8);
	// stw r7,904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 904, ctx.r7.u32);
	// stw r10,908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 908, ctx.r10.u32);
	// stw r10,912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 912, ctx.r10.u32);
	// stw r9,916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 916, ctx.r9.u32);
	// stw r9,920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 920, ctx.r9.u32);
	// stw r9,924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 924, ctx.r9.u32);
	// stw r9,928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 928, ctx.r9.u32);
	// stw r9,932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 932, ctx.r9.u32);
	// stw r9,936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 936, ctx.r9.u32);
	// stw r7,940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 940, ctx.r7.u32);
	// stb r11,944(r3)
	PPC_STORE_U8(ctx.r3.u32 + 944, ctx.r11.u8);
	// stb r10,945(r3)
	PPC_STORE_U8(ctx.r3.u32 + 945, ctx.r10.u8);
	// stb r10,946(r3)
	PPC_STORE_U8(ctx.r3.u32 + 946, ctx.r10.u8);
	// stb r11,947(r3)
	PPC_STORE_U8(ctx.r3.u32 + 947, ctx.r11.u8);
	// stw r11,948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 948, ctx.r11.u32);
	// stw r10,952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 952, ctx.r10.u32);
	// stb r11,956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 956, ctx.r11.u8);
	// stb r11,957(r3)
	PPC_STORE_U8(ctx.r3.u32 + 957, ctx.r11.u8);
	// stb r10,958(r3)
	PPC_STORE_U8(ctx.r3.u32 + 958, ctx.r10.u8);
	// stb r11,959(r3)
	PPC_STORE_U8(ctx.r3.u32 + 959, ctx.r11.u8);
	// stb r11,960(r3)
	PPC_STORE_U8(ctx.r3.u32 + 960, ctx.r11.u8);
	// stw r11,964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 964, ctx.r11.u32);
	// stb r10,968(r3)
	PPC_STORE_U8(ctx.r3.u32 + 968, ctx.r10.u8);
	// stb r11,969(r3)
	PPC_STORE_U8(ctx.r3.u32 + 969, ctx.r11.u8);
	// stw r11,972(r3)
	PPC_STORE_U32(ctx.r3.u32 + 972, ctx.r11.u32);
	// stw r8,976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 976, ctx.r8.u32);
	// stw r10,980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 980, ctx.r10.u32);
	// stw r11,984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 984, ctx.r11.u32);
	// stw r10,988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 988, ctx.r10.u32);
	// stb r11,992(r3)
	PPC_STORE_U8(ctx.r3.u32 + 992, ctx.r11.u8);
	// stb r11,993(r3)
	PPC_STORE_U8(ctx.r3.u32 + 993, ctx.r11.u8);
	// stb r11,994(r3)
	PPC_STORE_U8(ctx.r3.u32 + 994, ctx.r11.u8);
	// stw r11,996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 996, ctx.r11.u32);
	// stb r10,1000(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1000, ctx.r10.u8);
	// stw r6,1004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1004, ctx.r6.u32);
	// stw r10,1008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1008, ctx.r10.u32);
	// stw r11,1012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1012, ctx.r11.u32);
	// stw r9,1016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1016, ctx.r9.u32);
	// stw r9,1020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1020, ctx.r9.u32);
	// stw r5,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r5.u32);
	// stw r9,1028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1028, ctx.r9.u32);
	// stw r9,1032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1032, ctx.r9.u32);
	// stw r9,1036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1036, ctx.r9.u32);
	// stw r7,1040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1040, ctx.r7.u32);
	// stb r11,1044(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1044, ctx.r11.u8);
	// stb r10,1045(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1045, ctx.r10.u8);
	// stb r10,1046(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1046, ctx.r10.u8);
	// stb r11,1047(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1047, ctx.r11.u8);
	// stw r11,1048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1048, ctx.r11.u32);
	// stw r10,1052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1052, ctx.r10.u32);
	// stb r11,1056(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1056, ctx.r11.u8);
	// stb r11,1057(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1057, ctx.r11.u8);
	// stb r10,1058(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1058, ctx.r10.u8);
	// stb r11,1059(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1059, ctx.r11.u8);
	// stb r11,1060(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1060, ctx.r11.u8);
	// stw r11,1064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1064, ctx.r11.u32);
	// stb r10,1068(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1068, ctx.r10.u8);
	// stb r11,1069(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1069, ctx.r11.u8);
	// stw r11,1072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1072, ctx.r11.u32);
	// stw r8,1076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1076, ctx.r8.u32);
	// stw r10,1080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1080, ctx.r10.u32);
	// stw r11,1084(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1084, ctx.r11.u32);
	// stw r10,1088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1088, ctx.r10.u32);
	// stb r11,1092(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1092, ctx.r11.u8);
	// stb r11,1093(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1093, ctx.r11.u8);
	// stb r11,1094(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1094, ctx.r11.u8);
	// stw r11,1096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1096, ctx.r11.u32);
	// stb r10,1100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1100, ctx.r10.u8);
	// stw r7,1104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1104, ctx.r7.u32);
	// stw r10,1108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1108, ctx.r10.u32);
	// stw r11,1112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1112, ctx.r11.u32);
	// stw r9,1116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1116, ctx.r9.u32);
	// stw r9,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r9.u32);
	// stw r9,1124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1124, ctx.r9.u32);
	// stw r9,1128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1128, ctx.r9.u32);
	// stw r9,1132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1132, ctx.r9.u32);
	// stw r9,1136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1136, ctx.r9.u32);
	// stw r7,1140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1140, ctx.r7.u32);
	// stb r11,1144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1144, ctx.r11.u8);
	// stb r10,1145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1145, ctx.r10.u8);
	// stb r10,1146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1146, ctx.r10.u8);
	// stb r11,1147(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1147, ctx.r11.u8);
	// stw r11,1148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1148, ctx.r11.u32);
	// stw r10,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r10.u32);
	// stb r10,1156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1156, ctx.r10.u8);
	// stb r11,1157(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1157, ctx.r11.u8);
	// stb r10,1158(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1158, ctx.r10.u8);
	// stb r11,1159(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1159, ctx.r11.u8);
	// stb r11,1160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1160, ctx.r11.u8);
	// stw r11,1164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1164, ctx.r11.u32);
	// stb r10,1168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1168, ctx.r10.u8);
	// stb r11,1169(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1169, ctx.r11.u8);
	// stw r11,1172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1172, ctx.r11.u32);
	// stw r8,1176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1176, ctx.r8.u32);
	// stw r10,1180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1180, ctx.r10.u32);
	// stw r11,1184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1184, ctx.r11.u32);
	// stw r10,1188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1188, ctx.r10.u32);
	// stb r11,1192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1192, ctx.r11.u8);
	// stb r11,1193(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1193, ctx.r11.u8);
	// stb r11,1194(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1194, ctx.r11.u8);
	// stw r11,1196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1196, ctx.r11.u32);
	// stb r10,1200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1200, ctx.r10.u8);
	// stw r7,1204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1204, ctx.r7.u32);
	// stw r10,1208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1208, ctx.r10.u32);
	// stw r11,1212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1212, ctx.r11.u32);
	// stw r9,1216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1216, ctx.r9.u32);
	// stw r9,1220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1220, ctx.r9.u32);
	// stw r9,1224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1224, ctx.r9.u32);
	// stw r9,1228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1228, ctx.r9.u32);
	// stw r9,1232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1232, ctx.r9.u32);
	// stw r9,1236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1236, ctx.r9.u32);
	// stw r7,1240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1240, ctx.r7.u32);
	// stb r11,1244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1244, ctx.r11.u8);
	// stb r10,1245(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1245, ctx.r10.u8);
	// stb r10,1246(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1246, ctx.r10.u8);
	// stb r11,1247(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1247, ctx.r11.u8);
	// stw r11,1248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1248, ctx.r11.u32);
	// stw r10,1252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1252, ctx.r10.u32);
	// stb r11,1256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1256, ctx.r11.u8);
	// stb r11,1257(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1257, ctx.r11.u8);
	// stb r10,1258(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1258, ctx.r10.u8);
	// stb r11,1259(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1259, ctx.r11.u8);
	// stb r11,1260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1260, ctx.r11.u8);
	// stw r11,1264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1264, ctx.r11.u32);
	// stb r10,1268(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1268, ctx.r10.u8);
	// stb r11,1269(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1269, ctx.r11.u8);
	// stw r11,1272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1272, ctx.r11.u32);
	// stw r8,1276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1276, ctx.r8.u32);
	// stw r10,1280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1280, ctx.r10.u32);
	// stw r11,1284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1284, ctx.r11.u32);
	// stw r10,1288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1288, ctx.r10.u32);
	// stb r11,1292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1292, ctx.r11.u8);
	// stb r11,1293(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1293, ctx.r11.u8);
	// stb r11,1294(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1294, ctx.r11.u8);
	// stw r11,1296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1296, ctx.r11.u32);
	// stb r10,1300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1300, ctx.r10.u8);
	// stw r7,1304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1304, ctx.r7.u32);
	// stw r10,1308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1308, ctx.r10.u32);
	// stw r10,1312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1312, ctx.r10.u32);
	// stw r9,1316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1316, ctx.r9.u32);
	// stw r9,1320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1320, ctx.r9.u32);
	// stw r9,1324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1324, ctx.r9.u32);
	// stw r9,1328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1328, ctx.r9.u32);
	// stw r9,1332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1332, ctx.r9.u32);
	// stw r9,1336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1336, ctx.r9.u32);
	// stw r6,1340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1340, ctx.r6.u32);
	// stb r11,1344(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1344, ctx.r11.u8);
	// stb r10,1345(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1345, ctx.r10.u8);
	// stb r10,1346(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1346, ctx.r10.u8);
	// stb r11,1347(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1347, ctx.r11.u8);
	// stw r11,1348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1348, ctx.r11.u32);
	// stw r10,1352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1352, ctx.r10.u32);
	// stb r11,1356(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1356, ctx.r11.u8);
	// stb r11,1357(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1357, ctx.r11.u8);
	// stb r10,1358(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1358, ctx.r10.u8);
	// stb r11,1359(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1359, ctx.r11.u8);
	// stb r11,1360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1360, ctx.r11.u8);
	// stw r10,1364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1364, ctx.r10.u32);
	// stb r10,1368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1368, ctx.r10.u8);
	// stb r10,1369(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1369, ctx.r10.u8);
	// stw r11,1372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1372, ctx.r11.u32);
	// stw r8,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r8.u32);
	// stw r10,1380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1380, ctx.r10.u32);
	// stw r11,1384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1384, ctx.r11.u32);
	// stw r10,1388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1388, ctx.r10.u32);
	// stb r10,1392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1392, ctx.r10.u8);
	// stb r10,1393(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1393, ctx.r10.u8);
	// stb r10,1394(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1394, ctx.r10.u8);
	// stw r11,1396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1396, ctx.r11.u32);
	// stb r10,1400(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1400, ctx.r10.u8);
	// stw r7,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r7.u32);
	// stw r10,1408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1408, ctx.r10.u32);
	// stw r11,1412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1412, ctx.r11.u32);
	// stw r9,1416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1416, ctx.r9.u32);
	// stw r9,1420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1420, ctx.r9.u32);
	// stw r9,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r9.u32);
	// stw r9,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r9.u32);
	// stw r9,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r9.u32);
	// stw r9,1436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1436, ctx.r9.u32);
	// stw r6,1440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1440, ctx.r6.u32);
	// stb r11,1444(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1444, ctx.r11.u8);
	// stb r10,1445(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1445, ctx.r10.u8);
	// stb r10,1446(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1446, ctx.r10.u8);
	// stb r11,1447(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1447, ctx.r11.u8);
	// stw r11,1448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1448, ctx.r11.u32);
	// stw r10,1452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1452, ctx.r10.u32);
	// stb r11,1456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1456, ctx.r11.u8);
	// stb r11,1457(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1457, ctx.r11.u8);
	// stb r10,1458(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1458, ctx.r10.u8);
	// stb r11,1459(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1459, ctx.r11.u8);
	// stb r11,1460(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1460, ctx.r11.u8);
	// stw r10,1464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1464, ctx.r10.u32);
	// stb r10,1468(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1468, ctx.r10.u8);
	// stb r10,1469(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1469, ctx.r10.u8);
	// stw r11,1472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1472, ctx.r11.u32);
	// stw r8,1476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1476, ctx.r8.u32);
	// stw r10,1480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1480, ctx.r10.u32);
	// stw r11,1484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1484, ctx.r11.u32);
	// stw r10,1488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1488, ctx.r10.u32);
	// stb r10,1492(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1492, ctx.r10.u8);
	// stb r10,1493(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1493, ctx.r10.u8);
	// stb r10,1494(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1494, ctx.r10.u8);
	// stw r11,1496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1496, ctx.r11.u32);
	// stb r10,1500(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1500, ctx.r10.u8);
	// stw r7,1504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1504, ctx.r7.u32);
	// stw r11,1508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1508, ctx.r11.u32);
	// stw r10,1512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1512, ctx.r10.u32);
	// stw r9,1516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1516, ctx.r9.u32);
	// stw r9,1520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1520, ctx.r9.u32);
	// stw r9,1524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1524, ctx.r9.u32);
	// stw r9,1528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1528, ctx.r9.u32);
	// stw r9,1532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1532, ctx.r9.u32);
	// stw r9,1536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1536, ctx.r9.u32);
	// stw r6,1540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1540, ctx.r6.u32);
	// stb r10,1544(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1544, ctx.r10.u8);
	// stb r10,1545(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1545, ctx.r10.u8);
	// stb r10,1546(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1546, ctx.r10.u8);
	// stb r11,1547(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1547, ctx.r11.u8);
	// stw r11,1548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1548, ctx.r11.u32);
	// stw r11,1552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1552, ctx.r11.u32);
	// stb r10,1556(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1556, ctx.r10.u8);
	// stb r10,1557(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1557, ctx.r10.u8);
	// stb r10,1558(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1558, ctx.r10.u8);
	// stb r10,1559(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1559, ctx.r10.u8);
	// stb r11,1560(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1560, ctx.r11.u8);
	// stw r10,1564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1564, ctx.r10.u32);
	// stb r10,1568(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1568, ctx.r10.u8);
	// stb r10,1569(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1569, ctx.r10.u8);
	// stw r11,1572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1572, ctx.r11.u32);
	// stw r10,1576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1576, ctx.r10.u32);
	// stw r11,1580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1580, ctx.r11.u32);
	// stw r11,1584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1584, ctx.r11.u32);
	// stw r11,1588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1588, ctx.r11.u32);
	// stb r10,1592(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1592, ctx.r10.u8);
	// stb r10,1593(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1593, ctx.r10.u8);
	// stb r10,1594(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1594, ctx.r10.u8);
	// stw r11,1596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1596, ctx.r11.u32);
	// stb r10,1600(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1600, ctx.r10.u8);
	// stw r7,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r7.u32);
	// stw r10,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r10.u32);
	// stw r11,1612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1612, ctx.r11.u32);
	// stw r9,1616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1616, ctx.r9.u32);
	// stw r9,1620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1620, ctx.r9.u32);
	// stw r9,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, ctx.r9.u32);
	// stw r9,1628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1628, ctx.r9.u32);
	// stw r9,1632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1632, ctx.r9.u32);
	// stw r9,1636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1636, ctx.r9.u32);
	// stw r6,1640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1640, ctx.r6.u32);
	// stb r11,1644(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1644, ctx.r11.u8);
	// stb r10,1645(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1645, ctx.r10.u8);
	// stb r10,1646(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1646, ctx.r10.u8);
	// stb r11,1647(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1647, ctx.r11.u8);
	// stw r11,1648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1648, ctx.r11.u32);
	// stw r10,1652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1652, ctx.r10.u32);
	// stb r11,1656(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1656, ctx.r11.u8);
	// stb r11,1657(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1657, ctx.r11.u8);
	// stb r10,1658(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1658, ctx.r10.u8);
	// stb r11,1659(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1659, ctx.r11.u8);
	// stb r11,1660(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1660, ctx.r11.u8);
	// stw r10,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r10.u32);
	// stb r10,1668(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1668, ctx.r10.u8);
	// stb r10,1669(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1669, ctx.r10.u8);
	// stw r11,1672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1672, ctx.r11.u32);
	// stw r8,1676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1676, ctx.r8.u32);
	// stw r10,1680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1680, ctx.r10.u32);
	// stw r11,1684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1684, ctx.r11.u32);
	// stw r10,1688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1688, ctx.r10.u32);
	// stb r10,1692(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1692, ctx.r10.u8);
	// stb r10,1693(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1693, ctx.r10.u8);
	// stb r10,1694(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1694, ctx.r10.u8);
	// stw r11,1696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1696, ctx.r11.u32);
	// stb r10,1700(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1700, ctx.r10.u8);
	// stw r7,1704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1704, ctx.r7.u32);
	// stw r10,1708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1708, ctx.r10.u32);
	// stw r10,1712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1712, ctx.r10.u32);
	// stw r9,1716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1716, ctx.r9.u32);
	// stw r9,1720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1720, ctx.r9.u32);
	// stw r9,1724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1724, ctx.r9.u32);
	// stw r9,1728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1728, ctx.r9.u32);
	// stw r9,1732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1732, ctx.r9.u32);
	// stw r9,1736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1736, ctx.r9.u32);
	// stw r6,1740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1740, ctx.r6.u32);
	// stb r10,1744(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1744, ctx.r10.u8);
	// stb r10,1745(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1745, ctx.r10.u8);
	// stb r10,1746(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1746, ctx.r10.u8);
	// stb r11,1747(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1747, ctx.r11.u8);
	// stw r11,1748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1748, ctx.r11.u32);
	// stw r10,1752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1752, ctx.r10.u32);
	// stb r11,1756(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1756, ctx.r11.u8);
	// stb r11,1757(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1757, ctx.r11.u8);
	// stb r10,1758(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1758, ctx.r10.u8);
	// stb r10,1759(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1759, ctx.r10.u8);
	// stb r10,1760(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1760, ctx.r10.u8);
	// stw r10,1764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1764, ctx.r10.u32);
	// stb r10,1768(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1768, ctx.r10.u8);
	// stb r10,1769(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1769, ctx.r10.u8);
	// stw r11,1772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1772, ctx.r11.u32);
	// stw r8,1776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1776, ctx.r8.u32);
	// stw r10,1780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1780, ctx.r10.u32);
	// stw r11,1784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1784, ctx.r11.u32);
	// stw r10,1788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1788, ctx.r10.u32);
	// stb r10,1792(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1792, ctx.r10.u8);
	// stb r10,1793(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1793, ctx.r10.u8);
	// stb r10,1794(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1794, ctx.r10.u8);
	// stw r11,1796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1796, ctx.r11.u32);
	// stb r10,1800(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1800, ctx.r10.u8);
	// stw r7,1804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1804, ctx.r7.u32);
	// stw r10,1808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1808, ctx.r10.u32);
	// stw r10,1812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1812, ctx.r10.u32);
	// stw r9,1816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1816, ctx.r9.u32);
	// stw r9,1820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1820, ctx.r9.u32);
	// stw r9,1824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1824, ctx.r9.u32);
	// stw r9,1828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1828, ctx.r9.u32);
	// stw r9,1832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1832, ctx.r9.u32);
	// stw r9,1836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1836, ctx.r9.u32);
	// stw r6,1840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1840, ctx.r6.u32);
	// stb r10,1844(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1844, ctx.r10.u8);
	// stb r10,1845(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1845, ctx.r10.u8);
	// stb r10,1846(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1846, ctx.r10.u8);
	// stb r11,1847(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1847, ctx.r11.u8);
	// stw r11,1848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1848, ctx.r11.u32);
	// stw r10,1852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1852, ctx.r10.u32);
	// stb r11,1856(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1856, ctx.r11.u8);
	// stb r11,1857(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1857, ctx.r11.u8);
	// stb r10,1858(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1858, ctx.r10.u8);
	// stb r10,1859(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1859, ctx.r10.u8);
	// stb r10,1860(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1860, ctx.r10.u8);
	// stw r10,1864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1864, ctx.r10.u32);
	// stb r10,1868(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1868, ctx.r10.u8);
	// stb r10,1869(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1869, ctx.r10.u8);
	// stw r11,1872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1872, ctx.r11.u32);
	// stw r8,1876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1876, ctx.r8.u32);
	// stw r10,1880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1880, ctx.r10.u32);
	// stw r11,1884(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1884, ctx.r11.u32);
	// stw r10,1888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1888, ctx.r10.u32);
	// stb r10,1892(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1892, ctx.r10.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r10,1893(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1893, ctx.r10.u8);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stb r10,1894(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1894, ctx.r10.u8);
	// addi r8,r3,2276
	ctx.r8.s64 = ctx.r3.s64 + 2276;
	// stw r11,1896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1896, ctx.r11.u32);
	// stb r10,1900(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1900, ctx.r10.u8);
	// stw r7,1904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1904, ctx.r7.u32);
	// stw r11,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r11.u32);
	// lfs f0,14612(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14612);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,1960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1960, ctx.r9.u32);
	// stw r9,1964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1964, ctx.r9.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r11,1968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1968, ctx.r11.u32);
	// stw r11,1972(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1972, ctx.r11.u32);
	// stw r11,1976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1976, ctx.r11.u32);
	// stb r10,2348(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2348, ctx.r10.u8);
	// stfs f0,2352(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2352, temp.u32);
	// stfs f0,2356(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2356, temp.u32);
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83789F18:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83789f18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83789F18;
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r10,1908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1908, ctx.r10.u32);
	// stw r11,1912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1912, ctx.r11.u32);
	// stw r11,1916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1916, ctx.r11.u32);
	// stw r11,1920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1920, ctx.r11.u32);
	// stw r11,1924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1924, ctx.r11.u32);
	// stw r11,1928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1928, ctx.r11.u32);
	// stw r11,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, ctx.r11.u32);
	// stw r11,1936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1936, ctx.r11.u32);
	// stw r11,1940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1940, ctx.r11.u32);
	// stw r11,1944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1944, ctx.r11.u32);
	// stw r11,1948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1948, ctx.r11.u32);
	// stw r11,1952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1952, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83789F58"))) PPC_WEAK_FUNC(sub_83789F58);
PPC_FUNC_IMPL(__imp__sub_83789F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83789F60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r30,r11,-104
	ctx.r30.s64 = ctx.r11.s64 + -104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83104018
	ctx.lr = 0x83789F74;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83789fd8
	if (cr6.eq) goto loc_83789FD8;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83789F98;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83789fd0
	if (cr6.eq) goto loc_83789FD0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83104868
	ctx.lr = 0x83789FB4;
	sub_83104868(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,600
	ctx.r10.s64 = ctx.r11.s64 + 600;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83103b18
	ctx.lr = 0x83789FC8;
	sub_83103B18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83789FD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83103b18
	ctx.lr = 0x83789FD8;
	sub_83103B18(ctx, base);
loc_83789FD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83789FE0"))) PPC_WEAK_FUNC(sub_83789FE0);
PPC_FUNC_IMPL(__imp__sub_83789FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mulli r11,r5,100
	ctx.r11.s64 = ctx.r5.s64 * 100;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// lis r10,3840
	ctx.r10.s64 = 251658240;
	// addi r8,r9,608
	ctx.r8.s64 = ctx.r9.s64 + 608;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-3841
	ctx.r7.s64 = -251723776;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r6.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r9,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r9.u32);
	// stw r3,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r3.u32);
	// stw r3,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r3.u32);
	// stw r7,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8378A0A0"))) PPC_WEAK_FUNC(sub_8378A0A0);
PPC_FUNC_IMPL(__imp__sub_8378A0A0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x833c79c8
	ctx.lr = 0x8378A0BC;
	sub_833C79C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a0d4
	if (cr6.eq) goto loc_8378A0D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833c79c8
	ctx.lr = 0x8378A0D4;
	sub_833C79C8(ctx, base);
loc_8378A0D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a0ec
	if (cr6.eq) goto loc_8378A0EC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x833c79c8
	ctx.lr = 0x8378A0EC;
	sub_833C79C8(ctx, base);
loc_8378A0EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a104
	if (cr6.eq) goto loc_8378A104;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x833c79c8
	ctx.lr = 0x8378A104;
	sub_833C79C8(ctx, base);
loc_8378A104:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a11c
	if (cr6.eq) goto loc_8378A11C;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x833c79c8
	ctx.lr = 0x8378A11C;
	sub_833C79C8(ctx, base);
loc_8378A11C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a134
	if (cr6.eq) goto loc_8378A134;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x833c79c8
	ctx.lr = 0x8378A134;
	sub_833C79C8(ctx, base);
loc_8378A134:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a14c
	if (cr6.eq) goto loc_8378A14C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x833c79c8
	ctx.lr = 0x8378A14C;
	sub_833C79C8(ctx, base);
loc_8378A14C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a164
	if (cr6.eq) goto loc_8378A164;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x833c79c8
	ctx.lr = 0x8378A164;
	sub_833C79C8(ctx, base);
loc_8378A164:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a17c
	if (cr6.eq) goto loc_8378A17C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x833c79c8
	ctx.lr = 0x8378A17C;
	sub_833C79C8(ctx, base);
loc_8378A17C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a194
	if (cr6.eq) goto loc_8378A194;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x833c79c8
	ctx.lr = 0x8378A194;
	sub_833C79C8(ctx, base);
loc_8378A194:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a1ac
	if (cr6.eq) goto loc_8378A1AC;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x833c79c8
	ctx.lr = 0x8378A1AC;
	sub_833C79C8(ctx, base);
loc_8378A1AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a1c4
	if (cr6.eq) goto loc_8378A1C4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x833c79c8
	ctx.lr = 0x8378A1C4;
	sub_833C79C8(ctx, base);
loc_8378A1C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a1dc
	if (cr6.eq) goto loc_8378A1DC;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x833c79c8
	ctx.lr = 0x8378A1DC;
	sub_833C79C8(ctx, base);
loc_8378A1DC:
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

__attribute__((alias("__imp__sub_8378A1F0"))) PPC_WEAK_FUNC(sub_8378A1F0);
PPC_FUNC_IMPL(__imp__sub_8378A1F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8378A1F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,1956(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1956);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8378a5e4
	if (cr6.eq) goto loc_8378A5E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837a06a8
	ctx.lr = 0x8378A21C;
	sub_837A06A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1956(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1956);
	// bl 0x837a06a8
	ctx.lr = 0x8378A22C;
	sub_837A06A8(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a250
	if (cr6.eq) goto loc_8378A250;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// rlwinm r29,r30,0,28,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
loc_8378A250:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a260
	if (cr6.eq) goto loc_8378A260;
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_8378A260:
	// li r27,308
	ctx.r27.s64 = 308;
loc_8378A264:
	// lwz r11,1956(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1956);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a368
	if (cr6.eq) goto loc_8378A368;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8378a368
	if (cr6.eq) goto loc_8378A368;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8378a2a8
	if (cr6.eq) goto loc_8378A2A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b46438
	ctx.lr = 0x8378A298;
	sub_83B46438(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83b46438
	ctx.lr = 0x8378A2A8;
	sub_83B46438(ctx, base);
loc_8378A2A8:
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8378a2c0
	if (cr6.eq) goto loc_8378A2C0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b46438
	ctx.lr = 0x8378A2C0;
	sub_83B46438(ctx, base);
loc_8378A2C0:
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8378a2d8
	if (cr6.eq) goto loc_8378A2D8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b46438
	ctx.lr = 0x8378A2D8;
	sub_83B46438(ctx, base);
loc_8378A2D8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8378a2f0
	if (cr6.eq) goto loc_8378A2F0;
	// oris r5,r26,3840
	ctx.r5.u64 = ctx.r26.u64 | 251658240;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b46438
	ctx.lr = 0x8378A2F0;
	sub_83B46438(ctx, base);
loc_8378A2F0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8378a308
	if (cr6.eq) goto loc_8378A308;
	// oris r5,r30,3840
	ctx.r5.u64 = ctx.r30.u64 | 251658240;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b46438
	ctx.lr = 0x8378A308;
	sub_83B46438(ctx, base);
loc_8378A308:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8378a320
	if (cr6.eq) goto loc_8378A320;
	// oris r5,r29,3840
	ctx.r5.u64 = ctx.r29.u64 | 251658240;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b46438
	ctx.lr = 0x8378A320;
	sub_83B46438(ctx, base);
loc_8378A320:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a368
	if (cr6.eq) goto loc_8378A368;
	// rlwinm r11,r11,0,8,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// lis r4,0
	ctx.r4.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r5,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x83b46438
	ctx.lr = 0x8378A348;
	sub_83B46438(ctx, base);
	// lwz r8,40(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// li r4,16384
	ctx.r4.s64 = 16384;
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r7,0,8,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r5,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x83b46438
	ctx.lr = 0x8378A368;
	sub_83B46438(ctx, base);
loc_8378A368:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r27,344
	cr6.compare<uint32_t>(ctx.r27.u32, 344, xer);
	// blt cr6,0x8378a264
	if (cr6.lt) goto loc_8378A264;
	// lwz r11,1956(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1956);
	// lwz r11,352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a3c0
	if (cr6.eq) goto loc_8378A3C0;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8378a3c0
	if (cr6.eq) goto loc_8378A3C0;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8378a3a8
	if (cr6.eq) goto loc_8378A3A8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83497318
	ctx.lr = 0x8378A3A8;
	sub_83497318(ctx, base);
loc_8378A3A8:
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8378a3c0
	if (cr6.eq) goto loc_8378A3C0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83497318
	ctx.lr = 0x8378A3C0;
	sub_83497318(ctx, base);
loc_8378A3C0:
	// lwz r11,1956(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1956);
	// lwz r31,348(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8378a440
	if (cr6.eq) goto loc_8378A440;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a3ec
	if (cr6.eq) goto loc_8378A3EC;
	// oris r5,r11,3840
	ctx.r5.u64 = ctx.r11.u64 | 251658240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b3ce0
	ctx.lr = 0x8378A3EC;
	sub_837B3CE0(ctx, base);
loc_8378A3EC:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a408
	if (cr6.eq) goto loc_8378A408;
	// oris r5,r11,3840
	ctx.r5.u64 = ctx.r11.u64 | 251658240;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b3ce0
	ctx.lr = 0x8378A408;
	sub_837B3CE0(ctx, base);
loc_8378A408:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a424
	if (cr6.eq) goto loc_8378A424;
	// oris r5,r11,3840
	ctx.r5.u64 = ctx.r11.u64 | 251658240;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b3ce0
	ctx.lr = 0x8378A424;
	sub_837B3CE0(ctx, base);
loc_8378A424:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a440
	if (cr6.eq) goto loc_8378A440;
	// oris r5,r11,3840
	ctx.r5.u64 = ctx.r11.u64 | 251658240;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b3ce0
	ctx.lr = 0x8378A440;
	sub_837B3CE0(ctx, base);
loc_8378A440:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8378a464
	if (!cr6.eq) goto loc_8378A464;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8378a464
	if (!cr6.eq) goto loc_8378A464;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a46c
	if (cr6.eq) goto loc_8378A46C;
loc_8378A464:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8378a0a0
	ctx.lr = 0x8378A46C;
	sub_8378A0A0(ctx, base);
loc_8378A46C:
	// bl 0x830ff290
	ctx.lr = 0x8378A470;
	sub_830FF290(ctx, base);
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8378cba8
	ctx.lr = 0x8378A478;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8378a56c
	if (cr6.eq) goto loc_8378A56C;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8378cc08
	ctx.lr = 0x8378A488;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a56c
	if (cr6.eq) goto loc_8378A56C;
	// lwz r11,1980(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1980);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a56c
	if (cr6.eq) goto loc_8378A56C;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8378a56c
	if (cr6.eq) goto loc_8378A56C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addic r10,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// subfe r31,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8378a4c8
	if (cr6.eq) goto loc_8378A4C8;
	// ori r31,r31,256
	ctx.r31.u64 = ctx.r31.u64 | 256;
loc_8378A4C8:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a4d8
	if (cr6.eq) goto loc_8378A4D8;
	// ori r31,r31,512
	ctx.r31.u64 = ctx.r31.u64 | 512;
loc_8378A4D8:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a4e8
	if (cr6.eq) goto loc_8378A4E8;
	// ori r31,r31,1024
	ctx.r31.u64 = ctx.r31.u64 | 1024;
loc_8378A4E8:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a4f8
	if (cr6.eq) goto loc_8378A4F8;
	// ori r31,r31,2048
	ctx.r31.u64 = ctx.r31.u64 | 2048;
loc_8378A4F8:
	// lwz r11,1908(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1908);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8378a51c
	if (!cr6.eq) goto loc_8378A51C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8378A51C:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833caca0
	ctx.lr = 0x8378A528;
	sub_833CACA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833caca0
	ctx.lr = 0x8378A538;
	sub_833CACA0(ctx, base);
	// lwz r11,1908(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1908);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r9,57(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8378a55c
	if (cr6.eq) goto loc_8378A55C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x8378a560
	if (cr6.eq) goto loc_8378A560;
loc_8378A55C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8378A560:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833caca0
	ctx.lr = 0x8378A56C;
	sub_833CACA0(ctx, base);
loc_8378A56C:
	// lwz r11,1956(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1956);
	// lwz r3,368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8378a5d4
	if (cr6.eq) goto loc_8378A5D4;
	// bl 0x831f8200
	ctx.lr = 0x8378A580;
	sub_831F8200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8378a5d4
	if (cr6.eq) goto loc_8378A5D4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a5a0
	if (cr6.eq) goto loc_8378A5A0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8378A5A0:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a5b0
	if (cr6.eq) goto loc_8378A5B0;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
loc_8378A5B0:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8378a5c0
	if (cr6.eq) goto loc_8378A5C0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
loc_8378A5C0:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a5d0
	if (cr6.eq) goto loc_8378A5D0;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_8378A5D0:
	// bl 0x833c9858
	ctx.lr = 0x8378A5D4;
	sub_833C9858(ctx, base);
loc_8378A5D4:
	// addi r3,r25,1912
	ctx.r3.s64 = ctx.r25.s64 + 1912;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x8378A5E4;
	sub_831CE980(ctx, base);
loc_8378A5E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8378A5EC"))) PPC_WEAK_FUNC(sub_8378A5EC);
PPC_FUNC_IMPL(__imp__sub_8378A5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8378A5F0"))) PPC_WEAK_FUNC(sub_8378A5F0);
PPC_FUNC_IMPL(__imp__sub_8378A5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8378A5F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1964(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x8378a658
	if (cr6.eq) goto loc_8378A658;
	// bl 0x8378cba8
	ctx.lr = 0x8378A614;
	sub_8378CBA8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r5,1964(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8378cbe8
	ctx.lr = 0x8378A624;
	sub_8378CBE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a658
	if (cr6.eq) goto loc_8378A658;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1964(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378fd50
	ctx.lr = 0x8378A640;
	sub_8378FD50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a658
	if (cr6.eq) goto loc_8378A658;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83b46498
	ctx.lr = 0x8378A658;
	sub_83B46498(ctx, base);
loc_8378A658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8378A660"))) PPC_WEAK_FUNC(sub_8378A660);
PPC_FUNC_IMPL(__imp__sub_8378A660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8378A668;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1956);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8378a704
	if (cr6.eq) goto loc_8378A704;
	// lwz r11,1960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1960);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x8378a704
	if (cr6.eq) goto loc_8378A704;
	// bl 0x8378cba8
	ctx.lr = 0x8378A6A0;
	sub_8378CBA8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// bl 0x837a04b0
	ctx.lr = 0x8378A6C0;
	sub_837A04B0(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1960(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1960);
	// bl 0x8378cbe8
	ctx.lr = 0x8378A6D0;
	sub_8378CBE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a704
	if (cr6.eq) goto loc_8378A704;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1960(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1960);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378fd58
	ctx.lr = 0x8378A6EC;
	sub_8378FD58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8378a704
	if (cr6.eq) goto loc_8378A704;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83497b28
	ctx.lr = 0x8378A704;
	sub_83497B28(ctx, base);
loc_8378A704:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8378A70C"))) PPC_WEAK_FUNC(sub_8378A70C);
PPC_FUNC_IMPL(__imp__sub_8378A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8378A710"))) PPC_WEAK_FUNC(sub_8378A710);
PPC_FUNC_IMPL(__imp__sub_8378A710) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x833c7b30
	ctx.lr = 0x8378A730;
	sub_833C7B30(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x833c7a28
	ctx.lr = 0x8378A740;
	sub_833C7A28(ctx, base);
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

__attribute__((alias("__imp__sub_8378A754"))) PPC_WEAK_FUNC(sub_8378A754);
PPC_FUNC_IMPL(__imp__sub_8378A754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

