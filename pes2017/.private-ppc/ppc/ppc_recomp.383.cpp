#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83555474"))) PPC_WEAK_FUNC(sub_83555474);
PPC_FUNC_IMPL(__imp__sub_83555474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83555478"))) PPC_WEAK_FUNC(sub_83555478);
PPC_FUNC_IMPL(__imp__sub_83555478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r4,-20
	ctx.r4.s64 = ctx.r4.s64 + -20;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83555494"))) PPC_WEAK_FUNC(sub_83555494);
PPC_FUNC_IMPL(__imp__sub_83555494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83555498"))) PPC_WEAK_FUNC(sub_83555498);
PPC_FUNC_IMPL(__imp__sub_83555498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x835554A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x83555528
	if (cr6.eq) goto loc_83555528;
loc_835554C8:
	// addi r30,r31,-20
	ctx.r30.s64 = ctx.r31.s64 + -20;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835553f0
	ctx.lr = 0x835554D8;
	sub_835553F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835554f4
	if (cr6.eq) goto loc_835554F4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83555518
	goto loc_83555518;
loc_835554F4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835553f0
	ctx.lr = 0x83555500;
	sub_835553F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// beq cr6,0x83555524
	if (cr6.eq) goto loc_83555524;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,2
	ctx.r29.s64 = 2;
loc_83555518:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x835554c8
	if (!cr6.eq) goto loc_835554C8;
	// b 0x83555528
	goto loc_83555528;
loc_83555524:
	// li r25,0
	ctx.r25.s64 = 0;
loc_83555528:
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stb r29,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r29.u8);
	// stb r25,9(r27)
	PPC_STORE_U8(ctx.r27.u32 + 9, ctx.r25.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83555544"))) PPC_WEAK_FUNC(sub_83555544);
PPC_FUNC_IMPL(__imp__sub_83555544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83555548"))) PPC_WEAK_FUNC(sub_83555548);
PPC_FUNC_IMPL(__imp__sub_83555548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// lbz r7,13(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r4.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x835555fc
	if (!cr6.eq) goto loc_835555FC;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_835555FC:
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83555618"))) PPC_WEAK_FUNC(sub_83555618);
PPC_FUNC_IMPL(__imp__sub_83555618) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83555648;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83555664
	if (!cr6.eq) goto loc_83555664;
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
loc_83555664:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_835556AC"))) PPC_WEAK_FUNC(sub_835556AC);
PPC_FUNC_IMPL(__imp__sub_835556AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835556B0"))) PPC_WEAK_FUNC(sub_835556B0);
PPC_FUNC_IMPL(__imp__sub_835556B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835556B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// bl 0x83555d70
	ctx.lr = 0x835556D0;
	sub_83555D70(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
loc_835556E8:
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x835556fc
	if (cr6.eq) goto loc_835556FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8355572c
	goto loc_8355572C;
loc_835556FC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8355570c
	if (cr6.eq) goto loc_8355570C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8355572c
	goto loc_8355572C;
loc_8355570C:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83555720
	if (cr6.eq) goto loc_83555720;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8355572c
	goto loc_8355572C;
loc_83555720:
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8355572C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83555754
	if (cr6.eq) goto loc_83555754;
	// lwz r4,-20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83550750
	ctx.lr = 0x83555744;
	sub_83550750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83556450
	ctx.lr = 0x8355574C;
	sub_83556450(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x835556e8
	goto loc_835556E8;
loc_83555754:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x83b4acd0
	ctx.lr = 0x8355575C;
	sub_83B4ACD0(ctx, base);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x8355579c
	if (cr6.eq) goto loc_8355579C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x835509c0
	ctx.lr = 0x83555778;
	sub_835509C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835509c0
	ctx.lr = 0x83555784;
	sub_835509C0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355579C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355579C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835557A4"))) PPC_WEAK_FUNC(sub_835557A4);
PPC_FUNC_IMPL(__imp__sub_835557A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835557A8"))) PPC_WEAK_FUNC(sub_835557A8);
PPC_FUNC_IMPL(__imp__sub_835557A8) {
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
	// lbz r11,9(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8355580c
	if (!cr6.eq) goto loc_8355580C;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x8355580c
	if (cr6.eq) goto loc_8355580C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r9,-31915
	ctx.r9.s64 = -2091581440;
	// addi r7,r10,-28172
	ctx.r7.s64 = ctx.r10.s64 + -28172;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r7,r9,21832
	ctx.r7.s64 = ctx.r9.s64 + 21832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x835560c0
	ctx.lr = 0x83555808;
	sub_835560C0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_8355580C:
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

__attribute__((alias("__imp__sub_83555820"))) PPC_WEAK_FUNC(sub_83555820);
PPC_FUNC_IMPL(__imp__sub_83555820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83555828;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,9(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83555870
	if (!cr6.eq) goto loc_83555870;
loc_83555844:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83555870:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83555618
	ctx.lr = 0x8355587C;
	sub_83555618(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83555844
	if (cr6.eq) goto loc_83555844;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x83555dc8
	ctx.lr = 0x835558B4;
	sub_83555DC8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lbz r9,33(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835558E4"))) PPC_WEAK_FUNC(sub_835558E4);
PPC_FUNC_IMPL(__imp__sub_835558E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835558E8"))) PPC_WEAK_FUNC(sub_835558E8);
PPC_FUNC_IMPL(__imp__sub_835558E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835558F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,124
	ctx.r10.s64 = ctx.r11.s64 + 124;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x835559bc
	if (cr6.eq) goto loc_835559BC;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4aec8
	ctx.lr = 0x83555918;
	sub_83B4AEC8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835559b4
	if (!cr6.eq) goto loc_835559B4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83555498
	ctx.lr = 0x83555934;
	sub_83555498(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x83555960
	if (cr6.eq) goto loc_83555960;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83555990
	goto loc_83555990;
loc_83555960:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83555970
	if (cr6.eq) goto loc_83555970;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83555990
	goto loc_83555990;
loc_83555970:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83555984
	if (cr6.eq) goto loc_83555984;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83555990
	goto loc_83555990;
loc_83555984:
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83555990:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835559b4
	if (cr6.eq) goto loc_835559B4;
	// lwz r4,-20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x83550750
	ctx.lr = 0x835559A8;
	sub_83550750(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835557a8
	ctx.lr = 0x835559B4;
	sub_835557A8(ctx, base);
loc_835559B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4afa0
	ctx.lr = 0x835559BC;
	sub_83B4AFA0(ctx, base);
loc_835559BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835559C4"))) PPC_WEAK_FUNC(sub_835559C4);
PPC_FUNC_IMPL(__imp__sub_835559C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835559C8"))) PPC_WEAK_FUNC(sub_835559C8);
PPC_FUNC_IMPL(__imp__sub_835559C8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83555a7c
	if (cr6.eq) goto loc_83555A7C;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
loc_835559FC:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835559fc
	if (!cr0.eq) goto loc_835559FC;
	// lwsync 
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwsync 
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
loc_83555A2C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r3
	ea = ctx.r3.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stwcx. r11,0,r3
	ea = ctx.r3.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83555a2c
	if (!cr0.eq) goto loc_83555A2C;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83555a6c
	if (cr6.eq) goto loc_83555A6C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x835558e8
	ctx.lr = 0x83555A6C;
	sub_835558E8(ctx, base);
loc_83555A6C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83555A7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83555A94"))) PPC_WEAK_FUNC(sub_83555A94);
PPC_FUNC_IMPL(__imp__sub_83555A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83555A98"))) PPC_WEAK_FUNC(sub_83555A98);
PPC_FUNC_IMPL(__imp__sub_83555A98) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83555498
	ctx.lr = 0x83555ABC;
	sub_83555498(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x83555ae4
	if (cr6.eq) goto loc_83555AE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83555b14
	goto loc_83555B14;
loc_83555AE4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83555af4
	if (cr6.eq) goto loc_83555AF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83555b14
	goto loc_83555B14;
loc_83555AF4:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83555b08
	if (cr6.eq) goto loc_83555B08;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83555b14
	goto loc_83555B14;
loc_83555B08:
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_83555B14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83555b3c
	if (cr6.eq) goto loc_83555B3C;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
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
loc_83555B3C:
	// addi r3,r10,-20
	ctx.r3.s64 = ctx.r10.s64 + -20;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r3,12
	ctx.r7.s64 = ctx.r3.s64 + 12;
loc_83555B48:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83555b48
	if (!cr0.eq) goto loc_83555B48;
	// lwsync 
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

__attribute__((alias("__imp__sub_83555B7C"))) PPC_WEAK_FUNC(sub_83555B7C);
PPC_FUNC_IMPL(__imp__sub_83555B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83555B80"))) PPC_WEAK_FUNC(sub_83555B80);
PPC_FUNC_IMPL(__imp__sub_83555B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83555B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83555498
	ctx.lr = 0x83555BA4;
	sub_83555498(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x83555bd4
	if (cr6.eq) goto loc_83555BD4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x83555c04
	goto loc_83555C04;
loc_83555BD4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83555be4
	if (cr6.eq) goto loc_83555BE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83555c04
	goto loc_83555C04;
loc_83555BE4:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83555bf8
	if (cr6.eq) goto loc_83555BF8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x83555c04
	goto loc_83555C04;
loc_83555BF8:
	// subf r11,r10,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_83555C04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83555ca8
	if (cr6.eq) goto loc_83555CA8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x83550708
	ctx.lr = 0x83555C20;
	sub_83550708(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83555c3c
	if (!cr6.eq) goto loc_83555C3C;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83555C3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831ce980
	ctx.lr = 0x83555C4C;
	sub_831CE980(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stbx r28,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r28.u8);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// bl 0x83555820
	ctx.lr = 0x83555C94;
	sub_83555820(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
loc_83555CA8:
	// addi r3,r10,-20
	ctx.r3.s64 = ctx.r10.s64 + -20;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r3,12
	ctx.r7.s64 = ctx.r3.s64 + 12;
loc_83555CB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83555cb4
	if (!cr0.eq) goto loc_83555CB4;
	// lwsync 
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83555CDC"))) PPC_WEAK_FUNC(sub_83555CDC);
PPC_FUNC_IMPL(__imp__sub_83555CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83555CE0"))) PPC_WEAK_FUNC(sub_83555CE0);
PPC_FUNC_IMPL(__imp__sub_83555CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83555CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83b4ad80
	ctx.lr = 0x83555D00;
	sub_83B4AD80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83555a98
	ctx.lr = 0x83555D0C;
	sub_83555A98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b4ae50
	ctx.lr = 0x83555D18;
	sub_83B4AE50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83555D24"))) PPC_WEAK_FUNC(sub_83555D24);
PPC_FUNC_IMPL(__imp__sub_83555D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83555D28"))) PPC_WEAK_FUNC(sub_83555D28);
PPC_FUNC_IMPL(__imp__sub_83555D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83555D30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83b4aec8
	ctx.lr = 0x83555D48;
	sub_83B4AEC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83555b80
	ctx.lr = 0x83555D54;
	sub_83555B80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b4afa0
	ctx.lr = 0x83555D60;
	sub_83B4AFA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83555D6C"))) PPC_WEAK_FUNC(sub_83555D6C);
PPC_FUNC_IMPL(__imp__sub_83555D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83555D70"))) PPC_WEAK_FUNC(sub_83555D70);
PPC_FUNC_IMPL(__imp__sub_83555D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x83555d9c
	if (cr6.eq) goto loc_83555D9C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x83555d98
	if (cr6.eq) goto loc_83555D98;
loc_83555D88:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x83555d88
	if (!cr6.eq) goto loc_83555D88;
loc_83555D98:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83555D9C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// stb r9,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r9.u8);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r10,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83555DC4"))) PPC_WEAK_FUNC(sub_83555DC4);
PPC_FUNC_IMPL(__imp__sub_83555DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83555DC8"))) PPC_WEAK_FUNC(sub_83555DC8);
PPC_FUNC_IMPL(__imp__sub_83555DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// bne cr6,0x83555de8
	if (!cr6.eq) goto loc_83555DE8;
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
loc_83555DE8:
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// stb r8,13(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13, ctx.r8.u8);
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// lbz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// stb r3,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r3.u8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835560a4
	if (cr6.eq) goto loc_835560A4;
loc_83555E1C:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// blt cr6,0x83555e74
	if (cr6.lt) goto loc_83555E74;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x83555f98
	if (cr6.gt) goto loc_83555F98;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x835560a4
	if (cr6.eq) goto loc_835560A4;
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r4,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r4.u8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83555e1c
	if (!cr6.eq) goto loc_83555E1C;
	// b 0x835560a4
	goto loc_835560A4;
loc_83555E74:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// ble cr6,0x83555f4c
	if (!cr6.gt) goto loc_83555F4C;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lbz r4,13(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stb r4,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r4.u8);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stb r8,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, ctx.r8.u8);
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stb r5,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r5.u8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r4,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r4.u8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stb r5,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r8,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r8.u8);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,13(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r10.u32);
	// lbz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stb r8,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r8.u8);
	// bne cr6,0x83555f34
	if (!cr6.eq) goto loc_83555F34;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r10.u8);
loc_83555F2C:
	// stb r8,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r8.u8);
	// b 0x835560a4
	goto loc_835560A4;
loc_83555F34:
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// stb r8,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r8.u8);
	// bne cr6,0x83555f2c
	if (!cr6.eq) goto loc_83555F2C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r10.u8);
	// b 0x835560a4
	goto loc_835560A4;
loc_83555F4C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lbz r3,13(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r3,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, ctx.r3.u8);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stb r5,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stb r8,13(r4)
	PPC_STORE_U8(ctx.r4.u32 + 13, ctx.r8.u8);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r10,13(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r9.u32);
	// b 0x8355609c
	goto loc_8355609C;
loc_83555F98:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x83556054
	if (cr6.lt) goto loc_83556054;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lbz r4,13(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stb r4,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r4.u8);
	// stb r5,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, ctx.r5.u8);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stb r8,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r8.u8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r9,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r9.u8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r5,13(r4)
	PPC_STORE_U8(ctx.r4.u32 + 13, ctx.r5.u8);
	// lbz r9,13(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r10,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r10.u32);
	// lbz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stb r8,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r8.u8);
	// bne cr6,0x83555f34
	if (!cr6.eq) goto loc_83555F34;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r10.u8);
	// stb r8,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r8.u8);
	// b 0x835560a4
	goto loc_835560A4;
loc_83556054:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r3,13(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stb r3,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, ctx.r3.u8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stb r5,13(r4)
	PPC_STORE_U8(ctx.r4.u32 + 13, ctx.r5.u8);
	// lbz r10,13(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r9,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r9.u32);
loc_8355609C:
	// stb r8,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r8.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_835560A4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x835560b4
	if (!cr6.eq) goto loc_835560B4;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_835560B4:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835560BC"))) PPC_WEAK_FUNC(sub_835560BC);
PPC_FUNC_IMPL(__imp__sub_835560BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835560C0"))) PPC_WEAK_FUNC(sub_835560C0);
PPC_FUNC_IMPL(__imp__sub_835560C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x835560C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x83556144
	if (cr6.eq) goto loc_83556144;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// beq cr6,0x83556144
	if (cr6.eq) goto loc_83556144;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x83556110
	if (cr6.eq) goto loc_83556110;
loc_83556100:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x83556100
	if (!cr6.eq) goto loc_83556100;
loc_83556110:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83556120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83556134
	if (!cr6.eq) goto loc_83556134;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x83556144
	goto loc_83556144;
loc_83556134:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x83556144
	if (!cr6.eq) goto loc_83556144;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_83556144:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x83556154
	if (!cr6.eq) goto loc_83556154;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_83556154:
	// lbz r11,13(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r30,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r30.u8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stwx r31,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r31.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83556188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bne cr6,0x8355619c
	if (!cr6.eq) goto loc_8355619C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8355619C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_835561B0:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// subf r10,r30,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r30.s64;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stb r6,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r6.u8);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bge cr6,0x835562e0
	if (!cr6.lt) goto loc_835562E0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8355629c
	if (!cr6.gt) goto loc_8355629C;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r7.u8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stb r8,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, ctx.r8.u8);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stb r5,13(r6)
	PPC_STORE_U8(ctx.r6.u32 + 13, ctx.r5.u8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r9,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r9.u8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stb r5,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r8,13(r7)
	PPC_STORE_U8(ctx.r7.u32 + 13, ctx.r8.u8);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,13(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r10.u32);
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stb r8,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r8.u8);
	// bne cr6,0x83556288
	if (!cr6.eq) goto loc_83556288;
	// stb r3,12(r7)
	PPC_STORE_U8(ctx.r7.u32 + 12, ctx.r3.u8);
loc_83556280:
	// stb r8,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r8.u8);
	// b 0x83556408
	goto loc_83556408;
loc_83556288:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// stb r8,12(r7)
	PPC_STORE_U8(ctx.r7.u32 + 12, ctx.r8.u8);
	// bne cr6,0x83556280
	if (!cr6.eq) goto loc_83556280;
	// stb r4,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r4.u8);
	// b 0x83556408
	goto loc_83556408;
loc_8355629C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lbz r6,13(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stb r6,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, ctx.r6.u8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stb r5,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stb r8,13(r7)
	PPC_STORE_U8(ctx.r7.u32 + 13, ctx.r8.u8);
	// lbz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835563dc
	if (!cr6.eq) goto loc_835563DC;
	// stb r3,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r3.u8);
	// stb r4,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r4.u8);
	// b 0x835563e4
	goto loc_835563E4;
loc_835562E0:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x83556400
	if (!cr6.gt) goto loc_83556400;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x83556398
	if (cr6.lt) goto loc_83556398;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lbz r7,13(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r7,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r7.u8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stb r5,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, ctx.r5.u8);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stb r8,13(r6)
	PPC_STORE_U8(ctx.r6.u32 + 13, ctx.r8.u8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lbz r7,13(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stb r7,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r7.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r5,13(r6)
	PPC_STORE_U8(ctx.r6.u32 + 13, ctx.r5.u8);
	// lbz r9,13(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r10,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r10.u32);
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stb r8,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r8.u8);
	// bne cr6,0x83556288
	if (!cr6.eq) goto loc_83556288;
	// stb r3,12(r7)
	PPC_STORE_U8(ctx.r7.u32 + 12, ctx.r3.u8);
	// stb r8,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r8.u8);
	// b 0x83556408
	goto loc_83556408;
loc_83556398:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lbz r6,13(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stb r6,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, ctx.r6.u8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stb r5,13(r7)
	PPC_STORE_U8(ctx.r7.u32 + 13, ctx.r5.u8);
	// lbz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835563dc
	if (!cr6.eq) goto loc_835563DC;
	// stb r4,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r4.u8);
	// stb r3,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r3.u8);
	// b 0x835563e4
	goto loc_835563E4;
loc_835563DC:
	// stb r8,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r8.u8);
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
loc_835563E4:
	// lbz r10,13(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// b 0x83556408
	goto loc_83556408;
loc_83556400:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83556430
	if (!cr6.eq) goto loc_83556430;
loc_83556408:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83556430
	if (!cr6.eq) goto loc_83556430;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// beq cr6,0x83556430
	if (cr6.eq) goto loc_83556430;
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// extsb r30,r9
	ctx.r30.s64 = ctx.r9.s8;
	// b 0x835561b0
	goto loc_835561B0;
loc_83556430:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bne cr6,0x83556440
	if (!cr6.eq) goto loc_83556440;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_83556440:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355644C"))) PPC_WEAK_FUNC(sub_8355644C);
PPC_FUNC_IMPL(__imp__sub_8355644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556450"))) PPC_WEAK_FUNC(sub_83556450);
PPC_FUNC_IMPL(__imp__sub_83556450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8355646c
	if (!cr6.eq) goto loc_8355646C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83556464:
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// blr 
	return;
loc_8355646C:
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x835564ac
	if (!cr6.eq) goto loc_835564AC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x835564ac
	if (cr6.eq) goto loc_835564AC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x835564a4
	if (cr6.eq) goto loc_835564A4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83556494:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83556494
	if (!cr6.eq) goto loc_83556494;
loc_835564A4:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_835564AC:
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
loc_835564B4:
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835564e0
	if (cr6.eq) goto loc_835564E0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x835564b4
	if (!cr6.eq) goto loc_835564B4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r10,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r10.u8);
	// blr 
	return;
loc_835564E0:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83556464
	if (cr6.eq) goto loc_83556464;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835564F8"))) PPC_WEAK_FUNC(sub_835564F8);
PPC_FUNC_IMPL(__imp__sub_835564F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8356b750
	sub_8356B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835564FC"))) PPC_WEAK_FUNC(sub_835564FC);
PPC_FUNC_IMPL(__imp__sub_835564FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556500"))) PPC_WEAK_FUNC(sub_83556500);
PPC_FUNC_IMPL(__imp__sub_83556500) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-28080
	ctx.r10.s64 = ctx.r11.s64 + -28080;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x8355652C;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8355654c
	if (cr6.eq) goto loc_8355654C;
	// bl 0x82595188
	ctx.lr = 0x8355653C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8355654C;
	sub_825952B8(ctx, base);
loc_8355654C:
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

__attribute__((alias("__imp__sub_83556568"))) PPC_WEAK_FUNC(sub_83556568);
PPC_FUNC_IMPL(__imp__sub_83556568) {
	PPC_FUNC_PROLOGUE();
	// b 0x8356b858
	sub_8356B858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355656C"))) PPC_WEAK_FUNC(sub_8355656C);
PPC_FUNC_IMPL(__imp__sub_8355656C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556570"))) PPC_WEAK_FUNC(sub_83556570);
PPC_FUNC_IMPL(__imp__sub_83556570) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-28040
	ctx.r10.s64 = ctx.r11.s64 + -28040;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x8355659C;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835565bc
	if (cr6.eq) goto loc_835565BC;
	// bl 0x82595188
	ctx.lr = 0x835565AC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x835565BC;
	sub_825952B8(ctx, base);
loc_835565BC:
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

__attribute__((alias("__imp__sub_835565D8"))) PPC_WEAK_FUNC(sub_835565D8);
PPC_FUNC_IMPL(__imp__sub_835565D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8356b960
	sub_8356B960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835565DC"))) PPC_WEAK_FUNC(sub_835565DC);
PPC_FUNC_IMPL(__imp__sub_835565DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835565E0"))) PPC_WEAK_FUNC(sub_835565E0);
PPC_FUNC_IMPL(__imp__sub_835565E0) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-28000
	ctx.r10.s64 = ctx.r11.s64 + -28000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x8355660C;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8355662c
	if (cr6.eq) goto loc_8355662C;
	// bl 0x82595188
	ctx.lr = 0x8355661C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8355662C;
	sub_825952B8(ctx, base);
loc_8355662C:
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

__attribute__((alias("__imp__sub_83556648"))) PPC_WEAK_FUNC(sub_83556648);
PPC_FUNC_IMPL(__imp__sub_83556648) {
	PPC_FUNC_PROLOGUE();
	// b 0x8356bdd8
	sub_8356BDD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355664C"))) PPC_WEAK_FUNC(sub_8355664C);
PPC_FUNC_IMPL(__imp__sub_8355664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556650"))) PPC_WEAK_FUNC(sub_83556650);
PPC_FUNC_IMPL(__imp__sub_83556650) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27960
	ctx.r10.s64 = ctx.r11.s64 + -27960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x8355667C;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8355669c
	if (cr6.eq) goto loc_8355669C;
	// bl 0x82595188
	ctx.lr = 0x8355668C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8355669C;
	sub_825952B8(ctx, base);
loc_8355669C:
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

__attribute__((alias("__imp__sub_835566B8"))) PPC_WEAK_FUNC(sub_835566B8);
PPC_FUNC_IMPL(__imp__sub_835566B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8356f3a8
	sub_8356F3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835566BC"))) PPC_WEAK_FUNC(sub_835566BC);
PPC_FUNC_IMPL(__imp__sub_835566BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835566C0"))) PPC_WEAK_FUNC(sub_835566C0);
PPC_FUNC_IMPL(__imp__sub_835566C0) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27920
	ctx.r10.s64 = ctx.r11.s64 + -27920;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x835566EC;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8355670c
	if (cr6.eq) goto loc_8355670C;
	// bl 0x82595188
	ctx.lr = 0x835566FC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8355670C;
	sub_825952B8(ctx, base);
loc_8355670C:
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

__attribute__((alias("__imp__sub_83556728"))) PPC_WEAK_FUNC(sub_83556728);
PPC_FUNC_IMPL(__imp__sub_83556728) {
	PPC_FUNC_PROLOGUE();
	// b 0x8356bcd0
	sub_8356BCD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355672C"))) PPC_WEAK_FUNC(sub_8355672C);
PPC_FUNC_IMPL(__imp__sub_8355672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556730"))) PPC_WEAK_FUNC(sub_83556730);
PPC_FUNC_IMPL(__imp__sub_83556730) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27880
	ctx.r10.s64 = ctx.r11.s64 + -27880;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x8355675C;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8355677c
	if (cr6.eq) goto loc_8355677C;
	// bl 0x82595188
	ctx.lr = 0x8355676C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8355677C;
	sub_825952B8(ctx, base);
loc_8355677C:
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

__attribute__((alias("__imp__sub_83556798"))) PPC_WEAK_FUNC(sub_83556798);
PPC_FUNC_IMPL(__imp__sub_83556798) {
	PPC_FUNC_PROLOGUE();
	// b 0x83585a20
	sub_83585A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355679C"))) PPC_WEAK_FUNC(sub_8355679C);
PPC_FUNC_IMPL(__imp__sub_8355679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835567A0"))) PPC_WEAK_FUNC(sub_835567A0);
PPC_FUNC_IMPL(__imp__sub_835567A0) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27840
	ctx.r10.s64 = ctx.r11.s64 + -27840;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x835567CC;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835567ec
	if (cr6.eq) goto loc_835567EC;
	// bl 0x82595188
	ctx.lr = 0x835567DC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x835567EC;
	sub_825952B8(ctx, base);
loc_835567EC:
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

__attribute__((alias("__imp__sub_83556808"))) PPC_WEAK_FUNC(sub_83556808);
PPC_FUNC_IMPL(__imp__sub_83556808) {
	PPC_FUNC_PROLOGUE();
	// b 0x83570db8
	sub_83570DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355680C"))) PPC_WEAK_FUNC(sub_8355680C);
PPC_FUNC_IMPL(__imp__sub_8355680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556810"))) PPC_WEAK_FUNC(sub_83556810);
PPC_FUNC_IMPL(__imp__sub_83556810) {
	PPC_FUNC_PROLOGUE();
	// b 0x83572958
	sub_83572958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556814"))) PPC_WEAK_FUNC(sub_83556814);
PPC_FUNC_IMPL(__imp__sub_83556814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556818"))) PPC_WEAK_FUNC(sub_83556818);
PPC_FUNC_IMPL(__imp__sub_83556818) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27800
	ctx.r10.s64 = ctx.r11.s64 + -27800;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x83556844;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83556864
	if (cr6.eq) goto loc_83556864;
	// bl 0x82595188
	ctx.lr = 0x83556854;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83556864;
	sub_825952B8(ctx, base);
loc_83556864:
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

__attribute__((alias("__imp__sub_83556880"))) PPC_WEAK_FUNC(sub_83556880);
PPC_FUNC_IMPL(__imp__sub_83556880) {
	PPC_FUNC_PROLOGUE();
	// b 0x83570ec0
	sub_83570EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556884"))) PPC_WEAK_FUNC(sub_83556884);
PPC_FUNC_IMPL(__imp__sub_83556884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556888"))) PPC_WEAK_FUNC(sub_83556888);
PPC_FUNC_IMPL(__imp__sub_83556888) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27760
	ctx.r10.s64 = ctx.r11.s64 + -27760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x835568B4;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835568d4
	if (cr6.eq) goto loc_835568D4;
	// bl 0x82595188
	ctx.lr = 0x835568C4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x835568D4;
	sub_825952B8(ctx, base);
loc_835568D4:
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

__attribute__((alias("__imp__sub_835568F0"))) PPC_WEAK_FUNC(sub_835568F0);
PPC_FUNC_IMPL(__imp__sub_835568F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83570cb0
	sub_83570CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835568F4"))) PPC_WEAK_FUNC(sub_835568F4);
PPC_FUNC_IMPL(__imp__sub_835568F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835568F8"))) PPC_WEAK_FUNC(sub_835568F8);
PPC_FUNC_IMPL(__imp__sub_835568F8) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27720
	ctx.r10.s64 = ctx.r11.s64 + -27720;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x83556924;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83556944
	if (cr6.eq) goto loc_83556944;
	// bl 0x82595188
	ctx.lr = 0x83556934;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83556944;
	sub_825952B8(ctx, base);
loc_83556944:
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

__attribute__((alias("__imp__sub_83556960"))) PPC_WEAK_FUNC(sub_83556960);
PPC_FUNC_IMPL(__imp__sub_83556960) {
	PPC_FUNC_PROLOGUE();
	// b 0x83570910
	sub_83570910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556964"))) PPC_WEAK_FUNC(sub_83556964);
PPC_FUNC_IMPL(__imp__sub_83556964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556968"))) PPC_WEAK_FUNC(sub_83556968);
PPC_FUNC_IMPL(__imp__sub_83556968) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27680
	ctx.r10.s64 = ctx.r11.s64 + -27680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x83556994;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835569b4
	if (cr6.eq) goto loc_835569B4;
	// bl 0x82595188
	ctx.lr = 0x835569A4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x835569B4;
	sub_825952B8(ctx, base);
loc_835569B4:
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

__attribute__((alias("__imp__sub_835569D0"))) PPC_WEAK_FUNC(sub_835569D0);
PPC_FUNC_IMPL(__imp__sub_835569D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83570a08
	sub_83570A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835569D4"))) PPC_WEAK_FUNC(sub_835569D4);
PPC_FUNC_IMPL(__imp__sub_835569D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835569D8"))) PPC_WEAK_FUNC(sub_835569D8);
PPC_FUNC_IMPL(__imp__sub_835569D8) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27640
	ctx.r10.s64 = ctx.r11.s64 + -27640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x83556A04;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83556a24
	if (cr6.eq) goto loc_83556A24;
	// bl 0x82595188
	ctx.lr = 0x83556A14;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83556A24;
	sub_825952B8(ctx, base);
loc_83556A24:
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

__attribute__((alias("__imp__sub_83556A40"))) PPC_WEAK_FUNC(sub_83556A40);
PPC_FUNC_IMPL(__imp__sub_83556A40) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573bd0
	ctx.lr = 0x83556A5C;
	sub_83573BD0(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-27600
	ctx.r7.s64 = ctx.r8.s64 + -27600;
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// sth r10,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r10.u16);
	// lfs f0,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// sth r10,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r10.u16);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83556AB4"))) PPC_WEAK_FUNC(sub_83556AB4);
PPC_FUNC_IMPL(__imp__sub_83556AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556AB8"))) PPC_WEAK_FUNC(sub_83556AB8);
PPC_FUNC_IMPL(__imp__sub_83556AB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83585a30
	sub_83585A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556ABC"))) PPC_WEAK_FUNC(sub_83556ABC);
PPC_FUNC_IMPL(__imp__sub_83556ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556AC0"))) PPC_WEAK_FUNC(sub_83556AC0);
PPC_FUNC_IMPL(__imp__sub_83556AC0) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27600
	ctx.r10.s64 = ctx.r11.s64 + -27600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83573348
	ctx.lr = 0x83556AEC;
	sub_83573348(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83556b0c
	if (cr6.eq) goto loc_83556B0C;
	// bl 0x82595188
	ctx.lr = 0x83556AFC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83556B0C;
	sub_825952B8(ctx, base);
loc_83556B0C:
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

__attribute__((alias("__imp__sub_83556B28"))) PPC_WEAK_FUNC(sub_83556B28);
PPC_FUNC_IMPL(__imp__sub_83556B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83556b40
	if (!cr6.eq) goto loc_83556B40;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_83556B40:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lbz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83556b5c
	if (cr6.eq) goto loc_83556B5C;
loc_83556B50:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_83556B5C:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83556b50
	if (!cr6.eq) goto loc_83556B50;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83556B78"))) PPC_WEAK_FUNC(sub_83556B78);
PPC_FUNC_IMPL(__imp__sub_83556B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83556B84"))) PPC_WEAK_FUNC(sub_83556B84);
PPC_FUNC_IMPL(__imp__sub_83556B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556B88"))) PPC_WEAK_FUNC(sub_83556B88);
PPC_FUNC_IMPL(__imp__sub_83556B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x83556ba0
	if (cr6.lt) goto loc_83556BA0;
loc_83556B94:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_83556BA0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83556bc4
	if (!cr6.eq) goto loc_83556BC4;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
loc_83556BC4:
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,64
	ctx.r10.s64 = 64;
	// slw r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83556b94
	if (!cr6.eq) goto loc_83556B94;
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// or r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stwx r5,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
	// b 0x82596fe8
	sub_82596FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556BFC"))) PPC_WEAK_FUNC(sub_83556BFC);
PPC_FUNC_IMPL(__imp__sub_83556BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556C00"))) PPC_WEAK_FUNC(sub_83556C00);
PPC_FUNC_IMPL(__imp__sub_83556C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x83556c18
	if (cr6.lt) goto loc_83556C18;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_83556C18:
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,144
	ctx.r8.s64 = ctx.r10.s64 + 144;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83556c3c
	if (!cr6.eq) goto loc_83556C3C;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
loc_83556C3C:
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83556c64
	if (cr6.eq) goto loc_83556C64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
loc_83556C64:
	// b 0x82597088
	sub_82597088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556C68"))) PPC_WEAK_FUNC(sub_83556C68);
PPC_FUNC_IMPL(__imp__sub_83556C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,144
	ctx.r8.s64 = ctx.r10.s64 + 144;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,64
	ctx.r8.s64 = 64;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83556cb4
	if (cr6.eq) goto loc_83556CB4;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
loc_83556CB4:
	// b 0x82597088
	sub_82597088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556CB8"))) PPC_WEAK_FUNC(sub_83556CB8);
PPC_FUNC_IMPL(__imp__sub_83556CB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83556CBC"))) PPC_WEAK_FUNC(sub_83556CBC);
PPC_FUNC_IMPL(__imp__sub_83556CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556CC0"))) PPC_WEAK_FUNC(sub_83556CC0);
PPC_FUNC_IMPL(__imp__sub_83556CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83556CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83556CEC;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83556d08
	if (cr6.eq) goto loc_83556D08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83585a40
	ctx.lr = 0x83556D00;
	sub_83585A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83556d0c
	goto loc_83556D0C;
loc_83556D08:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83556D0C:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83556D1C;
	sub_8259F070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556D28"))) PPC_WEAK_FUNC(sub_83556D28);
PPC_FUNC_IMPL(__imp__sub_83556D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83556D30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83556D54;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83556d70
	if (cr6.eq) goto loc_83556D70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83570b00
	ctx.lr = 0x83556D68;
	sub_83570B00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83556d74
	goto loc_83556D74;
loc_83556D70:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83556D74:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83556D84;
	sub_8259F070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556D90"))) PPC_WEAK_FUNC(sub_83556D90);
PPC_FUNC_IMPL(__imp__sub_83556D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83556D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83556DB8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83556de4
	if (cr6.eq) goto loc_83556DE4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x83556DD0;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-28080
	ctx.r10.s64 = ctx.r11.s64 + -28080;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83556de8
	goto loc_83556DE8;
loc_83556DE4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83556DE8:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83556DF8;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556E04"))) PPC_WEAK_FUNC(sub_83556E04);
PPC_FUNC_IMPL(__imp__sub_83556E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556E08"))) PPC_WEAK_FUNC(sub_83556E08);
PPC_FUNC_IMPL(__imp__sub_83556E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83556E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83556E30;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83556e5c
	if (cr6.eq) goto loc_83556E5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x83556E48;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-28040
	ctx.r10.s64 = ctx.r11.s64 + -28040;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83556e60
	goto loc_83556E60;
loc_83556E5C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83556E60:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83556E70;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556E7C"))) PPC_WEAK_FUNC(sub_83556E7C);
PPC_FUNC_IMPL(__imp__sub_83556E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556E80"))) PPC_WEAK_FUNC(sub_83556E80);
PPC_FUNC_IMPL(__imp__sub_83556E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83556E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83556EA8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83556ed4
	if (cr6.eq) goto loc_83556ED4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x83556EC0;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-28000
	ctx.r10.s64 = ctx.r11.s64 + -28000;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83556ed8
	goto loc_83556ED8;
loc_83556ED4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83556ED8:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83556EE8;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556EF4"))) PPC_WEAK_FUNC(sub_83556EF4);
PPC_FUNC_IMPL(__imp__sub_83556EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556EF8"))) PPC_WEAK_FUNC(sub_83556EF8);
PPC_FUNC_IMPL(__imp__sub_83556EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83556F00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83556F20;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83556f4c
	if (cr6.eq) goto loc_83556F4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x83556F38;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-27960
	ctx.r10.s64 = ctx.r11.s64 + -27960;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83556f50
	goto loc_83556F50;
loc_83556F4C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83556F50:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83556F60;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556F6C"))) PPC_WEAK_FUNC(sub_83556F6C);
PPC_FUNC_IMPL(__imp__sub_83556F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556F70"))) PPC_WEAK_FUNC(sub_83556F70);
PPC_FUNC_IMPL(__imp__sub_83556F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83556F78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83556F98;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83556fc4
	if (cr6.eq) goto loc_83556FC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x83556FB0;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-27920
	ctx.r10.s64 = ctx.r11.s64 + -27920;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83556fc8
	goto loc_83556FC8;
loc_83556FC4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83556FC8:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83556FD8;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83556FE4"))) PPC_WEAK_FUNC(sub_83556FE4);
PPC_FUNC_IMPL(__imp__sub_83556FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83556FE8"))) PPC_WEAK_FUNC(sub_83556FE8);
PPC_FUNC_IMPL(__imp__sub_83556FE8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573bd0
	ctx.lr = 0x83557004;
	sub_83573BD0(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-27560
	ctx.r9.s64 = ctx.r10.s64 + -27560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8355706C"))) PPC_WEAK_FUNC(sub_8355706C);
PPC_FUNC_IMPL(__imp__sub_8355706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557070"))) PPC_WEAK_FUNC(sub_83557070);
PPC_FUNC_IMPL(__imp__sub_83557070) {
	PPC_FUNC_PROLOGUE();
	// b 0x8356ba68
	sub_8356BA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83557074"))) PPC_WEAK_FUNC(sub_83557074);
PPC_FUNC_IMPL(__imp__sub_83557074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557078"))) PPC_WEAK_FUNC(sub_83557078);
PPC_FUNC_IMPL(__imp__sub_83557078) {
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
	ctx.lr = 0x83557080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-27560
	ctx.r10.s64 = ctx.r11.s64 + -27560;
	// addi r31,r3,128
	ctx.r31.s64 = ctx.r3.s64 + 128;
	// li r29,7
	ctx.r29.s64 = 7;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
loc_835570A0:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835570ec
	if (cr6.eq) goto loc_835570EC;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_835570B4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835570b4
	if (!cr0.eq) goto loc_835570B4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835570ec
	if (!cr6.eq) goto loc_835570EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835570EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835570EC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x835570a0
	if (!cr0.lt) goto loc_835570A0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83573348
	ctx.lr = 0x835570FC;
	sub_83573348(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83557104"))) PPC_WEAK_FUNC(sub_83557104);
PPC_FUNC_IMPL(__imp__sub_83557104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557108"))) PPC_WEAK_FUNC(sub_83557108);
PPC_FUNC_IMPL(__imp__sub_83557108) {
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
	// bl 0x83557078
	ctx.lr = 0x83557128;
	sub_83557078(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83557148
	if (cr6.eq) goto loc_83557148;
	// bl 0x82595188
	ctx.lr = 0x83557138;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83557148;
	sub_825952B8(ctx, base);
loc_83557148:
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

__attribute__((alias("__imp__sub_83557164"))) PPC_WEAK_FUNC(sub_83557164);
PPC_FUNC_IMPL(__imp__sub_83557164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557168"))) PPC_WEAK_FUNC(sub_83557168);
PPC_FUNC_IMPL(__imp__sub_83557168) {
	PPC_FUNC_PROLOGUE();
	// b 0x8356bb70
	sub_8356BB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355716C"))) PPC_WEAK_FUNC(sub_8355716C);
PPC_FUNC_IMPL(__imp__sub_8355716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557170"))) PPC_WEAK_FUNC(sub_83557170);
PPC_FUNC_IMPL(__imp__sub_83557170) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27516
	ctx.r10.s64 = ctx.r11.s64 + -27516;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835571e0
	if (cr6.eq) goto loc_835571E0;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_835571A8:
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
	// bne 0x835571a8
	if (!cr0.eq) goto loc_835571A8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835571e0
	if (!cr6.eq) goto loc_835571E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835571E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835571E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83573348
	ctx.lr = 0x835571E8;
	sub_83573348(ctx, base);
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

__attribute__((alias("__imp__sub_835571FC"))) PPC_WEAK_FUNC(sub_835571FC);
PPC_FUNC_IMPL(__imp__sub_835571FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557200"))) PPC_WEAK_FUNC(sub_83557200);
PPC_FUNC_IMPL(__imp__sub_83557200) {
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
	// bl 0x83557170
	ctx.lr = 0x83557220;
	sub_83557170(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83557240
	if (cr6.eq) goto loc_83557240;
	// bl 0x82595188
	ctx.lr = 0x83557230;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83557240;
	sub_825952B8(ctx, base);
loc_83557240:
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

__attribute__((alias("__imp__sub_8355725C"))) PPC_WEAK_FUNC(sub_8355725C);
PPC_FUNC_IMPL(__imp__sub_8355725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557260"))) PPC_WEAK_FUNC(sub_83557260);
PPC_FUNC_IMPL(__imp__sub_83557260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83557268;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83557288;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835572b4
	if (cr6.eq) goto loc_835572B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x835572A0;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-27880
	ctx.r10.s64 = ctx.r11.s64 + -27880;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x835572b8
	goto loc_835572B8;
loc_835572B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_835572B8:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x835572C8;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835572D4"))) PPC_WEAK_FUNC(sub_835572D4);
PPC_FUNC_IMPL(__imp__sub_835572D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835572D8"))) PPC_WEAK_FUNC(sub_835572D8);
PPC_FUNC_IMPL(__imp__sub_835572D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835572E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,848
	ctx.r4.s64 = 848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83557304;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557320
	if (cr6.eq) goto loc_83557320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8356bf50
	ctx.lr = 0x83557318;
	sub_8356BF50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83557324
	goto loc_83557324;
loc_83557320:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83557324:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83557334;
	sub_8259F070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83557340"))) PPC_WEAK_FUNC(sub_83557340);
PPC_FUNC_IMPL(__imp__sub_83557340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83557348;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83557368;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557394
	if (cr6.eq) goto loc_83557394;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x83557380;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-27840
	ctx.r10.s64 = ctx.r11.s64 + -27840;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83557398
	goto loc_83557398;
loc_83557394:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83557398:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x835573A8;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835573B4"))) PPC_WEAK_FUNC(sub_835573B4);
PPC_FUNC_IMPL(__imp__sub_835573B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835573B8"))) PPC_WEAK_FUNC(sub_835573B8);
PPC_FUNC_IMPL(__imp__sub_835573B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835573C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835573E0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355740c
	if (cr6.eq) goto loc_8355740C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x835573F8;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-27800
	ctx.r10.s64 = ctx.r11.s64 + -27800;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83557410
	goto loc_83557410;
loc_8355740C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83557410:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83557420;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355742C"))) PPC_WEAK_FUNC(sub_8355742C);
PPC_FUNC_IMPL(__imp__sub_8355742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557430"))) PPC_WEAK_FUNC(sub_83557430);
PPC_FUNC_IMPL(__imp__sub_83557430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83557438;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83557458;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557484
	if (cr6.eq) goto loc_83557484;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x83557470;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-27760
	ctx.r10.s64 = ctx.r11.s64 + -27760;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83557488
	goto loc_83557488;
loc_83557484:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83557488:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83557498;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835574A4"))) PPC_WEAK_FUNC(sub_835574A4);
PPC_FUNC_IMPL(__imp__sub_835574A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835574A8"))) PPC_WEAK_FUNC(sub_835574A8);
PPC_FUNC_IMPL(__imp__sub_835574A8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573bd0
	ctx.lr = 0x835574C4;
	sub_83573BD0(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-27476
	ctx.r9.s64 = ctx.r10.s64 + -27476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
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
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83557568"))) PPC_WEAK_FUNC(sub_83557568);
PPC_FUNC_IMPL(__imp__sub_83557568) {
	PPC_FUNC_PROLOGUE();
	// b 0x8356f4b0
	sub_8356F4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355756C"))) PPC_WEAK_FUNC(sub_8355756C);
PPC_FUNC_IMPL(__imp__sub_8355756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557570"))) PPC_WEAK_FUNC(sub_83557570);
PPC_FUNC_IMPL(__imp__sub_83557570) {
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
	// bl 0x83572958
	ctx.lr = 0x83557590;
	sub_83572958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835575a4
	if (!cr6.eq) goto loc_835575A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83570630
	ctx.lr = 0x835575A4;
	sub_83570630(ctx, base);
loc_835575A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835575BC"))) PPC_WEAK_FUNC(sub_835575BC);
PPC_FUNC_IMPL(__imp__sub_835575BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835575C0"))) PPC_WEAK_FUNC(sub_835575C0);
PPC_FUNC_IMPL(__imp__sub_835575C0) {
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
	// bl 0x8356f4c0
	ctx.lr = 0x835575E0;
	sub_8356F4C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835575f4
	if (!cr6.eq) goto loc_835575F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x835575F4;
	sub_83572958(ctx, base);
loc_835575F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355760C"))) PPC_WEAK_FUNC(sub_8355760C);
PPC_FUNC_IMPL(__imp__sub_8355760C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557610"))) PPC_WEAK_FUNC(sub_83557610);
PPC_FUNC_IMPL(__imp__sub_83557610) {
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
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-27476
	ctx.r10.s64 = ctx.r11.s64 + -27476;
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557684
	if (cr6.eq) goto loc_83557684;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8355764C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355764c
	if (!cr0.eq) goto loc_8355764C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83557684
	if (!cr6.eq) goto loc_83557684;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83557684;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83557684:
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835576d0
	if (cr6.eq) goto loc_835576D0;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83557698:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83557698
	if (!cr0.eq) goto loc_83557698;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835576d0
	if (!cr6.eq) goto loc_835576D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835576D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835576D0:
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355771c
	if (cr6.eq) goto loc_8355771C;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_835576E4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835576e4
	if (!cr0.eq) goto loc_835576E4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8355771c
	if (!cr6.eq) goto loc_8355771C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355771C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355771C:
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557768
	if (cr6.eq) goto loc_83557768;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83557730:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83557730
	if (!cr0.eq) goto loc_83557730;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83557768
	if (!cr6.eq) goto loc_83557768;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83557768;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83557768:
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835577b4
	if (cr6.eq) goto loc_835577B4;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8355777C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355777c
	if (!cr0.eq) goto loc_8355777C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835577b4
	if (!cr6.eq) goto loc_835577B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835577B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835577B4:
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557800
	if (cr6.eq) goto loc_83557800;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_835577C8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835577c8
	if (!cr0.eq) goto loc_835577C8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83557800
	if (!cr6.eq) goto loc_83557800;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83557800;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83557800:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355784c
	if (cr6.eq) goto loc_8355784C;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83557814:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83557814
	if (!cr0.eq) goto loc_83557814;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8355784c
	if (!cr6.eq) goto loc_8355784C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355784C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355784C:
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557898
	if (cr6.eq) goto loc_83557898;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83557860:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83557860
	if (!cr0.eq) goto loc_83557860;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83557898
	if (!cr6.eq) goto loc_83557898;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83557898;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83557898:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835578e4
	if (cr6.eq) goto loc_835578E4;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_835578AC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835578ac
	if (!cr0.eq) goto loc_835578AC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835578e4
	if (!cr6.eq) goto loc_835578E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835578E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835578E4:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557930
	if (cr6.eq) goto loc_83557930;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_835578F8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835578f8
	if (!cr0.eq) goto loc_835578F8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83557930
	if (!cr6.eq) goto loc_83557930;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83557930;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83557930:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355797c
	if (cr6.eq) goto loc_8355797C;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83557944:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83557944
	if (!cr0.eq) goto loc_83557944;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8355797c
	if (!cr6.eq) goto loc_8355797C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355797C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355797C:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835579c8
	if (cr6.eq) goto loc_835579C8;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83557990:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83557990
	if (!cr0.eq) goto loc_83557990;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835579c8
	if (!cr6.eq) goto loc_835579C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835579C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835579C8:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557a14
	if (cr6.eq) goto loc_83557A14;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_835579DC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835579dc
	if (!cr0.eq) goto loc_835579DC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83557a14
	if (!cr6.eq) goto loc_83557A14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83557A14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83557A14:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557a60
	if (cr6.eq) goto loc_83557A60;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83557A28:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83557a28
	if (!cr0.eq) goto loc_83557A28;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83557a60
	if (!cr6.eq) goto loc_83557A60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83557A60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83557A60:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557aac
	if (cr6.eq) goto loc_83557AAC;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83557A74:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83557a74
	if (!cr0.eq) goto loc_83557A74;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83557aac
	if (!cr6.eq) goto loc_83557AAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83557AAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83557AAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83573348
	ctx.lr = 0x83557AB4;
	sub_83573348(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83557ACC"))) PPC_WEAK_FUNC(sub_83557ACC);
PPC_FUNC_IMPL(__imp__sub_83557ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557AD0"))) PPC_WEAK_FUNC(sub_83557AD0);
PPC_FUNC_IMPL(__imp__sub_83557AD0) {
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
	// bl 0x83557610
	ctx.lr = 0x83557AF0;
	sub_83557610(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83557b10
	if (cr6.eq) goto loc_83557B10;
	// bl 0x82595188
	ctx.lr = 0x83557B00;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83557B10;
	sub_825952B8(ctx, base);
loc_83557B10:
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

__attribute__((alias("__imp__sub_83557B2C"))) PPC_WEAK_FUNC(sub_83557B2C);
PPC_FUNC_IMPL(__imp__sub_83557B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557B30"))) PPC_WEAK_FUNC(sub_83557B30);
PPC_FUNC_IMPL(__imp__sub_83557B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83557B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83557B58;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557b84
	if (cr6.eq) goto loc_83557B84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x83557B70;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-27720
	ctx.r10.s64 = ctx.r11.s64 + -27720;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83557b88
	goto loc_83557B88;
loc_83557B84:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83557B88:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83557B98;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83557BA4"))) PPC_WEAK_FUNC(sub_83557BA4);
PPC_FUNC_IMPL(__imp__sub_83557BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557BA8"))) PPC_WEAK_FUNC(sub_83557BA8);
PPC_FUNC_IMPL(__imp__sub_83557BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83557BB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83557BD0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557bfc
	if (cr6.eq) goto loc_83557BFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x83557BE8;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-27680
	ctx.r10.s64 = ctx.r11.s64 + -27680;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83557c00
	goto loc_83557C00;
loc_83557BFC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83557C00:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83557C10;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83557C1C"))) PPC_WEAK_FUNC(sub_83557C1C);
PPC_FUNC_IMPL(__imp__sub_83557C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557C20"))) PPC_WEAK_FUNC(sub_83557C20);
PPC_FUNC_IMPL(__imp__sub_83557C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83557C28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83557C48;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557c74
	if (cr6.eq) goto loc_83557C74;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x83557C60;
	sub_83573BD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-27640
	ctx.r10.s64 = ctx.r11.s64 + -27640;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83557c78
	goto loc_83557C78;
loc_83557C74:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83557C78:
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83557C88;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83557C94"))) PPC_WEAK_FUNC(sub_83557C94);
PPC_FUNC_IMPL(__imp__sub_83557C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557C98"))) PPC_WEAK_FUNC(sub_83557C98);
PPC_FUNC_IMPL(__imp__sub_83557C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83557CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83557CC4;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83557ce0
	if (cr6.eq) goto loc_83557CE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83556a40
	ctx.lr = 0x83557CD8;
	sub_83556A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83557ce4
	goto loc_83557CE4;
loc_83557CE0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83557CE4:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83557CF4;
	sub_8259F070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83557D00"))) PPC_WEAK_FUNC(sub_83557D00);
PPC_FUNC_IMPL(__imp__sub_83557D00) {
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
	// bl 0x83573428
	ctx.lr = 0x83557D18;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83557D20;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x83557dac
	if (!cr6.eq) goto loc_83557DAC;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,200
	ctx.r30.s64 = ctx.r11.s64 + 200;
	// lwz r11,220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83557d60
	if (!cr6.eq) goto loc_83557D60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83557D54;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26344
	ctx.r3.s64 = ctx.r11.s64 + -26344;
	// bl 0x831cdcc8
	ctx.lr = 0x83557D60;
	sub_831CDCC8(ctx, base);
loc_83557D60:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,10528
	ctx.r31.s64 = ctx.r11.s64 + 10528;
	// stw r30,10528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10528, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83557D74;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27436
	ctx.r4.s64 = ctx.r11.s64 + -27436;
	// bl 0x83a7a980
	ctx.lr = 0x83557D84;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83557D90;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83557D94;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x83557DA4;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83557e18
	goto loc_83557E18;
loc_83557DAC:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,180
	ctx.r30.s64 = ctx.r11.s64 + 180;
	// lwz r11,220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83557de0
	if (!cr6.eq) goto loc_83557DE0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83557DD4;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26360
	ctx.r3.s64 = ctx.r11.s64 + -26360;
	// bl 0x831cdcc8
	ctx.lr = 0x83557DE0;
	sub_831CDCC8(ctx, base);
loc_83557DE0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,10528
	ctx.r31.s64 = ctx.r11.s64 + 10528;
	// stw r30,10528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10528, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83557DF4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27436
	ctx.r4.s64 = ctx.r11.s64 + -27436;
	// bl 0x83a7a980
	ctx.lr = 0x83557E04;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83557E10;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83557E14;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83557E18:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,27840
	ctx.r4.s64 = ctx.r11.s64 + 27840;
	// bl 0x82583300
	ctx.lr = 0x83557E24;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83557E3C"))) PPC_WEAK_FUNC(sub_83557E3C);
PPC_FUNC_IMPL(__imp__sub_83557E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557E40"))) PPC_WEAK_FUNC(sub_83557E40);
PPC_FUNC_IMPL(__imp__sub_83557E40) {
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
	// bl 0x83573428
	ctx.lr = 0x83557E58;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83557E60;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x83557eec
	if (!cr6.eq) goto loc_83557EEC;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,244
	ctx.r30.s64 = ctx.r11.s64 + 244;
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83557ea0
	if (!cr6.eq) goto loc_83557EA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 264, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83557E94;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26312
	ctx.r3.s64 = ctx.r11.s64 + -26312;
	// bl 0x831cdcc8
	ctx.lr = 0x83557EA0;
	sub_831CDCC8(ctx, base);
loc_83557EA0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9428
	ctx.r31.s64 = ctx.r11.s64 + 9428;
	// stw r30,9428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9428, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83557EB4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27424
	ctx.r4.s64 = ctx.r11.s64 + -27424;
	// bl 0x83a7a980
	ctx.lr = 0x83557EC4;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83557ED0;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83557ED4;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x83557EE4;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83557f58
	goto loc_83557F58;
loc_83557EEC:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,224
	ctx.r30.s64 = ctx.r11.s64 + 224;
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83557f20
	if (!cr6.eq) goto loc_83557F20;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 264, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83557F14;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26328
	ctx.r3.s64 = ctx.r11.s64 + -26328;
	// bl 0x831cdcc8
	ctx.lr = 0x83557F20;
	sub_831CDCC8(ctx, base);
loc_83557F20:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9428
	ctx.r31.s64 = ctx.r11.s64 + 9428;
	// stw r30,9428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9428, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83557F34;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27424
	ctx.r4.s64 = ctx.r11.s64 + -27424;
	// bl 0x83a7a980
	ctx.lr = 0x83557F44;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83557F50;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83557F54;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83557F58:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,27944
	ctx.r4.s64 = ctx.r11.s64 + 27944;
	// bl 0x82583300
	ctx.lr = 0x83557F64;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83557F7C"))) PPC_WEAK_FUNC(sub_83557F7C);
PPC_FUNC_IMPL(__imp__sub_83557F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83557F80"))) PPC_WEAK_FUNC(sub_83557F80);
PPC_FUNC_IMPL(__imp__sub_83557F80) {
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
	// bl 0x83573428
	ctx.lr = 0x83557F98;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83557FA0;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x8355802c
	if (!cr6.eq) goto loc_8355802C;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,288
	ctx.r30.s64 = ctx.r11.s64 + 288;
	// lwz r11,308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83557fe0
	if (!cr6.eq) goto loc_83557FE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 308, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83557FD4;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26280
	ctx.r3.s64 = ctx.r11.s64 + -26280;
	// bl 0x831cdcc8
	ctx.lr = 0x83557FE0;
	sub_831CDCC8(ctx, base);
loc_83557FE0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9328
	ctx.r31.s64 = ctx.r11.s64 + 9328;
	// stw r30,9328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9328, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83557FF4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27412
	ctx.r4.s64 = ctx.r11.s64 + -27412;
	// bl 0x83a7a980
	ctx.lr = 0x83558004;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558010;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83558014;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x83558024;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83558098
	goto loc_83558098;
loc_8355802C:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,268
	ctx.r30.s64 = ctx.r11.s64 + 268;
	// lwz r11,308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558060
	if (!cr6.eq) goto loc_83558060;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 308, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558054;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26296
	ctx.r3.s64 = ctx.r11.s64 + -26296;
	// bl 0x831cdcc8
	ctx.lr = 0x83558060;
	sub_831CDCC8(ctx, base);
loc_83558060:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9328
	ctx.r31.s64 = ctx.r11.s64 + 9328;
	// stw r30,9328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9328, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558074;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27412
	ctx.r4.s64 = ctx.r11.s64 + -27412;
	// bl 0x83a7a980
	ctx.lr = 0x83558084;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558090;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83558094;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83558098:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,28048
	ctx.r4.s64 = ctx.r11.s64 + 28048;
	// bl 0x82583300
	ctx.lr = 0x835580A4;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835580BC"))) PPC_WEAK_FUNC(sub_835580BC);
PPC_FUNC_IMPL(__imp__sub_835580BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835580C0"))) PPC_WEAK_FUNC(sub_835580C0);
PPC_FUNC_IMPL(__imp__sub_835580C0) {
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
	// bl 0x83573428
	ctx.lr = 0x835580D8;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x835580E0;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x8355816c
	if (!cr6.eq) goto loc_8355816C;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,332
	ctx.r30.s64 = ctx.r11.s64 + 332;
	// lwz r11,352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558120
	if (!cr6.eq) goto loc_83558120;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 352, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558114;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26248
	ctx.r3.s64 = ctx.r11.s64 + -26248;
	// bl 0x831cdcc8
	ctx.lr = 0x83558120;
	sub_831CDCC8(ctx, base);
loc_83558120:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9336
	ctx.r31.s64 = ctx.r11.s64 + 9336;
	// stw r30,9336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9336, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558134;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27396
	ctx.r4.s64 = ctx.r11.s64 + -27396;
	// bl 0x83a7a980
	ctx.lr = 0x83558144;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558150;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83558154;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x83558164;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x835581d8
	goto loc_835581D8;
loc_8355816C:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,312
	ctx.r30.s64 = ctx.r11.s64 + 312;
	// lwz r11,352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835581a0
	if (!cr6.eq) goto loc_835581A0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 352, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558194;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26264
	ctx.r3.s64 = ctx.r11.s64 + -26264;
	// bl 0x831cdcc8
	ctx.lr = 0x835581A0;
	sub_831CDCC8(ctx, base);
loc_835581A0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9336
	ctx.r31.s64 = ctx.r11.s64 + 9336;
	// stw r30,9336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9336, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x835581B4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27396
	ctx.r4.s64 = ctx.r11.s64 + -27396;
	// bl 0x83a7a980
	ctx.lr = 0x835581C4;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x835581D0;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x835581D4;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_835581D8:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,28168
	ctx.r4.s64 = ctx.r11.s64 + 28168;
	// bl 0x82583300
	ctx.lr = 0x835581E4;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835581FC"))) PPC_WEAK_FUNC(sub_835581FC);
PPC_FUNC_IMPL(__imp__sub_835581FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83558200"))) PPC_WEAK_FUNC(sub_83558200);
PPC_FUNC_IMPL(__imp__sub_83558200) {
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
	// bl 0x83573428
	ctx.lr = 0x83558218;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83558220;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x835582ac
	if (!cr6.eq) goto loc_835582AC;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,376
	ctx.r30.s64 = ctx.r11.s64 + 376;
	// lwz r11,396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558260
	if (!cr6.eq) goto loc_83558260;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 396, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558254;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26216
	ctx.r3.s64 = ctx.r11.s64 + -26216;
	// bl 0x831cdcc8
	ctx.lr = 0x83558260;
	sub_831CDCC8(ctx, base);
loc_83558260:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9344
	ctx.r31.s64 = ctx.r11.s64 + 9344;
	// stw r30,9344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9344, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558274;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27380
	ctx.r4.s64 = ctx.r11.s64 + -27380;
	// bl 0x83a7a980
	ctx.lr = 0x83558284;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558290;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83558294;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x835582A4;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83558318
	goto loc_83558318;
loc_835582AC:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,356
	ctx.r30.s64 = ctx.r11.s64 + 356;
	// lwz r11,396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835582e0
	if (!cr6.eq) goto loc_835582E0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 396, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x835582D4;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26232
	ctx.r3.s64 = ctx.r11.s64 + -26232;
	// bl 0x831cdcc8
	ctx.lr = 0x835582E0;
	sub_831CDCC8(ctx, base);
loc_835582E0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9344
	ctx.r31.s64 = ctx.r11.s64 + 9344;
	// stw r30,9344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9344, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x835582F4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27380
	ctx.r4.s64 = ctx.r11.s64 + -27380;
	// bl 0x83a7a980
	ctx.lr = 0x83558304;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558310;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83558314;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83558318:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,28288
	ctx.r4.s64 = ctx.r11.s64 + 28288;
	// bl 0x82583300
	ctx.lr = 0x83558324;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355833C"))) PPC_WEAK_FUNC(sub_8355833C);
PPC_FUNC_IMPL(__imp__sub_8355833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83558340"))) PPC_WEAK_FUNC(sub_83558340);
PPC_FUNC_IMPL(__imp__sub_83558340) {
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
	// bl 0x83573428
	ctx.lr = 0x83558358;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83558360;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x835583ec
	if (!cr6.eq) goto loc_835583EC;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,420
	ctx.r30.s64 = ctx.r11.s64 + 420;
	// lwz r11,440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 440);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835583a0
	if (!cr6.eq) goto loc_835583A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 440, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558394;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26184
	ctx.r3.s64 = ctx.r11.s64 + -26184;
	// bl 0x831cdcc8
	ctx.lr = 0x835583A0;
	sub_831CDCC8(ctx, base);
loc_835583A0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9376
	ctx.r31.s64 = ctx.r11.s64 + 9376;
	// stw r30,9376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9376, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x835583B4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27360
	ctx.r4.s64 = ctx.r11.s64 + -27360;
	// bl 0x83a7a980
	ctx.lr = 0x835583C4;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x835583D0;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x835583D4;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x835583E4;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83558458
	goto loc_83558458;
loc_835583EC:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,400
	ctx.r30.s64 = ctx.r11.s64 + 400;
	// lwz r11,440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 440);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558420
	if (!cr6.eq) goto loc_83558420;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 440, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558414;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26200
	ctx.r3.s64 = ctx.r11.s64 + -26200;
	// bl 0x831cdcc8
	ctx.lr = 0x83558420;
	sub_831CDCC8(ctx, base);
loc_83558420:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9376
	ctx.r31.s64 = ctx.r11.s64 + 9376;
	// stw r30,9376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9376, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558434;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27360
	ctx.r4.s64 = ctx.r11.s64 + -27360;
	// bl 0x83a7a980
	ctx.lr = 0x83558444;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558450;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83558454;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83558458:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,28408
	ctx.r4.s64 = ctx.r11.s64 + 28408;
	// bl 0x82583300
	ctx.lr = 0x83558464;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355847C"))) PPC_WEAK_FUNC(sub_8355847C);
PPC_FUNC_IMPL(__imp__sub_8355847C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83558480"))) PPC_WEAK_FUNC(sub_83558480);
PPC_FUNC_IMPL(__imp__sub_83558480) {
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
	// bl 0x83573428
	ctx.lr = 0x83558498;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x835584A0;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x8355852c
	if (!cr6.eq) goto loc_8355852C;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,464
	ctx.r30.s64 = ctx.r11.s64 + 464;
	// lwz r11,484(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835584e0
	if (!cr6.eq) goto loc_835584E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 484, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x835584D4;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26152
	ctx.r3.s64 = ctx.r11.s64 + -26152;
	// bl 0x831cdcc8
	ctx.lr = 0x835584E0;
	sub_831CDCC8(ctx, base);
loc_835584E0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9396
	ctx.r31.s64 = ctx.r11.s64 + 9396;
	// stw r30,9396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9396, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x835584F4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// bl 0x83a7a980
	ctx.lr = 0x83558504;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558510;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83558514;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x83558524;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83558598
	goto loc_83558598;
loc_8355852C:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,444
	ctx.r30.s64 = ctx.r11.s64 + 444;
	// lwz r11,484(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558560
	if (!cr6.eq) goto loc_83558560;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 484, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558554;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26168
	ctx.r3.s64 = ctx.r11.s64 + -26168;
	// bl 0x831cdcc8
	ctx.lr = 0x83558560;
	sub_831CDCC8(ctx, base);
loc_83558560:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9396
	ctx.r31.s64 = ctx.r11.s64 + 9396;
	// stw r30,9396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9396, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558574;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// bl 0x83a7a980
	ctx.lr = 0x83558584;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558590;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83558594;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83558598:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,28528
	ctx.r4.s64 = ctx.r11.s64 + 28528;
	// bl 0x82583300
	ctx.lr = 0x835585A4;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835585BC"))) PPC_WEAK_FUNC(sub_835585BC);
PPC_FUNC_IMPL(__imp__sub_835585BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835585C0"))) PPC_WEAK_FUNC(sub_835585C0);
PPC_FUNC_IMPL(__imp__sub_835585C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835585C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835585EC;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83558608
	if (cr6.eq) goto loc_83558608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83556fe8
	ctx.lr = 0x83558600;
	sub_83556FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8355860c
	goto loc_8355860C;
loc_83558608:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8355860C:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x8355861C;
	sub_8259F070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83558628"))) PPC_WEAK_FUNC(sub_83558628);
PPC_FUNC_IMPL(__imp__sub_83558628) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83558658;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355868c
	if (cr6.eq) goto loc_8355868C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83573bd0
	ctx.lr = 0x8355866C;
	sub_83573BD0(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-27516
	ctx.r9.s64 = ctx.r10.s64 + -27516;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x83558694
	goto loc_83558694;
loc_8355868C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_83558694:
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8259f070
	ctx.lr = 0x835586A4;
	sub_8259F070(ctx, base);
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

__attribute__((alias("__imp__sub_835586C0"))) PPC_WEAK_FUNC(sub_835586C0);
PPC_FUNC_IMPL(__imp__sub_835586C0) {
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
	// bl 0x83573428
	ctx.lr = 0x835586D8;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x835586E0;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x8355876c
	if (!cr6.eq) goto loc_8355876C;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,508
	ctx.r30.s64 = ctx.r11.s64 + 508;
	// lwz r11,528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558720
	if (!cr6.eq) goto loc_83558720;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 528, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558714;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26056
	ctx.r3.s64 = ctx.r11.s64 + -26056;
	// bl 0x831cdcc8
	ctx.lr = 0x83558720;
	sub_831CDCC8(ctx, base);
loc_83558720:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9368
	ctx.r31.s64 = ctx.r11.s64 + 9368;
	// stw r30,9368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9368, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558734;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27324
	ctx.r4.s64 = ctx.r11.s64 + -27324;
	// bl 0x83a7a980
	ctx.lr = 0x83558744;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558750;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83558754;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x83558764;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x835587d8
	goto loc_835587D8;
loc_8355876C:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,488
	ctx.r30.s64 = ctx.r11.s64 + 488;
	// lwz r11,528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835587a0
	if (!cr6.eq) goto loc_835587A0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 528, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558794;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26072
	ctx.r3.s64 = ctx.r11.s64 + -26072;
	// bl 0x831cdcc8
	ctx.lr = 0x835587A0;
	sub_831CDCC8(ctx, base);
loc_835587A0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9368
	ctx.r31.s64 = ctx.r11.s64 + 9368;
	// stw r30,9368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9368, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x835587B4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27324
	ctx.r4.s64 = ctx.r11.s64 + -27324;
	// bl 0x83a7a980
	ctx.lr = 0x835587C4;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x835587D0;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x835587D4;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_835587D8:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,29280
	ctx.r4.s64 = ctx.r11.s64 + 29280;
	// bl 0x82583300
	ctx.lr = 0x835587E4;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835587FC"))) PPC_WEAK_FUNC(sub_835587FC);
PPC_FUNC_IMPL(__imp__sub_835587FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83558800"))) PPC_WEAK_FUNC(sub_83558800);
PPC_FUNC_IMPL(__imp__sub_83558800) {
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
	// bl 0x83573428
	ctx.lr = 0x83558818;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83558820;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x835588ac
	if (!cr6.eq) goto loc_835588AC;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,552
	ctx.r30.s64 = ctx.r11.s64 + 552;
	// lwz r11,572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558860
	if (!cr6.eq) goto loc_83558860;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558854;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26024
	ctx.r3.s64 = ctx.r11.s64 + -26024;
	// bl 0x831cdcc8
	ctx.lr = 0x83558860;
	sub_831CDCC8(ctx, base);
loc_83558860:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9388
	ctx.r31.s64 = ctx.r11.s64 + 9388;
	// stw r30,9388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9388, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558874;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27304
	ctx.r4.s64 = ctx.r11.s64 + -27304;
	// bl 0x83a7a980
	ctx.lr = 0x83558884;
	sub_83A7A980(ctx, base);
	// li r4,848
	ctx.r4.s64 = 848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558890;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83558894;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x835588A4;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83558918
	goto loc_83558918;
loc_835588AC:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,532
	ctx.r30.s64 = ctx.r11.s64 + 532;
	// lwz r11,572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835588e0
	if (!cr6.eq) goto loc_835588E0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x835588D4;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26040
	ctx.r3.s64 = ctx.r11.s64 + -26040;
	// bl 0x831cdcc8
	ctx.lr = 0x835588E0;
	sub_831CDCC8(ctx, base);
loc_835588E0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9388
	ctx.r31.s64 = ctx.r11.s64 + 9388;
	// stw r30,9388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9388, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x835588F4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27304
	ctx.r4.s64 = ctx.r11.s64 + -27304;
	// bl 0x83a7a980
	ctx.lr = 0x83558904;
	sub_83A7A980(ctx, base);
	// li r4,848
	ctx.r4.s64 = 848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558910;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83558914;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83558918:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,29400
	ctx.r4.s64 = ctx.r11.s64 + 29400;
	// bl 0x82583300
	ctx.lr = 0x83558924;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355893C"))) PPC_WEAK_FUNC(sub_8355893C);
PPC_FUNC_IMPL(__imp__sub_8355893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83558940"))) PPC_WEAK_FUNC(sub_83558940);
PPC_FUNC_IMPL(__imp__sub_83558940) {
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
	// bl 0x83573428
	ctx.lr = 0x83558958;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83558960;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x835589ec
	if (!cr6.eq) goto loc_835589EC;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,596
	ctx.r30.s64 = ctx.r11.s64 + 596;
	// lwz r11,616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 616);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835589a0
	if (!cr6.eq) goto loc_835589A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 616, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558994;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25992
	ctx.r3.s64 = ctx.r11.s64 + -25992;
	// bl 0x831cdcc8
	ctx.lr = 0x835589A0;
	sub_831CDCC8(ctx, base);
loc_835589A0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,10512
	ctx.r31.s64 = ctx.r11.s64 + 10512;
	// stw r30,10512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10512, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x835589B4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27288
	ctx.r4.s64 = ctx.r11.s64 + -27288;
	// bl 0x83a7a980
	ctx.lr = 0x835589C4;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x835589D0;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x835589D4;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x835589E4;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83558a58
	goto loc_83558A58;
loc_835589EC:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,576
	ctx.r30.s64 = ctx.r11.s64 + 576;
	// lwz r11,616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 616);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558a20
	if (!cr6.eq) goto loc_83558A20;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 616, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558A14;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26008
	ctx.r3.s64 = ctx.r11.s64 + -26008;
	// bl 0x831cdcc8
	ctx.lr = 0x83558A20;
	sub_831CDCC8(ctx, base);
loc_83558A20:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,10512
	ctx.r31.s64 = ctx.r11.s64 + 10512;
	// stw r30,10512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10512, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558A34;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27288
	ctx.r4.s64 = ctx.r11.s64 + -27288;
	// bl 0x83a7a980
	ctx.lr = 0x83558A44;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558A50;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83558A54;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83558A58:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,29504
	ctx.r4.s64 = ctx.r11.s64 + 29504;
	// bl 0x82583300
	ctx.lr = 0x83558A64;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83558A7C"))) PPC_WEAK_FUNC(sub_83558A7C);
PPC_FUNC_IMPL(__imp__sub_83558A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83558A80"))) PPC_WEAK_FUNC(sub_83558A80);
PPC_FUNC_IMPL(__imp__sub_83558A80) {
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
	// bl 0x83573428
	ctx.lr = 0x83558A98;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83558AA0;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x83558b2c
	if (!cr6.eq) goto loc_83558B2C;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,640
	ctx.r30.s64 = ctx.r11.s64 + 640;
	// lwz r11,660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558ae0
	if (!cr6.eq) goto loc_83558AE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 660, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558AD4;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25960
	ctx.r3.s64 = ctx.r11.s64 + -25960;
	// bl 0x831cdcc8
	ctx.lr = 0x83558AE0;
	sub_831CDCC8(ctx, base);
loc_83558AE0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9444
	ctx.r31.s64 = ctx.r11.s64 + 9444;
	// stw r30,9444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9444, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558AF4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27276
	ctx.r4.s64 = ctx.r11.s64 + -27276;
	// bl 0x83a7a980
	ctx.lr = 0x83558B04;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558B10;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83558B14;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x83558B24;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83558b98
	goto loc_83558B98;
loc_83558B2C:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,620
	ctx.r30.s64 = ctx.r11.s64 + 620;
	// lwz r11,660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558b60
	if (!cr6.eq) goto loc_83558B60;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 660, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558B54;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25976
	ctx.r3.s64 = ctx.r11.s64 + -25976;
	// bl 0x831cdcc8
	ctx.lr = 0x83558B60;
	sub_831CDCC8(ctx, base);
loc_83558B60:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9444
	ctx.r31.s64 = ctx.r11.s64 + 9444;
	// stw r30,9444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9444, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558B74;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27276
	ctx.r4.s64 = ctx.r11.s64 + -27276;
	// bl 0x83a7a980
	ctx.lr = 0x83558B84;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558B90;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83558B94;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83558B98:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,29624
	ctx.r4.s64 = ctx.r11.s64 + 29624;
	// bl 0x82583300
	ctx.lr = 0x83558BA4;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83558BBC"))) PPC_WEAK_FUNC(sub_83558BBC);
PPC_FUNC_IMPL(__imp__sub_83558BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83558BC0"))) PPC_WEAK_FUNC(sub_83558BC0);
PPC_FUNC_IMPL(__imp__sub_83558BC0) {
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
	// bl 0x83573428
	ctx.lr = 0x83558BD8;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83558BE0;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x83558c6c
	if (!cr6.eq) goto loc_83558C6C;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,684
	ctx.r30.s64 = ctx.r11.s64 + 684;
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558c20
	if (!cr6.eq) goto loc_83558C20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 704, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558C14;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25928
	ctx.r3.s64 = ctx.r11.s64 + -25928;
	// bl 0x831cdcc8
	ctx.lr = 0x83558C20;
	sub_831CDCC8(ctx, base);
loc_83558C20:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9452
	ctx.r31.s64 = ctx.r11.s64 + 9452;
	// stw r30,9452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9452, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558C34;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27260
	ctx.r4.s64 = ctx.r11.s64 + -27260;
	// bl 0x83a7a980
	ctx.lr = 0x83558C44;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558C50;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83558C54;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x83558C64;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83558cd8
	goto loc_83558CD8;
loc_83558C6C:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,664
	ctx.r30.s64 = ctx.r11.s64 + 664;
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558ca0
	if (!cr6.eq) goto loc_83558CA0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 704, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558C94;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25944
	ctx.r3.s64 = ctx.r11.s64 + -25944;
	// bl 0x831cdcc8
	ctx.lr = 0x83558CA0;
	sub_831CDCC8(ctx, base);
loc_83558CA0:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9452
	ctx.r31.s64 = ctx.r11.s64 + 9452;
	// stw r30,9452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9452, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558CB4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27260
	ctx.r4.s64 = ctx.r11.s64 + -27260;
	// bl 0x83a7a980
	ctx.lr = 0x83558CC4;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558CD0;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83558CD4;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83558CD8:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,29744
	ctx.r4.s64 = ctx.r11.s64 + 29744;
	// bl 0x82583300
	ctx.lr = 0x83558CE4;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83558CFC"))) PPC_WEAK_FUNC(sub_83558CFC);
PPC_FUNC_IMPL(__imp__sub_83558CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83558D00"))) PPC_WEAK_FUNC(sub_83558D00);
PPC_FUNC_IMPL(__imp__sub_83558D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83558D08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83558D2C;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83558d48
	if (cr6.eq) goto loc_83558D48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835574a8
	ctx.lr = 0x83558D40;
	sub_835574A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83558d4c
	goto loc_83558D4C;
loc_83558D48:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83558D4C:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83558D5C;
	sub_8259F070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83558D68"))) PPC_WEAK_FUNC(sub_83558D68);
PPC_FUNC_IMPL(__imp__sub_83558D68) {
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
	// bl 0x83573428
	ctx.lr = 0x83558D80;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83558D88;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x83558e14
	if (!cr6.eq) goto loc_83558E14;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,728
	ctx.r30.s64 = ctx.r11.s64 + 728;
	// lwz r11,748(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 748);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558dc8
	if (!cr6.eq) goto loc_83558DC8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 748, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558DBC;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25864
	ctx.r3.s64 = ctx.r11.s64 + -25864;
	// bl 0x831cdcc8
	ctx.lr = 0x83558DC8;
	sub_831CDCC8(ctx, base);
loc_83558DC8:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9436
	ctx.r31.s64 = ctx.r11.s64 + 9436;
	// stw r30,9436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9436, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558DDC;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27244
	ctx.r4.s64 = ctx.r11.s64 + -27244;
	// bl 0x83a7a980
	ctx.lr = 0x83558DEC;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558DF8;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83558DFC;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x83558E0C;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83558e80
	goto loc_83558E80;
loc_83558E14:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,708
	ctx.r30.s64 = ctx.r11.s64 + 708;
	// lwz r11,748(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 748);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558e48
	if (!cr6.eq) goto loc_83558E48;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 748, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558E3C;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25880
	ctx.r3.s64 = ctx.r11.s64 + -25880;
	// bl 0x831cdcc8
	ctx.lr = 0x83558E48;
	sub_831CDCC8(ctx, base);
loc_83558E48:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9436
	ctx.r31.s64 = ctx.r11.s64 + 9436;
	// stw r30,9436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9436, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558E5C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27244
	ctx.r4.s64 = ctx.r11.s64 + -27244;
	// bl 0x83a7a980
	ctx.lr = 0x83558E6C;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558E78;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83558E7C;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83558E80:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,31536
	ctx.r4.s64 = ctx.r11.s64 + 31536;
	// bl 0x82583300
	ctx.lr = 0x83558E8C;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83558EA4"))) PPC_WEAK_FUNC(sub_83558EA4);
PPC_FUNC_IMPL(__imp__sub_83558EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83558EA8"))) PPC_WEAK_FUNC(sub_83558EA8);
PPC_FUNC_IMPL(__imp__sub_83558EA8) {
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
	// bl 0x83573428
	ctx.lr = 0x83558EC0;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83558EC8;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x83558f54
	if (!cr6.eq) goto loc_83558F54;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,772
	ctx.r30.s64 = ctx.r11.s64 + 772;
	// lwz r11,792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 792);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558f08
	if (!cr6.eq) goto loc_83558F08;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 792, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558EFC;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25832
	ctx.r3.s64 = ctx.r11.s64 + -25832;
	// bl 0x831cdcc8
	ctx.lr = 0x83558F08;
	sub_831CDCC8(ctx, base);
loc_83558F08:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9412
	ctx.r31.s64 = ctx.r11.s64 + 9412;
	// stw r30,9412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9412, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558F1C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27224
	ctx.r4.s64 = ctx.r11.s64 + -27224;
	// bl 0x83a7a980
	ctx.lr = 0x83558F2C;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558F38;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x83558F3C;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x83558F4C;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83558fc0
	goto loc_83558FC0;
loc_83558F54:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,752
	ctx.r30.s64 = ctx.r11.s64 + 752;
	// lwz r11,792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 792);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83558f88
	if (!cr6.eq) goto loc_83558F88;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 792, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83558F7C;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25848
	ctx.r3.s64 = ctx.r11.s64 + -25848;
	// bl 0x831cdcc8
	ctx.lr = 0x83558F88;
	sub_831CDCC8(ctx, base);
loc_83558F88:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9412
	ctx.r31.s64 = ctx.r11.s64 + 9412;
	// stw r30,9412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9412, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83558F9C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27224
	ctx.r4.s64 = ctx.r11.s64 + -27224;
	// bl 0x83a7a980
	ctx.lr = 0x83558FAC;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83558FB8;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x83558FBC;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83558FC0:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,31656
	ctx.r4.s64 = ctx.r11.s64 + 31656;
	// bl 0x82583300
	ctx.lr = 0x83558FCC;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83558FE4"))) PPC_WEAK_FUNC(sub_83558FE4);
PPC_FUNC_IMPL(__imp__sub_83558FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83558FE8"))) PPC_WEAK_FUNC(sub_83558FE8);
PPC_FUNC_IMPL(__imp__sub_83558FE8) {
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
	// bl 0x83573428
	ctx.lr = 0x83559000;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83559008;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x83559094
	if (!cr6.eq) goto loc_83559094;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,816
	ctx.r30.s64 = ctx.r11.s64 + 816;
	// lwz r11,836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 836);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83559048
	if (!cr6.eq) goto loc_83559048;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 836, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8355903C;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25800
	ctx.r3.s64 = ctx.r11.s64 + -25800;
	// bl 0x831cdcc8
	ctx.lr = 0x83559048;
	sub_831CDCC8(ctx, base);
loc_83559048:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9420
	ctx.r31.s64 = ctx.r11.s64 + 9420;
	// stw r30,9420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9420, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8355905C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27204
	ctx.r4.s64 = ctx.r11.s64 + -27204;
	// bl 0x83a7a980
	ctx.lr = 0x8355906C;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83559078;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x8355907C;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8355908C;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83559100
	goto loc_83559100;
loc_83559094:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,796
	ctx.r30.s64 = ctx.r11.s64 + 796;
	// lwz r11,836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 836);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835590c8
	if (!cr6.eq) goto loc_835590C8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 836, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x835590BC;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25816
	ctx.r3.s64 = ctx.r11.s64 + -25816;
	// bl 0x831cdcc8
	ctx.lr = 0x835590C8;
	sub_831CDCC8(ctx, base);
loc_835590C8:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9420
	ctx.r31.s64 = ctx.r11.s64 + 9420;
	// stw r30,9420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9420, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x835590DC;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27204
	ctx.r4.s64 = ctx.r11.s64 + -27204;
	// bl 0x83a7a980
	ctx.lr = 0x835590EC;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x835590F8;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x835590FC;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83559100:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,31776
	ctx.r4.s64 = ctx.r11.s64 + 31776;
	// bl 0x82583300
	ctx.lr = 0x8355910C;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83559124"))) PPC_WEAK_FUNC(sub_83559124);
PPC_FUNC_IMPL(__imp__sub_83559124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83559128"))) PPC_WEAK_FUNC(sub_83559128);
PPC_FUNC_IMPL(__imp__sub_83559128) {
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
	// bl 0x83573428
	ctx.lr = 0x83559140;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83559148;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x835591d4
	if (!cr6.eq) goto loc_835591D4;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,860
	ctx.r30.s64 = ctx.r11.s64 + 860;
	// lwz r11,880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 880);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83559188
	if (!cr6.eq) goto loc_83559188;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 880, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8355917C;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25768
	ctx.r3.s64 = ctx.r11.s64 + -25768;
	// bl 0x831cdcc8
	ctx.lr = 0x83559188;
	sub_831CDCC8(ctx, base);
loc_83559188:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,10520
	ctx.r31.s64 = ctx.r11.s64 + 10520;
	// stw r30,10520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10520, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8355919C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27188
	ctx.r4.s64 = ctx.r11.s64 + -27188;
	// bl 0x83a7a980
	ctx.lr = 0x835591AC;
	sub_83A7A980(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x835591B8;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x835591BC;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x835591CC;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83559240
	goto loc_83559240;
loc_835591D4:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,840
	ctx.r30.s64 = ctx.r11.s64 + 840;
	// lwz r11,880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 880);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83559208
	if (!cr6.eq) goto loc_83559208;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 880, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x835591FC;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25784
	ctx.r3.s64 = ctx.r11.s64 + -25784;
	// bl 0x831cdcc8
	ctx.lr = 0x83559208;
	sub_831CDCC8(ctx, base);
loc_83559208:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,10520
	ctx.r31.s64 = ctx.r11.s64 + 10520;
	// stw r30,10520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10520, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8355921C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27188
	ctx.r4.s64 = ctx.r11.s64 + -27188;
	// bl 0x83a7a980
	ctx.lr = 0x8355922C;
	sub_83A7A980(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83559238;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x8355923C;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83559240:
	// lis r11,-31915
	ctx.r11.s64 = -2091581440;
	// addi r4,r11,31896
	ctx.r4.s64 = ctx.r11.s64 + 31896;
	// bl 0x82583300
	ctx.lr = 0x8355924C;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83559264"))) PPC_WEAK_FUNC(sub_83559264);
PPC_FUNC_IMPL(__imp__sub_83559264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83559268"))) PPC_WEAK_FUNC(sub_83559268);
PPC_FUNC_IMPL(__imp__sub_83559268) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lbz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835592a4
	if (!cr6.eq) goto loc_835592A4;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
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
loc_835592A4:
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835592f8
	if (cr6.eq) goto loc_835592F8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x835592f8
	if (cr6.eq) goto loc_835592F8;
loc_835592C8:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835592DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x835592E4;
	sub_8330EE50(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x835592c8
	if (!cr6.eq) goto loc_835592C8;
loc_835592F8:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83559310;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83559350
	if (!cr6.eq) goto loc_83559350;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83559350
	if (cr6.eq) goto loc_83559350;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83559350
	if (!cr6.eq) goto loc_83559350;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82596fe8
	ctx.lr = 0x83559350;
	sub_82596FE8(ctx, base);
loc_83559350:
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

__attribute__((alias("__imp__sub_83559368"))) PPC_WEAK_FUNC(sub_83559368);
PPC_FUNC_IMPL(__imp__sub_83559368) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83556b88
	ctx.lr = 0x83559390;
	sub_83556B88(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lbz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 164);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83559404
	if (cr6.eq) goto loc_83559404;
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835593bc
	if (!cr6.eq) goto loc_835593BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83556c68
	ctx.lr = 0x835593B8;
	sub_83556C68(ctx, base);
	// b 0x8355943c
	goto loc_8355943C;
loc_835593BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83559404
	if (cr6.eq) goto loc_83559404;
loc_835593D0:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835593E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x835593F0;
	sub_8330EE50(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x835593d0
	if (!cr6.eq) goto loc_835593D0;
loc_83559404:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355943c
	if (cr6.eq) goto loc_8355943C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83559438
	if (cr6.eq) goto loc_83559438;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
loc_83559438:
	// bl 0x82597088
	ctx.lr = 0x8355943C;
	sub_82597088(ctx, base);
loc_8355943C:
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

__attribute__((alias("__imp__sub_83559454"))) PPC_WEAK_FUNC(sub_83559454);
PPC_FUNC_IMPL(__imp__sub_83559454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83559458"))) PPC_WEAK_FUNC(sub_83559458);
PPC_FUNC_IMPL(__imp__sub_83559458) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lbz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83559584
	if (cr6.eq) goto loc_83559584;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83556b88
	ctx.lr = 0x83559484;
	sub_83556B88(ctx, base);
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355949C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x835594B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,144
	ctx.r30.s64 = ctx.r11.s64 + 144;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835594e8
	if (cr6.eq) goto loc_835594E8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835594e4
	if (cr6.eq) goto loc_835594E4;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
loc_835594E4:
	// bl 0x82597088
	ctx.lr = 0x835594E8;
	sub_82597088(ctx, base);
loc_835594E8:
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8355953c
	if (cr6.eq) goto loc_8355953C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8355953c
	if (cr6.eq) goto loc_8355953C;
loc_8355950C:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83559520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x83559528;
	sub_8330EE50(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8355950c
	if (!cr6.eq) goto loc_8355950C;
loc_8355953C:
	// bl 0x83574ee0
	ctx.lr = 0x83559540;
	sub_83574EE0(ctx, base);
	// bl 0x83577850
	ctx.lr = 0x83559544;
	sub_83577850(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83559574
	if (cr6.eq) goto loc_83559574;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,64
	ctx.r10.s64 = 64;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83559570
	if (cr6.eq) goto loc_83559570;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_83559570:
	// bl 0x82597088
	ctx.lr = 0x83559574;
	sub_82597088(ctx, base);
loc_83559574:
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// ld r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 168);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,168(r10)
	PPC_STORE_U64(ctx.r10.u32 + 168, ctx.r11.u64);
loc_83559584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355959C"))) PPC_WEAK_FUNC(sub_8355959C);
PPC_FUNC_IMPL(__imp__sub_8355959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835595A0"))) PPC_WEAK_FUNC(sub_835595A0);
PPC_FUNC_IMPL(__imp__sub_835595A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835595A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x835595C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// neg r8,r3
	ctx.r8.s64 = -ctx.r3.s64;
	// li r30,1
	ctx.r30.s64 = 1;
	// andc r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r3.u64;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r29,r7,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8355963c
	if (cr6.eq) goto loc_8355963C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8355963c
	if (cr6.eq) goto loc_8355963C;
loc_835595F8:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355960C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83559638
	if (cr6.eq) goto loc_83559638;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x83559620;
	sub_8330EE50(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x835595f8
	if (!cr6.eq) goto loc_835595F8;
	// b 0x8355963c
	goto loc_8355963C;
loc_83559638:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8355963C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83559658
	if (cr6.eq) goto loc_83559658;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8355965c
	if (!cr6.eq) goto loc_8355965C;
loc_83559658:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8355965C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83559668"))) PPC_WEAK_FUNC(sub_83559668);
PPC_FUNC_IMPL(__imp__sub_83559668) {
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
	// bl 0x83573428
	ctx.lr = 0x83559680;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83559688;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x83559714
	if (!cr6.eq) goto loc_83559714;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,904
	ctx.r30.s64 = ctx.r11.s64 + 904;
	// lwz r11,924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 924);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835596c8
	if (!cr6.eq) goto loc_835596C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 924, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x835596BC;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26120
	ctx.r3.s64 = ctx.r11.s64 + -26120;
	// bl 0x831cdcc8
	ctx.lr = 0x835596C8;
	sub_831CDCC8(ctx, base);
loc_835596C8:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9352
	ctx.r31.s64 = ctx.r11.s64 + 9352;
	// stw r30,9352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9352, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x835596DC;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27172
	ctx.r4.s64 = ctx.r11.s64 + -27172;
	// bl 0x83a7a980
	ctx.lr = 0x835596EC;
	sub_83A7A980(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x835596F8;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x835596FC;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8355970C;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83559780
	goto loc_83559780;
loc_83559714:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,884
	ctx.r30.s64 = ctx.r11.s64 + 884;
	// lwz r11,924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 924);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83559748
	if (!cr6.eq) goto loc_83559748;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 924, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8355973C;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26136
	ctx.r3.s64 = ctx.r11.s64 + -26136;
	// bl 0x831cdcc8
	ctx.lr = 0x83559748;
	sub_831CDCC8(ctx, base);
loc_83559748:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9352
	ctx.r31.s64 = ctx.r11.s64 + 9352;
	// stw r30,9352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9352, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8355975C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27172
	ctx.r4.s64 = ctx.r11.s64 + -27172;
	// bl 0x83a7a980
	ctx.lr = 0x8355976C;
	sub_83A7A980(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83559778;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x8355977C;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83559780:
	// lis r11,-31914
	ctx.r11.s64 = -2091515904;
	// addi r4,r11,-31296
	ctx.r4.s64 = ctx.r11.s64 + -31296;
	// bl 0x82583300
	ctx.lr = 0x8355978C;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835597A4"))) PPC_WEAK_FUNC(sub_835597A4);
PPC_FUNC_IMPL(__imp__sub_835597A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835597A8"))) PPC_WEAK_FUNC(sub_835597A8);
PPC_FUNC_IMPL(__imp__sub_835597A8) {
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
	// bl 0x83573428
	ctx.lr = 0x835597C0;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x835597C8;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x83559854
	if (!cr6.eq) goto loc_83559854;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,948
	ctx.r30.s64 = ctx.r11.s64 + 948;
	// lwz r11,968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 968);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83559808
	if (!cr6.eq) goto loc_83559808;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 968, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x835597FC;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26088
	ctx.r3.s64 = ctx.r11.s64 + -26088;
	// bl 0x831cdcc8
	ctx.lr = 0x83559808;
	sub_831CDCC8(ctx, base);
loc_83559808:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9360
	ctx.r31.s64 = ctx.r11.s64 + 9360;
	// stw r30,9360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9360, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8355981C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// bl 0x83a7a980
	ctx.lr = 0x8355982C;
	sub_83A7A980(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83559838;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x8355983C;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8355984C;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x835598c0
	goto loc_835598C0;
loc_83559854:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,928
	ctx.r30.s64 = ctx.r11.s64 + 928;
	// lwz r11,968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 968);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83559888
	if (!cr6.eq) goto loc_83559888;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 968, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8355987C;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26104
	ctx.r3.s64 = ctx.r11.s64 + -26104;
	// bl 0x831cdcc8
	ctx.lr = 0x83559888;
	sub_831CDCC8(ctx, base);
loc_83559888:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9360
	ctx.r31.s64 = ctx.r11.s64 + 9360;
	// stw r30,9360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9360, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8355989C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// bl 0x83a7a980
	ctx.lr = 0x835598AC;
	sub_83A7A980(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x835598B8;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x835598BC;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_835598C0:
	// lis r11,-31914
	ctx.r11.s64 = -2091515904;
	// addi r4,r11,-31192
	ctx.r4.s64 = ctx.r11.s64 + -31192;
	// bl 0x82583300
	ctx.lr = 0x835598CC;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835598E4"))) PPC_WEAK_FUNC(sub_835598E4);
PPC_FUNC_IMPL(__imp__sub_835598E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835598E8"))) PPC_WEAK_FUNC(sub_835598E8);
PPC_FUNC_IMPL(__imp__sub_835598E8) {
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
	// bl 0x83573428
	ctx.lr = 0x83559900;
	sub_83573428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83573428
	ctx.lr = 0x83559908;
	sub_83573428(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// bne cr6,0x83559994
	if (!cr6.eq) goto loc_83559994;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,992
	ctx.r30.s64 = ctx.r11.s64 + 992;
	// lwz r11,1012(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1012);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83559948
	if (!cr6.eq) goto loc_83559948;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8355993C;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25896
	ctx.r3.s64 = ctx.r11.s64 + -25896;
	// bl 0x831cdcc8
	ctx.lr = 0x83559948;
	sub_831CDCC8(ctx, base);
loc_83559948:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9404
	ctx.r31.s64 = ctx.r11.s64 + 9404;
	// stw r30,9404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9404, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8355995C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27136
	ctx.r4.s64 = ctx.r11.s64 + -27136;
	// bl 0x83a7a980
	ctx.lr = 0x8355996C;
	sub_83A7A980(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x83559978;
	sub_82583338(ctx, base);
	// bl 0x83573428
	ctx.lr = 0x8355997C;
	sub_83573428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8355998C;
	sub_83585D68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83559a00
	goto loc_83559A00;
loc_83559994:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,972
	ctx.r30.s64 = ctx.r11.s64 + 972;
	// lwz r11,1012(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1012);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835599c8
	if (!cr6.eq) goto loc_835599C8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x835599BC;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25912
	ctx.r3.s64 = ctx.r11.s64 + -25912;
	// bl 0x831cdcc8
	ctx.lr = 0x835599C8;
	sub_831CDCC8(ctx, base);
loc_835599C8:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,9404
	ctx.r31.s64 = ctx.r11.s64 + 9404;
	// stw r30,9404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9404, ctx.r30.u32);
	// bl 0x83585dc8
	ctx.lr = 0x835599DC;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-27136
	ctx.r4.s64 = ctx.r11.s64 + -27136;
	// bl 0x83a7a980
	ctx.lr = 0x835599EC;
	sub_83A7A980(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82583338
	ctx.lr = 0x835599F8;
	sub_82583338(ctx, base);
	// bl 0x83572928
	ctx.lr = 0x835599FC;
	sub_83572928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83559A00:
	// lis r11,-31914
	ctx.r11.s64 = -2091515904;
	// addi r4,r11,-29440
	ctx.r4.s64 = ctx.r11.s64 + -29440;
	// bl 0x82583300
	ctx.lr = 0x83559A0C;
	sub_82583300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83559A24"))) PPC_WEAK_FUNC(sub_83559A24);
PPC_FUNC_IMPL(__imp__sub_83559A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83559A28"))) PPC_WEAK_FUNC(sub_83559A28);
PPC_FUNC_IMPL(__imp__sub_83559A28) {
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
	// bl 0x83564f70
	ctx.lr = 0x83559A38;
	sub_83564F70(ctx, base);
	// bl 0x83565490
	ctx.lr = 0x83559A3C;
	sub_83565490(ctx, base);
	// bl 0x83585338
	ctx.lr = 0x83559A40;
	sub_83585338(ctx, base);
	// bl 0x835801e0
	ctx.lr = 0x83559A44;
	sub_835801E0(ctx, base);
	// bl 0x8357fa50
	ctx.lr = 0x83559A48;
	sub_8357FA50(ctx, base);
	// bl 0x83562218
	ctx.lr = 0x83559A4C;
	sub_83562218(ctx, base);
	// bl 0x83562108
	ctx.lr = 0x83559A50;
	sub_83562108(ctx, base);
	// bl 0x83574620
	ctx.lr = 0x83559A54;
	sub_83574620(ctx, base);
	// bl 0x8357bcf8
	ctx.lr = 0x83559A58;
	sub_8357BCF8(ctx, base);
	// bl 0x83578d78
	ctx.lr = 0x83559A5C;
	sub_83578D78(ctx, base);
	// bl 0x83586678
	ctx.lr = 0x83559A60;
	sub_83586678(ctx, base);
	// bl 0x83582ce0
	ctx.lr = 0x83559A64;
	sub_83582CE0(ctx, base);
	// bl 0x83581330
	ctx.lr = 0x83559A68;
	sub_83581330(ctx, base);
	// bl 0x8357cfb0
	ctx.lr = 0x83559A6C;
	sub_8357CFB0(ctx, base);
	// bl 0x8357cd30
	ctx.lr = 0x83559A70;
	sub_8357CD30(ctx, base);
	// bl 0x8357cdd8
	ctx.lr = 0x83559A74;
	sub_8357CDD8(ctx, base);
	// bl 0x8357cf00
	ctx.lr = 0x83559A78;
	sub_8357CF00(ctx, base);
	// bl 0x8357beb8
	ctx.lr = 0x83559A7C;
	sub_8357BEB8(ctx, base);
	// bl 0x83583828
	ctx.lr = 0x83559A80;
	sub_83583828(ctx, base);
	// bl 0x83583938
	ctx.lr = 0x83559A84;
	sub_83583938(ctx, base);
	// bl 0x8355a1a8
	ctx.lr = 0x83559A88;
	sub_8355A1A8(ctx, base);
	// bl 0x83580920
	ctx.lr = 0x83559A8C;
	sub_83580920(ctx, base);
	// bl 0x83584938
	ctx.lr = 0x83559A90;
	sub_83584938(ctx, base);
	// bl 0x83585778
	ctx.lr = 0x83559A94;
	sub_83585778(ctx, base);
	// bl 0x83583de8
	ctx.lr = 0x83559A98;
	sub_83583DE8(ctx, base);
	// bl 0x83580ab0
	ctx.lr = 0x83559A9C;
	sub_83580AB0(ctx, base);
	// bl 0x83573dd0
	ctx.lr = 0x83559AA0;
	sub_83573DD0(ctx, base);
	// bl 0x83586550
	ctx.lr = 0x83559AA4;
	sub_83586550(ctx, base);
	// bl 0x83586340
	ctx.lr = 0x83559AA8;
	sub_83586340(ctx, base);
	// bl 0x83566468
	ctx.lr = 0x83559AAC;
	sub_83566468(ctx, base);
	// bl 0x83566530
	ctx.lr = 0x83559AB0;
	sub_83566530(ctx, base);
	// bl 0x8357c268
	ctx.lr = 0x83559AB4;
	sub_8357C268(ctx, base);
	// bl 0x8357c310
	ctx.lr = 0x83559AB8;
	sub_8357C310(ctx, base);
	// bl 0x83574138
	ctx.lr = 0x83559ABC;
	sub_83574138(ctx, base);
	// bl 0x83585180
	ctx.lr = 0x83559AC0;
	sub_83585180(ctx, base);
	// bl 0x83572960
	ctx.lr = 0x83559AC4;
	sub_83572960(ctx, base);
	// bl 0x83557d00
	ctx.lr = 0x83559AC8;
	sub_83557D00(ctx, base);
	// bl 0x83557e40
	ctx.lr = 0x83559ACC;
	sub_83557E40(ctx, base);
	// bl 0x83558940
	ctx.lr = 0x83559AD0;
	sub_83558940(ctx, base);
	// bl 0x83558a80
	ctx.lr = 0x83559AD4;
	sub_83558A80(ctx, base);
	// bl 0x83558bc0
	ctx.lr = 0x83559AD8;
	sub_83558BC0(ctx, base);
	// bl 0x83557f80
	ctx.lr = 0x83559ADC;
	sub_83557F80(ctx, base);
	// bl 0x835580c0
	ctx.lr = 0x83559AE0;
	sub_835580C0(ctx, base);
	// bl 0x83558340
	ctx.lr = 0x83559AE4;
	sub_83558340(ctx, base);
	// bl 0x83558800
	ctx.lr = 0x83559AE8;
	sub_83558800(ctx, base);
	// bl 0x83559668
	ctx.lr = 0x83559AEC;
	sub_83559668(ctx, base);
	// bl 0x835597a8
	ctx.lr = 0x83559AF0;
	sub_835597A8(ctx, base);
	// bl 0x835598e8
	ctx.lr = 0x83559AF4;
	sub_835598E8(ctx, base);
	// bl 0x83558200
	ctx.lr = 0x83559AF8;
	sub_83558200(ctx, base);
	// bl 0x835586c0
	ctx.lr = 0x83559AFC;
	sub_835586C0(ctx, base);
	// bl 0x83558ea8
	ctx.lr = 0x83559B00;
	sub_83558EA8(ctx, base);
	// bl 0x83558fe8
	ctx.lr = 0x83559B04;
	sub_83558FE8(ctx, base);
	// bl 0x83558480
	ctx.lr = 0x83559B08;
	sub_83558480(ctx, base);
	// bl 0x83558d68
	ctx.lr = 0x83559B0C;
	sub_83558D68(ctx, base);
	// bl 0x83559128
	ctx.lr = 0x83559B10;
	sub_83559128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83559B20"))) PPC_WEAK_FUNC(sub_83559B20);
PPC_FUNC_IMPL(__imp__sub_83559B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83559B28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31744
	ctx.r26.s64 = -2080374784;
	// lbz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83559b4c
	if (cr6.eq) goto loc_83559B4C;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83559B4C:
	// bl 0x83561eb0
	ctx.lr = 0x83559B50;
	sub_83561EB0(ctx, base);
	// lis r28,-31744
	ctx.r28.s64 = -2080374784;
	// lwz r11,160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83559b70
	if (!cr6.eq) goto loc_83559B70;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83559B70:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_83559B84:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83559B98;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83559bac
	if (cr6.eq) goto loc_83559BAC;
	// bl 0x82596fa8
	ctx.lr = 0x83559BA8;
	sub_82596FA8(ctx, base);
	// b 0x83559bb0
	goto loc_83559BB0;
loc_83559BAC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83559BB0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwu r31,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r29.u32 = ea;
	// bne 0x83559b84
	if (!cr0.eq) goto loc_83559B84;
	// bl 0x835f65c0
	ctx.lr = 0x83559BC0;
	sub_835F65C0(ctx, base);
	// bl 0x835504c0
	ctx.lr = 0x83559BC4;
	sub_835504C0(ctx, base);
	// bl 0x83585e40
	ctx.lr = 0x83559BC8;
	sub_83585E40(ctx, base);
	// bl 0x83559a28
	ctx.lr = 0x83559BCC;
	sub_83559A28(ctx, base);
	// bl 0x83578bf0
	ctx.lr = 0x83559BD0;
	sub_83578BF0(ctx, base);
	// lwz r3,160(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83559BE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83559bfc
	if (cr6.eq) goto loc_83559BFC;
loc_83559BEC:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83559BFC:
	// bl 0x83564460
	ctx.lr = 0x83559C00;
	sub_83564460(ctx, base);
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83559c5c
	if (cr6.eq) goto loc_83559C5C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83559c5c
	if (cr6.eq) goto loc_83559C5C;
loc_83559C24:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83559C38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83559bec
	if (!cr6.eq) goto loc_83559BEC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x83559C48;
	sub_8330EE50(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83559c24
	if (!cr6.eq) goto loc_83559C24;
loc_83559C5C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r27,164(r26)
	PPC_STORE_U8(ctx.r26.u32 + 164, ctx.r27.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83559C70"))) PPC_WEAK_FUNC(sub_83559C70);
PPC_FUNC_IMPL(__imp__sub_83559C70) {
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
	// bl 0x83574ee0
	ctx.lr = 0x83559C84;
	sub_83574EE0(ctx, base);
	// bl 0x83575dd0
	ctx.lr = 0x83559C88;
	sub_83575DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83559cac
	if (cr6.eq) goto loc_83559CAC;
loc_83559C94:
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
loc_83559CAC:
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83559d20
	if (cr6.eq) goto loc_83559D20;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83559d20
	if (cr6.eq) goto loc_83559D20;
loc_83559CD0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e7410
	ctx.lr = 0x83559CDC;
	sub_833E7410(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83559CF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83559c94
	if (!cr6.eq) goto loc_83559C94;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833e7410
	ctx.lr = 0x83559D08;
	sub_833E7410(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83559cd0
	if (!cr6.eq) goto loc_83559CD0;
loc_83559D20:
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

__attribute__((alias("__imp__sub_83559D38"))) PPC_WEAK_FUNC(sub_83559D38);
PPC_FUNC_IMPL(__imp__sub_83559D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83559D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83559d68
	if (!cr6.eq) goto loc_83559D68;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83559D68:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lbz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83559d88
	if (cr6.eq) goto loc_83559D88;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83559D88:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// lwz r31,156(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83559dcc
	if (!cr6.eq) goto loc_83559DCC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83559DB0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83559dfc
	if (cr6.eq) goto loc_83559DFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8381b9d0
	ctx.lr = 0x83559DC8;
	sub_8381B9D0(ctx, base);
	// stw r31,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r31.u32);
loc_83559DCC:
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833ecc50
	ctx.lr = 0x83559DE0;
	sub_833ECC50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83559e14
	if (cr6.eq) goto loc_83559E14;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83559DFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83559E14:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ad58e8
	ctx.lr = 0x83559E2C;
	sub_82AD58E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83559E38"))) PPC_WEAK_FUNC(sub_83559E38);
PPC_FUNC_IMPL(__imp__sub_83559E38) {
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
	ctx.lr = 0x83559E40;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31744
	ctx.r26.s64 = -2080374784;
	// lbz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83559e6c
	if (!cr6.eq) goto loc_83559E6C;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83559E6C:
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825834b0
	ctx.lr = 0x83559E78;
	sub_825834B0(ctx, base);
	// bl 0x83574ee0
	ctx.lr = 0x83559E7C;
	sub_83574EE0(ctx, base);
	// bl 0x83575dd0
	ctx.lr = 0x83559E80;
	sub_83575DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83559ec0
	if (cr6.eq) goto loc_83559EC0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,27608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	ctx.f31.f64 = double(temp.f32);
loc_83559E94:
	// bl 0x83559268
	ctx.lr = 0x83559E98;
	sub_83559268(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83559ea8
	if (!cr6.eq) goto loc_83559EA8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83559368
	ctx.lr = 0x83559EA8;
	sub_83559368(ctx, base);
loc_83559EA8:
	// bl 0x83559458
	ctx.lr = 0x83559EAC;
	sub_83559458(ctx, base);
	// bl 0x83574ee0
	ctx.lr = 0x83559EB0;
	sub_83574EE0(ctx, base);
	// bl 0x83575dd0
	ctx.lr = 0x83559EB4;
	sub_83575DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83559e94
	if (!cr6.eq) goto loc_83559E94;
loc_83559EC0:
	// lis r27,-31744
	ctx.r27.s64 = -2080374784;
	// lwz r3,156(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83559f7c
	if (cr6.eq) goto loc_83559F7C;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83559f4c
	if (cr6.eq) goto loc_83559F4C;
loc_83559EE4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e7410
	ctx.lr = 0x83559EF0;
	sub_833E7410(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83559F08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e7410
	ctx.lr = 0x83559F14;
	sub_833E7410(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,16(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83559F2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833e7410
	ctx.lr = 0x83559F34;
	sub_833E7410(ctx, base);
	// lwz r3,156(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// bne cr6,0x83559ee4
	if (!cr6.eq) goto loc_83559EE4;
loc_83559F4C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x83559F5C;
	sub_82CD17D8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83559F7C:
	// bl 0x83563bb0
	ctx.lr = 0x83559F80;
	sub_83563BB0(ctx, base);
	// bl 0x83574ee0
	ctx.lr = 0x83559F84;
	sub_83574EE0(ctx, base);
	// bl 0x83577850
	ctx.lr = 0x83559F88;
	sub_83577850(ctx, base);
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83559fbc
	if (cr6.eq) goto loc_83559FBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83559FA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83559FBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83559FBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x83578ca0
	ctx.lr = 0x83559FC8;
	sub_83578CA0(ctx, base);
	// bl 0x83585ec8
	ctx.lr = 0x83559FCC;
	sub_83585EC8(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r31,r11,144
	ctx.r31.s64 = ctx.r11.s64 + 144;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83559FDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8355a028
	if (cr6.eq) goto loc_8355A028;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83559FF8;
	sub_82595150(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8355a020
	if (cr6.eq) goto loc_8355A020;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596f90
	ctx.lr = 0x8355A00C;
	sub_82596F90(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x8355A010;
	sub_82595188(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x8355A020;
	sub_825952B8(ctx, base);
loc_8355A020:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8355A028;
	sub_82595170(ctx, base);
loc_8355A028:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83559fdc
	if (!cr0.eq) goto loc_83559FDC;
	// bl 0x83561850
	ctx.lr = 0x8355A038;
	sub_83561850(ctx, base);
	// bl 0x83550588
	ctx.lr = 0x8355A03C;
	sub_83550588(ctx, base);
	// bl 0x835f65f8
	ctx.lr = 0x8355A040;
	sub_835F65F8(ctx, base);
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8355a0ac
	if (cr6.eq) goto loc_8355A0AC;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8355A05C;
	sub_82595150(ctx, base);
	// lwz r31,156(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8355a0a4
	if (cr6.eq) goto loc_8355A0A4;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8355A07C;
	sub_82D0E798(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8355A090;
	sub_825952B8(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x8355A094;
	sub_82595188(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x8355A0A4;
	sub_825952B8(ctx, base);
loc_8355A0A4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8355A0AC;
	sub_82595170(ctx, base);
loc_8355A0AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,164(r26)
	PPC_STORE_U8(ctx.r26.u32 + 164, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355A0C4"))) PPC_WEAK_FUNC(sub_8355A0C4);
PPC_FUNC_IMPL(__imp__sub_8355A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355A0C8"))) PPC_WEAK_FUNC(sub_8355A0C8);
PPC_FUNC_IMPL(__imp__sub_8355A0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,1016(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355A0D4"))) PPC_WEAK_FUNC(sub_8355A0D4);
PPC_FUNC_IMPL(__imp__sub_8355A0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355A0D8"))) PPC_WEAK_FUNC(sub_8355A0D8);
PPC_FUNC_IMPL(__imp__sub_8355A0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8355a0ec
	if (cr6.eq) goto loc_8355A0EC;
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
loc_8355A0EC:
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8355a0fc
	if (cr6.eq) goto loc_8355A0FC;
	// stfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
loc_8355A0FC:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355A114"))) PPC_WEAK_FUNC(sub_8355A114);
PPC_FUNC_IMPL(__imp__sub_8355A114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355A118"))) PPC_WEAK_FUNC(sub_8355A118);
PPC_FUNC_IMPL(__imp__sub_8355A118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355A120"))) PPC_WEAK_FUNC(sub_8355A120);
PPC_FUNC_IMPL(__imp__sub_8355A120) {
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
	// lwz r30,104(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83556b78
	ctx.lr = 0x8355A140;
	sub_83556B78(ctx, base);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355a15c
	if (cr6.eq) goto loc_8355A15C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x835869a8
	ctx.lr = 0x8355A154;
	sub_835869A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8355a160
	if (!cr6.eq) goto loc_8355A160;
loc_8355A15C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8355A160:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355A178"))) PPC_WEAK_FUNC(sub_8355A178);
PPC_FUNC_IMPL(__imp__sub_8355A178) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355A180"))) PPC_WEAK_FUNC(sub_8355A180);
PPC_FUNC_IMPL(__imp__sub_8355A180) {
	PPC_FUNC_PROLOGUE();
	// stw r4,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355A188"))) PPC_WEAK_FUNC(sub_8355A188);
PPC_FUNC_IMPL(__imp__sub_8355A188) {
	PPC_FUNC_PROLOGUE();
	// stb r4,632(r3)
	PPC_STORE_U8(ctx.r3.u32 + 632, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355A190"))) PPC_WEAK_FUNC(sub_8355A190);
PPC_FUNC_IMPL(__imp__sub_8355A190) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,632(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 632);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355A198"))) PPC_WEAK_FUNC(sub_8355A198);
PPC_FUNC_IMPL(__imp__sub_8355A198) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x82596fe8
	sub_82596FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355A1A0"))) PPC_WEAK_FUNC(sub_8355A1A0);
PPC_FUNC_IMPL(__imp__sub_8355A1A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x82597088
	sub_82597088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355A1A8"))) PPC_WEAK_FUNC(sub_8355A1A8);
PPC_FUNC_IMPL(__imp__sub_8355A1A8) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,1024
	ctx.r31.s64 = ctx.r11.s64 + 1024;
	// lwz r11,1044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1044);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8355a1f4
	if (!cr6.eq) goto loc_8355A1F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1044, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8355A1E8;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25736
	ctx.r3.s64 = ctx.r11.s64 + -25736;
	// bl 0x831cdcc8
	ctx.lr = 0x8355A1F4;
	sub_831CDCC8(ctx, base);
loc_8355A1F4:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,1016(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1016, ctx.r31.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8355A204;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,1016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	// addi r4,r11,-27088
	ctx.r4.s64 = ctx.r11.s64 + -27088;
	// bl 0x83a7a980
	ctx.lr = 0x8355A214;
	sub_83A7A980(ctx, base);
	// li r4,784
	ctx.r4.s64 = 784;
	// lwz r3,1016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	// bl 0x82583338
	ctx.lr = 0x8355A220;
	sub_82583338(ctx, base);
	// bl 0x83564ee0
	ctx.lr = 0x8355A224;
	sub_83564EE0(ctx, base);
	// lwz r11,1016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8355A234;
	sub_83585D68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355A24C"))) PPC_WEAK_FUNC(sub_8355A24C);
PPC_FUNC_IMPL(__imp__sub_8355A24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355A250"))) PPC_WEAK_FUNC(sub_8355A250);
PPC_FUNC_IMPL(__imp__sub_8355A250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8355A258;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355A278;
	sub_82596FE8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x835737a0
	ctx.lr = 0x8355A28C;
	sub_835737A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x8355A298;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355A2A4"))) PPC_WEAK_FUNC(sub_8355A2A4);
PPC_FUNC_IMPL(__imp__sub_8355A2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355A2A8"))) PPC_WEAK_FUNC(sub_8355A2A8);
PPC_FUNC_IMPL(__imp__sub_8355A2A8) {
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
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355A2CC;
	sub_82596FE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// bl 0x83572c30
	ctx.lr = 0x8355A2D8;
	sub_83572C30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// bl 0x83572d80
	ctx.lr = 0x8355A2E4;
	sub_83572D80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// bl 0x83572ed0
	ctx.lr = 0x8355A2F0;
	sub_83572ED0(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355a304
	if (cr6.eq) goto loc_8355A304;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x83571470
	ctx.lr = 0x8355A304;
	sub_83571470(ctx, base);
loc_8355A304:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x8355A30C;
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

__attribute__((alias("__imp__sub_8355A324"))) PPC_WEAK_FUNC(sub_8355A324);
PPC_FUNC_IMPL(__imp__sub_8355A324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355A328"))) PPC_WEAK_FUNC(sub_8355A328);
PPC_FUNC_IMPL(__imp__sub_8355A328) {
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
	ctx.lr = 0x8355A330;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83564ef0
	ctx.lr = 0x8355A33C;
	sub_83564EF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83585b70
	ctx.lr = 0x8355A348;
	sub_83585B70(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8355A364;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8355A374;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355a3bc
	if (cr6.eq) goto loc_8355A3BC;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8355A384:
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
	// bne 0x8355a384
	if (!cr0.eq) goto loc_8355A384;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8355a3bc
	if (cr6.gt) goto loc_8355A3BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355A3BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355A3BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355A3C8"))) PPC_WEAK_FUNC(sub_8355A3C8);
PPC_FUNC_IMPL(__imp__sub_8355A3C8) {
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
	ctx.lr = 0x8355A3D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,1016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	// bl 0x825832d8
	ctx.lr = 0x8355A3E8;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8355a45c
	if (!cr6.eq) goto loc_8355A45C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8355A408;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355a4a0
	if (cr6.eq) goto loc_8355A4A0;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8355A418:
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
	// bne 0x8355a418
	if (!cr0.eq) goto loc_8355A418;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8355a4a0
	if (cr6.gt) goto loc_8355A4A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355A450;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8355A45C:
	// lwz r3,1016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	// bl 0x825832d8
	ctx.lr = 0x8355A464;
	sub_825832D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8355A478;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8355A494;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x8355A4A0;
	sub_833D6D90(ctx, base);
loc_8355A4A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355A4AC"))) PPC_WEAK_FUNC(sub_8355A4AC);
PPC_FUNC_IMPL(__imp__sub_8355A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355A4B0"))) PPC_WEAK_FUNC(sub_8355A4B0);
PPC_FUNC_IMPL(__imp__sub_8355A4B0) {
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
	ctx.lr = 0x8355A4B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8355a3c8
	ctx.lr = 0x8355A4E8;
	sub_8355A3C8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8355A504;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8355A514;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355a55c
	if (cr6.eq) goto loc_8355A55C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8355A524:
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
	// bne 0x8355a524
	if (!cr0.eq) goto loc_8355A524;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8355a55c
	if (cr6.gt) goto loc_8355A55C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355A55C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355A55C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355A568"))) PPC_WEAK_FUNC(sub_8355A568);
PPC_FUNC_IMPL(__imp__sub_8355A568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,544(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8355A580:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355a580
	if (!cr0.eq) goto loc_8355A580;
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355A5A4"))) PPC_WEAK_FUNC(sub_8355A5A4);
PPC_FUNC_IMPL(__imp__sub_8355A5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355A5A8"))) PPC_WEAK_FUNC(sub_8355A5A8);
PPC_FUNC_IMPL(__imp__sub_8355A5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8355A5B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,24
	ctx.r27.s64 = ctx.r3.s64 + 24;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355A5C8;
	sub_82596FE8(ctx, base);
	// lwz r30,544(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8355a5fc
	if (cr6.eq) goto loc_8355A5FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
loc_8355A5DC:
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
	// bne 0x8355a5dc
	if (!cr0.eq) goto loc_8355A5DC;
	// lwsync 
loc_8355A5FC:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r29,r11,-22544
	ctx.r29.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x8355a614
	if (!cr6.eq) goto loc_8355A614;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_8355A614:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// beq cr6,0x8355a644
	if (cr6.eq) goto loc_8355A644;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8355A628:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355a628
	if (!cr6.eq) goto loc_8355A628;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8355A644:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355A65C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8355a6c4
	if (!cr6.eq) goto loc_8355A6C4;
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
loc_8355A670:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r8,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355a670
	if (!cr0.eq) goto loc_8355A670;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355a6ac
	if (!cr6.eq) goto loc_8355A6AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355A6AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355A6AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x8355A6B4;
	sub_82597088(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8355A6C4:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8355a6d4
	if (!cr6.eq) goto loc_8355A6D4;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_8355A6D4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8355a700
	if (cr6.eq) goto loc_8355A700;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8355A6E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355a6e4
	if (!cr6.eq) goto loc_8355A6E4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8355A700:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355A718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8355A72C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwsync 
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
loc_8355A738:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r3
	ea = ctx.r3.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stwcx. r5,0,r3
	ea = ctx.r3.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355a738
	if (!cr0.eq) goto loc_8355A738;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8355a774
	if (!cr6.eq) goto loc_8355A774;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355A774;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355A774:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x8355A77C;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355A788"))) PPC_WEAK_FUNC(sub_8355A788);
PPC_FUNC_IMPL(__imp__sub_8355A788) {
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
	ctx.lr = 0x8355A790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8355a804
	if (cr6.eq) goto loc_8355A804;
	// li r30,-2
	ctx.r30.s64 = -2;
loc_8355A7A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574ba8
	ctx.lr = 0x8355A7B4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355a7f8
	if (cr6.eq) goto loc_8355A7F8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8355A7C0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355a7c0
	if (!cr0.eq) goto loc_8355A7C0;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8355a7f8
	if (cr6.gt) goto loc_8355A7F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355A7F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355A7F8:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x8355a7a8
	if (!cr6.eq) goto loc_8355A7A8;
loc_8355A804:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355A80C"))) PPC_WEAK_FUNC(sub_8355A80C);
PPC_FUNC_IMPL(__imp__sub_8355A80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355A810"))) PPC_WEAK_FUNC(sub_8355A810);
PPC_FUNC_IMPL(__imp__sub_8355A810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8355A818;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x8355a93c
	if (cr6.eq) goto loc_8355A93C;
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// lbz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_8355A848:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dfa5c8
	ctx.lr = 0x8355A854;
	sub_82DFA5C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8355a8ac
	if (!cr6.eq) goto loc_8355A8AC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83585248
	ctx.lr = 0x8355A86C;
	sub_83585248(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355a8ac
	if (cr6.eq) goto loc_8355A8AC;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83435598
	ctx.lr = 0x8355A888;
	sub_83435598(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r3,r4,-8
	ctx.r3.s64 = ctx.r4.s64 + -8;
	// bl 0x8355a788
	ctx.lr = 0x8355A89C;
	sub_8355A788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8355a930
	goto loc_8355A930;
loc_8355A8AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355A8C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8355A8D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8355a928
	if (cr6.eq) goto loc_8355A928;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835852c0
	ctx.lr = 0x8355A8F0;
	sub_835852C0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83435598
	ctx.lr = 0x8355A904;
	sub_83435598(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r3,r4,-8
	ctx.r3.s64 = ctx.r4.s64 + -8;
	// bl 0x8355a788
	ctx.lr = 0x8355A918;
	sub_8355A788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8355a930
	goto loc_8355A930;
loc_8355A928:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
loc_8355A930:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x8355a848
	if (!cr6.eq) goto loc_8355A848;
loc_8355A93C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355A944"))) PPC_WEAK_FUNC(sub_8355A944);
PPC_FUNC_IMPL(__imp__sub_8355A944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355A948"))) PPC_WEAK_FUNC(sub_8355A948);
PPC_FUNC_IMPL(__imp__sub_8355A948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8355A950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355A964;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,636(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// xori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 ^ 1;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x8355A978;
	sub_82597088(ctx, base);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,644
	ctx.r29.s64 = ctx.r11.s64 + 644;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355A98C;
	sub_82596FE8(ctx, base);
	// addi r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8355a810
	ctx.lr = 0x8355A9A0;
	sub_8355A810(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x8355A9A8;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355A9B0"))) PPC_WEAK_FUNC(sub_8355A9B0);
PPC_FUNC_IMPL(__imp__sub_8355A9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8355A9B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355A9CC;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,640(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// xori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 ^ 1;
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x8355A9E0;
	sub_82597088(ctx, base);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,708
	ctx.r29.s64 = ctx.r11.s64 + 708;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355A9F4;
	sub_82596FE8(ctx, base);
	// addi r10,r30,37
	ctx.r10.s64 = ctx.r30.s64 + 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8355a810
	ctx.lr = 0x8355AA08;
	sub_8355A810(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x8355AA10;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355AA18"))) PPC_WEAK_FUNC(sub_8355AA18);
PPC_FUNC_IMPL(__imp__sub_8355AA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8355AA20;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,552(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-27048
	ctx.r10.s64 = ctx.r11.s64 + -27048;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r24,r26,552
	ctx.r24.s64 = ctx.r26.s64 + 552;
	// bl 0x835734a0
	ctx.lr = 0x8355AA48;
	sub_835734A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82574ba8
	ctx.lr = 0x8355AA54;
	sub_82574BA8(ctx, base);
	// li r23,-2
	ctx.r23.s64 = -2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355aa9c
	if (cr6.eq) goto loc_8355AA9C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8355AA64:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355aa64
	if (!cr0.eq) goto loc_8355AA64;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8355aa9c
	if (cr6.gt) goto loc_8355AA9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355AA9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355AA9C:
	// addi r25,r26,544
	ctx.r25.s64 = ctx.r26.s64 + 544;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x837cffd0
	ctx.lr = 0x8355AAB4;
	sub_837CFFD0(ctx, base);
	// addi r29,r26,64
	ctx.r29.s64 = ctx.r26.s64 + 64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r29,708
	ctx.r31.s64 = ctx.r29.s64 + 708;
loc_8355AAC0:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596f90
	ctx.lr = 0x8355AACC;
	sub_82596F90(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8355aac0
	if (!cr0.lt) goto loc_8355AAC0;
	// addi r31,r29,644
	ctx.r31.s64 = ctx.r29.s64 + 644;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8355AADC:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596f90
	ctx.lr = 0x8355AAE8;
	sub_82596F90(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8355aadc
	if (!cr0.lt) goto loc_8355AADC;
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r26,624
	ctx.r31.s64 = ctx.r26.s64 + 624;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r27,2
	ctx.r27.s64 = 2;
loc_8355AB00:
	// lwzu r3,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355ab2c
	if (cr6.eq) goto loc_8355AB2C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x8355a788
	ctx.lr = 0x8355AB1C;
	sub_8355A788(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x8355AB2C;
	sub_825952B8(ctx, base);
loc_8355AB2C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bge 0x8355ab00
	if (!cr0.lt) goto loc_8355AB00;
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r26,592
	ctx.r31.s64 = ctx.r26.s64 + 592;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8355AB4C:
	// lwzu r3,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355ab78
	if (cr6.eq) goto loc_8355AB78;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x8355a788
	ctx.lr = 0x8355AB68;
	sub_8355A788(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x8355AB78;
	sub_825952B8(ctx, base);
loc_8355AB78:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bge 0x8355ab4c
	if (!cr0.lt) goto loc_8355AB4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82574ba8
	ctx.lr = 0x8355AB98;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355abdc
	if (cr6.eq) goto loc_8355ABDC;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8355ABA4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355aba4
	if (!cr0.eq) goto loc_8355ABA4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8355abdc
	if (cr6.gt) goto loc_8355ABDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355ABDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355ABDC:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355ac2c
	if (cr6.eq) goto loc_8355AC2C;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8355ABF4:
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
	// bne 0x8355abf4
	if (!cr0.eq) goto loc_8355ABF4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8355ac2c
	if (!cr6.eq) goto loc_8355AC2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355AC2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355AC2C:
	// addi r3,r26,128
	ctx.r3.s64 = ctx.r26.s64 + 128;
	// bl 0x83574df0
	ctx.lr = 0x8355AC34;
	sub_83574DF0(ctx, base);
	// addi r3,r26,108
	ctx.r3.s64 = ctx.r26.s64 + 108;
	// bl 0x835846f0
	ctx.lr = 0x8355AC3C;
	sub_835846F0(ctx, base);
	// lwz r3,56(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// bl 0x83521f50
	ctx.lr = 0x8355AC44;
	sub_83521F50(ctx, base);
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82596f90
	ctx.lr = 0x8355AC4C;
	sub_82596F90(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83565188
	ctx.lr = 0x8355AC54;
	sub_83565188(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355AC5C"))) PPC_WEAK_FUNC(sub_8355AC5C);
PPC_FUNC_IMPL(__imp__sub_8355AC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355AC60"))) PPC_WEAK_FUNC(sub_8355AC60);
PPC_FUNC_IMPL(__imp__sub_8355AC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,1016(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355AC6C"))) PPC_WEAK_FUNC(sub_8355AC6C);
PPC_FUNC_IMPL(__imp__sub_8355AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355AC70"))) PPC_WEAK_FUNC(sub_8355AC70);
PPC_FUNC_IMPL(__imp__sub_8355AC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8355AC78;
	__savegprlr_21(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r21,r11,-22544
	ctx.r21.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x8355ac9c
	if (!cr6.eq) goto loc_8355AC9C;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
loc_8355AC9C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x8355accc
	if (cr6.eq) goto loc_8355ACCC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8355ACB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355acb0
	if (!cr6.eq) goto loc_8355ACB0;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8355ACCC:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355ACE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8355AD00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8355AD18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// bl 0x83553090
	ctx.lr = 0x8355AD2C;
	sub_83553090(ctx, base);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355AD44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355b028
	if (cr6.eq) goto loc_8355B028;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r24,2
	ctx.r24.s64 = 2;
	// addi r26,r11,-27056
	ctx.r26.s64 = ctx.r11.s64 + -27056;
loc_8355AD60:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355AD74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x8355b008
	if (cr6.eq) goto loc_8355B008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355AD8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_8355ADA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355ada0
	if (!cr6.eq) goto loc_8355ADA0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8355ADC4;
	sub_8259CC28(ctx, base);
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_8355ADD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355add4
	if (!cr6.eq) goto loc_8355ADD4;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8355ADFC;
	sub_8259CC28(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825a1eb8
	ctx.lr = 0x8355AE0C;
	sub_825A1EB8(ctx, base);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8292a448
	ctx.lr = 0x8355AE24;
	sub_8292A448(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x825a1da8
	ctx.lr = 0x8355AE38;
	sub_825A1DA8(ctx, base);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8292a448
	ctx.lr = 0x8355AE50;
	sub_8292A448(ctx, base);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cb28
	ctx.lr = 0x8355AE70;
	sub_8259CB28(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8355ae8c
	if (cr6.lt) goto loc_8355AE8C;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8355AE8C;
	sub_825952B8(ctx, base);
loc_8355AE8C:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x8355aeb4
	if (cr6.lt) goto loc_8355AEB4;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x8355AEB4;
	sub_825952B8(ctx, base);
loc_8355AEB4:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x8355aedc
	if (cr6.lt) goto loc_8355AEDC;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x8355AEDC;
	sub_825952B8(ctx, base);
loc_8355AEDC:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// bge cr6,0x8355aefc
	if (!cr6.lt) goto loc_8355AEFC;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_8355AEFC:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355af0c
	if (!cr6.eq) goto loc_8355AF0C;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
loc_8355AF0C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// beq cr6,0x8355af38
	if (cr6.eq) goto loc_8355AF38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8355AF1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8355af1c
	if (!cr6.eq) goto loc_8355AF1C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8355AF38:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8355af4c
	if (!cr6.lt) goto loc_8355AF4C;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
loc_8355AF4C:
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355af5c
	if (!cr6.eq) goto loc_8355AF5C;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
loc_8355AF5C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// beq cr6,0x8355af88
	if (cr6.eq) goto loc_8355AF88;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8355AF6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8355af6c
	if (!cr6.eq) goto loc_8355AF6C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8355AF88:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355AFA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8355AFB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,196(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8355afd4
	if (cr6.lt) goto loc_8355AFD4;
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8355AFD4;
	sub_825952B8(ctx, base);
loc_8355AFD4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x8355affc
	if (cr6.lt) goto loc_8355AFFC;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8355AFFC;
	sub_825952B8(ctx, base);
loc_8355AFFC:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_8355B008:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r23,r3
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, xer);
	// blt cr6,0x8355ad60
	if (cr6.lt) goto loc_8355AD60;
loc_8355B028:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B03C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8355b078
	if (cr6.eq) goto loc_8355B078;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595150
	ctx.lr = 0x8355B058;
	sub_82595150(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8355B070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595170
	ctx.lr = 0x8355B078;
	sub_82595170(ctx, base);
loc_8355B078:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355b0c8
	if (cr6.eq) goto loc_8355B0C8;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8355B090:
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
	// bne 0x8355b090
	if (!cr0.eq) goto loc_8355B090;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8355b0c8
	if (!cr6.eq) goto loc_8355B0C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B0C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355B0C8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355B0D0"))) PPC_WEAK_FUNC(sub_8355B0D0);
PPC_FUNC_IMPL(__imp__sub_8355B0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8355B0D8;
	__savegprlr_19(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8355b0fc
	if (cr6.lt) goto loc_8355B0FC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8355b100
	goto loc_8355B100;
loc_8355B0FC:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8355B100:
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r27,r10,-22544
	ctx.r27.s64 = ctx.r10.s64 + -22544;
	// bne cr6,0x8355b118
	if (!cr6.eq) goto loc_8355B118;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
loc_8355B118:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// beq cr6,0x8355b148
	if (cr6.eq) goto loc_8355B148;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8355B12C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8355b12c
	if (!cr6.eq) goto loc_8355B12C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8355B148:
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B160;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8355b1a4
	if (!cr6.eq) goto loc_8355B1A4;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355b5c4
	if (cr6.eq) goto loc_8355B5C4;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8355B184:
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
	// bne 0x8355b184
	if (!cr0.eq) goto loc_8355B184;
	// b 0x8355b5a8
	goto loc_8355B5A8;
loc_8355B1A4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B1BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r21,0(r9)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// bl 0x83553090
	ctx.lr = 0x8355B1D0;
	sub_83553090(ctx, base);
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8355B1E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355b2dc
	if (cr6.eq) goto loc_8355B2DC;
loc_8355B1F0:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B208;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bctrl 
	ctx.lr = 0x8355B220;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8355b230
	if (!cr6.eq) goto loc_8355B230;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_8355B230:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// beq cr6,0x8355b25c
	if (cr6.eq) goto loc_8355B25C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8355B240:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355b240
	if (!cr6.eq) goto loc_8355B240;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8355B25C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B278;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8355b290
	if (cr6.eq) goto loc_8355B290;
	// lbz r11,17(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x8355b294
	goto loc_8355B294;
loc_8355B290:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8355B294:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8355b2bc
	if (cr6.eq) goto loc_8355B2BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83550418
	ctx.lr = 0x8355B2A8;
	sub_83550418(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B2BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355B2BC:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B2D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x8355b1f0
	if (cr6.lt) goto loc_8355B1F0;
loc_8355B2DC:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B2F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8355b344
	if (cr6.eq) goto loc_8355B344;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x8355B31C;
	sub_82595150(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355b33c
	if (cr6.eq) goto loc_8355B33C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B33C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355B33C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x8355B344;
	sub_82595170(ctx, base);
loc_8355B344:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B35C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355b504
	if (cr6.eq) goto loc_8355B504;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r24,2
	ctx.r24.s64 = 2;
	// addi r25,r11,-27052
	ctx.r25.s64 = ctx.r11.s64 + -27052;
loc_8355B378:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B38C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ab6970
	ctx.lr = 0x8355B3A0;
	sub_82AB6970(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8355B3A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355b3a4
	if (!cr6.eq) goto loc_8355B3A4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8355B3C8;
	sub_825A1EB8(ctx, base);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8292a448
	ctx.lr = 0x8355B3E0;
	sub_8292A448(ctx, base);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x8355B400;
	sub_8259CB28(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8355B414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8355b44c
	if (cr6.eq) goto loc_8355B44C;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_8355B42C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355b42c
	if (!cr0.eq) goto loc_8355B42C;
	// lwsync 
loc_8355B44C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8355b0d0
	ctx.lr = 0x8355B458;
	sub_8355B0D0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8355b474
	if (cr6.lt) goto loc_8355B474;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8355B474;
	sub_825952B8(ctx, base);
loc_8355B474:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// blt cr6,0x8355b49c
	if (cr6.lt) goto loc_8355B49C;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8355B49C;
	sub_825952B8(ctx, base);
loc_8355B49C:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// blt cr6,0x8355b4c4
	if (cr6.lt) goto loc_8355B4C4;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8355B4C4;
	sub_825952B8(ctx, base);
loc_8355B4C4:
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B4E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8355B4FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r26,r3
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, xer);
	// blt cr6,0x8355b378
	if (cr6.lt) goto loc_8355B378;
loc_8355B504:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8355b53c
	if (cr6.eq) goto loc_8355B53C;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x8355B51C;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x8355B53C;
	sub_82595170(ctx, base);
loc_8355B53C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x8355b574
	if (cr6.eq) goto loc_8355B574;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x8355B554;
	sub_82595150(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B56C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x8355B574;
	sub_82595170(ctx, base);
loc_8355B574:
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355b5c4
	if (cr6.eq) goto loc_8355B5C4;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8355B58C:
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
	// bne 0x8355b58c
	if (!cr0.eq) goto loc_8355B58C;
loc_8355B5A8:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8355b5c4
	if (!cr6.eq) goto loc_8355B5C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B5C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355B5C4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355B5CC"))) PPC_WEAK_FUNC(sub_8355B5CC);
PPC_FUNC_IMPL(__imp__sub_8355B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355B5D0"))) PPC_WEAK_FUNC(sub_8355B5D0);
PPC_FUNC_IMPL(__imp__sub_8355B5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8355B5D8;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8355b5fc
	if (!cr6.eq) goto loc_8355B5FC;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_8355B5FC:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// beq cr6,0x8355b62c
	if (cr6.eq) goto loc_8355B62C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8355B610:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355b610
	if (!cr6.eq) goto loc_8355B610;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8355B62C:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B644;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x8355b688
	if (!cr6.eq) goto loc_8355B688;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355b8cc
	if (cr6.eq) goto loc_8355B8CC;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8355B668:
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
	// bne 0x8355b668
	if (!cr0.eq) goto loc_8355B668;
	// b 0x8355b8b0
	goto loc_8355B8B0;
loc_8355B688:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B6A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// bl 0x83553090
	ctx.lr = 0x8355B6B4;
	sub_83553090(ctx, base);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8355B6CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355b7e0
	if (cr6.eq) goto loc_8355B7E0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r23,2
	ctx.r23.s64 = 2;
loc_8355B6E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B6F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8355B708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
loc_8355B71C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355b71c
	if (!cr6.eq) goto loc_8355B71C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8355B740;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8355b774
	if (cr6.eq) goto loc_8355B774;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_8355B754:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r22,r10
	ctx.r9.u64 = ctx.r22.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355b754
	if (!cr0.eq) goto loc_8355B754;
	// lwsync 
loc_8355B774:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8355b0d0
	ctx.lr = 0x8355B784;
	sub_8355B0D0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8355b7a0
	if (cr6.lt) goto loc_8355B7A0;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8355B7A0;
	sub_825952B8(ctx, base);
loc_8355B7A0:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B7C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8355B7D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r26,r3
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, xer);
	// blt cr6,0x8355b6e0
	if (cr6.lt) goto loc_8355B6E0;
loc_8355B7E0:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B7F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8355B7FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355b7fc
	if (!cr6.eq) goto loc_8355B7FC;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8355B830;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8355B844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8355b87c
	if (cr6.eq) goto loc_8355B87C;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8355B85C;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B874;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8355B87C;
	sub_82595170(ctx, base);
loc_8355B87C:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355b8cc
	if (cr6.eq) goto loc_8355B8CC;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8355B894:
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
	// bne 0x8355b894
	if (!cr0.eq) goto loc_8355B894;
loc_8355B8B0:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8355b8cc
	if (!cr6.eq) goto loc_8355B8CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355B8CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355B8CC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355B8D4"))) PPC_WEAK_FUNC(sub_8355B8D4);
PPC_FUNC_IMPL(__imp__sub_8355B8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355B8D8"))) PPC_WEAK_FUNC(sub_8355B8D8);
PPC_FUNC_IMPL(__imp__sub_8355B8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8355B8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355B8F4;
	sub_82596FE8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r11,-27064
	ctx.r29.s64 = ctx.r11.s64 + -27064;
	// lbz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 548);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8355b94c
	if (cr6.eq) goto loc_8355B94C;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8355b940
	if (cr6.eq) goto loc_8355B940;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_8355B920:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355b920
	if (!cr0.eq) goto loc_8355B920;
	// lwsync 
loc_8355B940:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8355ac70
	ctx.lr = 0x8355B94C;
	sub_8355AC70(ctx, base);
loc_8355B94C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// bl 0x835736a0
	ctx.lr = 0x8355B958;
	sub_835736A0(ctx, base);
	// lbz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 548);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8355b9a4
	if (cr6.eq) goto loc_8355B9A4;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8355b998
	if (cr6.eq) goto loc_8355B998;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_8355B978:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355b978
	if (!cr0.eq) goto loc_8355B978;
	// lwsync 
loc_8355B998:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8355b5d0
	ctx.lr = 0x8355B9A4;
	sub_8355B5D0(ctx, base);
loc_8355B9A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 548, ctx.r11.u8);
	// bl 0x82597088
	ctx.lr = 0x8355B9B4;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355B9BC"))) PPC_WEAK_FUNC(sub_8355B9BC);
PPC_FUNC_IMPL(__imp__sub_8355B9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355B9C0"))) PPC_WEAK_FUNC(sub_8355B9C0);
PPC_FUNC_IMPL(__imp__sub_8355B9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8355B9C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355B9E0;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,636(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// bl 0x82597088
	ctx.lr = 0x8355B9EC;
	sub_82597088(ctx, base);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,644
	ctx.r30.s64 = ctx.r11.s64 + 644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355BA00;
	sub_82596FE8(ctx, base);
	// addi r11,r29,35
	ctx.r11.s64 = ctx.r29.s64 + 35;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835bd5e8
	ctx.lr = 0x8355BA14;
	sub_835BD5E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x8355BA1C;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355BA24"))) PPC_WEAK_FUNC(sub_8355BA24);
PPC_FUNC_IMPL(__imp__sub_8355BA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355BA28"))) PPC_WEAK_FUNC(sub_8355BA28);
PPC_FUNC_IMPL(__imp__sub_8355BA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8355BA30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355BA48;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,640(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// bl 0x82597088
	ctx.lr = 0x8355BA54;
	sub_82597088(ctx, base);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,708
	ctx.r30.s64 = ctx.r11.s64 + 708;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8355BA68;
	sub_82596FE8(ctx, base);
	// addi r11,r29,37
	ctx.r11.s64 = ctx.r29.s64 + 37;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835bd5e8
	ctx.lr = 0x8355BA7C;
	sub_835BD5E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x8355BA84;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355BA8C"))) PPC_WEAK_FUNC(sub_8355BA8C);
PPC_FUNC_IMPL(__imp__sub_8355BA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355BA90"))) PPC_WEAK_FUNC(sub_8355BA90);
PPC_FUNC_IMPL(__imp__sub_8355BA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8355BA98;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83565088
	ctx.lr = 0x8355BAB8;
	sub_83565088(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r10,r11,-27048
	ctx.r10.s64 = ctx.r11.s64 + -27048;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596fa8
	ctx.lr = 0x8355BACC;
	sub_82596FA8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8355bb0c
	if (cr6.eq) goto loc_8355BB0C;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8355BADC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355badc
	if (!cr6.eq) goto loc_8355BADC;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8355BB00;
	sub_83522540(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8355bb50
	goto loc_8355BB50;
loc_8355BB0C:
	// li r28,2
	ctx.r28.s64 = 2;
	// bl 0x83522850
	ctx.lr = 0x8355BB14;
	sub_83522850(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8355bb50
	if (!cr6.eq) goto loc_8355BB50;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_8355BB34:
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
	// bne 0x8355bb34
	if (!cr0.eq) goto loc_8355BB34;
loc_8355BB50:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8355bb90
	if (!cr6.eq) goto loc_8355BB90;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_8355BB74:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8355bb74
	if (!cr0.eq) goto loc_8355BB74;
loc_8355BB90:
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8355bba4
	if (cr6.eq) goto loc_8355BBA4;
	// rlwinm r28,r28,0,31,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x83521f50
	ctx.lr = 0x8355BBA4;
	sub_83521F50(ctx, base);
loc_8355BBA4:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8355bbb8
	if (cr6.eq) goto loc_8355BBB8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x8355BBB8;
	sub_83521F50(ctx, base);
loc_8355BBB8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r25,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r25.u32);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x835847b0
	ctx.lr = 0x8355BC00;
	sub_835847B0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83574cc8
	ctx.lr = 0x8355BC08;
	sub_83574CC8(ctx, base);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stb r30,548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 548, ctx.r30.u8);
	// addi r26,r31,544
	ctx.r26.s64 = ctx.r31.s64 + 544;
	// std r30,552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 552, ctx.r30.u64);
	// addi r27,r31,552
	ctx.r27.s64 = ctx.r31.s64 + 552;
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// addi r28,r31,644
	ctx.r28.s64 = ctx.r31.s64 + 644;
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// stb r30,632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 632, ctx.r30.u8);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
loc_8355BC6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fa8
	ctx.lr = 0x8355BC74;
	sub_82596FA8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// bge 0x8355bc6c
	if (!cr0.lt) goto loc_8355BC6C;
	// addi r29,r31,708
	ctx.r29.s64 = ctx.r31.s64 + 708;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8355BC88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fa8
	ctx.lr = 0x8355BC90;
	sub_82596FA8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bge 0x8355bc88
	if (!cr0.lt) goto loc_8355BC88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8354efa0
	ctx.lr = 0x8355BCA4;
	sub_8354EFA0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8355a328
	ctx.lr = 0x8355BCAC;
	sub_8355A328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833bd1b8
	ctx.lr = 0x8355BCB8;
	sub_833BD1B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x8355BCC4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355bd0c
	if (cr6.eq) goto loc_8355BD0C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8355BCD4:
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
	// bne 0x8355bcd4
	if (!cr0.eq) goto loc_8355BCD4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8355bd0c
	if (cr6.gt) goto loc_8355BD0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355BD0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355BD0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565278
	ctx.lr = 0x8355BD18;
	sub_83565278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355BD24"))) PPC_WEAK_FUNC(sub_8355BD24);
PPC_FUNC_IMPL(__imp__sub_8355BD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355BD28"))) PPC_WEAK_FUNC(sub_8355BD28);
PPC_FUNC_IMPL(__imp__sub_8355BD28) {
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
	// bl 0x8355aa18
	ctx.lr = 0x8355BD48;
	sub_8355AA18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8355bd68
	if (cr6.eq) goto loc_8355BD68;
	// bl 0x82595188
	ctx.lr = 0x8355BD58;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8355BD68;
	sub_825952B8(ctx, base);
loc_8355BD68:
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

__attribute__((alias("__imp__sub_8355BD84"))) PPC_WEAK_FUNC(sub_8355BD84);
PPC_FUNC_IMPL(__imp__sub_8355BD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355BD88"))) PPC_WEAK_FUNC(sub_8355BD88);
PPC_FUNC_IMPL(__imp__sub_8355BD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// stw r3,1048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1048, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355BD94"))) PPC_WEAK_FUNC(sub_8355BD94);
PPC_FUNC_IMPL(__imp__sub_8355BD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355BD98"))) PPC_WEAK_FUNC(sub_8355BD98);
PPC_FUNC_IMPL(__imp__sub_8355BD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,1048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355BDA4"))) PPC_WEAK_FUNC(sub_8355BDA4);
PPC_FUNC_IMPL(__imp__sub_8355BDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355BDA8"))) PPC_WEAK_FUNC(sub_8355BDA8);
PPC_FUNC_IMPL(__imp__sub_8355BDA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x835740b0
	sub_835740B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355BDB0"))) PPC_WEAK_FUNC(sub_8355BDB0);
PPC_FUNC_IMPL(__imp__sub_8355BDB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8355BDB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// srawi. r31,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble 0x8355be10
	if (!cr0.gt) goto loc_8355BE10;
loc_8355BDD0:
	// srawi r11,r31,1
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// lwz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x8253f910
	ctx.lr = 0x8355BDEC;
	sub_8253F910(ctx, base);
	// cmplw cr6,r3,r26
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, xer);
	// bge cr6,0x8355be04
	if (!cr6.lt) goto loc_8355BE04;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// b 0x8355be08
	goto loc_8355BE08;
loc_8355BE04:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8355BE08:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x8355bdd0
	if (cr6.gt) goto loc_8355BDD0;
loc_8355BE10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355BE1C"))) PPC_WEAK_FUNC(sub_8355BE1C);
PPC_FUNC_IMPL(__imp__sub_8355BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355BE20"))) PPC_WEAK_FUNC(sub_8355BE20);
PPC_FUNC_IMPL(__imp__sub_8355BE20) {
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
	ctx.lr = 0x8355BE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8355BE4C;
	sub_82574BA8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833bd1b8
	ctx.lr = 0x8355BE5C;
	sub_833BD1B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833bd1b8
	ctx.lr = 0x8355BE68;
	sub_833BD1B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8355BE74;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8355bebc
	if (cr6.eq) goto loc_8355BEBC;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8355BE84:
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
	// bne 0x8355be84
	if (!cr0.eq) goto loc_8355BE84;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8355bebc
	if (cr6.gt) goto loc_8355BEBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8355BEBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8355BEBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355BEC4"))) PPC_WEAK_FUNC(sub_8355BEC4);
PPC_FUNC_IMPL(__imp__sub_8355BEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355BEC8"))) PPC_WEAK_FUNC(sub_8355BEC8);
PPC_FUNC_IMPL(__imp__sub_8355BEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8355BED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x835ecaf8
	ctx.lr = 0x8355BEE8;
	sub_835ECAF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825832f8
	ctx.lr = 0x8355BEF4;
	sub_825832F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83131d70
	ctx.lr = 0x8355BF00;
	sub_83131D70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8307e038
	ctx.lr = 0x8355BF0C;
	sub_8307E038(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835ecbd0
	ctx.lr = 0x8355BF14;
	sub_835ECBD0(ctx, base);
	// clrldi r6,r29,32
	ctx.r6.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835ed120
	ctx.lr = 0x8355BF28;
	sub_835ED120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x835636a8
	ctx.lr = 0x8355BF34;
	sub_835636A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835f3ab0
	ctx.lr = 0x8355BF3C;
	sub_835F3AB0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835ecaa8
	ctx.lr = 0x8355BF44;
	sub_835ECAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355BF50"))) PPC_WEAK_FUNC(sub_8355BF50);
PPC_FUNC_IMPL(__imp__sub_8355BF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8355BF58;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi. r30,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 3;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// beq 0x8355bfac
	if (cr0.eq) goto loc_8355BFAC;
loc_8355BF80:
	// divw r8,r28,r11
	ctx.r8.s32 = PPCDivide(ctx.r28.s32, ctx.r11.s32);
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf. r10,r7,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// twlgei r5,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x8355bf80
	if (!cr0.eq) goto loc_8355BF80;
loc_8355BFAC:
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// bge cr6,0x8355c020
	if (!cr6.lt) goto loc_8355C020;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x8355c020
	if (!cr6.gt) goto loc_8355C020;
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r25,r30,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_8355BFC8:
	// add r31,r29,r25
	ctx.r31.u64 = ctx.r29.u64 + ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x8355bfdc
	if (!cr6.eq) goto loc_8355BFDC;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8355BFDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8355be20
	ctx.lr = 0x8355BFE4;
	sub_8355BE20(ctx, base);
	// subf r11,r31,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r31.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x8355c000
	if (!cr6.lt) goto loc_8355C000;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// b 0x8355c00c
	goto loc_8355C00C;
loc_8355C000:
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_8355C00C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x8355bfdc
	if (!cr6.eq) goto loc_8355BFDC;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// bgt 0x8355bfc8
	if (cr0.gt) goto loc_8355BFC8;
loc_8355C020:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355C028"))) PPC_WEAK_FUNC(sub_8355C028);
PPC_FUNC_IMPL(__imp__sub_8355C028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8355C030;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8355c054
	if (!cr6.gt) goto loc_8355C054;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8355C054;
	sub_831CC150(ctx, base);
loc_8355C054:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8355c0f8
	if (!cr6.lt) goto loc_8355C0F8;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8355C088;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83408fa0
	ctx.lr = 0x8355C0AC;
	sub_83408FA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r26,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 3;
	// beq cr6,0x8355c0e0
	if (cr6.eq) goto loc_8355C0E0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8355a788
	ctx.lr = 0x8355C0D0;
	sub_8355A788(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8355C0E0;
	sub_825952B8(ctx, base);
loc_8355C0E0:
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8355C0F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355C100"))) PPC_WEAK_FUNC(sub_8355C100);
PPC_FUNC_IMPL(__imp__sub_8355C100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x8355c130
	if (!cr6.lt) goto loc_8355C130;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8355C130:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
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
	// blt cr6,0x8355c160
	if (cr6.lt) goto loc_8355C160;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8355C160:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x8355c16c
	if (!cr6.lt) goto loc_8355C16C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8355C16C:
	// b 0x8355c028
	sub_8355C028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8355C170"))) PPC_WEAK_FUNC(sub_8355C170);
PPC_FUNC_IMPL(__imp__sub_8355C170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8355C174"))) PPC_WEAK_FUNC(sub_8355C174);
PPC_FUNC_IMPL(__imp__sub_8355C174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8355C178"))) PPC_WEAK_FUNC(sub_8355C178);
PPC_FUNC_IMPL(__imp__sub_8355C178) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x8355c1ec
	if (cr6.eq) goto loc_8355C1EC;
loc_8355C19C:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x8355c1b4
	if (cr6.eq) goto loc_8355C1B4;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x8355c19c
	if (!cr6.eq) goto loc_8355C19C;
loc_8355C1B4:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x8355c1ec
	if (cr6.eq) goto loc_8355C1EC;
	// addi r3,r5,8
	ctx.r3.s64 = ctx.r5.s64 + 8;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83435598
	ctx.lr = 0x8355C1CC;
	sub_83435598(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r4,-8
	ctx.r3.s64 = ctx.r4.s64 + -8;
	// bl 0x8355a788
	ctx.lr = 0x8355C1E0;
	sub_8355A788(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8355C1EC:
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

