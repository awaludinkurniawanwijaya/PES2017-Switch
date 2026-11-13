#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_839F82EC"))) PPC_WEAK_FUNC(sub_839F82EC);
PPC_FUNC_IMPL(__imp__sub_839F82EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F82F0"))) PPC_WEAK_FUNC(sub_839F82F0);
PPC_FUNC_IMPL(__imp__sub_839F82F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr7{};
	uint32_t ea{};
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_839F82FC:
	// cmpwi cr7,r6,0
	cr7.compare<int32_t>(ctx.r6.s32, 0, xer);
	// subf. r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr7,0x839f8318
	if (cr7.eq) goto loc_839F8318;
	// bne 0x839f8318
	if (!cr0.eq) goto loc_839F8318;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// b 0x839f82fc
	goto loc_839F82FC;
loc_839F8318:
	// beqlr 
	if (cr0.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bltlr 
	if (cr0.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F832C"))) PPC_WEAK_FUNC(sub_839F832C);
PPC_FUNC_IMPL(__imp__sub_839F832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F8330"))) PPC_WEAK_FUNC(sub_839F8330);
PPC_FUNC_IMPL(__imp__sub_839F8330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	uint32_t ea{};
	// lbz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// cmpwi cr1,r4,0
	cr1.compare<int32_t>(ctx.r4.s32, 0, xer);
	// andi. r8,r7,3
	ctx.r8.u64 = ctx.r7.u64 & 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr1
	if (cr1.eq) return;
	// beq 0x839f8368
	if (cr0.eq) goto loc_839F8368;
loc_839F834C:
	// lbz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr1,r4,0
	cr1.compare<int32_t>(ctx.r4.s32, 0, xer);
	// andi. r8,r7,3
	ctx.r8.u64 = ctx.r7.u64 & 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// beqlr cr1
	if (cr1.eq) return;
	// bne 0x839f834c
	if (!cr0.eq) goto loc_839F834C;
loc_839F8368:
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lis r6,32639
	ctx.r6.s64 = 2139029504;
	// ori r6,r6,32639
	ctx.r6.u64 = ctx.r6.u64 | 32639;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_839F8378:
	// and r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 & ctx.r6.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// not. r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x839f839c
	if (!cr0.eq) goto loc_839F839C;
	// lwzu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x839f8378
	goto loc_839F8378;
loc_839F839C:
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F83AC"))) PPC_WEAK_FUNC(sub_839F83AC);
PPC_FUNC_IMPL(__imp__sub_839F83AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F83B0"))) PPC_WEAK_FUNC(sub_839F83B0);
PPC_FUNC_IMPL(__imp__sub_839F83B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839F83B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r24,r11,r4
	ctx.r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x839f8404
	if (!cr6.eq) goto loc_839F8404;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x839f8404
	if (cr6.eq) goto loc_839F8404;
loc_839F83E8:
	// bl 0x831d3050
	ctx.lr = 0x839F83EC;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x839F83F8;
	sub_831CF000(ctx, base);
loc_839F83F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839F83FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_839F8404:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839f83e8
	if (cr6.eq) goto loc_839F83E8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x839f83e8
	if (cr6.eq) goto loc_839F83E8;
	// cmplw cr6,r4,r24
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, xer);
	// bgt cr6,0x839f83f8
	if (cr6.gt) goto loc_839F83F8;
loc_839F841C:
	// rlwinm. r28,r5,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x839f848c
	if (cr0.eq) goto loc_839F848C;
	// clrlwi. r27,r5,31
	ctx.r27.u64 = ctx.r5.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x839f8434
	if (!cr0.eq) goto loc_839F8434;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
loc_839F8434:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x839F844C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x839f8484
	if (cr0.eq) goto loc_839F8484;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x839f8470
	if (!cr6.lt) goto loc_839F8470;
	// subf r24,r30,r31
	ctx.r24.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x839f8474
	if (!cr6.eq) goto loc_839F8474;
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// b 0x839f8478
	goto loc_839F8478;
loc_839F8470:
	// add r29,r31,r30
	ctx.r29.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_839F8474:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_839F8478:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// ble cr6,0x839f841c
	if (!cr6.gt) goto loc_839F841C;
	// b 0x839f83f8
	goto loc_839F83F8;
loc_839F8484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x839f83fc
	goto loc_839F83FC;
loc_839F848C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x839f83f8
	if (cr6.eq) goto loc_839F83F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x839F84A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
	// b 0x839f83fc
	goto loc_839F83FC;
}

__attribute__((alias("__imp__sub_839F84B4"))) PPC_WEAK_FUNC(sub_839F84B4);
PPC_FUNC_IMPL(__imp__sub_839F84B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F84B8"))) PPC_WEAK_FUNC(sub_839F84B8);
PPC_FUNC_IMPL(__imp__sub_839F84B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F84E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839f8518
	if (cr0.lt) goto loc_839F8518;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F84FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839f8518
	if (cr0.lt) goto loc_839F8518;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F8518;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839F8518:
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

__attribute__((alias("__imp__sub_839F852C"))) PPC_WEAK_FUNC(sub_839F852C);
PPC_FUNC_IMPL(__imp__sub_839F852C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F8530"))) PPC_WEAK_FUNC(sub_839F8530);
PPC_FUNC_IMPL(__imp__sub_839F8530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839F8538;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mullw r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832d5290
	ctx.lr = 0x839F8554;
	sub_832D5290(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839f857c
	if (cr0.eq) goto loc_839F857C;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x839f858c
	goto loc_839F858C;
loc_839F857C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_839F858C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F8598"))) PPC_WEAK_FUNC(sub_839F8598);
PPC_FUNC_IMPL(__imp__sub_839F8598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r12,-3856
	ctx.r12.s64 = -252706816;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// ori r12,r12,61680
	ctx.r12.u64 = ctx.r12.u64 | 61680;
	// rlwinm r6,r8,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r5,r8,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// addic r4,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// rlwinm r5,r5,0,16,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// subfe r6,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r4.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// and r3,r8,r12
	ctx.r3.u64 = ctx.r8.u64 & ctx.r12.u64;
	// lis r12,-13108
	ctx.r12.s64 = -859045888;
	// subfe r5,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r4,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// ori r12,r12,52428
	ctx.r12.u64 = ctx.r12.u64 | 52428;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// subfe r5,r4,r3
	temp.u8 = (~ctx.r4.u32 + ctx.r3.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r4.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r8,r12
	ctx.r4.u64 = ctx.r8.u64 & ctx.r12.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r12,-21846
	ctx.r12.s64 = -1431699456;
	// addic r3,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// ori r12,r12,43690
	ctx.r12.u64 = ctx.r12.u64 | 43690;
	// subfe r5,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r3.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r8,r12
	ctx.r4.u64 = ctx.r8.u64 & ctx.r12.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r3,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// subfe r5,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r3.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F8648"))) PPC_WEAK_FUNC(sub_839F8648);
PPC_FUNC_IMPL(__imp__sub_839F8648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839F8650;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832d5290
	ctx.lr = 0x839F866C;
	sub_832D5290(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x839f8684
	if (!cr0.eq) goto loc_839F8684;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x839f8710
	goto loc_839F8710;
loc_839F8684:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x832d5290
	ctx.lr = 0x839F8690;
	sub_832D5290(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839f86b4
	if (!cr6.eq) goto loc_839F86B4;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x839f86fc
	goto loc_839F86FC;
loc_839F86B4:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839f8530
	ctx.lr = 0x839F86C8;
	sub_839F8530(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x839f86e4
	if (cr0.lt) goto loc_839F86E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x839f86f4
	goto loc_839F86F4;
loc_839F86E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x832d53c8
	ctx.lr = 0x839F86F4;
	sub_832D53C8(ctx, base);
loc_839F86F4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x839f8720
	if (!cr6.lt) goto loc_839F8720;
loc_839F86FC:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d53c8
	ctx.lr = 0x839F8708;
	sub_832D53C8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x839f8720
	if (!cr6.lt) goto loc_839F8720;
loc_839F8710:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_839F8720:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F872C"))) PPC_WEAK_FUNC(sub_839F872C);
PPC_FUNC_IMPL(__imp__sub_839F872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F8730"))) PPC_WEAK_FUNC(sub_839F8730);
PPC_FUNC_IMPL(__imp__sub_839F8730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839F8738;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x839f8778
	goto loc_839F8778;
loc_839F8748:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832d53c8
	ctx.lr = 0x839F875C;
	sub_832D53C8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x832d53c8
	ctx.lr = 0x839F8778;
	sub_832D53C8(ctx, base);
loc_839F8778:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x839f8748
	if (!cr6.eq) goto loc_839F8748;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d53c8
	ctx.lr = 0x839F8798;
	sub_832D53C8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F87A4"))) PPC_WEAK_FUNC(sub_839F87A4);
PPC_FUNC_IMPL(__imp__sub_839F87A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F87A8"))) PPC_WEAK_FUNC(sub_839F87A8);
PPC_FUNC_IMPL(__imp__sub_839F87A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839F87B0;
	__savegprlr_24(ctx, base);
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
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_839F87CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x839f8598
	ctx.lr = 0x839F87D8;
	sub_839F8598(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne 0x839f87f4
	if (!cr0.eq) goto loc_839F87F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x839f87cc
	if (cr6.lt) goto loc_839F87CC;
loc_839F87F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x839f88c8
	if (!cr6.eq) goto loc_839F88C8;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x832d5290
	ctx.lr = 0x839F880C;
	sub_832D5290(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x839f88c8
	if (cr0.eq) goto loc_839F88C8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839f8530
	ctx.lr = 0x839F8828;
	sub_839F8530(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// blt 0x839f88c0
	if (cr0.lt) goto loc_839F88C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x832d5290
	ctx.lr = 0x839F8844;
	sub_832D5290(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x839f88a8
	if (cr0.eq) goto loc_839F88A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce980
	ctx.lr = 0x839F8860;
	sub_831CE980(ctx, base);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d53c8
	ctx.lr = 0x839F886C;
	sub_832D53C8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x839f888c
	if (!cr6.lt) goto loc_839F888C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_839F888C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839f8598
	ctx.lr = 0x839F8894;
	sub_839F8598(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x839f88c8
	goto loc_839F88C8;
loc_839F88A8:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832d53c8
	ctx.lr = 0x839F88B4;
	sub_832D53C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_839F88C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d53c8
	ctx.lr = 0x839F88C8;
	sub_832D53C8(ctx, base);
loc_839F88C8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x839f88e0
	if (cr6.eq) goto loc_839F88E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_839F88E0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F88EC"))) PPC_WEAK_FUNC(sub_839F88EC);
PPC_FUNC_IMPL(__imp__sub_839F88EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F88F0"))) PPC_WEAK_FUNC(sub_839F88F0);
PPC_FUNC_IMPL(__imp__sub_839F88F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x832d5290
	ctx.lr = 0x839F8910;
	sub_832D5290(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839f8928
	if (cr0.eq) goto loc_839F8928;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x839f8934
	goto loc_839F8934;
loc_839F8928:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_839F8934:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_839F8954"))) PPC_WEAK_FUNC(sub_839F8954);
PPC_FUNC_IMPL(__imp__sub_839F8954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F8958"))) PPC_WEAK_FUNC(sub_839F8958);
PPC_FUNC_IMPL(__imp__sub_839F8958) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839f89d8
	if (cr6.eq) goto loc_839F89D8;
	// b 0x839f89b0
	goto loc_839F89B0;
loc_839F8984:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x839f8730
	ctx.lr = 0x839F8998;
	sub_839F8730(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x832d53c8
	ctx.lr = 0x839F89B0;
	sub_832D53C8(ctx, base);
loc_839F89B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x839f8984
	if (!cr6.eq) goto loc_839F8984;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d53c8
	ctx.lr = 0x839F89D0;
	sub_832D53C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_839F89D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F89F0"))) PPC_WEAK_FUNC(sub_839F89F0);
PPC_FUNC_IMPL(__imp__sub_839F89F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839F89F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r29,r5,8
	ctx.r29.s64 = ctx.r5.s64 + 8;
	// addic. r30,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// blt 0x839f8a7c
	if (cr0.lt) goto loc_839F8A7C;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_839F8A24:
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// beq cr6,0x839f8a5c
	if (cr6.eq) goto loc_839F8A5C;
	// ble cr6,0x839f8a4c
	if (!cr6.gt) goto loc_839F8A4C;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// b 0x839f8a50
	goto loc_839F8A50;
loc_839F8A4C:
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
loc_839F8A50:
	// cmpw cr6,r26,r30
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, xer);
	// ble cr6,0x839f8a24
	if (!cr6.gt) goto loc_839F8A24;
	// b 0x839f8a74
	goto loc_839F8A74;
loc_839F8A5C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x839f87a8
	ctx.lr = 0x839F8A70;
	sub_839F87A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_839F8A74:
	// cmpw cr6,r26,r30
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, xer);
	// ble cr6,0x839f8b9c
	if (!cr6.gt) goto loc_839F8B9C;
loc_839F8A7C:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x832d5290
	ctx.lr = 0x839F8A88;
	sub_832D5290(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x839f8b9c
	if (cr0.eq) goto loc_839F8B9C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839f8648
	ctx.lr = 0x839F8AA0;
	sub_839F8648(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839f8b90
	if (cr0.lt) goto loc_839F8B90;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x839f8aec
	if (!cr6.lt) goto loc_839F8AEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r26,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r26,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r26.s64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// bl 0x831ce420
	ctx.lr = 0x839F8AD4;
	sub_831CE420(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x839f8b5c
	goto loc_839F8B5C;
loc_839F8AEC:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x832d5290
	ctx.lr = 0x839F8AFC;
	sub_832D5290(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x839f8b84
	if (cr0.eq) goto loc_839F8B84;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r26,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x831ce980
	ctx.lr = 0x839F8B24;
	sub_831CE980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r25,r30,r27
	ctx.r25.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x831ce980
	ctx.lr = 0x839F8B44;
	sub_831CE980(ctx, base);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d53c8
	ctx.lr = 0x839F8B50;
	sub_832D53C8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stwx r28,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r28.u32);
	// stw r29,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r29.u32);
loc_839F8B5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x839f87a8
	ctx.lr = 0x839F8B70;
	sub_839F87A8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x839f8b9c
	goto loc_839F8B9C;
loc_839F8B84:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839f8730
	ctx.lr = 0x839F8B90;
	sub_839F8730(ctx, base);
loc_839F8B90:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d53c8
	ctx.lr = 0x839F8B9C;
	sub_832D53C8(ctx, base);
loc_839F8B9C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x839f8bb0
	if (cr6.eq) goto loc_839F8BB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
loc_839F8BB0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F8BBC"))) PPC_WEAK_FUNC(sub_839F8BBC);
PPC_FUNC_IMPL(__imp__sub_839F8BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F8BC0"))) PPC_WEAK_FUNC(sub_839F8BC0);
PPC_FUNC_IMPL(__imp__sub_839F8BC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_839F8BE0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x839f8be0
	if (!cr0.eq) goto loc_839F8BE0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839f8c3c
	if (!cr6.eq) goto loc_839F8C3C;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x83d755dc
	ctx.lr = 0x839F8C0C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f88f0
	ctx.lr = 0x839F8C18;
	sub_839F88F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x839f8c3c
	if (!cr0.lt) goto loc_839F8C3C;
loc_839F8C20:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x839f8c20
	if (!cr0.eq) goto loc_839F8C20;
loc_839F8C3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F8C54"))) PPC_WEAK_FUNC(sub_839F8C54);
PPC_FUNC_IMPL(__imp__sub_839F8C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F8C58"))) PPC_WEAK_FUNC(sub_839F8C58);
PPC_FUNC_IMPL(__imp__sub_839F8C58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_839F8C74:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x839f8c74
	if (!cr0.eq) goto loc_839F8C74;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839f8cc0
	if (!cr6.eq) goto loc_839F8CC0;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r30,r11,9136
	ctx.r30.s64 = ctx.r11.s64 + 9136;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x83d7554c
	ctx.lr = 0x839F8CAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f8958
	ctx.lr = 0x839F8CB8;
	sub_839F8958(ctx, base);
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x83d7553c
	ctx.lr = 0x839F8CC0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_839F8CC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F8CD8"))) PPC_WEAK_FUNC(sub_839F8CD8);
PPC_FUNC_IMPL(__imp__sub_839F8CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839F8CE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r11,9136
	ctx.r26.s64 = ctx.r11.s64 + 9136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r26,84
	ctx.r3.s64 = ctx.r26.s64 + 84;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83d7554c
	ctx.lr = 0x839F8D04;
	__imp__RtlEnterCriticalSection(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x839f89f0
	ctx.lr = 0x839F8D1C;
	sub_839F89F0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839f8d78
	if (cr0.eq) goto loc_839F8D78;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x839f8d44
	if (cr6.eq) goto loc_839F8D44;
	// divwu r11,r11,r29
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r29.u32);
	// twllei r29,0
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
loc_839F8D44:
	// clrlwi r10,r28,19
	ctx.r10.u64 = ctx.r28.u32 & 0x1FFF;
	// stw r28,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r28.u32);
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_839F8D78:
	// addi r3,r26,84
	ctx.r3.s64 = ctx.r26.s64 + 84;
	// bl 0x83d7553c
	ctx.lr = 0x839F8D80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F8D8C"))) PPC_WEAK_FUNC(sub_839F8D8C);
PPC_FUNC_IMPL(__imp__sub_839F8D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F8D90"))) PPC_WEAK_FUNC(sub_839F8D90);
PPC_FUNC_IMPL(__imp__sub_839F8D90) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839f8dc8
	if (cr6.eq) goto loc_839F8DC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F8DC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_839F8DC8:
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

__attribute__((alias("__imp__sub_839F8DDC"))) PPC_WEAK_FUNC(sub_839F8DDC);
PPC_FUNC_IMPL(__imp__sub_839F8DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F8DE0"))) PPC_WEAK_FUNC(sub_839F8DE0);
PPC_FUNC_IMPL(__imp__sub_839F8DE0) {
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
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-27432
	ctx.r11.s64 = ctx.r11.s64 + -27432;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x839f8e1c
	if (cr6.eq) goto loc_839F8E1C;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x839F8E14;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x839F8E1C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_839F8E1C:
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

__attribute__((alias("__imp__sub_839F8E30"))) PPC_WEAK_FUNC(sub_839F8E30);
PPC_FUNC_IMPL(__imp__sub_839F8E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,11048(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 11048);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x83d755dc
	ctx.lr = 0x839F8E68;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x839f8e88
	sub_839F8E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F8E38"))) PPC_WEAK_FUNC(sub_839F8E38);
PPC_FUNC_IMPL(__imp__sub_839F8E38) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x83d755dc
	ctx.lr = 0x839F8E68;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x839f8e88
	goto loc_839F8E88;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x839f8e94
	goto loc_839F8E94;
loc_839F8E88:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_839F8E94:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F8E78"))) PPC_WEAK_FUNC(sub_839F8E78);
PPC_FUNC_IMPL(__imp__sub_839F8E78) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x839f8e94
	// ERROR 839F8E94
	return;
}

__attribute__((alias("__imp__sub_839F8E88"))) PPC_WEAK_FUNC(sub_839F8E88);
PPC_FUNC_IMPL(__imp__sub_839F8E88) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F8EAC"))) PPC_WEAK_FUNC(sub_839F8EAC);
PPC_FUNC_IMPL(__imp__sub_839F8EAC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F8ED0"))) PPC_WEAK_FUNC(sub_839F8ED0);
PPC_FUNC_IMPL(__imp__sub_839F8ED0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83d7554c
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F8ED8"))) PPC_WEAK_FUNC(sub_839F8ED8);
PPC_FUNC_IMPL(__imp__sub_839F8ED8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83d7563c
	__imp__RtlTryEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F8EE0"))) PPC_WEAK_FUNC(sub_839F8EE0);
PPC_FUNC_IMPL(__imp__sub_839F8EE0) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,22
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F8EE8"))) PPC_WEAK_FUNC(sub_839F8EE8);
PPC_FUNC_IMPL(__imp__sub_839F8EE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83d7553c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F8EF0"))) PPC_WEAK_FUNC(sub_839F8EF0);
PPC_FUNC_IMPL(__imp__sub_839F8EF0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839f8de0
	ctx.lr = 0x839F8F10;
	sub_839F8DE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839f8f20
	if (cr0.eq) goto loc_839F8F20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839F8F20;
	sub_83A39B78(ctx, base);
loc_839F8F20:
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

__attribute__((alias("__imp__sub_839F8F3C"))) PPC_WEAK_FUNC(sub_839F8F3C);
PPC_FUNC_IMPL(__imp__sub_839F8F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F8F40"))) PPC_WEAK_FUNC(sub_839F8F40);
PPC_FUNC_IMPL(__imp__sub_839F8F40) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-27212
	ctx.r10.s64 = ctx.r10.s64 + -27212;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_839F8F5C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x839f8f7c
	if (!cr0.eq) goto loc_839F8F7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x839f8f5c
	if (!cr6.eq) goto loc_839F8F5C;
loc_839F8F7C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x839f8fa0
	if (!cr0.eq) goto loc_839F8FA0;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F8F98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839f8fb0
	goto loc_839F8FB0;
loc_839F8FA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_839F8FB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F8FC0"))) PPC_WEAK_FUNC(sub_839F8FC0);
PPC_FUNC_IMPL(__imp__sub_839F8FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_839F8FC4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x839f8fc4
	if (!cr0.eq) goto loc_839F8FC4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F8FE8"))) PPC_WEAK_FUNC(sub_839F8FE8);
PPC_FUNC_IMPL(__imp__sub_839F8FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-27408
	ctx.r11.s64 = ctx.r11.s64 + -27408;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x839f9014
	if (cr0.eq) goto loc_839F9014;
	// bl 0x83a39b78
	ctx.lr = 0x839F9014;
	sub_83A39B78(ctx, base);
loc_839F9014:
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

__attribute__((alias("__imp__sub_839F902C"))) PPC_WEAK_FUNC(sub_839F902C);
PPC_FUNC_IMPL(__imp__sub_839F902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F9030"))) PPC_WEAK_FUNC(sub_839F9030);
PPC_FUNC_IMPL(__imp__sub_839F9030) {
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
	// bl 0x832d22f8
	ctx.lr = 0x839F9048;
	sub_832D22F8(ctx, base);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839f907c
	if (cr6.eq) goto loc_839F907C;
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r11,0
	ctx.r11.s64 = 0;
loc_839F9060:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// beq cr6,0x839f9094
	if (cr6.eq) goto loc_839F9094;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x839f9060
	if (cr6.lt) goto loc_839F9060;
loc_839F907C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839F9080:
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
loc_839F9094:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x839f9080
	goto loc_839F9080;
}

__attribute__((alias("__imp__sub_839F909C"))) PPC_WEAK_FUNC(sub_839F909C);
PPC_FUNC_IMPL(__imp__sub_839F909C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F90A0"))) PPC_WEAK_FUNC(sub_839F90A0);
PPC_FUNC_IMPL(__imp__sub_839F90A0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x839f90c8
	if (!cr6.eq) goto loc_839F90C8;
	// lis r31,-30570
	ctx.r31.s64 = -2003435520;
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// b 0x839f9128
	goto loc_839F9128;
loc_839F90C8:
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-27392
	ctx.r10.s64 = ctx.r10.s64 + -27392;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_839F90DC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x839f90fc
	if (!cr0.eq) goto loc_839F90FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x839f90dc
	if (!cr6.eq) goto loc_839F90DC;
loc_839F90FC:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x839f911c
	if (!cr0.eq) goto loc_839F911C;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x839f9128
	goto loc_839F9128;
loc_839F911C:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x839f8f40
	ctx.lr = 0x839F9124;
	sub_839F8F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839F9128:
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

__attribute__((alias("__imp__sub_839F9140"))) PPC_WEAK_FUNC(sub_839F9140);
PPC_FUNC_IMPL(__imp__sub_839F9140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839F9148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,180
	ctx.r30.s64 = ctx.r3.s64 + 180;
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839f91b8
	if (cr6.eq) goto loc_839F91B8;
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839f9184
	if (cr6.eq) goto loc_839F9184;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r29.u32);
loc_839F9184:
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839f91a8
	if (cr6.eq) goto loc_839F91A8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F91A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
loc_839F91A8:
	// addi r3,r31,604
	ctx.r3.s64 = ctx.r31.s64 + 604;
	// bl 0x839fdc20
	ctx.lr = 0x839F91B0;
	sub_839FDC20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f8d90
	ctx.lr = 0x839F91B8;
	sub_839F8D90(ctx, base);
loc_839F91B8:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839f91cc
	if (cr6.eq) goto loc_839F91CC;
	// bl 0x83a39b78
	ctx.lr = 0x839F91C8;
	sub_83A39B78(ctx, base);
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
loc_839F91CC:
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F91D8"))) PPC_WEAK_FUNC(sub_839F91D8);
PPC_FUNC_IMPL(__imp__sub_839F91D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16044(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16044);
	// b 0x82415e30
	sub_82415E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F91E0"))) PPC_WEAK_FUNC(sub_839F91E0);
PPC_FUNC_IMPL(__imp__sub_839F91E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839F91E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,16044
	ctx.r28.s64 = ctx.r3.s64 + 16044;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a01728
	ctx.lr = 0x839F9208;
	sub_83A01728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x839f92b4
	if (cr0.eq) goto loc_839F92B4;
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x82416a90
	ctx.lr = 0x839F9218;
	sub_82416A90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x82416a10
	ctx.lr = 0x839F9228;
	sub_82416A10(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F923C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9254;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839F9254:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F926C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a01728
	ctx.lr = 0x839F9278;
	sub_83A01728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x839f9254
	if (!cr0.eq) goto loc_839F9254;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9294;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F92A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x82416a10
	ctx.lr = 0x839F92B4;
	sub_82416A10(ctx, base);
loc_839F92B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F92BC"))) PPC_WEAK_FUNC(sub_839F92BC);
PPC_FUNC_IMPL(__imp__sub_839F92BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F92C0"))) PPC_WEAK_FUNC(sub_839F92C0);
PPC_FUNC_IMPL(__imp__sub_839F92C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839F92C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F92E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9308;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x839f935c
	if (!cr6.eq) goto loc_839F935C;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839f9354
	if (cr6.eq) goto loc_839F9354;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r6,176(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r4,544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9340;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839f935c
	if (cr0.lt) goto loc_839F935C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_839F9354:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_839F935C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9384;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a10180
	ctx.lr = 0x839F938C;
	sub_83A10180(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F9398"))) PPC_WEAK_FUNC(sub_839F9398);
PPC_FUNC_IMPL(__imp__sub_839F9398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839F93A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F93C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F93DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9428;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F9430"))) PPC_WEAK_FUNC(sub_839F9430);
PPC_FUNC_IMPL(__imp__sub_839F9430) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9460;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9474;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F948C"))) PPC_WEAK_FUNC(sub_839F948C);
PPC_FUNC_IMPL(__imp__sub_839F948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F9490"))) PPC_WEAK_FUNC(sub_839F9490);
PPC_FUNC_IMPL(__imp__sub_839F9490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839F9498;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r28,r3,80
	ctx.r28.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F94BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839f9530
	if (cr6.eq) goto loc_839F9530;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F94E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F94F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F950C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x832d27b0
	ctx.lr = 0x839F9520;
	sub_832D27B0(ctx, base);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_839F9530:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F954C"))) PPC_WEAK_FUNC(sub_839F954C);
PPC_FUNC_IMPL(__imp__sub_839F954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F9550"))) PPC_WEAK_FUNC(sub_839F9550);
PPC_FUNC_IMPL(__imp__sub_839F9550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839F9558;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r28,r3,44
	ctx.r28.s64 = ctx.r3.s64 + 44;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F957C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// bl 0x839f8cd8
	ctx.lr = 0x839F95A4;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x839f95b8
	if (!cr0.eq) goto loc_839F95B8;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x839f95e0
	goto loc_839F95E0;
loc_839F95B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,492(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// bl 0x82415e30
	ctx.lr = 0x839F95D0;
	sub_82415E30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x839f95e0
	if (!cr0.lt) goto loc_839F95E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839F95E0;
	sub_83A39B78(ctx, base);
loc_839F95E0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F95F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F9600"))) PPC_WEAK_FUNC(sub_839F9600);
PPC_FUNC_IMPL(__imp__sub_839F9600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839F9608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r28,r3,44
	ctx.r28.s64 = ctx.r3.s64 + 44;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F962C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// bl 0x839f8cd8
	ctx.lr = 0x839F9654;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x839f9668
	if (!cr0.eq) goto loc_839F9668;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x839f9690
	goto loc_839F9690;
loc_839F9668:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,492(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// bl 0x82415e30
	ctx.lr = 0x839F9680;
	sub_82415E30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x839f9690
	if (!cr0.lt) goto loc_839F9690;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839F9690;
	sub_83A39B78(ctx, base);
loc_839F9690:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F96A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F96B0"))) PPC_WEAK_FUNC(sub_839F96B0);
PPC_FUNC_IMPL(__imp__sub_839F96B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839F96B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r7,1125
	ctx.r7.s64 = 1125;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,604
	ctx.r3.s64 = ctx.r3.s64 + 604;
	// bl 0x839fdcd8
	ctx.lr = 0x839F96E0;
	sub_839FDCD8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x839f96f4
	if (!cr0.eq) goto loc_839F96F4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x839f9784
	goto loc_839F9784;
loc_839F96F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x839fdf40
	ctx.lr = 0x839F9704;
	sub_839FDF40(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x839f9784
	if (cr0.lt) goto loc_839F9784;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lis r11,4919
	ctx.r11.s64 = 322371584;
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r29,r11,61441
	ctx.r29.u64 = ctx.r11.u64 | 61441;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F974C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x839f9770
	if (cr0.lt) goto loc_839F9770;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F976C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839F9770:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9784;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839F9784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F9790"))) PPC_WEAK_FUNC(sub_839F9790);
PPC_FUNC_IMPL(__imp__sub_839F9790) {
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
	// lwz r31,396(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x839f97c8
	goto loc_839F97C8;
loc_839F97B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x839ff088
	ctx.lr = 0x839F97BC;
	sub_839FF088(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839f97d0
	if (cr6.eq) goto loc_839F97D0;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_839F97C8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839f97b0
	if (!cr6.eq) goto loc_839F97B0;
loc_839F97D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F97E8"))) PPC_WEAK_FUNC(sub_839F97E8);
PPC_FUNC_IMPL(__imp__sub_839F97E8) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r30,r3,112
	ctx.r30.s64 = ctx.r3.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9818;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839f9860
	if (cr6.eq) goto loc_839F9860;
	// lwz r31,568(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
loc_839F9828:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839f9840
	if (cr6.eq) goto loc_839F9840;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x839f9844
	goto loc_839F9844;
loc_839F9840:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839F9844:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839f9860
	if (cr6.eq) goto loc_839F9860;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F985C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x839f9828
	goto loc_839F9828;
loc_839F9860:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9874;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F988C"))) PPC_WEAK_FUNC(sub_839F988C);
PPC_FUNC_IMPL(__imp__sub_839F988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F9890"))) PPC_WEAK_FUNC(sub_839F9890);
PPC_FUNC_IMPL(__imp__sub_839F9890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839F9898;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r30,r3,112
	ctx.r30.s64 = ctx.r3.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F98BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,568(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
loc_839F98C0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839f98d8
	if (cr6.eq) goto loc_839F98D8;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x839f98dc
	goto loc_839F98DC;
loc_839F98D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839F98DC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839f98fc
	if (cr6.eq) goto loc_839F98FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F98F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x839f98c0
	goto loc_839F98C0;
loc_839F98FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9910;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F9918"))) PPC_WEAK_FUNC(sub_839F9918);
PPC_FUNC_IMPL(__imp__sub_839F9918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F9954"))) PPC_WEAK_FUNC(sub_839F9954);
PPC_FUNC_IMPL(__imp__sub_839F9954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F9958"))) PPC_WEAK_FUNC(sub_839F9958);
PPC_FUNC_IMPL(__imp__sub_839F9958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// b 0x839f8cd8
	sub_839F8CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F996C"))) PPC_WEAK_FUNC(sub_839F996C);
PPC_FUNC_IMPL(__imp__sub_839F996C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F9970"))) PPC_WEAK_FUNC(sub_839F9970);
PPC_FUNC_IMPL(__imp__sub_839F9970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x839f9990
	if (!cr6.eq) goto loc_839F9990;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// b 0x839f999c
	goto loc_839F999C;
loc_839F9990:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_839F999C:
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x839f99b4
	if (!cr6.eq) goto loc_839F99B4;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// b 0x839f99c0
	goto loc_839F99C0;
loc_839F99B4:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_839F99C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F99DC"))) PPC_WEAK_FUNC(sub_839F99DC);
PPC_FUNC_IMPL(__imp__sub_839F99DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F99E0"))) PPC_WEAK_FUNC(sub_839F99E0);
PPC_FUNC_IMPL(__imp__sub_839F99E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x839f9a00
	if (!cr6.eq) goto loc_839F9A00;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x839f9a0c
	goto loc_839F9A0C;
loc_839F9A00:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_839F9A0C:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x839f9a24
	if (!cr6.eq) goto loc_839F9A24;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x839f9a30
	goto loc_839F9A30;
loc_839F9A24:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_839F9A30:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F9A4C"))) PPC_WEAK_FUNC(sub_839F9A4C);
PPC_FUNC_IMPL(__imp__sub_839F9A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F9A50"))) PPC_WEAK_FUNC(sub_839F9A50);
PPC_FUNC_IMPL(__imp__sub_839F9A50) {
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
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x839f9a8c
	if (!cr6.lt) goto loc_839F9A8C;
	// bl 0x83d755ac
	ctx.lr = 0x839F9A80;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x839f9a8c
	if (cr6.eq) goto loc_839F9A8C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_839F9A8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839f9aa0
	if (cr6.eq) goto loc_839F9AA0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x839f9b0c
	if (cr6.eq) goto loc_839F9B0C;
loc_839F9AA0:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839f9b0c
	if (cr6.gt) goto loc_839F9B0C;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x839f8cd8
	ctx.lr = 0x839F9ACC;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839f9b0c
	if (cr0.eq) goto loc_839F9B0C;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839F9AE0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x839f9ae0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839F9AE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
loc_839F9B0C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839f9b24
	if (cr6.eq) goto loc_839F9B24;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x839f9b28
	goto loc_839F9B28;
loc_839F9B24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839F9B28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F9B40"))) PPC_WEAK_FUNC(sub_839F9B40);
PPC_FUNC_IMPL(__imp__sub_839F9B40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a0fa30
	ctx.lr = 0x839F9B60;
	sub_83A0FA30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839f9ba4
	if (cr0.eq) goto loc_839F9BA4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839f9b90
	if (cr6.eq) goto loc_839F9B90;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x839f9b94
	goto loc_839F9B94;
loc_839F9B90:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_839F9B94:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_839F9BA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F9BBC"))) PPC_WEAK_FUNC(sub_839F9BBC);
PPC_FUNC_IMPL(__imp__sub_839F9BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F9BC0"))) PPC_WEAK_FUNC(sub_839F9BC0);
PPC_FUNC_IMPL(__imp__sub_839F9BC0) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_839F9BD4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x839f9bd4
	if (!cr0.eq) goto loc_839F9BD4;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839f9c30
	if (!cr6.eq) goto loc_839F9C30;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839f9c1c
	if (cr6.eq) goto loc_839F9C1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9C18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x839f9c20
	goto loc_839F9C20;
loc_839F9C1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839F9C20:
	// bl 0x83a39b78
	ctx.lr = 0x839F9C24;
	sub_83A39B78(ctx, base);
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// bl 0x839f8c58
	ctx.lr = 0x839F9C30;
	sub_839F8C58(ctx, base);
loc_839F9C30:
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

__attribute__((alias("__imp__sub_839F9C48"))) PPC_WEAK_FUNC(sub_839F9C48);
PPC_FUNC_IMPL(__imp__sub_839F9C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839f9c9c
	if (cr6.eq) goto loc_839F9C9C;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// beq cr6,0x839f9c78
	if (cr6.eq) goto loc_839F9C78;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// b 0x839f9c80
	goto loc_839F9C80;
loc_839F9C78:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
loc_839F9C80:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// blr 
	return;
loc_839F9C9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F9CA4"))) PPC_WEAK_FUNC(sub_839F9CA4);
PPC_FUNC_IMPL(__imp__sub_839F9CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F9CA8"))) PPC_WEAK_FUNC(sub_839F9CA8);
PPC_FUNC_IMPL(__imp__sub_839F9CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_839F9CD4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bdnz 0x839f9cd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839F9CD4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839F9CF8"))) PPC_WEAK_FUNC(sub_839F9CF8);
PPC_FUNC_IMPL(__imp__sub_839F9CF8) {
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
	ctx.lr = 0x839F9D00;
	__savegprlr_26(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r3,180
	ctx.r26.s64 = ctx.r3.s64 + 180;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839f9d28
	if (!cr6.eq) goto loc_839F9D28;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x839fd748
	ctx.lr = 0x839F9D28;
	sub_839FD748(ctx, base);
loc_839F9D28:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839f9f68
	if (cr6.lt) goto loc_839F9F68;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9D50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt 0x839f9f68
	if (cr0.lt) goto loc_839F9F68;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x839f9f80
	if (cr6.eq) goto loc_839F9F80;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839f9d80
	if (cr6.eq) goto loc_839F9D80;
	// bl 0x83a39b78
	ctx.lr = 0x839F9D7C;
	sub_83A39B78(ctx, base);
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
loc_839F9D80:
	// lis r10,61
	ctx.r10.s64 = 3997696;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// ori r10,r10,23808
	ctx.r10.u64 = ctx.r10.u64 | 23808;
	// mulli r4,r11,1068
	ctx.r4.s64 = ctx.r11.s64 * 1068;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x839f9d9c
	if (!cr6.gt) goto loc_839F9D9C;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_839F9D9C:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// bl 0x839f8cd8
	ctx.lr = 0x839F9DB4;
	sub_839F8CD8(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r9,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// and r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 & ctx.r11.u64;
	// ble cr6,0x839f9ee4
	if (!cr6.gt) goto loc_839F9EE4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_839F9DE0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x839f9f68
	if (cr6.lt) goto loc_839F9F68;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9E04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt 0x839f9ed0
	if (cr0.lt) goto loc_839F9ED0;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,40
	ctx.r5.s64 = 40;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,1028
	ctx.r3.s64 = ctx.r11.s64 + 1028;
	// bl 0x831ce980
	ctx.lr = 0x839F9E34;
	sub_831CE980(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r10,256
	ctx.r10.s64 = 256;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_839F9E44:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x839f9e64
	if (cr0.eq) goto loc_839F9E64;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x839f9e44
	if (!cr0.eq) goto loc_839F9E44;
loc_839F9E64:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839f9e70
	if (!cr6.eq) goto loc_839F9E70;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_839F9E70:
	// sth r28,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r28.u16);
	// li r10,256
	ctx.r10.s64 = 256;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
loc_839F9E88:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x839f9ea8
	if (cr0.eq) goto loc_839F9EA8;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x839f9e88
	if (!cr0.eq) goto loc_839F9E88;
loc_839F9EA8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839f9eb4
	if (!cr6.eq) goto loc_839F9EB4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_839F9EB4:
	// sth r28,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r28.u16);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x832d53c8
	ctx.lr = 0x839F9EC4;
	sub_832D53C8(ctx, base);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x832d53c8
	ctx.lr = 0x839F9ED0;
	sub_832D53C8(ctx, base);
loc_839F9ED0:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,1068
	ctx.r30.s64 = ctx.r30.s64 + 1068;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x839f9de0
	if (cr6.lt) goto loc_839F9DE0;
loc_839F9EE4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x839f9f68
	if (cr6.lt) goto loc_839F9F68;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x839f9f80
	if (!cr6.gt) goto loc_839F9F80;
	// lwz r30,156(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r11,1068
	ctx.r11.s64 = 1068;
loc_839F9F04:
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,1024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x839f9f2c
	if (!cr0.eq) goto loc_839F9F2C;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1068
	ctx.r11.s64 = ctx.r11.s64 + 1068;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x839f9f04
	if (cr6.lt) goto loc_839F9F04;
	// b 0x839f9f80
	goto loc_839F9F80;
loc_839F9F2C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x839F9F3C;
	sub_831CE980(ctx, base);
	// mulli r29,r29,1068
	ctx.r29.s64 = ctx.r29.s64 * 1068;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x839F9F50;
	sub_831CE980(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// bl 0x831ce980
	ctx.lr = 0x839F9F64;
	sub_831CE980(ctx, base);
	// b 0x839f9f80
	goto loc_839F9F80;
loc_839F9F68:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839f9f7c
	if (cr6.eq) goto loc_839F9F7C;
	// bl 0x83a39b78
	ctx.lr = 0x839F9F78;
	sub_83A39B78(ctx, base);
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
loc_839F9F7C:
	// stw r28,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
loc_839F9F80:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839F9F8C"))) PPC_WEAK_FUNC(sub_839F9F8C);
PPC_FUNC_IMPL(__imp__sub_839F9F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839F9F90"))) PPC_WEAK_FUNC(sub_839F9F90);
PPC_FUNC_IMPL(__imp__sub_839F9F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839F9F98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839fa018
	if (cr6.eq) goto loc_839FA018;
	// bl 0x839f9030
	ctx.lr = 0x839F9FB0;
	sub_839F9030(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x839fa018
	if (!cr0.eq) goto loc_839FA018;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r30,r31,116
	ctx.r30.s64 = ctx.r31.s64 + 116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839F9FD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// b 0x839f9fe8
	goto loc_839F9FE8;
loc_839F9FD8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// beq cr6,0x839f9ff0
	if (cr6.eq) goto loc_839F9FF0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_839F9FE8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839f9fd8
	if (!cr6.eq) goto loc_839F9FD8;
loc_839F9FF0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fa004
	if (cr6.eq) goto loc_839FA004;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,548
	ctx.r3.s64 = ctx.r31.s64 + 548;
	// bl 0x839f99e0
	ctx.lr = 0x839FA004;
	sub_839F99E0(ctx, base);
loc_839FA004:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839FA018:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FA020"))) PPC_WEAK_FUNC(sub_839FA020);
PPC_FUNC_IMPL(__imp__sub_839FA020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FA028;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r29,r3,44
	ctx.r29.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA048;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9030
	ctx.lr = 0x839FA050;
	sub_839F9030(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x839fa0a4
	if (!cr0.eq) goto loc_839FA0A4;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839fa090
	if (cr6.eq) goto loc_839FA090;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9490
	ctx.lr = 0x839FA088;
	sub_839F9490(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_839FA090:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA0A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839FA0A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA0B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FA0C0"))) PPC_WEAK_FUNC(sub_839FA0C0);
PPC_FUNC_IMPL(__imp__sub_839FA0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FA0C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA0EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9790
	ctx.lr = 0x839FA0F8;
	sub_839F9790(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA110;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA128;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a10180
	ctx.lr = 0x839FA130;
	sub_83A10180(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FA13C"))) PPC_WEAK_FUNC(sub_839FA13C);
PPC_FUNC_IMPL(__imp__sub_839FA13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FA140"))) PPC_WEAK_FUNC(sub_839FA140);
PPC_FUNC_IMPL(__imp__sub_839FA140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FA148;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839fa170
	if (cr6.eq) goto loc_839FA170;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x839fa1d0
	goto loc_839FA1D0;
loc_839FA170:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x839FA188;
	sub_831CDCF0(ctx, base);
	// lis r11,-31840
	ctx.r11.s64 = -2086666240;
	// lis r10,-31840
	ctx.r10.s64 = -2086666240;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r11,r11,-26280
	ctx.r11.s64 = ctx.r11.s64 + -26280;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r10,r10,9040
	ctx.r10.s64 = ctx.r10.s64 + 9040;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82415f38
	ctx.lr = 0x839FA1C0;
	sub_82415F38(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839fa1d0
	if (cr0.lt) goto loc_839FA1D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_839FA1D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FA1D8"))) PPC_WEAK_FUNC(sub_839FA1D8);
PPC_FUNC_IMPL(__imp__sub_839FA1D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839f9a50
	ctx.lr = 0x839FA1F8;
	sub_839F9A50(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fa23c
	if (cr0.eq) goto loc_839FA23C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fa228
	if (cr6.eq) goto loc_839FA228;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x839fa22c
	goto loc_839FA22C;
loc_839FA228:
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
loc_839FA22C:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_839FA23C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FA254"))) PPC_WEAK_FUNC(sub_839FA254);
PPC_FUNC_IMPL(__imp__sub_839FA254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FA258"))) PPC_WEAK_FUNC(sub_839FA258);
PPC_FUNC_IMPL(__imp__sub_839FA258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FA260;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x839fa284
	if (!cr6.eq) goto loc_839FA284;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x839f9b40
	ctx.lr = 0x839FA280;
	sub_839F9B40(ctx, base);
	// b 0x839fa2c8
	goto loc_839FA2C8;
loc_839FA284:
	// bl 0x83a0fa30
	ctx.lr = 0x839FA288;
	sub_83A0FA30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fa2c8
	if (cr0.eq) goto loc_839FA2C8;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fa2b4
	if (cr6.eq) goto loc_839FA2B4;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x839fa2b8
	goto loc_839FA2B8;
loc_839FA2B4:
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_839FA2B8:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_839FA2C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FA2D0"))) PPC_WEAK_FUNC(sub_839FA2D0);
PPC_FUNC_IMPL(__imp__sub_839FA2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FA2D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x839fa2fc
	goto loc_839FA2FC;
loc_839FA2E4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_839FA2FC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fa2e4
	if (!cr6.eq) goto loc_839FA2E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// beq cr6,0x839fa354
	if (cr6.eq) goto loc_839FA354;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_839FA324:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x839fa344
	if (cr6.eq) goto loc_839FA344;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fa344
	if (cr6.eq) goto loc_839FA344;
	// bl 0x83a39b78
	ctx.lr = 0x839FA340;
	sub_83A39B78(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_839FA344:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fa324
	if (!cr6.eq) goto loc_839FA324;
loc_839FA354:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FA35C"))) PPC_WEAK_FUNC(sub_839FA35C);
PPC_FUNC_IMPL(__imp__sub_839FA35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FA360"))) PPC_WEAK_FUNC(sub_839FA360);
PPC_FUNC_IMPL(__imp__sub_839FA360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FA368;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x839fa38c
	goto loc_839FA38C;
loc_839FA374:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_839FA38C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fa374
	if (!cr6.eq) goto loc_839FA374;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// beq cr6,0x839fa3e4
	if (cr6.eq) goto loc_839FA3E4;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_839FA3B4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x839fa3d4
	if (cr6.eq) goto loc_839FA3D4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fa3d4
	if (cr6.eq) goto loc_839FA3D4;
	// bl 0x83a39b78
	ctx.lr = 0x839FA3D0;
	sub_83A39B78(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_839FA3D4:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fa3b4
	if (!cr6.eq) goto loc_839FA3B4;
loc_839FA3E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FA3EC"))) PPC_WEAK_FUNC(sub_839FA3EC);
PPC_FUNC_IMPL(__imp__sub_839FA3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FA3F0"))) PPC_WEAK_FUNC(sub_839FA3F0);
PPC_FUNC_IMPL(__imp__sub_839FA3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FA3F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x839fa41c
	goto loc_839FA41C;
loc_839FA404:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
loc_839FA41C:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fa404
	if (!cr6.eq) goto loc_839FA404;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r28,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r28.u32);
	// beq cr6,0x839fa474
	if (cr6.eq) goto loc_839FA474;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_839FA444:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x839fa464
	if (cr6.eq) goto loc_839FA464;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fa464
	if (cr6.eq) goto loc_839FA464;
	// bl 0x83a39b78
	ctx.lr = 0x839FA460;
	sub_83A39B78(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_839FA464:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fa444
	if (!cr6.eq) goto loc_839FA444;
loc_839FA474:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FA47C"))) PPC_WEAK_FUNC(sub_839FA47C);
PPC_FUNC_IMPL(__imp__sub_839FA47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FA480"))) PPC_WEAK_FUNC(sub_839FA480);
PPC_FUNC_IMPL(__imp__sub_839FA480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FA488;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA4AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9cf8
	ctx.lr = 0x839FA4B4;
	sub_839F9CF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839fa4c8
	if (cr0.lt) goto loc_839FA4C8;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_839FA4C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA4DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a10180
	ctx.lr = 0x839FA4E4;
	sub_83A10180(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FA4F0"))) PPC_WEAK_FUNC(sub_839FA4F0);
PPC_FUNC_IMPL(__imp__sub_839FA4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FA4F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r29,r3,44
	ctx.r29.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9cf8
	ctx.lr = 0x839FA528;
	sub_839F9CF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839fa56c
	if (cr0.lt) goto loc_839FA56C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x839fa54c
	if (cr6.lt) goto loc_839FA54C;
	// lis r3,-30570
	ctx.r3.s64 = -2003435520;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_839FA54C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839fa56c
	if (cr6.lt) goto loc_839FA56C;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mulli r11,r30,1068
	ctx.r11.s64 = ctx.r30.s64 * 1068;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x839FA56C;
	sub_831CE980(ctx, base);
loc_839FA56C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA580;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a10180
	ctx.lr = 0x839FA588;
	sub_83A10180(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FA594"))) PPC_WEAK_FUNC(sub_839FA594);
PPC_FUNC_IMPL(__imp__sub_839FA594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FA598"))) PPC_WEAK_FUNC(sub_839FA598);
PPC_FUNC_IMPL(__imp__sub_839FA598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FA5A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r28,r3,44
	ctx.r28.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA5C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_839FA5CC:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// bne 0x839fa5cc
	if (!cr0.eq) goto loc_839FA5CC;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x839fa600
	if (!cr6.gt) goto loc_839FA600;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_839FA600:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// bl 0x839f8cd8
	ctx.lr = 0x839FA618;
	sub_839F8CD8(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x839fa660
	if (!cr0.eq) goto loc_839FA660;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_839FA630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9140
	ctx.lr = 0x839FA638;
	sub_839F9140(ctx, base);
loc_839FA638:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA64C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a10180
	ctx.lr = 0x839FA654;
	sub_83A10180(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839FA660:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x832d27b0
	ctx.lr = 0x839FA670;
	sub_832D27B0(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r30,r31,180
	ctx.r30.s64 = ctx.r31.s64 + 180;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fa68c
	if (!cr6.eq) goto loc_839FA68C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839fd748
	ctx.lr = 0x839FA68C;
	sub_839FD748(ctx, base);
loc_839FA68C:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839fa630
	if (cr6.lt) goto loc_839FA630;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// li r5,375
	ctx.r5.s64 = 375;
	// lwz r6,176(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA6BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839fa630
	if (cr0.lt) goto loc_839FA630;
	// addi r3,r31,604
	ctx.r3.s64 = ctx.r31.s64 + 604;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x839fd808
	ctx.lr = 0x839FA6D4;
	sub_839FD808(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839fa630
	if (cr0.lt) goto loc_839FA630;
	// addi r5,r31,188
	ctx.r5.s64 = ctx.r31.s64 + 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f96b0
	ctx.lr = 0x839FA6F0;
	sub_839F96B0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839fa630
	if (cr0.lt) goto loc_839FA630;
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f96b0
	ctx.lr = 0x839FA710;
	sub_839F96B0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839fa630
	if (cr0.lt) goto loc_839FA630;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA738;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839fa630
	if (cr0.lt) goto loc_839FA630;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA75C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839fa630
	if (cr0.lt) goto loc_839FA630;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,16044
	ctx.r3.s64 = ctx.r31.s64 + 16044;
	// bl 0x839fa140
	ctx.lr = 0x839FA778;
	sub_839FA140(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839fa630
	if (cr0.lt) goto loc_839FA630;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// bl 0x839fa140
	ctx.lr = 0x839FA794;
	sub_839FA140(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x839fa630
	if (cr0.lt) goto loc_839FA630;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// b 0x839fa638
	goto loc_839FA638;
}

__attribute__((alias("__imp__sub_839FA7B0"))) PPC_WEAK_FUNC(sub_839FA7B0);
PPC_FUNC_IMPL(__imp__sub_839FA7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FA7B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r30,r3,116
	ctx.r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA7DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,548
	ctx.r3.s64 = ctx.r31.s64 + 548;
	// bl 0x83a0fcb8
	ctx.lr = 0x839FA7E8;
	sub_83A0FCB8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// and r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 & ctx.r9.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA810;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FA81C"))) PPC_WEAK_FUNC(sub_839FA81C);
PPC_FUNC_IMPL(__imp__sub_839FA81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FA820"))) PPC_WEAK_FUNC(sub_839FA820);
PPC_FUNC_IMPL(__imp__sub_839FA820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839FA828;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r25,r3,44
	ctx.r25.s64 = ctx.r3.s64 + 44;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a037d0
	ctx.lr = 0x839FA870;
	sub_83A037D0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,358
	cr6.compare<uint32_t>(ctx.r11.u32, 358, xer);
	// bne cr6,0x839fa8b0
	if (!cr6.eq) goto loc_839FA8B0;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,624
	ctx.r4.s64 = 624;
	// bl 0x839f8cd8
	ctx.lr = 0x839FA898;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fa92c
	if (cr0.eq) goto loc_839FA92C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83a02b90
	ctx.lr = 0x839FA8AC;
	sub_83A02B90(ctx, base);
	// b 0x839fa924
	goto loc_839FA924;
loc_839FA8B0:
	// cmplwi cr6,r11,353
	cr6.compare<uint32_t>(ctx.r11.u32, 353, xer);
	// beq cr6,0x839fa8f4
	if (cr6.eq) goto loc_839FA8F4;
	// cmplwi cr6,r11,354
	cr6.compare<uint32_t>(ctx.r11.u32, 354, xer);
	// beq cr6,0x839fa8f4
	if (cr6.eq) goto loc_839FA8F4;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,492
	ctx.r4.s64 = 492;
	// bl 0x839f8cd8
	ctx.lr = 0x839FA8DC;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fa92c
	if (cr0.eq) goto loc_839FA92C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x839ff310
	ctx.lr = 0x839FA8F0;
	sub_839FF310(ctx, base);
	// b 0x839fa924
	goto loc_839FA924;
loc_839FA8F4:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,744
	ctx.r4.s64 = 744;
	// bl 0x839f8cd8
	ctx.lr = 0x839FA910;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fa92c
	if (cr0.eq) goto loc_839FA92C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83a00ed8
	ctx.lr = 0x839FA924;
	sub_83A00ED8(ctx, base);
loc_839FA924:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x839fa930
	goto loc_839FA930;
loc_839FA92C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839FA930:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839fa948
	if (!cr6.eq) goto loc_839FA948;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x839faa00
	goto loc_839FAA00;
loc_839FA948:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// blt 0x839fa9cc
	if (cr0.lt) goto loc_839FA9CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,192
	ctx.r3.s64 = ctx.r28.s64 + 192;
	// bl 0x839fa1d8
	ctx.lr = 0x839FA988;
	sub_839FA1D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fa9c0
	if (cr0.eq) goto loc_839FA9C0;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r26,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq 0x839fa9b8
	if (cr0.eq) goto loc_839FA9B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839f9550
	ctx.lr = 0x839FA9AC;
	sub_839F9550(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// blt 0x839fa9cc
	if (cr0.lt) goto loc_839FA9CC;
loc_839FA9B8:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// b 0x839faa00
	goto loc_839FAA00;
loc_839FA9C0:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_839FA9CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA9E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FA9FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a39b78
	ctx.lr = 0x839FAA00;
	sub_83A39B78(ctx, base);
loc_839FAA00:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FAA14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x839faa24
	if (!cr6.lt) goto loc_839FAA24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839f91e0
	ctx.lr = 0x839FAA24;
	sub_839F91E0(ctx, base);
loc_839FAA24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a10180
	ctx.lr = 0x839FAA2C;
	sub_83A10180(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FAA3C"))) PPC_WEAK_FUNC(sub_839FAA3C);
PPC_FUNC_IMPL(__imp__sub_839FAA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FAA40"))) PPC_WEAK_FUNC(sub_839FAA40);
PPC_FUNC_IMPL(__imp__sub_839FAA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839FAA48;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r24,r3,44
	ctx.r24.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FAA80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r23,r31,80
	ctx.r23.s64 = ctx.r31.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FAA98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9cf8
	ctx.lr = 0x839FAAA0;
	sub_839F9CF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// blt 0x839fac7c
	if (cr0.lt) goto loc_839FAC7C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839faac4
	if (!cr6.eq) goto loc_839FAAC4;
	// lis r30,-30570
	ctx.r30.s64 = -2003435520;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_839FAAC4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x839fac7c
	if (cr6.lt) goto loc_839FAC7C;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x839faae0
	if (cr6.lt) goto loc_839FAAE0;
	// lis r30,-30570
	ctx.r30.s64 = -2003435520;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_839FAAE0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x839fac7c
	if (cr6.lt) goto loc_839FAC7C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x839fab00
	if (!cr6.eq) goto loc_839FAB00;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mulli r10,r28,1068
	ctx.r10.s64 = ctx.r28.s64 * 1068;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r27,1030(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1030);
loc_839FAB00:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839fab18
	if (!cr6.eq) goto loc_839FAB18;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mulli r11,r28,1068
	ctx.r11.s64 = ctx.r28.s64 * 1068;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,1032(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
loc_839FAB18:
	// li r11,375
	ctx.r11.s64 = 375;
	// divwu r11,r29,r11
	ctx.r11.u32 = PPCDivide(ctx.r29.u32, ctx.r11.u32);
	// mulli r11,r11,375
	ctx.r11.s64 = ctx.r11.s64 * 375;
	// subf. r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fab48
	if (cr0.eq) goto loc_839FAB48;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,32000
	cr6.compare<uint32_t>(ctx.r11.u32, 32000, xer);
	// bge cr6,0x839fab3c
	if (!cr6.lt) goto loc_839FAB3C;
	// addi r11,r11,375
	ctx.r11.s64 = ctx.r11.s64 + 375;
loc_839FAB3C:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x839fab48
	if (cr6.eq) goto loc_839FAB48;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_839FAB48:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,192
	ctx.r4.s64 = 192;
	// bl 0x839f8cd8
	ctx.lr = 0x839FAB64;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fab84
	if (cr0.eq) goto loc_839FAB84;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a04448
	ctx.lr = 0x839FAB7C;
	sub_83A04448(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x839fab88
	goto loc_839FAB88;
loc_839FAB84:
	// li r29,0
	ctx.r29.s64 = 0;
loc_839FAB88:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839faba0
	if (!cr6.eq) goto loc_839FABA0;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x839fac7c
	goto loc_839FAC7C;
loc_839FABA0:
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mulli r11,r28,1068
	ctx.r11.s64 = ctx.r28.s64 * 1068;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a03da8
	ctx.lr = 0x839FABBC;
	sub_83A03DA8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// blt 0x839fac3c
	if (cr0.lt) goto loc_839FAC3C;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839fac08
	if (cr6.eq) goto loc_839FAC08;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r6,176(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r4,544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FABF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// blt 0x839fac3c
	if (cr0.lt) goto loc_839FAC3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_839FAC08:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// bl 0x83a0fcb8
	ctx.lr = 0x839FAC14;
	sub_83A0FCB8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fac30
	if (cr0.eq) goto loc_839FAC30;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// stw r29,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r29.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x839fac7c
	goto loc_839FAC7C;
loc_839FAC30:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_839FAC3C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9490
	ctx.lr = 0x839FAC48;
	sub_839F9490(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FAC60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FAC78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a39b78
	ctx.lr = 0x839FAC7C;
	sub_83A39B78(ctx, base);
loc_839FAC7C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FAC90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FACA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x839facb4
	if (!cr6.lt) goto loc_839FACB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f91e0
	ctx.lr = 0x839FACB4;
	sub_839F91E0(ctx, base);
loc_839FACB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a10180
	ctx.lr = 0x839FACBC;
	sub_83A10180(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FACC8"))) PPC_WEAK_FUNC(sub_839FACC8);
PPC_FUNC_IMPL(__imp__sub_839FACC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FACD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FACF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x839fada4
	if (cr6.lt) goto loc_839FADA4;
	// beq cr6,0x839fad40
	if (cr6.eq) goto loc_839FAD40;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bge cr6,0x839fadec
	if (!cr6.lt) goto loc_839FADEC;
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// addi r3,r30,412
	ctx.r3.s64 = ctx.r30.s64 + 412;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// b 0x839fad24
	goto loc_839FAD24;
loc_839FAD14:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x839fad2c
	if (cr6.eq) goto loc_839FAD2C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_839FAD24:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fad14
	if (!cr6.eq) goto loc_839FAD14;
loc_839FAD2C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x839f99e0
	ctx.lr = 0x839FAD34;
	sub_839F99E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 592, ctx.r11.u32);
	// b 0x839fadec
	goto loc_839FADEC;
loc_839FAD40:
	// lwz r9,476(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839fadec
	if (cr6.eq) goto loc_839FADEC;
	// addi r8,r31,-4
	ctx.r8.s64 = ctx.r31.s64 + -4;
loc_839FAD50:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// b 0x839fad6c
	goto loc_839FAD6C;
loc_839FAD5C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x839fad74
	if (cr6.eq) goto loc_839FAD74;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_839FAD6C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fad5c
	if (!cr6.eq) goto loc_839FAD5C;
loc_839FAD74:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fad94
	if (!cr6.eq) goto loc_839FAD94;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839fadec
	if (cr6.eq) goto loc_839FADEC;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839fad50
	if (!cr6.eq) goto loc_839FAD50;
	// b 0x839fadec
	goto loc_839FADEC;
loc_839FAD94:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x839f99e0
	ctx.lr = 0x839FADA0;
	sub_839F99E0(ctx, base);
	// b 0x839fadec
	goto loc_839FADEC;
loc_839FADA4:
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// addi r29,r31,-4
	ctx.r29.s64 = ctx.r31.s64 + -4;
	// b 0x839fadc4
	goto loc_839FADC4;
loc_839FADB4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// beq cr6,0x839fadcc
	if (cr6.eq) goto loc_839FADCC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_839FADC4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fadb4
	if (!cr6.eq) goto loc_839FADB4;
loc_839FADCC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x839f9970
	ctx.lr = 0x839FADD4;
	sub_839F9970(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fadec
	if (cr0.eq) goto loc_839FADEC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f9600
	ctx.lr = 0x839FADEC;
	sub_839F9600(ctx, base);
loc_839FADEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FADF4"))) PPC_WEAK_FUNC(sub_839FADF4);
PPC_FUNC_IMPL(__imp__sub_839FADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FADF8"))) PPC_WEAK_FUNC(sub_839FADF8);
PPC_FUNC_IMPL(__imp__sub_839FADF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839FAE00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,488
	ctx.r28.s64 = ctx.r3.s64 + 488;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x83a01728
	ctx.lr = 0x839FAE20;
	sub_83A01728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x839faea0
	if (cr0.eq) goto loc_839FAEA0;
	// addi r30,r29,496
	ctx.r30.s64 = ctx.r29.s64 + 496;
loc_839FAE2C:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839fae4c
	if (cr6.eq) goto loc_839FAE4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a0fcb8
	ctx.lr = 0x839FAE48;
	sub_83A0FCB8(ctx, base);
	// b 0x839fae80
	goto loc_839FAE80;
loc_839FAE4C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x839fae68
	goto loc_839FAE68;
loc_839FAE58:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x839fae74
	if (cr6.eq) goto loc_839FAE74;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_839FAE68:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fae58
	if (!cr6.eq) goto loc_839FAE58;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_839FAE74:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f99e0
	ctx.lr = 0x839FAE80;
	sub_839F99E0(ctx, base);
loc_839FAE80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839FAE88;
	sub_83A39B78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x83a01728
	ctx.lr = 0x839FAE98;
	sub_83A01728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x839fae2c
	if (!cr0.eq) goto loc_839FAE2C;
loc_839FAEA0:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83d7632c
	ctx.lr = 0x839FAEAC;
	__imp__XAudioGetVoiceCategoryVolume(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,536(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x839faef0
	if (cr6.eq) goto loc_839FAEF0;
	// lwz r31,520(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 520);
	// stfs f0,536(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 536, temp.u32);
	// b 0x839faee8
	goto loc_839FAEE8;
loc_839FAEC8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839faee0
	if (cr6.eq) goto loc_839FAEE0;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x839faee4
	goto loc_839FAEE4;
loc_839FAEE0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_839FAEE4:
	// bl 0x839fead0
	ctx.lr = 0x839FAEE8;
	sub_839FEAD0(ctx, base);
loc_839FAEE8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839faec8
	if (!cr6.eq) goto loc_839FAEC8;
loc_839FAEF0:
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// addi r30,r29,112
	ctx.r30.s64 = ctx.r29.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FAF08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,576(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 576);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839faf50
	if (cr6.eq) goto loc_839FAF50;
	// lwz r31,568(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 568);
loc_839FAF18:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839faf30
	if (cr6.eq) goto loc_839FAF30;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x839faf34
	goto loc_839FAF34;
loc_839FAF30:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_839FAF34:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839faf50
	if (cr6.eq) goto loc_839FAF50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FAF4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x839faf18
	goto loc_839FAF18;
loc_839FAF50:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FAF64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a04f78
	ctx.lr = 0x839FAF68;
	sub_83A04F78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FAF70"))) PPC_WEAK_FUNC(sub_839FAF70);
PPC_FUNC_IMPL(__imp__sub_839FAF70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x839faf98
	goto loc_839FAF98;
loc_839FAF8C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839faf98
	if (cr6.eq) goto loc_839FAF98;
	// bl 0x83a39b78
	ctx.lr = 0x839FAF98;
	sub_83A39B78(ctx, base);
loc_839FAF98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9c48
	ctx.lr = 0x839FAFA0;
	sub_839F9C48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x839faf8c
	if (!cr0.eq) goto loc_839FAF8C;
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// b 0x839fafbc
	goto loc_839FAFBC;
loc_839FAFB0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fafbc
	if (cr6.eq) goto loc_839FAFBC;
	// bl 0x83a39b78
	ctx.lr = 0x839FAFBC;
	sub_83A39B78(ctx, base);
loc_839FAFBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f9c48
	ctx.lr = 0x839FAFC4;
	sub_839F9C48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x839fafb0
	if (!cr0.eq) goto loc_839FAFB0;
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fafe0
	if (cr6.eq) goto loc_839FAFE0;
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x832d53c8
	ctx.lr = 0x839FAFE0;
	sub_832D53C8(ctx, base);
loc_839FAFE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839fa360
	ctx.lr = 0x839FAFE8;
	sub_839FA360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fa360
	ctx.lr = 0x839FAFF0;
	sub_839FA360(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FB008"))) PPC_WEAK_FUNC(sub_839FB008);
PPC_FUNC_IMPL(__imp__sub_839FB008) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839FB030:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x839fb030
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FB030;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x839f9ca8
	ctx.lr = 0x839FB04C;
	sub_839F9CA8(ctx, base);
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

__attribute__((alias("__imp__sub_839FB064"))) PPC_WEAK_FUNC(sub_839FB064);
PPC_FUNC_IMPL(__imp__sub_839FB064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FB068"))) PPC_WEAK_FUNC(sub_839FB068);
PPC_FUNC_IMPL(__imp__sub_839FB068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FB070;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-27432
	ctx.r11.s64 = ctx.r11.s64 + -27432;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r3,40
	ctx.r28.s64 = ctx.r3.s64 + 40;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r29,63
	ctx.r29.s64 = 63;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
loc_839FB098:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839fb008
	ctx.lr = 0x839FB0A0;
	sub_839FB008(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,240
	ctx.r28.s64 = ctx.r28.s64 + 240;
	// bge 0x839fb098
	if (!cr0.lt) goto loc_839FB098;
	// addi r11,r31,15400
	ctx.r11.s64 = ctx.r31.s64 + 15400;
	// stw r30,15400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15400, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,15424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15424, ctx.r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r30,15428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15428, ctx.r30.u32);
	// stw r10,15436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15436, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,15404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15404, ctx.r11.u32);
	// stw r30,15432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15432, ctx.r30.u32);
	// stw r30,15408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15408, ctx.r30.u32);
	// lwz r10,15400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15400);
	// lwz r11,15404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15404);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,15400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15400, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FB0F4"))) PPC_WEAK_FUNC(sub_839FB0F4);
PPC_FUNC_IMPL(__imp__sub_839FB0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FB0F8"))) PPC_WEAK_FUNC(sub_839FB0F8);
PPC_FUNC_IMPL(__imp__sub_839FB0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FB100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,15400
	ctx.r3.s64 = ctx.r3.s64 + 15400;
	// bl 0x839fa2d0
	ctx.lr = 0x839FB110;
	sub_839FA2D0(ctx, base);
	// addi r11,r30,15400
	ctx.r11.s64 = ctx.r30.s64 + 15400;
	// li r29,63
	ctx.r29.s64 = 63;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_839FB11C:
	// addi r31,r31,-240
	ctx.r31.s64 = ctx.r31.s64 + -240;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x839fa3f0
	ctx.lr = 0x839FB128;
	sub_839FA3F0(ctx, base);
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,-14400
	ctx.r6.s64 = ctx.r11.s64 + -14400;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f0190
	ctx.lr = 0x839FB140;
	sub_823F0190(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x839fb11c
	if (!cr0.lt) goto loc_839FB11C;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x839f8de0
	ctx.lr = 0x839FB150;
	sub_839F8DE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FB158"))) PPC_WEAK_FUNC(sub_839FB158);
PPC_FUNC_IMPL(__imp__sub_839FB158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839FB160;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// b 0x839fb1b0
	goto loc_839FB1B0;
loc_839FB188:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// beq cr6,0x839fb220
	if (cr6.eq) goto loc_839FB220;
	// bgt cr6,0x839fb1b8
	if (cr6.gt) goto loc_839FB1B8;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fb1b8
	if (cr6.eq) goto loc_839FB1B8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_839FB1B0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fb188
	if (!cr6.eq) goto loc_839FB188;
loc_839FB1B8:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x839f8cd8
	ctx.lr = 0x839FB1D4;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fb228
	if (cr0.eq) goto loc_839FB228;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r27.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r27,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r27.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r27,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r27.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x839fb22c
	goto loc_839FB22C;
loc_839FB220:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x839fb3c0
	goto loc_839FB3C0;
loc_839FB228:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_839FB22C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x839fb244
	if (!cr6.eq) goto loc_839FB244;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x839fb3c4
	goto loc_839FB3C4;
loc_839FB244:
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r25,r30,44
	ctx.r25.s64 = ctx.r30.s64 + 44;
	// stw r27,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r27,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r27.u32);
	// beq cr6,0x839fb268
	if (cr6.eq) goto loc_839FB268;
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x839fb26c
	goto loc_839FB26C;
loc_839FB268:
	// lwz r28,184(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 184);
loc_839FB26C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x839f96b0
	ctx.lr = 0x839FB27C;
	sub_839F96B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lis r11,4919
	ctx.r11.s64 = 322371584;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ori r26,r11,61441
	ctx.r26.u64 = ctx.r11.u64 | 61441;
	// blt 0x839fb348
	if (cr0.lt) goto loc_839FB348;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB2AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// blt 0x839fb348
	if (cr0.lt) goto loc_839FB348;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB2D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// blt 0x839fb348
	if (cr0.lt) goto loc_839FB348;
	// lwz r3,180(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 180);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB2F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// blt 0x839fb348
	if (cr0.lt) goto loc_839FB348;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x839f96b0
	ctx.lr = 0x839FB310;
	sub_839F96B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// blt 0x839fb348
	if (cr0.lt) goto loc_839FB348;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r24,452
	ctx.r3.s64 = ctx.r24.s64 + 452;
	// bl 0x839fa258
	ctx.lr = 0x839FB32C;
	sub_839FA258(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fb33c
	if (cr0.eq) goto loc_839FB33C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// b 0x839fb3c0
	goto loc_839FB3C0;
loc_839FB33C:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_839FB348:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839fb35c
	if (cr6.eq) goto loc_839FB35C;
	// lwz r3,16044(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16044);
	// bl 0x82415e30
	ctx.lr = 0x839FB35C;
	sub_82415E30(ctx, base);
loc_839FB35C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fb3a4
	if (cr6.eq) goto loc_839FB3A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,180(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 180);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16044(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16044);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82415e30
	ctx.lr = 0x839FB3A4;
	sub_82415E30(ctx, base);
loc_839FB3A4:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x839fa2d0
	ctx.lr = 0x839FB3AC;
	sub_839FA2D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839FB3B4;
	sub_83A39B78(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x839fb3c4
	if (cr6.lt) goto loc_839FB3C4;
loc_839FB3C0:
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
loc_839FB3C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a10180
	ctx.lr = 0x839FB3CC;
	sub_83A10180(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FB3D8"))) PPC_WEAK_FUNC(sub_839FB3D8);
PPC_FUNC_IMPL(__imp__sub_839FB3D8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x839fb40c
	goto loc_839FB40C;
loc_839FB3F4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839fb40c
	if (cr6.eq) goto loc_839FB40C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839faf70
	ctx.lr = 0x839FB404;
	sub_839FAF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839FB40C;
	sub_83A39B78(ctx, base);
loc_839FB40C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a1e790
	ctx.lr = 0x839FB414;
	sub_83A1E790(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x839fb3f4
	if (!cr0.eq) goto loc_839FB3F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839fa3f0
	ctx.lr = 0x839FB424;
	sub_839FA3F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FB43C"))) PPC_WEAK_FUNC(sub_839FB43C);
PPC_FUNC_IMPL(__imp__sub_839FB43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FB440"))) PPC_WEAK_FUNC(sub_839FB440);
PPC_FUNC_IMPL(__imp__sub_839FB440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FB448;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r11,r11,-27408
	ctx.r11.s64 = ctx.r11.s64 + -27408;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-27344
	ctx.r10.s64 = ctx.r10.s64 + -27344;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r11,r9,-27360
	ctx.r11.s64 = ctx.r9.s64 + -27360;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r8,-27376
	ctx.r9.s64 = ctx.r8.s64 + -27376;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r10,r7,-27432
	ctx.r10.s64 = ctx.r7.s64 + -27432;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// bl 0x839f9ca8
	ctx.lr = 0x839FB4F8;
	sub_839F9CA8(ctx, base);
	// addi r11,r31,412
	ctx.r11.s64 = ctx.r31.s64 + 412;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// addi r10,r31,452
	ctx.r10.s64 = ctx.r31.s64 + 452;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// addi r9,r31,500
	ctx.r9.s64 = ctx.r31.s64 + 500;
	// stw r29,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r29.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r3,r31,604
	ctx.r3.s64 = ctx.r31.s64 + 604;
	// lwz r7,412(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r10,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r10.u32);
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// addi r9,r31,548
	ctx.r9.s64 = ctx.r31.s64 + 548;
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r29,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r29.u32);
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// lwz r7,452(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r10,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r10.u32);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r29,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r29.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stw r8,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r8.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r29,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r29.u32);
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// bl 0x839fb068
	ctx.lr = 0x839FB5FC;
	sub_839FB068(ctx, base);
	// stw r30,16044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16044, ctx.r30.u32);
	// stw r30,16048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16048, ctx.r30.u32);
	// addi r3,r31,16052
	ctx.r3.s64 = ctx.r31.s64 + 16052;
	// bl 0x839f9ca8
	ctx.lr = 0x839FB60C;
	sub_839F9CA8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-22633
	ctx.r10.s64 = -1483276288;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r10,16272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16272, ctx.r10.u32);
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// stw r11,16276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16276, ctx.r11.u32);
	// addi r3,r10,9136
	ctx.r3.s64 = ctx.r10.s64 + 9136;
	// bl 0x839f8bc0
	ctx.lr = 0x839FB62C;
	sub_839F8BC0(ctx, base);
	// addi r11,r31,588
	ctx.r11.s64 = ctx.r31.s64 + 588;
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r29,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FB64C"))) PPC_WEAK_FUNC(sub_839FB64C);
PPC_FUNC_IMPL(__imp__sub_839FB64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FB650"))) PPC_WEAK_FUNC(sub_839FB650);
PPC_FUNC_IMPL(__imp__sub_839FB650) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x839fbc38
	sub_839FBC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FB658"))) PPC_WEAK_FUNC(sub_839FB658);
PPC_FUNC_IMPL(__imp__sub_839FB658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_839FB65C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x839fb65c
	if (!cr0.eq) goto loc_839FB65C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FB680"))) PPC_WEAK_FUNC(sub_839FB680);
PPC_FUNC_IMPL(__imp__sub_839FB680) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x839fb658
	sub_839FB658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FB688"))) PPC_WEAK_FUNC(sub_839FB688);
PPC_FUNC_IMPL(__imp__sub_839FB688) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x839f90a0
	sub_839F90A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FB690"))) PPC_WEAK_FUNC(sub_839FB690);
PPC_FUNC_IMPL(__imp__sub_839FB690) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x839f9bc0
	sub_839F9BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FB698"))) PPC_WEAK_FUNC(sub_839FB698);
PPC_FUNC_IMPL(__imp__sub_839FB698) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x839fb690
	sub_839FB690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FB6A0"))) PPC_WEAK_FUNC(sub_839FB6A0);
PPC_FUNC_IMPL(__imp__sub_839FB6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839FB6A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// addi r11,r11,-27344
	ctx.r11.s64 = ctx.r11.s64 + -27344;
	// addi r10,r10,-27360
	ctx.r10.s64 = ctx.r10.s64 + -27360;
	// addi r9,r9,-27376
	ctx.r9.s64 = ctx.r9.s64 + -27376;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r24,r3,44
	ctx.r24.s64 = ctx.r3.s64 + 44;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB6EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9030
	ctx.lr = 0x839FB6F4;
	sub_839F9030(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fb8e4
	if (cr6.eq) goto loc_839FB8E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9490
	ctx.lr = 0x839FB710;
	sub_839F9490(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fb724
	if (cr6.eq) goto loc_839FB724;
	// bl 0x83a39b78
	ctx.lr = 0x839FB720;
	sub_83A39B78(ctx, base);
	// stw r25,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r25.u32);
loc_839FB724:
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839fb760
	if (cr6.eq) goto loc_839FB760;
	// addi r30,r31,492
	ctx.r30.s64 = ctx.r31.s64 + 492;
	// b 0x839fb748
	goto loc_839FB748;
loc_839FB738:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fb74c
	if (cr6.eq) goto loc_839FB74C;
	// bl 0x83a39b78
	ctx.lr = 0x839FB748;
	sub_83A39B78(ctx, base);
loc_839FB748:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
loc_839FB74C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a01728
	ctx.lr = 0x839FB758;
	sub_83A01728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x839fb738
	if (!cr0.eq) goto loc_839FB738;
loc_839FB760:
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r11,r31,500
	ctx.r11.s64 = ctx.r31.s64 + 500;
	// b 0x839fb788
	goto loc_839FB788;
loc_839FB76C:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
loc_839FB788:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839fb76c
	if (!cr6.eq) goto loc_839FB76C;
	// stw r25,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r25.u32);
	// stw r25,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r25.u32);
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fb7f0
	if (cr6.eq) goto loc_839FB7F0;
	// addi r28,r31,192
	ctx.r28.s64 = ctx.r31.s64 + 192;
	// b 0x839fb7e0
	goto loc_839FB7E0;
loc_839FB7AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB7C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB7DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a39b78
	ctx.lr = 0x839FB7E0;
	sub_83A39B78(ctx, base);
loc_839FB7E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a1e790
	ctx.lr = 0x839FB7E8;
	sub_83A1E790(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x839fb7ac
	if (!cr0.eq) goto loc_839FB7AC;
loc_839FB7F0:
	// addi r26,r31,452
	ctx.r26.s64 = ctx.r31.s64 + 452;
	// b 0x839fb86c
	goto loc_839FB86C;
loc_839FB7F8:
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r3,16044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16044);
	// bl 0x82415e30
	ctx.lr = 0x839FB804;
	sub_82415E30(ctx, base);
	// lwz r3,16044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16044);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82415e30
	ctx.lr = 0x839FB810;
	sub_82415E30(ctx, base);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// b 0x839fb84c
	goto loc_839FB84C;
loc_839FB818:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB830;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a39b78
	ctx.lr = 0x839FB84C;
	sub_83A39B78(ctx, base);
loc_839FB84C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a0af38
	ctx.lr = 0x839FB854;
	sub_83A0AF38(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x839fb818
	if (!cr0.eq) goto loc_839FB818;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839fa2d0
	ctx.lr = 0x839FB864;
	sub_839FA2D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839FB86C;
	sub_83A39B78(ctx, base);
loc_839FB86C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a0af38
	ctx.lr = 0x839FB874;
	sub_83A0AF38(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x839fb7f8
	if (!cr0.eq) goto loc_839FB7F8;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fb8d4
	if (cr6.eq) goto loc_839FB8D4;
	// addi r28,r31,412
	ctx.r28.s64 = ctx.r31.s64 + 412;
	// b 0x839fb8c4
	goto loc_839FB8C4;
loc_839FB890:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB8A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB8C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a39b78
	ctx.lr = 0x839FB8C4;
	sub_83A39B78(ctx, base);
loc_839FB8C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a0af38
	ctx.lr = 0x839FB8CC;
	sub_83A0AF38(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x839fb890
	if (!cr0.eq) goto loc_839FB890;
loc_839FB8D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f91e0
	ctx.lr = 0x839FB8DC;
	sub_839F91E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9140
	ctx.lr = 0x839FB8E4;
	sub_839F9140(ctx, base);
loc_839FB8E4:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB8FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,16052
	ctx.r3.s64 = ctx.r31.s64 + 16052;
	// bl 0x839fb3d8
	ctx.lr = 0x839FB904;
	sub_839FB3D8(ctx, base);
	// addi r3,r31,16044
	ctx.r3.s64 = ctx.r31.s64 + 16044;
	// bl 0x839fe378
	ctx.lr = 0x839FB90C;
	sub_839FE378(ctx, base);
	// addi r3,r31,604
	ctx.r3.s64 = ctx.r31.s64 + 604;
	// bl 0x839fb0f8
	ctx.lr = 0x839FB914;
	sub_839FB0F8(ctx, base);
	// addi r3,r31,548
	ctx.r3.s64 = ctx.r31.s64 + 548;
	// bl 0x839fa2d0
	ctx.lr = 0x839FB91C;
	sub_839FA2D0(ctx, base);
	// addi r3,r31,500
	ctx.r3.s64 = ctx.r31.s64 + 500;
	// bl 0x839fa2d0
	ctx.lr = 0x839FB924;
	sub_839FA2D0(ctx, base);
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// bl 0x839fe378
	ctx.lr = 0x839FB92C;
	sub_839FE378(ctx, base);
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// bl 0x839fa2d0
	ctx.lr = 0x839FB934;
	sub_839FA2D0(ctx, base);
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// bl 0x839fa2d0
	ctx.lr = 0x839FB93C;
	sub_839FA2D0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x839fa3f0
	ctx.lr = 0x839FB944;
	sub_839FA3F0(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x839f8de0
	ctx.lr = 0x839FB94C;
	sub_839F8DE0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x839f8de0
	ctx.lr = 0x839FB954;
	sub_839F8DE0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x839f8de0
	ctx.lr = 0x839FB95C;
	sub_839F8DE0(ctx, base);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r11,r11,-27408
	ctx.r11.s64 = ctx.r11.s64 + -27408;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FB970"))) PPC_WEAK_FUNC(sub_839FB970);
PPC_FUNC_IMPL(__imp__sub_839FB970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x839FB978;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r25,r3,44
	ctx.r25.s64 = ctx.r3.s64 + 44;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FB9B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,375
	ctx.r11.s64 = 375;
	// divwu r11,r31,r11
	ctx.r11.u32 = PPCDivide(ctx.r31.u32, ctx.r11.u32);
	// mulli r11,r11,375
	ctx.r11.s64 = ctx.r11.s64 * 375;
	// subf. r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fb9e4
	if (cr0.eq) goto loc_839FB9E4;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,32000
	cr6.compare<uint32_t>(ctx.r11.u32, 32000, xer);
	// bge cr6,0x839fb9d8
	if (!cr6.lt) goto loc_839FB9D8;
	// addi r11,r11,375
	ctx.r11.s64 = ctx.r11.s64 + 375;
loc_839FB9D8:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x839fb9e4
	if (cr6.eq) goto loc_839FB9E4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_839FB9E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839fb158
	ctx.lr = 0x839FB9FC;
	sub_839FB158(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// blt 0x839fbaf0
	if (cr0.lt) goto loc_839FBAF0;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,188
	ctx.r4.s64 = 188;
	// bl 0x839f8cd8
	ctx.lr = 0x839FBA24;
	sub_839F8CD8(ctx, base);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fba50
	if (cr0.eq) goto loc_839FBA50;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r6,44(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83a05840
	ctx.lr = 0x839FBA48;
	sub_83A05840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x839fba54
	goto loc_839FBA54;
loc_839FBA50:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839FBA54:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839fba6c
	if (!cr6.eq) goto loc_839FBA6C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x839fbaf0
	goto loc_839FBAF0;
loc_839FBA6C:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a05720
	ctx.lr = 0x839FBA80;
	sub_83A05720(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// blt 0x839fbabc
	if (cr0.lt) goto loc_839FBABC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x83a0fcb8
	ctx.lr = 0x839FBA98;
	sub_83A0FCB8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fbab0
	if (cr0.eq) goto loc_839FBAB0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x839fbaf0
	goto loc_839FBAF0;
loc_839FBAB0:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_839FBABC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FBAD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FBAEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a39b78
	ctx.lr = 0x839FBAF0;
	sub_83A39B78(ctx, base);
loc_839FBAF0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FBB04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x839fbb14
	if (!cr6.lt) goto loc_839FBB14;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839f91e0
	ctx.lr = 0x839FBB14;
	sub_839F91E0(ctx, base);
loc_839FBB14:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a10180
	ctx.lr = 0x839FBB1C;
	sub_83A10180(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FBB28"))) PPC_WEAK_FUNC(sub_839FBB28);
PPC_FUNC_IMPL(__imp__sub_839FBB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839FBB30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839fbb54
	if (!cr6.eq) goto loc_839FBB54;
	// lis r31,-30570
	ctx.r31.s64 = -2003435520;
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
loc_839FBB54:
	// rlwinm. r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fbb64
	if (cr0.eq) goto loc_839FBB64;
	// lis r31,-30570
	ctx.r31.s64 = -2003435520;
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
loc_839FBB64:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x839fbc20
	if (cr6.lt) goto loc_839FBC20;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r29,r11,9136
	ctx.r29.s64 = ctx.r11.s64 + 9136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839f8bc0
	ctx.lr = 0x839FBB7C;
	sub_839F8BC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x839fbc20
	if (cr0.lt) goto loc_839FBC20;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,16280
	ctx.r4.s64 = 16280;
	// bl 0x839f8cd8
	ctx.lr = 0x839FBB9C;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fbbb0
	if (cr0.eq) goto loc_839FBBB0;
	// bl 0x839fb440
	ctx.lr = 0x839FBBA8;
	sub_839FB440(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x839fbbb4
	goto loc_839FBBB4;
loc_839FBBB0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_839FBBB4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x839fbbc8
	if (!cr6.eq) goto loc_839FBBC8;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x839fbc18
	goto loc_839FBC18;
loc_839FBBC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f84b8
	ctx.lr = 0x839FBBD0;
	sub_839F84B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x839fbc04
	if (cr0.lt) goto loc_839FBC04;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FBBF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x839fbc04
	if (cr0.lt) goto loc_839FBC04;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// b 0x839fbc18
	goto loc_839FBC18;
loc_839FBC04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FBC18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839FBC18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839f8c58
	ctx.lr = 0x839FBC20;
	sub_839F8C58(ctx, base);
loc_839FBC20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FBC2C"))) PPC_WEAK_FUNC(sub_839FBC2C);
PPC_FUNC_IMPL(__imp__sub_839FBC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FBC30"))) PPC_WEAK_FUNC(sub_839FBC30);
PPC_FUNC_IMPL(__imp__sub_839FBC30) {
	PPC_FUNC_PROLOGUE();
	// b 0x839fbb28
	sub_839FBB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FBC34"))) PPC_WEAK_FUNC(sub_839FBC34);
PPC_FUNC_IMPL(__imp__sub_839FBC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FBC38"))) PPC_WEAK_FUNC(sub_839FBC38);
PPC_FUNC_IMPL(__imp__sub_839FBC38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839fb6a0
	ctx.lr = 0x839FBC58;
	sub_839FB6A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fbc68
	if (cr0.eq) goto loc_839FBC68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839FBC68;
	sub_83A39B78(ctx, base);
loc_839FBC68:
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

__attribute__((alias("__imp__sub_839FBC84"))) PPC_WEAK_FUNC(sub_839FBC84);
PPC_FUNC_IMPL(__imp__sub_839FBC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FBC88"))) PPC_WEAK_FUNC(sub_839FBC88);
PPC_FUNC_IMPL(__imp__sub_839FBC88) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,65534
	cr6.compare<uint32_t>(ctx.r3.u32, 65534, xer);
	// bne cr6,0x839fbcd8
	if (!cr6.eq) goto loc_839FBCD8;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r11,r11,-27280
	ctx.r11.s64 = ctx.r11.s64 + -27280;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x83b66170
	ctx.lr = 0x839FBCC0;
	sub_83B66170(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x839fbcd4
	if (!cr0.eq) goto loc_839FBCD4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x839fbcd8
	goto loc_839FBCD8;
loc_839FBCD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839FBCD8:
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

__attribute__((alias("__imp__sub_839FBCEC"))) PPC_WEAK_FUNC(sub_839FBCEC);
PPC_FUNC_IMPL(__imp__sub_839FBCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FBCF0"))) PPC_WEAK_FUNC(sub_839FBCF0);
PPC_FUNC_IMPL(__imp__sub_839FBCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// beq cr6,0x839fbd20
	if (cr6.eq) goto loc_839FBD20;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// beq cr6,0x839fbd20
	if (cr6.eq) goto loc_839FBD20;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// beq cr6,0x839fbd20
	if (cr6.eq) goto loc_839FBD20;
	// addi r11,r9,-32
	ctx.r11.s64 = ctx.r9.s64 + -32;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_839FBD20:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bne cr6,0x839fbd78
	if (!cr6.eq) goto loc_839FBD78;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x839fbd68
	if (cr0.eq) goto loc_839FBD68;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x839fbd68
	if (cr6.eq) goto loc_839FBD68;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// beq cr6,0x839fbd68
	if (cr6.eq) goto loc_839FBD68;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// beq cr6,0x839fbd68
	if (cr6.eq) goto loc_839FBD68;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x839fbd68
	if (cr6.eq) goto loc_839FBD68;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// addic r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
loc_839FBD68:
	// subfc r8,r11,r9
	xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_839FBD78:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FBDBC"))) PPC_WEAK_FUNC(sub_839FBDBC);
PPC_FUNC_IMPL(__imp__sub_839FBDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FBDC0"))) PPC_WEAK_FUNC(sub_839FBDC0);
PPC_FUNC_IMPL(__imp__sub_839FBDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x839fbde4
	if (cr6.eq) goto loc_839FBDE4;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addic r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_839FBDE4:
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r8,r8,-32
	ctx.r8.s64 = ctx.r8.s64 + -32;
	// addic r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x839fbe28
	if (cr6.eq) goto loc_839FBE28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839fbe84
	goto loc_839FBE84;
loc_839FBE28:
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// addi r8,r8,-27264
	ctx.r8.s64 = ctx.r8.s64 + -27264;
loc_839FBE40:
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// lhzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r7,-2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r7,r7,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r7.s64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lhzx r6,r9,r6
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// addic r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// subf r6,r4,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r4.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// bdnz 0x839fbe40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FBE40;
loc_839FBE84:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// mulli r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 * 7;
	// lhz r7,18(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r10,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r7.s64;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FBEC8"))) PPC_WEAK_FUNC(sub_839FBEC8);
PPC_FUNC_IMPL(__imp__sub_839FBEC8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fbef8
	if (cr6.eq) goto loc_839FBEF8;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// bl 0x832d53c8
	ctx.lr = 0x839FBEF0;
	sub_832D53C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_839FBEF8:
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

__attribute__((alias("__imp__sub_839FBF0C"))) PPC_WEAK_FUNC(sub_839FBF0C);
PPC_FUNC_IMPL(__imp__sub_839FBF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FBF10"))) PPC_WEAK_FUNC(sub_839FBF10);
PPC_FUNC_IMPL(__imp__sub_839FBF10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FBF18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// li r3,1068
	ctx.r3.s64 = 1068;
	// bl 0x832d5290
	ctx.lr = 0x839FBF30;
	sub_832D5290(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x839fbf5c
	if (cr0.eq) goto loc_839FBF5C;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x831ce980
	ctx.lr = 0x839FBF4C;
	sub_831CE980(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_839FBF50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839FBF5C:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x839fbf50
	goto loc_839FBF50;
}

__attribute__((alias("__imp__sub_839FBF68"))) PPC_WEAK_FUNC(sub_839FBF68);
PPC_FUNC_IMPL(__imp__sub_839FBF68) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// beq cr6,0x839fbfa0
	if (cr6.eq) goto loc_839FBFA0;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// bl 0x832d53c8
	ctx.lr = 0x839FBF9C;
	sub_832D53C8(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_839FBFA0:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FBFCC"))) PPC_WEAK_FUNC(sub_839FBFCC);
PPC_FUNC_IMPL(__imp__sub_839FBFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FBFD0"))) PPC_WEAK_FUNC(sub_839FBFD0);
PPC_FUNC_IMPL(__imp__sub_839FBFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,357
	cr6.compare<uint32_t>(ctx.r10.u32, 357, xer);
	// bne cr6,0x839fc01c
	if (!cr6.eq) goto loc_839FC01C;
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
loc_839FBFF8:
	// lhzu r11,20(r9)
	ea = 20 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// blt cr6,0x839fbff8
	if (cr6.lt) goto loc_839FBFF8;
	// blr 
	return;
loc_839FC01C:
	// cmplwi cr6,r10,358
	cr6.compare<uint32_t>(ctx.r10.u32, 358, xer);
	// beq cr6,0x839fc02c
	if (cr6.eq) goto loc_839FC02C;
	// cmplwi cr6,r10,65534
	cr6.compare<uint32_t>(ctx.r10.u32, 65534, xer);
	// bne cr6,0x839fc034
	if (!cr6.eq) goto loc_839FC034;
loc_839FC02C:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
loc_839FC034:
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839fc048
	if (!cr6.eq) goto loc_839FC048;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_839FC048:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x839fc058
	if (!cr6.eq) goto loc_839FC058;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_839FC058:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-25120
	ctx.r10.s64 = ctx.r10.s64 + -25120;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FC08C"))) PPC_WEAK_FUNC(sub_839FC08C);
PPC_FUNC_IMPL(__imp__sub_839FC08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FC090"))) PPC_WEAK_FUNC(sub_839FC090);
PPC_FUNC_IMPL(__imp__sub_839FC090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bge cr6,0x839fc0ac
	if (!cr6.lt) goto loc_839FC0AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_839FC0AC:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r9,11(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// addi r6,r10,-16
	ctx.r6.s64 = ctx.r10.s64 + -16;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addic r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r6,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// subfe r8,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// subfe r8,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// blelr cr6
	if (!cr6.gt) return;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839FC104:
	// lwz r11,-12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf r8,r11,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// addic r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r5,r6,4
	xer.ca = ctx.r6.u32 <= 4;
	ctx.r5.s64 = 4 - ctx.r6.s64;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// subfic r3,r10,48
	xer.ca = ctx.r10.u32 <= 48;
	ctx.r3.s64 = 48 - ctx.r10.s64;
	// subf r6,r4,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r4.s64;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// and r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 & ctx.r8.u64;
	// beq cr6,0x839fc160
	if (cr6.eq) goto loc_839FC160;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_839FC160:
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x839fc1b0
	if (cr0.eq) goto loc_839FC1B0;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x839fc198
	if (cr0.eq) goto loc_839FC198;
loc_839FC178:
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x839fc178
	if (!cr0.eq) goto loc_839FC178;
loc_839FC198:
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_839FC1B0:
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// bdnz 0x839fc104
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FC104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FC1BC"))) PPC_WEAK_FUNC(sub_839FC1BC);
PPC_FUNC_IMPL(__imp__sub_839FC1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FC1C0"))) PPC_WEAK_FUNC(sub_839FC1C0);
PPC_FUNC_IMPL(__imp__sub_839FC1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rotlwi r8,r7,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lhz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lhz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addic r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r6,34
	cr6.compare<uint32_t>(ctx.r6.u32, 34, xer);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x839fc208
	if (cr6.eq) goto loc_839FC208;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_839FC208:
	// lbz r10,49(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// li r11,3
	ctx.r11.s64 = 3;
	// lhz r8,50(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 50);
	// subfc r6,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// subfic r8,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// beq cr6,0x839fc24c
	if (cr6.eq) goto loc_839FC24C;
	// lis r11,127
	ctx.r11.s64 = 8323072;
	// ori r11,r11,63488
	ctx.r11.u64 = ctx.r11.u64 | 63488;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x839fc250
	if (!cr6.gt) goto loc_839FC250;
loc_839FC24C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_839FC250:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fc28c
	if (cr6.eq) goto loc_839FC28C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_839FC260:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x839fc260
	if (!cr0.eq) goto loc_839FC260;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_839FC28C:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r7,18(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// subf r7,r7,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r7.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addic r9,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r7,r11,r6
	xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r6.s64 - ctx.r11.s64;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// subfc r6,r10,r6
	xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FC2EC"))) PPC_WEAK_FUNC(sub_839FC2EC);
PPC_FUNC_IMPL(__imp__sub_839FC2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FC2F0"))) PPC_WEAK_FUNC(sub_839FC2F0);
PPC_FUNC_IMPL(__imp__sub_839FC2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,357
	cr6.compare<uint32_t>(ctx.r11.u32, 357, xer);
	// beq cr6,0x839fc338
	if (cr6.eq) goto loc_839FC338;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_839FC338:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fbc88
	ctx.lr = 0x839FC340;
	sub_839FBC88(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x839fc484
	if (cr6.eq) goto loc_839FC484;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x839fc470
	if (cr6.eq) goto loc_839FC470;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x839fc3e4
	if (cr6.eq) goto loc_839FC3E4;
	// cmpwi cr6,r11,352
	cr6.compare<int32_t>(ctx.r11.s32, 352, xer);
	// ble cr6,0x839fc498
	if (!cr6.gt) goto loc_839FC498;
	// cmpwi cr6,r11,354
	cr6.compare<int32_t>(ctx.r11.s32, 354, xer);
	// ble cr6,0x839fc394
	if (!cr6.gt) goto loc_839FC394;
	// cmpwi cr6,r11,357
	cr6.compare<int32_t>(ctx.r11.s32, 357, xer);
	// beq cr6,0x839fc388
	if (cr6.eq) goto loc_839FC388;
	// cmpwi cr6,r11,358
	cr6.compare<int32_t>(ctx.r11.s32, 358, xer);
	// bne cr6,0x839fc498
	if (!cr6.eq) goto loc_839FC498;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fc1c0
	ctx.lr = 0x839FC384;
	sub_839FC1C0(ctx, base);
	// b 0x839fc478
	goto loc_839FC478;
loc_839FC388:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fc090
	ctx.lr = 0x839FC390;
	sub_839FC090(ctx, base);
	// b 0x839fc478
	goto loc_839FC478;
loc_839FC394:
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmplwi cr6,r9,65534
	cr6.compare<uint32_t>(ctx.r9.u32, 65534, xer);
	// addic r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x839fc3cc
	if (!cr6.eq) goto loc_839FC3CC;
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addic r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_839FC3CC:
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// b 0x839fc454
	goto loc_839FC454;
loc_839FC3E4:
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r8,r10,-32
	ctx.r8.s64 = ctx.r10.s64 + -32;
	// cmplwi cr6,r9,65534
	cr6.compare<uint32_t>(ctx.r9.u32, 65534, xer);
	// addic r9,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// bne cr6,0x839fc420
	if (!cr6.eq) goto loc_839FC420;
	// lhz r9,18(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// beq cr6,0x839fc420
	if (cr6.eq) goto loc_839FC420;
	// addic r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_839FC420:
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addic r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_839FC454:
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x839fc498
	if (!cr6.eq) goto loc_839FC498;
loc_839FC468:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x839fc498
	goto loc_839FC498;
loc_839FC470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fbdc0
	ctx.lr = 0x839FC478;
	sub_839FBDC0(ctx, base);
loc_839FC478:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x839fc498
	if (!cr0.eq) goto loc_839FC498;
	// b 0x839fc468
	goto loc_839FC468;
loc_839FC484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fbcf0
	ctx.lr = 0x839FC48C;
	sub_839FBCF0(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
loc_839FC498:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bne cr6,0x839fc4ec
	if (!cr6.eq) goto loc_839FC4EC;
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// blt cr6,0x839fc4e8
	if (cr6.lt) goto loc_839FC4E8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fc4ec
	if (cr6.eq) goto loc_839FC4EC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_839FC4C0:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x839fc4c0
	if (!cr0.eq) goto loc_839FC4C0;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x839fc4ec
	if (cr6.eq) goto loc_839FC4EC;
loc_839FC4E8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_839FC4EC:
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

__attribute__((alias("__imp__sub_839FC508"))) PPC_WEAK_FUNC(sub_839FC508);
PPC_FUNC_IMPL(__imp__sub_839FC508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x839FC510;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x831ce76c
	ctx.lr = 0x839FC518;
	__savefpr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// li r15,0
	ctx.r15.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// bl 0x832d5290
	ctx.lr = 0x839FC548;
	sub_832D5290(ctx, base);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq 0x839fc57c
	if (cr0.eq) goto loc_839FC57C;
	// rlwinm r31,r18,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d5290
	ctx.lr = 0x839FC560;
	sub_832D5290(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r21.s32, 0, xer);
	// beq 0x839fc57c
	if (cr0.eq) goto loc_839FC57C;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d5290
	ctx.lr = 0x839FC574;
	sub_832D5290(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r19.s32, 0, xer);
	// bne 0x839fc588
	if (!cr0.eq) goto loc_839FC588;
loc_839FC57C:
	// lis r15,-32761
	ctx.r15.s64 = -2147024896;
	// ori r15,r15,14
	ctx.r15.u64 = ctx.r15.u64 | 14;
	// b 0x839fc9dc
	goto loc_839FC9DC;
loc_839FC588:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x839fc5a8
	if (!cr6.gt) goto loc_839FC5A8;
	// addi r11,r16,-4
	ctx.r11.s64 = ctx.r16.s64 + -4;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
loc_839FC59C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x839fc59c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FC59C;
loc_839FC5A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// ble cr6,0x839fc5c8
	if (!cr6.gt) goto loc_839FC5C8;
	// addi r11,r21,-4
	ctx.r11.s64 = ctx.r21.s64 + -4;
	// mtctr r18
	ctr.u64 = ctx.r18.u64;
loc_839FC5BC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x839fc5bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FC5BC;
loc_839FC5C8:
	// addi r6,r23,-1
	ctx.r6.s64 = ctx.r23.s64 + -1;
loc_839FC5CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x839fc628
	if (!cr6.gt) goto loc_839FC628;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// subf r9,r30,r16
	ctx.r9.s64 = ctx.r16.s64 - ctx.r30.s64;
loc_839FC5E8:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x839fc614
	if (!cr6.gt) goto loc_839FC614;
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
loc_839FC614:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// blt cr6,0x839fc5e8
	if (cr6.lt) goto loc_839FC5E8;
loc_839FC628:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x839fc5cc
	if (!cr0.eq) goto loc_839FC5CC;
	// addi r6,r18,-1
	ctx.r6.s64 = ctx.r18.s64 + -1;
loc_839FC634:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x839fc690
	if (!cr6.gt) goto loc_839FC690;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r11,r20,4
	ctx.r11.s64 = ctx.r20.s64 + 4;
	// subf r9,r20,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r20.s64;
loc_839FC650:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x839fc67c
	if (!cr6.gt) goto loc_839FC67C;
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
loc_839FC67C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// blt cr6,0x839fc650
	if (cr6.lt) goto loc_839FC650;
loc_839FC690:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x839fc634
	if (!cr0.eq) goto loc_839FC634;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// lfs f29,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x839fc6dc
	if (!cr6.gt) goto loc_839FC6DC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_839FC6B8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x839fc6d8
	if (!cr6.lt) goto loc_839FC6D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, xer);
	// blt cr6,0x839fc6b8
	if (cr6.lt) goto loc_839FC6B8;
	// b 0x839fc6dc
	goto loc_839FC6DC;
loc_839FC6D8:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_839FC6DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// ble cr6,0x839fc710
	if (!cr6.gt) goto loc_839FC710;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_839FC6EC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x839fc70c
	if (!cr6.lt) goto loc_839FC70C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r18
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, xer);
	// blt cr6,0x839fc6ec
	if (cr6.lt) goto loc_839FC6EC;
	// b 0x839fc710
	goto loc_839FC710;
loc_839FC70C:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_839FC710:
	// subf r26,r24,r18
	ctx.r26.s64 = ctx.r18.s64 - ctx.r24.s64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// ble cr6,0x839fc760
	if (!cr6.gt) goto loc_839FC760;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
loc_839FC728:
	// stfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x839fc750
	if (!cr6.gt) goto loc_839FC750;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
loc_839FC73C:
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f29,r6,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r17.u32, temp.u32);
	// bdnz 0x839fc73c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FC73C;
loc_839FC750:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// bne 0x839fc728
	if (!cr0.eq) goto loc_839FC728;
loc_839FC760:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x839fc9dc
	if (!cr6.gt) goto loc_839FC9DC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r23
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, xer);
	// lfs f25,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f25.f64 = double(temp.f32);
	// bge cr6,0x839fc928
	if (!cr6.lt) goto loc_839FC928;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// add r29,r11,r16
	ctx.r29.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// subf r25,r16,r30
	ctx.r25.s64 = ctx.r30.s64 - ctx.r16.s64;
	// lfs f26,11412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11412);
	ctx.f26.f64 = double(temp.f32);
	// lfd f28,-27224(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + -27224);
	// lfs f27,-27232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27232);
	ctx.f27.f64 = double(temp.f32);
loc_839FC7A0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r18
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r18.s32, xer);
	// bge cr6,0x839fc7d4
	if (!cr6.lt) goto loc_839FC7D4;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r25,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
loc_839FC7B8:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x839fc7d4
	if (!cr6.gt) goto loc_839FC7D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r18
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, xer);
	// blt cr6,0x839fc7b8
	if (cr6.lt) goto loc_839FC7B8;
loc_839FC7D4:
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// divw r9,r11,r26
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r9,r9,r26
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r26.s32);
	// divw r8,r10,r26
	ctx.r8.s32 = PPCDivide(ctx.r10.s32, ctx.r26.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mullw r9,r8,r26
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r27,r10,r24
	ctx.r27.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r30,r20
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r31,r20
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f1,f31,f27
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// bl 0x831d1ca8
	ctx.lr = 0x839FC81C;
	sub_831D1CA8(ctx, base);
	// lfsx f0,r25,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfsx f12,r31,r20
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f0,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fnmsubs f31,f13,f26,f31
	ctx.f31.f64 = double(float(-(ctx.f13.f64 * ctx.f26.f64 - ctx.f31.f64)));
	// fmuls f1,f30,f27
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f27.f64));
	// bl 0x831d1ca8
	ctx.lr = 0x839FC838;
	sub_831D1CA8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, xer);
	// fnmsubs f0,f0,f26,f30
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f26.f64 - ctx.f30.f64)));
	// bne cr6,0x839fc874
	if (!cr6.eq) goto loc_839FC874;
	// lwzx r10,r31,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f25,r11,r17
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r17.u32, temp.u32);
	// lwzx r11,r31,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r19
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// b 0x839fc914
	goto loc_839FC914;
loc_839FC874:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// beq cr6,0x839fca14
	if (cr6.eq) goto loc_839FCA14;
	// fdivs f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmul f1,f30,f28
	ctx.f1.f64 = ctx.f30.f64 * ctx.f28.f64;
	// bl 0x831d1a10
	ctx.lr = 0x839FC888;
	sub_831D1A10(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x839fc898
	if (!cr6.lt) goto loc_839FC898;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_839FC898:
	// fmul f1,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64 * ctx.f28.f64;
	// bl 0x831d1930
	ctx.lr = 0x839FC8A0;
	sub_831D1930(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x839fc8b0
	if (!cr6.lt) goto loc_839FC8B0;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_839FC8B0:
	// cmpwi cr6,r18,1
	cr6.compare<int32_t>(ctx.r18.s32, 1, xer);
	// bne cr6,0x839fc8c0
	if (!cr6.eq) goto loc_839FC8C0;
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
	// fmr f31,f25
	ctx.f31.f64 = ctx.f25.f64;
loc_839FC8C0:
	// lwzx r10,r31,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r11,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r17.u32, temp.u32);
	// lwzx r10,r30,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// mullw r10,r23,r10
	ctx.r10.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r10.s32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r17
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r17.u32, temp.u32);
	// lwzx r11,r31,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r19
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfsx f13,r11,r19
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r19.u32, temp.u32);
	// lwzx r11,r30,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r19
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_839FC914:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stfsx f0,r11,r19
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r19.u32, temp.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r22,r23
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r23.s32, xer);
	// blt cr6,0x839fc7a0
	if (cr6.lt) goto loc_839FC7A0;
loc_839FC928:
	// fmr f10,f29
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f29.f64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// ble cr6,0x839fc9dc
	if (!cr6.gt) goto loc_839FC9DC;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// mtctr r18
	ctr.u64 = ctx.r18.u64;
loc_839FC93C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x839fc94c
	if (!cr6.gt) goto loc_839FC94C;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_839FC94C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x839fc93c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FC93C;
	// fcmpu cr6,f10,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// beq cr6,0x839fc9dc
	if (cr6.eq) goto loc_839FC9DC;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// lfs f11,23372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23372);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-23580(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
loc_839FC97C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x839fc9d0
	if (!cr6.gt) goto loc_839FC9D0;
	// fdivs f0,f25,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 / ctx.f10.f64));
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
loc_839FC990:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r10,r17
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f9,f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fctiwz f9,f9
	ctx.f9.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwa r7,84(r1)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfsx f9,r10,r17
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r17.u32, temp.u32);
	// bdnz 0x839fc990
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FC990;
loc_839FC9D0:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + ctx.r23.u64;
	// bne 0x839fc97c
	if (!cr0.eq) goto loc_839FC97C;
loc_839FC9DC:
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x832d53c8
	ctx.lr = 0x839FC9E8;
	sub_832D53C8(ctx, base);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832d53c8
	ctx.lr = 0x839FC9F4;
	sub_832D53C8(ctx, base);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x832d53c8
	ctx.lr = 0x839FCA00;
	sub_832D53C8(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x831ce7b8
	ctx.lr = 0x839FCA10;
	__restfpr_25(ctx, base);
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_839FCA14:
	// lis r15,-32761
	ctx.r15.s64 = -2147024896;
	// ori r15,r15,87
	ctx.r15.u64 = ctx.r15.u64 | 87;
	// b 0x839fc9dc
	goto loc_839FC9DC;
}

__attribute__((alias("__imp__sub_839FCA20"))) PPC_WEAK_FUNC(sub_839FCA20);
PPC_FUNC_IMPL(__imp__sub_839FCA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839FCA28;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839fcedc
	if (cr6.eq) goto loc_839FCEDC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x839fcedc
	if (cr6.eq) goto loc_839FCEDC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x839fca7c
	if (cr6.eq) goto loc_839FCA7C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_839FCA64:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x839fca64
	if (!cr0.eq) goto loc_839FCA64;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// bne cr6,0x839fcedc
	if (!cr6.eq) goto loc_839FCEDC;
loc_839FCA7C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x839fcaa4
	if (cr6.eq) goto loc_839FCAA4;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_839FCA8C:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x839fca8c
	if (!cr0.eq) goto loc_839FCA8C;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// bne cr6,0x839fcedc
	if (!cr6.eq) goto loc_839FCEDC;
loc_839FCAA4:
	// cmplwi cr6,r23,63
	cr6.compare<uint32_t>(ctx.r23.u32, 63, xer);
	// beq cr6,0x839fcab4
	if (cr6.eq) goto loc_839FCAB4;
	// cmplwi cr6,r23,1551
	cr6.compare<uint32_t>(ctx.r23.u32, 1551, xer);
	// bne cr6,0x839fcac4
	if (!cr6.eq) goto loc_839FCAC4;
loc_839FCAB4:
	// cmplwi cr6,r22,63
	cr6.compare<uint32_t>(ctx.r22.u32, 63, xer);
	// beq cr6,0x839fcacc
	if (cr6.eq) goto loc_839FCACC;
	// cmplwi cr6,r22,1551
	cr6.compare<uint32_t>(ctx.r22.u32, 1551, xer);
	// beq cr6,0x839fcacc
	if (cr6.eq) goto loc_839FCACC;
loc_839FCAC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x839fcad0
	goto loc_839FCAD0;
loc_839FCACC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_839FCAD0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x839fcae0
	if (cr6.eq) goto loc_839FCAE0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x839fcae4
	if (!cr6.eq) goto loc_839FCAE4;
loc_839FCAE0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_839FCAE4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839fcb48
	if (cr6.eq) goto loc_839FCB48;
	// mullw r11,r28,r27
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x839FCB00;
	sub_831CDCF0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, xer);
	// bge cr6,0x839fcb10
	if (!cr6.lt) goto loc_839FCB10;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_839FCB10:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x839fcb40
	if (!cr6.gt) goto loc_839FCB40;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
loc_839FCB2C:
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r11,r24
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, temp.u32);
	// bdnz 0x839fcb2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FCB2C;
loc_839FCB40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839fcee4
	goto loc_839FCEE4;
loc_839FCB48:
	// cmplwi cr6,r23,4
	cr6.compare<uint32_t>(ctx.r23.u32, 4, xer);
	// bne cr6,0x839fcb94
	if (!cr6.eq) goto loc_839FCB94;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// ble cr6,0x839fcb40
	if (!cr6.gt) goto loc_839FCB40;
	// stfs f0,4(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// ble cr6,0x839fcb40
	if (!cr6.gt) goto loc_839FCB40;
	// addi r10,r24,8
	ctx.r10.s64 = ctx.r24.s64 + 8;
	// addic. r11,r27,-2
	xer.ca = ctx.r27.u32 > 1;
	ctx.r11.s64 = ctx.r27.s64 + -2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x839fcb40
	if (cr0.eq) goto loc_839FCB40;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_839FCB88:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839fcb88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FCB88;
	// b 0x839fcb40
	goto loc_839FCB40;
loc_839FCB94:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,27692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27692);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f13,-20096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f12,26152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26152);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f11,-6656(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -6656);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f10,-8380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8380);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lfs f9,-27216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27216);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,-23860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23860);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-25156(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25156);
	ctx.f7.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f6,9644(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9644);
	ctx.f6.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f5,-11744(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11744);
	ctx.f5.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x832d5290
	ctx.lr = 0x839FCC34;
	sub_832D5290(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq 0x839fcc50
	if (cr0.eq) goto loc_839FCC50;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x832d5290
	ctx.lr = 0x839FCC48;
	sub_832D5290(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne 0x839fcc5c
	if (!cr0.eq) goto loc_839FCC5C;
loc_839FCC50:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x839fcebc
	goto loc_839FCEBC;
loc_839FCC5C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r25,-4
	ctx.r9.s64 = ctx.r25.s64 + -4;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r8,r26,-4
	ctx.r8.s64 = ctx.r26.s64 + -4;
loc_839FCC6C:
	// and. r7,r29,r23
	ctx.r7.u64 = ctx.r29.u64 & ctx.r23.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x839fcc88
	if (cr0.eq) goto loc_839FCC88;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// beq cr6,0x839fcde8
	if (cr6.eq) goto loc_839FCDE8;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
loc_839FCC88:
	// and. r7,r29,r22
	ctx.r7.u64 = ctx.r29.u64 & ctx.r22.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x839fcca4
	if (cr0.eq) goto loc_839FCCA4;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// beq cr6,0x839fcde8
	if (cr6.eq) goto loc_839FCDE8;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
loc_839FCCA4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x839fcc6c
	if (cr6.lt) goto loc_839FCC6C;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bge cr6,0x839fcce4
	if (!cr6.lt) goto loc_839FCCE4;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lis r9,-15436
	ctx.r9.s64 = -1011613696;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x839fcce4
	if (cr0.eq) goto loc_839FCCE4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_839FCCDC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839fccdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FCCDC;
loc_839FCCE4:
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// bge cr6,0x839fcd10
	if (!cr6.lt) goto loc_839FCD10;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r30,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lis r9,-15436
	ctx.r9.s64 = -1011613696;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x839fcd10
	if (cr0.eq) goto loc_839FCD10;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_839FCD08:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839fcd08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FCD08;
loc_839FCD10:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839fc508
	ctx.lr = 0x839FCD28;
	sub_839FC508(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x839fcebc
	if (cr0.lt) goto loc_839FCEBC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f11,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r6,11
	cr6.compare<uint32_t>(ctx.r6.u32, 11, xer);
	// bge cr6,0x839fcd60
	if (!cr6.lt) goto loc_839FCD60;
loc_839FCD54:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839fce84
	if (!cr6.lt) goto loc_839FCE84;
loc_839FCD60:
	// and. r11,r7,r23
	ctx.r11.u64 = ctx.r7.u64 & ctx.r23.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fcd7c
	if (cr0.eq) goto loc_839FCD7C;
	// and. r10,r7,r22
	ctx.r10.u64 = ctx.r7.u64 & ctx.r22.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x839fcd7c
	if (cr0.eq) goto loc_839FCD7C;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f11,r10,r24
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, temp.u32);
loc_839FCD7C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fcd9c
	if (!cr6.eq) goto loc_839FCD9C;
	// and. r10,r7,r22
	ctx.r10.u64 = ctx.r7.u64 & ctx.r22.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x839fcd94
	if (cr0.eq) goto loc_839FCD94;
	// rlwinm. r10,r7,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x839fceb4
	if (cr0.eq) goto loc_839FCEB4;
loc_839FCD94:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fce84
	if (cr6.eq) goto loc_839FCE84;
loc_839FCD9C:
	// and. r11,r7,r22
	ctx.r11.u64 = ctx.r7.u64 & ctx.r22.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x839fce84
	if (!cr0.eq) goto loc_839FCE84;
	// rlwinm. r11,r7,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fceb4
	if (cr0.eq) goto loc_839FCEB4;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x839fcdf4
	if (!cr6.eq) goto loc_839FCDF4;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x839fce84
	if (!cr6.gt) goto loc_839FCE84;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
loc_839FCDDC:
	// stfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x839fcddc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FCDDC;
	// b 0x839fce84
	goto loc_839FCE84;
loc_839FCDE8:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x839fcebc
	goto loc_839FCEBC;
loc_839FCDF4:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// ble cr6,0x839fce84
	if (!cr6.gt) goto loc_839FCE84;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_839FCE20:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x839fce78
	if (!cr6.gt) goto loc_839FCE78;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
loc_839FCE48:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x839fce60
	if (!cr6.eq) goto loc_839FCE60;
	// fdivs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// b 0x839fce6c
	goto loc_839FCE6C;
loc_839FCE60:
	// lfsx f10,r10,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fdivs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
loc_839FCE6C:
	// stfsx f10,r10,r24
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x839fce48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FCE48;
loc_839FCE78:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// bne 0x839fce20
	if (!cr0.eq) goto loc_839FCE20;
loc_839FCE84:
	// and. r11,r7,r23
	ctx.r11.u64 = ctx.r7.u64 & ctx.r23.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fce90
	if (cr0.eq) goto loc_839FCE90;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_839FCE90:
	// and. r11,r7,r22
	ctx.r11.u64 = ctx.r7.u64 & ctx.r22.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fce9c
	if (cr0.eq) goto loc_839FCE9C;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
loc_839FCE9C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r6,11
	cr6.compare<uint32_t>(ctx.r6.u32, 11, xer);
	// blt cr6,0x839fcd54
	if (cr6.lt) goto loc_839FCD54;
	// b 0x839fcebc
	goto loc_839FCEBC;
loc_839FCEB4:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16385
	ctx.r31.u64 = ctx.r31.u64 | 16385;
loc_839FCEBC:
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832d53c8
	ctx.lr = 0x839FCEC8;
	sub_832D53C8(ctx, base);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832d53c8
	ctx.lr = 0x839FCED4;
	sub_832D53C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x839fcee4
	goto loc_839FCEE4;
loc_839FCEDC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_839FCEE4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FCEF0"))) PPC_WEAK_FUNC(sub_839FCEF0);
PPC_FUNC_IMPL(__imp__sub_839FCEF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FCEF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,357
	cr6.compare<uint32_t>(ctx.r11.u32, 357, xer);
	// beq cr6,0x839fcf24
	if (cr6.eq) goto loc_839FCF24;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x839fcf24
	if (cr6.eq) goto loc_839FCF24;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// addi r28,r11,18
	ctx.r28.s64 = ctx.r11.s64 + 18;
	// cmplwi cr6,r28,40
	cr6.compare<uint32_t>(ctx.r28.u32, 40, xer);
	// bge cr6,0x839fcf28
	if (!cr6.lt) goto loc_839FCF28;
loc_839FCF24:
	// li r28,40
	ctx.r28.s64 = 40;
loc_839FCF28:
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d5290
	ctx.lr = 0x839FCF34;
	sub_832D5290(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x839fd000
	if (cr0.eq) goto loc_839FD000;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,357
	cr6.compare<uint32_t>(ctx.r11.u32, 357, xer);
	// bne cr6,0x839fcf50
	if (!cr6.eq) goto loc_839FCF50;
	// li r30,32
	ctx.r30.s64 = 32;
	// b 0x839fcf68
	goto loc_839FCF68;
loc_839FCF50:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839fcf60
	if (!cr6.eq) goto loc_839FCF60;
	// li r30,16
	ctx.r30.s64 = 16;
	// b 0x839fcf68
	goto loc_839FCF68;
loc_839FCF60:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r30,r11,18
	ctx.r30.s64 = ctx.r11.s64 + 18;
loc_839FCF68:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x839FCF78;
	sub_831CE980(ctx, base);
	// subf r5,r30,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r30.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x839FCF88;
	sub_831CDCF0(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// beq cr6,0x839fd000
	if (cr6.eq) goto loc_839FD000;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,18(r29)
	PPC_STORE_U16(ctx.r29.u32 + 18, ctx.r11.u16);
	// bl 0x839fbfd0
	ctx.lr = 0x839FCFA8;
	sub_839FBFD0(ctx, base);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// addi r9,r11,-27280
	ctx.r9.s64 = ctx.r11.s64 + -27280;
	// li r8,-2
	ctx.r8.s64 = -2;
	// sth r10,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r10.u16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// sth r8,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r8.u16);
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// lwz r11,-27280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27280);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x831ce980
	ctx.lr = 0x839FD000;
	sub_831CE980(ctx, base);
loc_839FD000:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FD00C"))) PPC_WEAK_FUNC(sub_839FD00C);
PPC_FUNC_IMPL(__imp__sub_839FD00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FD010"))) PPC_WEAK_FUNC(sub_839FD010);
PPC_FUNC_IMPL(__imp__sub_839FD010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FD018;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x839fc2f0
	ctx.lr = 0x839FD030;
	sub_839FC2F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x839fd044
	if (!cr0.eq) goto loc_839FD044;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// b 0x839fd190
	goto loc_839FD190;
loc_839FD044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fbc88
	ctx.lr = 0x839FD04C;
	sub_839FBC88(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r10,-30569
	ctx.r10.s64 = -2003369984;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ori r28,r10,1
	ctx.r28.u64 = ctx.r10.u64 | 1;
	// beq cr6,0x839fd0c8
	if (cr6.eq) goto loc_839FD0C8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x839fd0c8
	if (cr6.eq) goto loc_839FD0C8;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bne cr6,0x839fd0c0
	if (!cr6.eq) goto loc_839FD0C0;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-27280
	ctx.r9.s64 = ctx.r11.s64 + -27280;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r11,-27280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27280);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x831ce980
	ctx.lr = 0x839FD0BC;
	sub_831CE980(ctx, base);
	// b 0x839fd0c8
	goto loc_839FD0C8;
loc_839FD0C0:
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_839FD0C8:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x839fd0e8
	if (!cr6.lt) goto loc_839FD0E8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x839fd104
	if (cr6.eq) goto loc_839FD104;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x839fd100
	goto loc_839FD100;
loc_839FD0E8:
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// ble cr6,0x839fd104
	if (!cr6.gt) goto loc_839FD104;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x839fd104
	if (cr6.eq) goto loc_839FD104;
	// li r11,64
	ctx.r11.s64 = 64;
loc_839FD100:
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
loc_839FD104:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1000
	cr6.compare<uint32_t>(ctx.r11.u32, 1000, xer);
	// bge cr6,0x839fd128
	if (!cr6.lt) goto loc_839FD128;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x839fd148
	if (cr6.eq) goto loc_839FD148;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x839fd148
	goto loc_839FD148;
loc_839FD128:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r10,r10,3392
	ctx.r10.u64 = ctx.r10.u64 | 3392;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x839fd148
	if (!cr6.gt) goto loc_839FD148;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x839fd148
	if (cr6.eq) goto loc_839FD148;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_839FD148:
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x839fd168
	if (cr6.eq) goto loc_839FD168;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x839fd168
	if (cr6.eq) goto loc_839FD168;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
loc_839FD168:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,65534
	cr6.compare<uint32_t>(ctx.r10.u32, 65534, xer);
	// bne cr6,0x839fd190
	if (!cr6.eq) goto loc_839FD190;
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x839fd190
	if (cr6.eq) goto loc_839FD190;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x839fd190
	if (cr6.eq) goto loc_839FD190;
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
loc_839FD190:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FD19C"))) PPC_WEAK_FUNC(sub_839FD19C);
PPC_FUNC_IMPL(__imp__sub_839FD19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FD1A0"))) PPC_WEAK_FUNC(sub_839FD1A0);
PPC_FUNC_IMPL(__imp__sub_839FD1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-30569
	ctx.r9.s64 = -2003369984;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fd1e4
	if (cr0.eq) goto loc_839FD1E4;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r8,2(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x839fd1e4
	if (cr6.eq) goto loc_839FD1E4;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x839fd1e4
	if (cr6.eq) goto loc_839FD1E4;
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
loc_839FD1E4:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fd214
	if (cr0.eq) goto loc_839FD214;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x839fd214
	if (cr6.eq) goto loc_839FD214;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x839fd214
	if (cr6.eq) goto loc_839FD214;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
loc_839FD214:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// lhz r10,14(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 14);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x839fd248
	if (cr6.eq) goto loc_839FD248;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x839fd248
	if (cr6.eq) goto loc_839FD248;
	// sth r11,14(r5)
	PPC_STORE_U16(ctx.r5.u32 + 14, ctx.r11.u16);
loc_839FD248:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// bne cr6,0x839fd280
	if (!cr6.eq) goto loc_839FD280;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bne cr6,0x839fd268
	if (!cr6.eq) goto loc_839FD268;
	// lhz r11,18(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// b 0x839fd28c
	goto loc_839FD28C;
loc_839FD268:
	// lhz r11,18(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// lhz r10,14(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 14);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_839FD280:
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
loc_839FD28C:
	// lhz r10,18(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 18);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// beqlr cr6
	if (cr6.eq) return;
	// sth r11,18(r5)
	PPC_STORE_U16(ctx.r5.u32 + 18, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FD2B0"))) PPC_WEAK_FUNC(sub_839FD2B0);
PPC_FUNC_IMPL(__imp__sub_839FD2B0) {
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
	ctx.lr = 0x839FD2B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FD2E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x839fd2f8
	if (!cr0.lt) goto loc_839FD2F8;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x839fd3a0
	goto loc_839FD3A0;
loc_839FD2F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839fc2f0
	ctx.lr = 0x839FD300;
	sub_839FC2F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x839fd310
	if (!cr0.eq) goto loc_839FD310;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
loc_839FD310:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x839fd3a0
	if (cr6.lt) goto loc_839FD3A0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x839fd344
	if (cr6.eq) goto loc_839FD344;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839fcef0
	ctx.lr = 0x839FD328;
	sub_839FCEF0(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_839FD344:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x839fd3ac
	if (cr6.lt) goto loc_839FD3AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FD368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x839fd3ac
	if (cr0.lt) goto loc_839FD3AC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839fd1a0
	ctx.lr = 0x839FD384;
	sub_839FD1A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x839fd3ac
	if (cr0.lt) goto loc_839FD3AC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x839fd3a0
	if (cr6.eq) goto loc_839FD3A0;
loc_839FD394:
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d53c8
	ctx.lr = 0x839FD3A0;
	sub_832D53C8(ctx, base);
loc_839FD3A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839FD3AC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x839fd3a0
	if (cr6.eq) goto loc_839FD3A0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x839fd3a0
	if (cr6.eq) goto loc_839FD3A0;
	// lis r11,-30569
	ctx.r11.s64 = -2003369984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bne cr6,0x839fd394
	if (!cr6.eq) goto loc_839FD394;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// b 0x839fd3a0
	goto loc_839FD3A0;
}

__attribute__((alias("__imp__sub_839FD3D4"))) PPC_WEAK_FUNC(sub_839FD3D4);
PPC_FUNC_IMPL(__imp__sub_839FD3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FD3D8"))) PPC_WEAK_FUNC(sub_839FD3D8);
PPC_FUNC_IMPL(__imp__sub_839FD3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x839FD3E0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x839fd430
	if (cr6.eq) goto loc_839FD430;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// subf r27,r7,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r7.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_839FD404:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fd424
	if (cr0.eq) goto loc_839FD424;
	// lwzx r3,r27,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// bl 0x839fbc88
	ctx.lr = 0x839FD41C;
	sub_839FBC88(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x839fbc88
	ctx.lr = 0x839FD424;
	sub_839FBC88(ctx, base);
loc_839FD424:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x839fd404
	if (!cr0.eq) goto loc_839FD404;
loc_839FD430:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r21,1
	ctx.r21.s64 = 1;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x839fd4b4
	if (!cr6.eq) goto loc_839FD4B4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r29,2(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r27,2(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// mullw r11,r27,r29
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r29.s32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x832d5290
	ctx.lr = 0x839FD470;
	sub_832D5290(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// bne 0x839fd4c4
	if (!cr0.eq) goto loc_839FD4C4;
	// lis r22,-32761
	ctx.r22.s64 = -2147024896;
	// ori r22,r22,14
	ctx.r22.u64 = ctx.r22.u64 | 14;
loc_839FD484:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fd49c
	if (cr6.eq) goto loc_839FD49C;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// bl 0x832d53c8
	ctx.lr = 0x839FD498;
	sub_832D53C8(ctx, base);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
loc_839FD49C:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// blt cr6,0x839fd4b8
	if (cr6.lt) goto loc_839FD4B8;
loc_839FD4B4:
	// stw r21,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r21.u32);
loc_839FD4B8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839FD4C4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lhz r24,14(r11)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,65534
	cr6.compare<uint32_t>(ctx.r10.u32, 65534, xer);
	// bne cr6,0x839fd4e8
	if (!cr6.eq) goto loc_839FD4E8;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lhz r23,18(r11)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
loc_839FD4E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,65534
	cr6.compare<uint32_t>(ctx.r8.u32, 65534, xer);
	// bne cr6,0x839fd500
	if (!cr6.eq) goto loc_839FD500;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_839FD500:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r8,r11,-25120
	ctx.r8.s64 = ctx.r11.s64 + -25120;
	// bne cr6,0x839fd534
	if (!cr6.eq) goto loc_839FD534;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x839fd534
	if (cr6.lt) goto loc_839FD534;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x839fd534
	if (cr6.gt) goto loc_839FD534;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_839FD534:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839fd560
	if (!cr6.eq) goto loc_839FD560;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x839fd560
	if (cr6.lt) goto loc_839FD560;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x839fd560
	if (cr6.gt) goto loc_839FD560;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_839FD560:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839fca20
	ctx.lr = 0x839FD574;
	sub_839FCA20(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// blt 0x839fd484
	if (cr0.lt) goto loc_839FD484;
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bne cr6,0x839fd60c
	if (!cr6.eq) goto loc_839FD60C;
	// li r30,7
	ctx.r30.s64 = 7;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x839fd60c
	if (cr6.eq) goto loc_839FD60C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_839FD5A8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x839fd5fc
	if (cr6.eq) goto loc_839FD5FC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
loc_839FD5BC:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x839fd5e0
	if (cr6.eq) goto loc_839FD5E0;
	// lfsx f13,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x839fd5f4
	if (cr6.eq) goto loc_839FD5F4;
	// rlwinm r30,r30,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x839fd5f4
	goto loc_839FD5F4;
loc_839FD5E0:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x839fd5f4
	if (cr6.eq) goto loc_839FD5F4;
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_839FD5F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x839fd5bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839FD5BC;
loc_839FD5FC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// blt cr6,0x839fd5a8
	if (cr6.lt) goto loc_839FD5A8;
loc_839FD60C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fd628
	if (cr0.eq) goto loc_839FD628;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832d53c8
	ctx.lr = 0x839FD620;
	sub_832D53C8(ctx, base);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r21,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
loc_839FD628:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x839fbc88
	ctx.lr = 0x839FD630;
	sub_839FBC88(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x839fd6fc
	if (!cr6.eq) goto loc_839FD6FC;
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x839fd698
	if (!cr6.eq) goto loc_839FD698;
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x839fd670
	if (!cr6.eq) goto loc_839FD670;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x83a0a570
	ctx.lr = 0x839FD668;
	sub_83A0A570(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x839fd708
	goto loc_839FD708;
loc_839FD670:
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x839fd688
	if (!cr6.eq) goto loc_839FD688;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x83a0a570
	ctx.lr = 0x839FD680;
	sub_83A0A570(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x839fd708
	goto loc_839FD708;
loc_839FD688:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83a0a570
	ctx.lr = 0x839FD690;
	sub_83A0A570(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x839fd708
	goto loc_839FD708;
loc_839FD698:
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x839fd6cc
	if (!cr6.eq) goto loc_839FD6CC;
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x839fd6bc
	if (!cr6.eq) goto loc_839FD6BC;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83a0a570
	ctx.lr = 0x839FD6B4;
	sub_83A0A570(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x839fd708
	goto loc_839FD708;
loc_839FD6BC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83a0a570
	ctx.lr = 0x839FD6C4;
	sub_83A0A570(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x839fd708
	goto loc_839FD708;
loc_839FD6CC:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bne cr6,0x839fd6e8
	if (!cr6.eq) goto loc_839FD6E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a0a570
	ctx.lr = 0x839FD6DC;
	sub_83A0A570(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r21,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
	// b 0x839fd4b4
	goto loc_839FD4B4;
loc_839FD6E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a0a570
	ctx.lr = 0x839FD6F0;
	sub_83A0A570(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// b 0x839fd4b4
	goto loc_839FD4B4;
loc_839FD6FC:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x83a0a570
	ctx.lr = 0x839FD704;
	sub_83A0A570(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
loc_839FD708:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x839fd4b4
	goto loc_839FD4B4;
}

__attribute__((alias("__imp__sub_839FD714"))) PPC_WEAK_FUNC(sub_839FD714);
PPC_FUNC_IMPL(__imp__sub_839FD714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FD718"))) PPC_WEAK_FUNC(sub_839FD718);
PPC_FUNC_IMPL(__imp__sub_839FD718) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FD744"))) PPC_WEAK_FUNC(sub_839FD744);
PPC_FUNC_IMPL(__imp__sub_839FD744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FD748"))) PPC_WEAK_FUNC(sub_839FD748);
PPC_FUNC_IMPL(__imp__sub_839FD748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FD750;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,9136
	ctx.r28.s64 = ctx.r11.s64 + 9136;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839f8bc0
	ctx.lr = 0x839FD768;
	sub_839F8BC0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839fd77c
	if (!cr6.eq) goto loc_839FD77C;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
	// b 0x839fd7f4
	goto loc_839FD7F4;
loc_839FD77C:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,388
	ctx.r4.s64 = 388;
	// bl 0x839f8cd8
	ctx.lr = 0x839FD794;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fd7a8
	if (cr0.eq) goto loc_839FD7A8;
	// bl 0x83a0b920
	ctx.lr = 0x839FD7A0;
	sub_83A0B920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x839fd7ac
	goto loc_839FD7AC;
loc_839FD7A8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839FD7AC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839fd7c0
	if (!cr6.eq) goto loc_839FD7C0;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x839fd7f4
	goto loc_839FD7F4;
loc_839FD7C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a0a7a0
	ctx.lr = 0x839FD7C8;
	sub_83A0A7A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x839fd7d8
	if (cr0.lt) goto loc_839FD7D8;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// b 0x839fd7f4
	goto loc_839FD7F4;
loc_839FD7D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FD7F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a39b78
	ctx.lr = 0x839FD7F4;
	sub_83A39B78(ctx, base);
loc_839FD7F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839f8c58
	ctx.lr = 0x839FD7FC;
	sub_839F8C58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FD808"))) PPC_WEAK_FUNC(sub_839FD808);
PPC_FUNC_IMPL(__imp__sub_839FD808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FD810;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FD830;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt 0x839fd850
	if (cr0.lt) goto loc_839FD850;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FD850;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839FD850:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FD85C"))) PPC_WEAK_FUNC(sub_839FD85C);
PPC_FUNC_IMPL(__imp__sub_839FD85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FD860"))) PPC_WEAK_FUNC(sub_839FD860);
PPC_FUNC_IMPL(__imp__sub_839FD860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,22125
	cr6.compare<uint32_t>(ctx.r4.u32, 22125, xer);
	// bne cr6,0x839fd870
	if (!cr6.eq) goto loc_839FD870;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_839FD870:
	// cmplwi cr6,r4,43875
	cr6.compare<uint32_t>(ctx.r4.u32, 43875, xer);
	// bne cr6,0x839fd880
	if (!cr6.eq) goto loc_839FD880;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_839FD880:
	// cmplwi cr6,r4,48000
	cr6.compare<uint32_t>(ctx.r4.u32, 48000, xer);
	// bne cr6,0x839fd890
	if (!cr6.eq) goto loc_839FD890;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_839FD890:
	// cmplwi cr6,r4,11250
	cr6.compare<uint32_t>(ctx.r4.u32, 11250, xer);
	// bne cr6,0x839fd8a0
	if (!cr6.eq) goto loc_839FD8A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_839FD8A0:
	// cmplwi cr6,r4,32250
	cr6.compare<uint32_t>(ctx.r4.u32, 32250, xer);
	// bne cr6,0x839fd8b0
	if (!cr6.eq) goto loc_839FD8B0;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_839FD8B0:
	// cmplwi cr6,r4,24000
	cr6.compare<uint32_t>(ctx.r4.u32, 24000, xer);
	// bne cr6,0x839fd8c0
	if (!cr6.eq) goto loc_839FD8C0;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_839FD8C0:
	// cmplwi cr6,r4,16125
	cr6.compare<uint32_t>(ctx.r4.u32, 16125, xer);
	// bne cr6,0x839fd8d0
	if (!cr6.eq) goto loc_839FD8D0;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_839FD8D0:
	// addi r11,r4,-8250
	ctx.r11.s64 = ctx.r4.s64 + -8250;
	// li r10,8
	ctx.r10.s64 = 8;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FD8E8"))) PPC_WEAK_FUNC(sub_839FD8E8);
PPC_FUNC_IMPL(__imp__sub_839FD8E8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83a03a58
	ctx.lr = 0x839FD930;
	sub_83A03A58(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FD95C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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

__attribute__((alias("__imp__sub_839FD978"))) PPC_WEAK_FUNC(sub_839FD978);
PPC_FUNC_IMPL(__imp__sub_839FD978) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// ori r31,r8,65535
	ctx.r31.u64 = ctx.r8.u64 | 65535;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x839fd9e4
	if (!cr6.eq) goto loc_839FD9E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x839fd8e8
	ctx.lr = 0x839FD9D0;
	sub_839FD8E8(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// bne cr6,0x839fd9e0
	if (!cr6.eq) goto loc_839FD9E0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x839fd9e4
	goto loc_839FD9E4;
loc_839FD9E0:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_839FD9E4:
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

__attribute__((alias("__imp__sub_839FDA00"))) PPC_WEAK_FUNC(sub_839FDA00);
PPC_FUNC_IMPL(__imp__sub_839FDA00) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839f9a50
	ctx.lr = 0x839FDA20;
	sub_839F9A50(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fda64
	if (cr0.eq) goto loc_839FDA64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fda50
	if (cr6.eq) goto loc_839FDA50;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x839fda54
	goto loc_839FDA54;
loc_839FDA50:
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
loc_839FDA54:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_839FDA64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FDA7C"))) PPC_WEAK_FUNC(sub_839FDA7C);
PPC_FUNC_IMPL(__imp__sub_839FDA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FDA80"))) PPC_WEAK_FUNC(sub_839FDA80);
PPC_FUNC_IMPL(__imp__sub_839FDA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FDA88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// li r30,2
	ctx.r30.s64 = 2;
loc_839FDA9C:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// beq cr6,0x839fdac4
	if (cr6.eq) goto loc_839FDAC4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FDAC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839FDAC4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x839fda9c
	if (!cr0.eq) goto loc_839FDA9C;
	// addi r30,r29,20
	ctx.r30.s64 = ctx.r29.s64 + 20;
	// b 0x839fdaf8
	goto loc_839FDAF8;
loc_839FDAD8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FDAF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839FDAF8;
	sub_83A39B78(ctx, base);
loc_839FDAF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a1e790
	ctx.lr = 0x839FDB00;
	sub_83A1E790(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x839fdad8
	if (!cr0.eq) goto loc_839FDAD8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FDB10"))) PPC_WEAK_FUNC(sub_839FDB10);
PPC_FUNC_IMPL(__imp__sub_839FDB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839FDB18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// b 0x839fdb60
	goto loc_839FDB60;
loc_839FDB38:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fdb50
	if (cr6.eq) goto loc_839FDB50;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x839fdb54
	goto loc_839FDB54;
loc_839FDB50:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839FDB54:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839fdc14
	if (cr6.eq) goto loc_839FDC14;
loc_839FDB60:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839fdb38
	if (!cr6.eq) goto loc_839FDB38;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x839f8cd8
	ctx.lr = 0x839FDB84;
	sub_839F8CD8(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// beq 0x839fdba8
	if (cr0.eq) goto loc_839FDBA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x839fdbac
	goto loc_839FDBAC;
loc_839FDBA8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839FDBAC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839fdc14
	if (cr6.eq) goto loc_839FDC14;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839fd8e8
	ctx.lr = 0x839FDBCC;
	sub_839FD8E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, xer);
	// beq cr6,0x839fdc08
	if (cr6.eq) goto loc_839FDC08;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r25,20
	ctx.r3.s64 = ctx.r25.s64 + 20;
	// bl 0x839fda00
	ctx.lr = 0x839FDBE8;
	sub_839FDA00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x839fdc14
	if (!cr0.eq) goto loc_839FDC14;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FDC08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839FDC08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839FDC10;
	sub_83A39B78(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_839FDC14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FDC20"))) PPC_WEAK_FUNC(sub_839FDC20);
PPC_FUNC_IMPL(__imp__sub_839FDC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FDC28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fdcd0
	if (cr6.eq) goto loc_839FDCD0;
	// li r29,8
	ctx.r29.s64 = 8;
loc_839FDC40:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839FDC44:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 * 240;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-1880
	ctx.r4.s64 = ctx.r11.s64 + -1880;
	// bl 0x839fda80
	ctx.lr = 0x839FDC5C;
	sub_839FDA80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x839fdc44
	if (cr6.lt) goto loc_839FDC44;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r29,64
	cr6.compare<uint32_t>(ctx.r29.u32, 64, xer);
	// ble cr6,0x839fdc40
	if (!cr6.gt) goto loc_839FDC40;
	// addi r28,r30,15400
	ctx.r28.s64 = ctx.r30.s64 + 15400;
	// b 0x839fdca4
	goto loc_839FDCA4;
loc_839FDC7C:
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x839fda80
	ctx.lr = 0x839FDC8C;
	sub_839FDA80(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839fdca4
	if (cr6.eq) goto loc_839FDCA4;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x839fa3f0
	ctx.lr = 0x839FDC9C;
	sub_839FA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839FDCA4;
	sub_83A39B78(ctx, base);
loc_839FDCA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a0af38
	ctx.lr = 0x839FDCAC;
	sub_83A0AF38(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x839fdc7c
	if (!cr0.eq) goto loc_839FDC7C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FDCC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_839FDCD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FDCD8"))) PPC_WEAK_FUNC(sub_839FDCD8);
PPC_FUNC_IMPL(__imp__sub_839FDCD8) {
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
	ctx.lr = 0x839FDCE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FDD10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x839fd860
	ctx.lr = 0x839FDD24;
	sub_839FD860(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x839fdd60
	if (cr6.eq) goto loc_839FDD60;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// bgt cr6,0x839fdd60
	if (cr6.gt) goto loc_839FDD60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a03838
	ctx.lr = 0x839FDD40;
	sub_83A03838(ctx, base);
	// cmplw cr6,r26,r3
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, xer);
	// bne cr6,0x839fdd60
	if (!cr6.eq) goto loc_839FDD60;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 * 240;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r28,r11,-1880
	ctx.r28.s64 = ctx.r11.s64 + -1880;
	// b 0x839fde34
	goto loc_839FDE34;
loc_839FDD60:
	// lwz r10,15424(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15424);
	// b 0x839fdda8
	goto loc_839FDDA8;
loc_839FDD68:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839fdd80
	if (cr6.eq) goto loc_839FDD80;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x839fdd84
	goto loc_839FDD84;
loc_839FDD80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839FDD84:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bne cr6,0x839fdda8
	if (!cr6.eq) goto loc_839FDDA8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, xer);
	// bne cr6,0x839fdda8
	if (!cr6.eq) goto loc_839FDDA8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r27
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, xer);
	// beq cr6,0x839fddb4
	if (cr6.eq) goto loc_839FDDB4;
loc_839FDDA8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839fdd68
	if (!cr6.eq) goto loc_839FDD68;
	// b 0x839fddbc
	goto loc_839FDDBC;
loc_839FDDB4:
	// addic. r28,r11,12
	xer.ca = ctx.r11.u32 > 4294967283;
	ctx.r28.s64 = ctx.r11.s64 + 12;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x839fde3c
	if (!cr0.eq) goto loc_839FDE3C;
loc_839FDDBC:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// li r4,252
	ctx.r4.s64 = 252;
	// bl 0x839f8cd8
	ctx.lr = 0x839FDDD8;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x839fddf8
	if (cr0.eq) goto loc_839FDDF8;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x839fb008
	ctx.lr = 0x839FDDF4;
	sub_839FB008(ctx, base);
	// b 0x839fddfc
	goto loc_839FDDFC;
loc_839FDDF8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839FDDFC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839fde8c
	if (cr6.eq) goto loc_839FDE8C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,15400
	ctx.r3.s64 = ctx.r30.s64 + 15400;
	// bl 0x839f9b40
	ctx.lr = 0x839FDE10;
	sub_839F9B40(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fde20
	if (cr0.eq) goto loc_839FDE20;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// b 0x839fde34
	goto loc_839FDE34;
loc_839FDE20:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x839fa3f0
	ctx.lr = 0x839FDE2C;
	sub_839FA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839FDE34;
	sub_83A39B78(ctx, base);
loc_839FDE34:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x839fde8c
	if (cr6.eq) goto loc_839FDE8C;
loc_839FDE3C:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x839fde64
	if (!cr6.eq) goto loc_839FDE64;
	// bl 0x839fd978
	ctx.lr = 0x839FDE5C;
	sub_839FD978(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x839fde8c
	goto loc_839FDE8C;
loc_839FDE64:
	// bl 0x839fdb10
	ctx.lr = 0x839FDE68;
	sub_839FDB10(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x839fde8c
	if (cr0.eq) goto loc_839FDE8C;
loc_839FDE70:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r25
	ea = ctx.r25.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r25
	ea = ctx.r25.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x839fde70
	if (!cr0.eq) goto loc_839FDE70;
loc_839FDE8C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FDEA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FDEAC"))) PPC_WEAK_FUNC(sub_839FDEAC);
PPC_FUNC_IMPL(__imp__sub_839FDEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FDEB0"))) PPC_WEAK_FUNC(sub_839FDEB0);
PPC_FUNC_IMPL(__imp__sub_839FDEB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FDEB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,9136
	ctx.r30.s64 = ctx.r11.s64 + 9136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f8bc0
	ctx.lr = 0x839FDED0;
	sub_839F8BC0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839fdee4
	if (!cr6.eq) goto loc_839FDEE4;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x839fdf20
	goto loc_839FDF20;
loc_839FDEE4:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x839f8cd8
	ctx.lr = 0x839FDEFC;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fdf0c
	if (cr0.eq) goto loc_839FDF0C;
	// bl 0x83a0c608
	ctx.lr = 0x839FDF08;
	sub_83A0C608(ctx, base);
	// b 0x839fdf10
	goto loc_839FDF10;
loc_839FDF0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839FDF10:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fdf34
	if (cr6.eq) goto loc_839FDF34;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_839FDF20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f8c58
	ctx.lr = 0x839FDF28;
	sub_839F8C58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839FDF34:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x839fdf20
	goto loc_839FDF20;
}

__attribute__((alias("__imp__sub_839FDF40"))) PPC_WEAK_FUNC(sub_839FDF40);
PPC_FUNC_IMPL(__imp__sub_839FDF40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FDF48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,9136
	ctx.r30.s64 = ctx.r11.s64 + 9136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f8bc0
	ctx.lr = 0x839FDF60;
	sub_839F8BC0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839fdf74
	if (!cr6.eq) goto loc_839FDF74;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x839fdfb0
	goto loc_839FDFB0;
loc_839FDF74:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x839f8cd8
	ctx.lr = 0x839FDF8C;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fdf9c
	if (cr0.eq) goto loc_839FDF9C;
	// bl 0x83a0cc68
	ctx.lr = 0x839FDF98;
	sub_83A0CC68(ctx, base);
	// b 0x839fdfa0
	goto loc_839FDFA0;
loc_839FDF9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839FDFA0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fdfc4
	if (cr6.eq) goto loc_839FDFC4;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_839FDFB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f8c58
	ctx.lr = 0x839FDFB8;
	sub_839F8C58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839FDFC4:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x839fdfb0
	goto loc_839FDFB0;
}

__attribute__((alias("__imp__sub_839FDFD0"))) PPC_WEAK_FUNC(sub_839FDFD0);
PPC_FUNC_IMPL(__imp__sub_839FDFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FDFD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,9136
	ctx.r30.s64 = ctx.r11.s64 + 9136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f8bc0
	ctx.lr = 0x839FDFF0;
	sub_839F8BC0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839fe004
	if (!cr6.eq) goto loc_839FE004;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x839fe040
	goto loc_839FE040;
loc_839FE004:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x839f8cd8
	ctx.lr = 0x839FE01C;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fe02c
	if (cr0.eq) goto loc_839FE02C;
	// bl 0x83a0d178
	ctx.lr = 0x839FE028;
	sub_83A0D178(ctx, base);
	// b 0x839fe030
	goto loc_839FE030;
loc_839FE02C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839FE030:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fe054
	if (cr6.eq) goto loc_839FE054;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_839FE040:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f8c58
	ctx.lr = 0x839FE048;
	sub_839F8C58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839FE054:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x839fe040
	goto loc_839FE040;
}

__attribute__((alias("__imp__sub_839FE060"))) PPC_WEAK_FUNC(sub_839FE060);
PPC_FUNC_IMPL(__imp__sub_839FE060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FE068;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,9136
	ctx.r30.s64 = ctx.r11.s64 + 9136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f8bc0
	ctx.lr = 0x839FE080;
	sub_839F8BC0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839fe094
	if (!cr6.eq) goto loc_839FE094;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x839fe0d0
	goto loc_839FE0D0;
loc_839FE094:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r4,272
	ctx.r4.s64 = 272;
	// bl 0x839f8cd8
	ctx.lr = 0x839FE0AC;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fe0bc
	if (cr0.eq) goto loc_839FE0BC;
	// bl 0x83a0eb30
	ctx.lr = 0x839FE0B8;
	sub_83A0EB30(ctx, base);
	// b 0x839fe0c0
	goto loc_839FE0C0;
loc_839FE0BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839FE0C0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fe0e4
	if (cr6.eq) goto loc_839FE0E4;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_839FE0D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f8c58
	ctx.lr = 0x839FE0D8;
	sub_839F8C58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839FE0E4:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x839fe0d0
	goto loc_839FE0D0;
}

__attribute__((alias("__imp__sub_839FE0F0"))) PPC_WEAK_FUNC(sub_839FE0F0);
PPC_FUNC_IMPL(__imp__sub_839FE0F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FE0F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,9136
	ctx.r30.s64 = ctx.r11.s64 + 9136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f8bc0
	ctx.lr = 0x839FE110;
	sub_839F8BC0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839fe124
	if (!cr6.eq) goto loc_839FE124;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x839fe160
	goto loc_839FE160;
loc_839FE124:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x839f8cd8
	ctx.lr = 0x839FE13C;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fe14c
	if (cr0.eq) goto loc_839FE14C;
	// bl 0x83a0f7d8
	ctx.lr = 0x839FE148;
	sub_83A0F7D8(ctx, base);
	// b 0x839fe150
	goto loc_839FE150;
loc_839FE14C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839FE150:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fe174
	if (cr6.eq) goto loc_839FE174;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_839FE160:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839f8c58
	ctx.lr = 0x839FE168;
	sub_839F8C58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839FE174:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x839fe160
	goto loc_839FE160;
}

__attribute__((alias("__imp__sub_839FE180"))) PPC_WEAK_FUNC(sub_839FE180);
PPC_FUNC_IMPL(__imp__sub_839FE180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839FE1A4"))) PPC_WEAK_FUNC(sub_839FE1A4);
PPC_FUNC_IMPL(__imp__sub_839FE1A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FE1A8"))) PPC_WEAK_FUNC(sub_839FE1A8);
PPC_FUNC_IMPL(__imp__sub_839FE1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839FE1C8"))) PPC_WEAK_FUNC(sub_839FE1C8);
PPC_FUNC_IMPL(__imp__sub_839FE1C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FE1CC"))) PPC_WEAK_FUNC(sub_839FE1CC);
PPC_FUNC_IMPL(__imp__sub_839FE1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE1D0"))) PPC_WEAK_FUNC(sub_839FE1D0);
PPC_FUNC_IMPL(__imp__sub_839FE1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839FE1F0"))) PPC_WEAK_FUNC(sub_839FE1F0);
PPC_FUNC_IMPL(__imp__sub_839FE1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FE1F4"))) PPC_WEAK_FUNC(sub_839FE1F4);
PPC_FUNC_IMPL(__imp__sub_839FE1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE1F8"))) PPC_WEAK_FUNC(sub_839FE1F8);
PPC_FUNC_IMPL(__imp__sub_839FE1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839FE218"))) PPC_WEAK_FUNC(sub_839FE218);
PPC_FUNC_IMPL(__imp__sub_839FE218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FE21C"))) PPC_WEAK_FUNC(sub_839FE21C);
PPC_FUNC_IMPL(__imp__sub_839FE21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE220"))) PPC_WEAK_FUNC(sub_839FE220);
PPC_FUNC_IMPL(__imp__sub_839FE220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FE238"))) PPC_WEAK_FUNC(sub_839FE238);
PPC_FUNC_IMPL(__imp__sub_839FE238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FE240;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x839fe25c
	if (cr6.eq) goto loc_839FE25C;
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x839fe260
	goto loc_839FE260;
loc_839FE25C:
	// lwz r31,204(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
loc_839FE260:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839fe2ac
	if (cr6.eq) goto loc_839FE2AC;
	// b 0x839fe288
	goto loc_839FE288;
loc_839FE26C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x839FE27C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x839fe294
	if (cr0.eq) goto loc_839FE294;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_839FE288:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839fe26c
	if (!cr6.eq) goto loc_839FE26C;
	// b 0x839fe2b4
	goto loc_839FE2B4;
loc_839FE294:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x839fe2b8
	goto loc_839FE2B8;
loc_839FE29C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x839fe294
	if (cr6.eq) goto loc_839FE294;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_839FE2AC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839fe29c
	if (!cr6.eq) goto loc_839FE29C;
loc_839FE2B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839FE2B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FE2C0"))) PPC_WEAK_FUNC(sub_839FE2C0);
PPC_FUNC_IMPL(__imp__sub_839FE2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fe344
	if (cr6.eq) goto loc_839FE344;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_839FE2D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839fe334
	if (cr6.eq) goto loc_839FE334;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_839FE2E8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfsx f13,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f0,r10,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x839fe2e8
	if (cr6.lt) goto loc_839FE2E8;
loc_839FE334:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x839fe2d8
	if (cr6.lt) goto loc_839FE2D8;
loc_839FE344:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839FE374"))) PPC_WEAK_FUNC(sub_839FE374);
PPC_FUNC_IMPL(__imp__sub_839FE374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE378"))) PPC_WEAK_FUNC(sub_839FE378);
PPC_FUNC_IMPL(__imp__sub_839FE378) {
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
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839fe3c4
	if (cr6.eq) goto loc_839FE3C4;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
loc_839FE3A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416130
	ctx.lr = 0x839FE3B0;
	sub_82416130(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x839fe3a4
	if (!cr0.lt) goto loc_839FE3A4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416128
	ctx.lr = 0x839FE3C0;
	sub_82416128(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_839FE3C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FE3DC"))) PPC_WEAK_FUNC(sub_839FE3DC);
PPC_FUNC_IMPL(__imp__sub_839FE3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE3E0"))) PPC_WEAK_FUNC(sub_839FE3E0);
PPC_FUNC_IMPL(__imp__sub_839FE3E0) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE44C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FE464"))) PPC_WEAK_FUNC(sub_839FE464);
PPC_FUNC_IMPL(__imp__sub_839FE464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE468"))) PPC_WEAK_FUNC(sub_839FE468);
PPC_FUNC_IMPL(__imp__sub_839FE468) {
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
	ctx.lr = 0x839FE470;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE4A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x839fe4f4
	if (cr6.eq) goto loc_839FE4F4;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fe4d0
	if (cr6.eq) goto loc_839FE4D0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x839fe4d4
	goto loc_839FE4D4;
loc_839FE4D0:
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
loc_839FE4D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE4E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x839fe4f4
	if (!cr0.lt) goto loc_839FE4F4;
	// stfs f30,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
loc_839FE4F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FE51C"))) PPC_WEAK_FUNC(sub_839FE51C);
PPC_FUNC_IMPL(__imp__sub_839FE51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE520"))) PPC_WEAK_FUNC(sub_839FE520);
PPC_FUNC_IMPL(__imp__sub_839FE520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839FE528;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE554;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x839fe590
	if (cr0.eq) goto loc_839FE590;
	// add r8,r30,r27
	ctx.r8.u64 = ctx.r30.u64 + ctx.r27.u64;
loc_839FE570:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x839fe590
	if (!cr0.eq) goto loc_839FE590;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x839fe570
	if (!cr6.eq) goto loc_839FE570;
loc_839FE590:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x839fe5e4
	if (cr0.eq) goto loc_839FE5E4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fe5b0
	if (cr6.eq) goto loc_839FE5B0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x839fe5b4
	goto loc_839FE5B4;
loc_839FE5B0:
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
loc_839FE5B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE5CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt 0x839fe5e4
	if (cr0.lt) goto loc_839FE5E4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x839FE5E4;
	sub_831CE980(ctx, base);
loc_839FE5E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE5F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FE604"))) PPC_WEAK_FUNC(sub_839FE604);
PPC_FUNC_IMPL(__imp__sub_839FE604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE608"))) PPC_WEAK_FUNC(sub_839FE608);
PPC_FUNC_IMPL(__imp__sub_839FE608) {
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
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE638;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE650;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x839fe678
	if (cr0.lt) goto loc_839FE678;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x839fe678
	if (!cr6.eq) goto loc_839FE678;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE678;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839FE678:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_839FE6AC"))) PPC_WEAK_FUNC(sub_839FE6AC);
PPC_FUNC_IMPL(__imp__sub_839FE6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE6B0"))) PPC_WEAK_FUNC(sub_839FE6B0);
PPC_FUNC_IMPL(__imp__sub_839FE6B0) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE6DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE6F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE70C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_839FE724"))) PPC_WEAK_FUNC(sub_839FE724);
PPC_FUNC_IMPL(__imp__sub_839FE724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE728"))) PPC_WEAK_FUNC(sub_839FE728);
PPC_FUNC_IMPL(__imp__sub_839FE728) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE75C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE774;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE790;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_839FE7AC"))) PPC_WEAK_FUNC(sub_839FE7AC);
PPC_FUNC_IMPL(__imp__sub_839FE7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE7B0"))) PPC_WEAK_FUNC(sub_839FE7B0);
PPC_FUNC_IMPL(__imp__sub_839FE7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FE7B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE7E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,23280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23280);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x839fe808
	if (cr6.lt) goto loc_839FE808;
	// lfs f12,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x839fe814
	if (!cr6.gt) goto loc_839FE814;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839fe810
	if (!cr6.lt) goto loc_839FE810;
loc_839FE808:
	// stfs f13,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x839fe814
	goto loc_839FE814;
loc_839FE810:
	// stfs f12,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_839FE814:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE838;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE850;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FE85C"))) PPC_WEAK_FUNC(sub_839FE85C);
PPC_FUNC_IMPL(__imp__sub_839FE85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FE860"))) PPC_WEAK_FUNC(sub_839FE860);
PPC_FUNC_IMPL(__imp__sub_839FE860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FE868;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x839f9030
	ctx.lr = 0x839FE87C;
	sub_839F9030(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x839fe8a0
	if (cr0.eq) goto loc_839FE8A0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE8A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839FE8A0:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE8C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x839fe8e0
	if (cr6.eq) goto loc_839FE8E0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE8E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839FE8E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FE8E8"))) PPC_WEAK_FUNC(sub_839FE8E8);
PPC_FUNC_IMPL(__imp__sub_839FE8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FE8F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82415e30
	ctx.lr = 0x839FE908;
	sub_82415E30(ctx, base);
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839fe948
	if (cr6.eq) goto loc_839FE948;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE92C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fe948
	if (cr0.eq) goto loc_839FE948;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FE948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839FE948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FE950"))) PPC_WEAK_FUNC(sub_839FE950);
PPC_FUNC_IMPL(__imp__sub_839FE950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839FE958;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x839feac4
	if (cr6.eq) goto loc_839FEAC4;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839fe98c
	if (cr0.eq) goto loc_839FE98C;
	// lis r30,-30570
	ctx.r30.s64 = -2003435520;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// b 0x839feac4
	goto loc_839FEAC4;
loc_839FE98C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// stw r4,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x83a11928
	ctx.lr = 0x839FE9A4;
	sub_83A11928(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x839feac4
	if (cr0.lt) goto loc_839FEAC4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fe9c4
	if (cr6.eq) goto loc_839FE9C4;
	// bl 0x83a0f918
	ctx.lr = 0x839FE9BC;
	sub_83A0F918(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x839fe9c8
	goto loc_839FE9C8;
loc_839FE9C4:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_839FE9C8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x839feac4
	if (cr6.lt) goto loc_839FEAC4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lis r10,4919
	ctx.r10.s64 = 322371584;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ori r28,r10,61441
	ctx.r28.u64 = ctx.r10.u64 | 61441;
	// beq 0x839fea98
	if (cr0.eq) goto loc_839FEA98;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r31,172
	ctx.r29.s64 = ctx.r31.s64 + 172;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FEA04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x839f91d8
	ctx.lr = 0x839FEA10;
	sub_839F91D8(ctx, base);
	// stw r27,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x839fdfd0
	ctx.lr = 0x839FEA20;
	sub_839FDFD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x839feac4
	if (cr0.lt) goto loc_839FEAC4;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r8,32
	ctx.r8.s64 = 32;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x83a10880
	ctx.lr = 0x839FEA4C;
	sub_83A10880(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FEA68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x839feac4
	if (cr6.lt) goto loc_839FEAC4;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x839fea98
	if (!cr6.eq) goto loc_839FEA98;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FEA94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_839FEA98:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x839feac4
	if (cr6.lt) goto loc_839FEAC4;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FEAC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_839FEAC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FEAD0"))) PPC_WEAK_FUNC(sub_839FEAD0);
PPC_FUNC_IMPL(__imp__sub_839FEAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r5,120(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839feaec
	if (cr6.eq) goto loc_839FEAEC;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x839feaf0
	goto loc_839FEAF0;
loc_839FEAEC:
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
loc_839FEAF0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839FEB08"))) PPC_WEAK_FUNC(sub_839FEB08);
PPC_FUNC_IMPL(__imp__sub_839FEB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839feb30
	if (cr6.eq) goto loc_839FEB30;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x839feb34
	goto loc_839FEB34;
loc_839FEB30:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
loc_839FEB34:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x839feb4c
	if (!cr6.gt) goto loc_839FEB4C;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_839FEB4C:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// bl 0x839f8cd8
	ctx.lr = 0x839FEB64;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// beq 0x839feb98
	if (cr0.eq) goto loc_839FEB98;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
loc_839FEB84:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839febb4
	if (cr6.eq) goto loc_839FEBB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x839febb8
	goto loc_839FEBB8;
loc_839FEB98:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_839FEBA0:
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
loc_839FEBB4:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
loc_839FEBB8:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x839feba0
	if (!cr6.lt) goto loc_839FEBA0;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x839feb84
	goto loc_839FEB84;
}

__attribute__((alias("__imp__sub_839FEBD4"))) PPC_WEAK_FUNC(sub_839FEBD4);
PPC_FUNC_IMPL(__imp__sub_839FEBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FEBD8"))) PPC_WEAK_FUNC(sub_839FEBD8);
PPC_FUNC_IMPL(__imp__sub_839FEBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r11,-31840
	ctx.r11.s64 = -2086666240;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7648
	ctx.r5.s64 = ctx.r11.s64 + -7648;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x839fe238
	ctx.lr = 0x839FEC08;
	sub_839FE238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fec18
	if (cr0.eq) goto loc_839FEC18;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_839FEC18:
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

__attribute__((alias("__imp__sub_839FEC30"))) PPC_WEAK_FUNC(sub_839FEC30);
PPC_FUNC_IMPL(__imp__sub_839FEC30) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FEC58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x839fec78
	if (cr6.eq) goto loc_839FEC78;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_839FEC78:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FEC90;
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

__attribute__((alias("__imp__sub_839FECA4"))) PPC_WEAK_FUNC(sub_839FECA4);
PPC_FUNC_IMPL(__imp__sub_839FECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FECA8"))) PPC_WEAK_FUNC(sub_839FECA8);
PPC_FUNC_IMPL(__imp__sub_839FECA8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FECD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x839fed00
	if (cr6.eq) goto loc_839FED00;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x839fed00
	if (!cr6.eq) goto loc_839FED00;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_839FED00:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FED18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FED30"))) PPC_WEAK_FUNC(sub_839FED30);
PPC_FUNC_IMPL(__imp__sub_839FED30) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x839fed6c
	if (!cr6.lt) goto loc_839FED6C;
	// bl 0x83d755ac
	ctx.lr = 0x839FED60;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x839fed6c
	if (cr6.eq) goto loc_839FED6C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_839FED6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839fed80
	if (cr6.eq) goto loc_839FED80;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x839fedd8
	if (cr6.eq) goto loc_839FEDD8;
loc_839FED80:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bgt cr6,0x839fedd8
	if (cr6.gt) goto loc_839FEDD8;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x839f8cd8
	ctx.lr = 0x839FEDA8;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839fedd8
	if (cr0.eq) goto loc_839FEDD8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_839FEDD8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fedf0
	if (cr6.eq) goto loc_839FEDF0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x839fedf4
	goto loc_839FEDF4;
loc_839FEDF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839FEDF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FEE0C"))) PPC_WEAK_FUNC(sub_839FEE0C);
PPC_FUNC_IMPL(__imp__sub_839FEE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FEE10"))) PPC_WEAK_FUNC(sub_839FEE10);
PPC_FUNC_IMPL(__imp__sub_839FEE10) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm. r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x839fee6c
	if (cr0.eq) goto loc_839FEE6C;
	// add r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64;
loc_839FEE4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x839fee6c
	if (!cr0.eq) goto loc_839FEE6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// bne cr6,0x839fee4c
	if (!cr6.eq) goto loc_839FEE4C;
loc_839FEE6C:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x839fee8c
	if (cr0.eq) goto loc_839FEE8C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x831ce980
	ctx.lr = 0x839FEE7C;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fe2c0
	ctx.lr = 0x839FEE88;
	sub_839FE2C0(ctx, base);
	// b 0x839fee90
	goto loc_839FEE90;
loc_839FEE8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839FEE90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FEEA8"))) PPC_WEAK_FUNC(sub_839FEEA8);
PPC_FUNC_IMPL(__imp__sub_839FEEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FEEB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x839feed8
	if (cr6.eq) goto loc_839FEED8;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_839FEED8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x839feefc
	if (!cr6.eq) goto loc_839FEEFC;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FEEFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839FEEFC:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fef38
	if (cr6.eq) goto loc_839FEF38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FEF28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x839f91d8
	ctx.lr = 0x839FEF34;
	sub_839F91D8(ctx, base);
	// stw r29,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r29.u32);
loc_839FEF38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a11b08
	ctx.lr = 0x839FEF40;
	sub_83A11B08(ctx, base);
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// b 0x839fef54
	goto loc_839FEF54;
loc_839FEF48:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fef54
	if (cr6.eq) goto loc_839FEF54;
	// bl 0x83a39b78
	ctx.lr = 0x839FEF54;
	sub_83A39B78(ctx, base);
loc_839FEF54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a1e790
	ctx.lr = 0x839FEF5C;
	sub_83A1E790(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x839fef48
	if (!cr0.eq) goto loc_839FEF48;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839fef78
	if (cr6.eq) goto loc_839FEF78;
	// bl 0x83a39b78
	ctx.lr = 0x839FEF74;
	sub_83A39B78(ctx, base);
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
loc_839FEF78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FEF80"))) PPC_WEAK_FUNC(sub_839FEF80);
PPC_FUNC_IMPL(__imp__sub_839FEF80) {
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
	ctx.lr = 0x839FEF88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x839fefb0
	if (!cr6.eq) goto loc_839FEFB0;
	// lis r29,4919
	ctx.r29.s64 = 322371584;
	// ori r29,r29,61441
	ctx.r29.u64 = ctx.r29.u64 | 61441;
	// b 0x839fefb4
	goto loc_839FEFB4;
loc_839FEFB0:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_839FEFB4:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_839FEFBC:
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839fefd0
	if (cr6.eq) goto loc_839FEFD0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x839fefd4
	goto loc_839FEFD4;
loc_839FEFD0:
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
loc_839FEFD4:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x839ff014
	if (!cr6.lt) goto loc_839FF014;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x839feff8
	if (cr0.eq) goto loc_839FEFF8;
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lfs f13,540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 540);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_839FEFF8:
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lfsx f13,r11,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x839fefbc
	goto loc_839FEFBC;
loc_839FF014:
	// lwz r31,68(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// b 0x839ff04c
	goto loc_839FF04C;
loc_839FF01C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839ff034
	if (cr6.eq) goto loc_839FF034;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x839ff038
	goto loc_839FF038;
loc_839FF034:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839FF038:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,264(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x839fee10
	ctx.lr = 0x839FF04C;
	sub_839FEE10(ctx, base);
loc_839FF04C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839ff01c
	if (!cr6.eq) goto loc_839FF01C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x839ff07c
	if (!cr6.eq) goto loc_839FF07C;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839FF078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_839FF07C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF088"))) PPC_WEAK_FUNC(sub_839FF088);
PPC_FUNC_IMPL(__imp__sub_839FF088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839FF090;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ff154
	if (cr6.eq) goto loc_839FF154;
	// addi r31,r3,272
	ctx.r31.s64 = ctx.r3.s64 + 272;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x839ff0e0
	if (!cr6.eq) goto loc_839FF0E0;
	// bl 0x83a01bc0
	ctx.lr = 0x839FF0B8;
	sub_83A01BC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x839ff0cc
	goto loc_839FF0CC;
loc_839FF0C0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ff0cc
	if (cr6.eq) goto loc_839FF0CC;
	// bl 0x83a39b78
	ctx.lr = 0x839FF0CC;
	sub_83A39B78(ctx, base);
loc_839FF0CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1e790
	ctx.lr = 0x839FF0D4;
	sub_83A1E790(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x839ff0c0
	if (!cr0.eq) goto loc_839FF0C0;
	// b 0x839ff10c
	goto loc_839FF10C;
loc_839FF0E0:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r11,-31840
	ctx.r11.s64 = -2086666240;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7648
	ctx.r5.s64 = ctx.r11.s64 + -7648;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x839fe238
	ctx.lr = 0x839FF0F8;
	sub_839FE238(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x839ff154
	if (cr0.eq) goto loc_839FF154;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f9970
	ctx.lr = 0x839FF108;
	sub_839F9970(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_839FF10C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839ff154
	if (cr6.eq) goto loc_839FF154;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x839ff144
	if (cr6.lt) goto loc_839FF144;
	// beq cr6,0x839ff134
	if (cr6.eq) goto loc_839FF134;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x839ff14c
	if (!cr6.lt) goto loc_839FF14C;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x839ff138
	goto loc_839FF138;
loc_839FF134:
	// li r4,1
	ctx.r4.s64 = 1;
loc_839FF138:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839feca8
	ctx.lr = 0x839FF140;
	sub_839FECA8(ctx, base);
	// b 0x839ff14c
	goto loc_839FF14C;
loc_839FF144:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839fec30
	ctx.lr = 0x839FF14C;
	sub_839FEC30(ctx, base);
loc_839FF14C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a39b78
	ctx.lr = 0x839FF154;
	sub_83A39B78(ctx, base);
loc_839FF154:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF15C"))) PPC_WEAK_FUNC(sub_839FF15C);
PPC_FUNC_IMPL(__imp__sub_839FF15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FF160"))) PPC_WEAK_FUNC(sub_839FF160);
PPC_FUNC_IMPL(__imp__sub_839FF160) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839fed30
	ctx.lr = 0x839FF180;
	sub_839FED30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x839ff1c4
	if (cr0.eq) goto loc_839FF1C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ff1b0
	if (cr6.eq) goto loc_839FF1B0;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x839ff1b4
	goto loc_839FF1B4;
loc_839FF1B0:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_839FF1B4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_839FF1C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FF1DC"))) PPC_WEAK_FUNC(sub_839FF1DC);
PPC_FUNC_IMPL(__imp__sub_839FF1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FF1E0"))) PPC_WEAK_FUNC(sub_839FF1E0);
PPC_FUNC_IMPL(__imp__sub_839FF1E0) {
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
	// addi r30,r3,228
	ctx.r30.s64 = ctx.r3.s64 + 228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a01728
	ctx.lr = 0x839FF210;
	sub_83A01728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x839ff260
	if (cr0.eq) goto loc_839FF260;
	// addi r31,r31,188
	ctx.r31.s64 = ctx.r31.s64 + 188;
loc_839FF21C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x839ff238
	goto loc_839FF238;
loc_839FF224:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x839ff240
	if (cr6.eq) goto loc_839FF240;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_839FF238:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ff224
	if (!cr6.eq) goto loc_839FF224;
loc_839FF240:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f99e0
	ctx.lr = 0x839FF24C;
	sub_839F99E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a01728
	ctx.lr = 0x839FF258;
	sub_83A01728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x839ff21c
	if (!cr0.eq) goto loc_839FF21C;
loc_839FF260:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FF278"))) PPC_WEAK_FUNC(sub_839FF278);
PPC_FUNC_IMPL(__imp__sub_839FF278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839FF280;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x839f8cd8
	ctx.lr = 0x839FF2B0;
	sub_839F8CD8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x839ff2c4
	if (!cr0.eq) goto loc_839FF2C4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x839ff304
	goto loc_839FF304;
loc_839FF2C4:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x839ff2e0
	if (!cr6.eq) goto loc_839FF2E0;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// bne cr6,0x839ff2e0
	if (!cr6.eq) goto loc_839FF2E0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_839FF2E0:
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// addi r3,r30,272
	ctx.r3.s64 = ctx.r30.s64 + 272;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// bl 0x839fa1d8
	ctx.lr = 0x839FF2F0;
	sub_839FA1D8(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_839FF304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF30C"))) PPC_WEAK_FUNC(sub_839FF30C);
PPC_FUNC_IMPL(__imp__sub_839FF30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FF310"))) PPC_WEAK_FUNC(sub_839FF310);
PPC_FUNC_IMPL(__imp__sub_839FF310) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83a11408
	ctx.lr = 0x839FF33C;
	sub_83A11408(ctx, base);
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// addi r9,r9,-27032
	ctx.r9.s64 = ctx.r9.s64 + -27032;
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// addi r10,r31,188
	ctx.r10.s64 = ctx.r31.s64 + 188;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,-27152
	ctx.r8.s64 = ctx.r8.s64 + -27152;
	// addi r7,r7,-27196
	ctx.r7.s64 = ctx.r7.s64 + -27196;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stw r9,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lfs f0,-26260(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// sth r11,256(r31)
	PPC_STORE_U16(ctx.r31.u32 + 256, ctx.r11.u16);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// bl 0x839f9ca8
	ctx.lr = 0x839FF3E0;
	sub_839F9CA8(ctx, base);
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

__attribute__((alias("__imp__sub_839FF3FC"))) PPC_WEAK_FUNC(sub_839FF3FC);
PPC_FUNC_IMPL(__imp__sub_839FF3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FF400"))) PPC_WEAK_FUNC(sub_839FF400);
PPC_FUNC_IMPL(__imp__sub_839FF400) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83a12160
	sub_83A12160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF408"))) PPC_WEAK_FUNC(sub_839FF408);
PPC_FUNC_IMPL(__imp__sub_839FF408) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83a10cf8
	sub_83A10CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF410"))) PPC_WEAK_FUNC(sub_839FF410);
PPC_FUNC_IMPL(__imp__sub_839FF410) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83a10dc0
	sub_83A10DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF418"))) PPC_WEAK_FUNC(sub_839FF418);
PPC_FUNC_IMPL(__imp__sub_839FF418) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83a106a8
	sub_83A106A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF420"))) PPC_WEAK_FUNC(sub_839FF420);
PPC_FUNC_IMPL(__imp__sub_839FF420) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83a10b18
	sub_83A10B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF428"))) PPC_WEAK_FUNC(sub_839FF428);
PPC_FUNC_IMPL(__imp__sub_839FF428) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FF434"))) PPC_WEAK_FUNC(sub_839FF434);
PPC_FUNC_IMPL(__imp__sub_839FF434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FF438"))) PPC_WEAK_FUNC(sub_839FF438);
PPC_FUNC_IMPL(__imp__sub_839FF438) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,244(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FF440"))) PPC_WEAK_FUNC(sub_839FF440);
PPC_FUNC_IMPL(__imp__sub_839FF440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x839ff48c
	if (!cr6.eq) goto loc_839FF48C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839ff48c
	if (cr6.eq) goto loc_839FF48C;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r9,260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x839ff4cc
	goto loc_839FF4CC;
loc_839FF48C:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,260(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_839FF4CC:
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839FF4D4"))) PPC_WEAK_FUNC(sub_839FF4D4);
PPC_FUNC_IMPL(__imp__sub_839FF4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839FF4D8"))) PPC_WEAK_FUNC(sub_839FF4D8);
PPC_FUNC_IMPL(__imp__sub_839FF4D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839ff410
	sub_839FF410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF4E0"))) PPC_WEAK_FUNC(sub_839FF4E0);
PPC_FUNC_IMPL(__imp__sub_839FF4E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839ff400
	sub_839FF400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF4E8"))) PPC_WEAK_FUNC(sub_839FF4E8);
PPC_FUNC_IMPL(__imp__sub_839FF4E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839ff408
	sub_839FF408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF4F0"))) PPC_WEAK_FUNC(sub_839FF4F0);
PPC_FUNC_IMPL(__imp__sub_839FF4F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839ff5e8
	sub_839FF5E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF4F8"))) PPC_WEAK_FUNC(sub_839FF4F8);
PPC_FUNC_IMPL(__imp__sub_839FF4F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839ff420
	sub_839FF420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF500"))) PPC_WEAK_FUNC(sub_839FF500);
PPC_FUNC_IMPL(__imp__sub_839FF500) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a044c8
	sub_83A044C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF508"))) PPC_WEAK_FUNC(sub_839FF508);
PPC_FUNC_IMPL(__imp__sub_839FF508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839ff520
	if (cr6.eq) goto loc_839FF520;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_839FF520:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839ff534
	if (cr6.eq) goto loc_839FF534;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_839FF534:
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ff544
	if (cr6.eq) goto loc_839FF544;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_839FF544:
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839FF560"))) PPC_WEAK_FUNC(sub_839FF560);
PPC_FUNC_IMPL(__imp__sub_839FF560) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839fe3e0
	sub_839FE3E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF568"))) PPC_WEAK_FUNC(sub_839FF568);
PPC_FUNC_IMPL(__imp__sub_839FF568) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839fe520
	sub_839FE520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839FF570"))) PPC_WEAK_FUNC(sub_839FF570);
PPC_FUNC_IMPL(__imp__sub_839FF570) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839fe468
	sub_839FE468(ctx, base);
	return;
}

